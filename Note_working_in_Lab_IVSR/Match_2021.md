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
```shell
Error for Parameters on Gazebo "COM_OBS_AVOID" 1 Flag to anable obstacle avoidance
Fix to "0"
```
![Screenshot from 2021-03-15 18-26-31](https://user-images.githubusercontent.com/69444682/111270988-2d033000-8663-11eb-8aac-93e05e66efa5.png)

## Date 3-18th-2021
### How to run ROS package - RotorS <url: https://github.com/ethz-asl/rotors_simulator.git>
```shell
Edit file .bashrc
Comment path to px4 
```
![Screenshot from 2021-03-18 14-51-03](https://user-images.githubusercontent.com/69444682/111590980-62418680-87f9-11eb-8a80-a72402c8dc83.png)
### Result:
![Screenshot from 2021-03-18 16-44-05](https://user-images.githubusercontent.com/69444682/111605811-2c0c0300-8809-11eb-8ac8-54f843a057cc.png)
