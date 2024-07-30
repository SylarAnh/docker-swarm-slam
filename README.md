
**用docker镜像快速部署SWARM-SLAM**


进入docker-compose.yml
修改文件映射地址。特别注意dataset的路径

进入当前文件夹目录下
```
$ xhost + # 每次重启电脑都要运行这个
$ git clone https://github.com/MISTLab/Swarm-SLAM.git
# 第一次启动或者修改过代码将 start_swarm-slam.sh 中colcon build 的注释解除掉，先编译
$ docker-compose up 
```
在另一个终端中，进入容器并开始播放数据集
```
$ docker exec -it swarm-slam-test bash
# cd dataset
# ros2 bag play yourbag.db3
```

# 
