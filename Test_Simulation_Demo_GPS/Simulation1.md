If you followed the last tutorial and the previous step  you will have everything we need to launch the simulation. To launch the simulation, in a terminal:
```shell
$ roslaunch px4 sfm.launch
```
Before you continue, remember to check MAVROS connection status by:
```shell
rostopic echo /mavros/state
```
Next, takeoff the drone:
```shell
$ python  ~/DroneIVSR/GAAS/demo/tutorial_2/2_Struction_from_Motion/px4_mavros_run.py
```
```shell
rosrun echo /diagnostics
rosrun echo /mavros/global_position/global
```
```shell
rosrun mavros mavsafety arm
rosrun mavros mavsys mode -c OFFBOARD
 * rosrun mavros mavcmd -v land 0 0 0 0
 * rosrun mavros mavcmd -v takeoffcur 0 50 50
```
