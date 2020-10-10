# MAVROS Offboard control example

https://dev.px4.io/v1.9.0/en/ros/mavros_offboard.html

This tutorial shows the basics of Offboard control with MAVROS, using an Iris quadcopter simulated in Gazebo/SITL. At the end of the tutorial, you should see the same behaviour as in the video below, i.e. a slow takeoff to an altitude of 2 meters.

### Video Demo 
![(https://dev.px4.io/v1.9.0/assets/simulation/gazebo_offboard.webm)]


# RUN SITL
### Terminal 1:
```shell
$ roslaunch px4 mavros_posix_sitl.launch
```
### Terminal 2:
```shell
$ rosrun sitl_demo offb
```
