source /opt/ros/foxy/setup.bash
cd ws_code
colcon build
. install/setup.bash
ros2 launch cslam_experiments graco_lidar.launch.py