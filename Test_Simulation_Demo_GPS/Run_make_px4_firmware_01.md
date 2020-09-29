
```shell
$ cd ~/px4/firmware
$ no_sim=1 make posix_sitl_default gazebo
```

```shell
$ cd ~/px4/firmware
$ source Tools/setup_gazebo.bash $(pwd) $(pwd)/build/posix_sitl_default
$ roslaunch gazebo_ros empty_world.launch world_name:=$(pwd)/Tools/sitl_gazebo/worlds/iris/.world
```

