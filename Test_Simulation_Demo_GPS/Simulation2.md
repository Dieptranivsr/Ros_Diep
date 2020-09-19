
### Launch Gazebo
```shell
 * Terminal 1
$ roslaunch px4 posix_sitl.launch
 * Terminal 2
$ roslaunch mavros px4.launch fcu_url:="udp://:14540@127.0.0.1:14557"
```



