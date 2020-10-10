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

### Required from file on "node" folfer

![Screenshot from 2020-10-11 01-27-04](https://user-images.githubusercontent.com/69444682/95662422-0fd0af80-0b61-11eb-8248-c51763c3f20a.png)

![Screenshot from 2020-10-11 01-27-28](https://user-images.githubusercontent.com/69444682/95662423-1101dc80-0b61-11eb-8ef9-6f2be1c4cf71.png)

![Screenshot from 2020-10-11 01-27-48](https://user-images.githubusercontent.com/69444682/95662424-119a7300-0b61-11eb-8382-3fb7747f1ba9.png)
