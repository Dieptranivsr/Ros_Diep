```shell
 * Terminal 1
$ roslaunch px4 posix_sitl.launch

 * Terminal 2
$ roslaunch mavros px4.launch fcu_url:="udp://:14540@127.0.0.1:14557"

 * Terminal 3
$ python ~/DroneIVSR/GAAS/demo/tutorial_2/2_Struction_from_Motion/px4_mavros_run.py
Px4 Controller Initialized!
Vehicle Took Off!

 * Terminal 4
$ rosservice call /mavros/setpoint_velocity/mav_frame "mav_frame: 8" 
success: True
$ rosrun mavros mavsafety arm
$ rosrun mavros mavsys mode -c OFFBOARD
Mode changed.

 * Terminal 5
$ rostopic pub -r 20 /mavros/setpoint_velocity/cmd_vel_unstamped  geometry_msgs/Twist "linear:
  x: 1.0
  y: 0.0
  z: 0.0
angular:
  x: 0.0
  y: 0.0
  z: 1.0"
```
