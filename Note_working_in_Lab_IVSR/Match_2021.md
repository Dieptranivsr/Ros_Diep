## Date 3-4th-2021

Error :  Use package Obstacle Detection and Avoidance. Link https://github.com/PX4/PX4-Avoidance.git <release v0.3.1>
Run commandline:
```shell
catkin build -w ~/catkin_ws --cmake-args -DCMAKE_BUILD_TYPE=Release
```
![Screenshot from 2021-03-04 11-59-20](https://user-images.githubusercontent.com/69444682/109951190-f72f8480-7d0f-11eb-96b4-9eae3581eb41.png)
```shell
roslaunch local_planner local_planner_stereo.launch
```
![Screenshot from 2021-03-04 17-27-02](https://user-images.githubusercontent.com/69444682/109951196-f860b180-7d0f-11eb-8a9f-236833ff5955.png)
