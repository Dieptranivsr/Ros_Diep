
```shell
 * Terminal 1
$ roslaunch px4 posix_sitl.launch
 
 * Terminal 2
$ roslaunch mavros px4.launch fcu_url:="udp://:14540@127.0.0.1:14557"

 * Terminal 3
$ rosrun mavros mavcmd takeoffcur 0 0 5

 * Terminal 4
$ rosrun mavros mavsafety arm
```



```
 * Terminal X - Chua fix dc
$ rostopic pub -r 20 /mavros/local_position/pose geometry_msgs/PoseStamped -------- <press button "Tab" on keyboard>
$ rostopic pub -r 20 /mavros/local_position/pose geometry_msgs/PoseStamped "header:
  seq: 0
  stamp:
    secs: 0
    nsecs: 0
  frame_id: ''
pose:
  position:
    x: 0.0
    y: 0
    z: 5                          <------ modify
  orientation:
    x: 0.0
    y: 0.0
    z: 0.0
    w: 0.0"
```
