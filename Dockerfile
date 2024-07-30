FROM osrf/ros:foxy-desktop-focal
ARG DEBIAN_FRONTEND=noninteractive


RUN sed -i 's/archive.ubuntu.com/mirrors.ustc.edu.cn/g' /etc/apt/sources.list
RUN sed -i '/security.ubuntu.com/d' /etc/apt/sources.list

COPY 3rd_party/gtsam /3rd_party/gtsam
RUN cd /3rd_party/gtsam/ && mkdir build && cd build && cmake .. && make -j4 && make install


RUN apt update && apt install python3-pip python3-rosdep python3-colcon-common-extensions
RUN apt update && apt install -y --no-install-recommends vim ros-foxy-xacro

COPY Swarm-SLAM/requirements.txt /
RUN pip install -r requirements.txt

RUN echo 'source /opt/ros/foxy/setup.bash' >> /root/.bashrc

RUN apt update && apt install -y --no-install-recommends ros-foxy-rtabmap-ros ros-foxy-perception-pcl

RUN apt update && apt install -y --no-install-recommends doxygen
COPY 3rd_party/TEASER-plusplus /3rd_party/TEASER-plusplus
RUN cd /3rd_party/TEASER-plusplus/ && mkdir build && cd build && cmake .. && make -j4 && make doc && make install && ldconfig
RUN cd /3rd_party/TEASER-plusplus/build && cmake -DTEASERPP_PYTHON_VERSION=3.8 .. && make teaserpp_python -j4 && cd python && pip install .

RUN pip install --upgrade numpy

COPY Swarm-SLAM /ws_code/src/
# RUN /bin/bash -c "source /opt/ros/foxy/setup.bash" && cd /ws_code && colcon build --symlink-install

RUN echo "alias srcd='. install/setup.bash'" >> /root/.bashrc
RUN echo "alias ckm='colcon build --symlink-install'" >> /root/.bashrc

ENV NVIDIA_VISIBLE_DEVICES \
    ${NVIDIA_VISIBLE_DEVICES:-all}
ENV NVIDIA_DRIVER_CAPABILITIES \
    ${NVIDIA_DRIVER_CAPABILITIES:+$NVIDIA_DRIVER_CAPABILITIES,}graphics
