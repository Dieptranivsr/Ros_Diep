### If you followed the last tutorial and the previous step  you will have everything we need to launch the simulation. To launch the simulation, in a terminal:
```shell
$ roslaunch px4 sfm.launch
```
### Before you continue, remember to check MAVROS connection status by:
```shell
rostopic echo /mavros/state
```
### Next, takeoff the drone:
```shell
$ python  ~/DroneIVSR/GAAS/demo/tutorial_2/2_Struction_from_Motion/px4_mavros_run.py
```
```shell
$ rostopic echo /diagnostics
```
```
---
header: 
  seq: 1531
  stamp: 
    secs: 1684
    nsecs: 354000000
  frame_id: ''
status: 
  - 
    level: 0
    name: "mavros: FCU connection"
    message: "connected"
    hardware_id: "udp://:14540@localhost:14557"
    values: 
      - 
        key: "Received packets:"
        value: "8615"
      - 
        key: "Dropped packets:"
        value: "0"
      - 
        key: "Buffer overruns:"
        value: "0"
      - 
        key: "Parse errors:"
        value: "0"
      - 
        key: "Rx sequence number:"
        value: "167"
      - 
        key: "Tx sequence number:"
        value: "0"
      - 
        key: "Rx total bytes:"
        value: "27346923"
      - 
        key: "Tx total bytes:"
        value: "1781353"
      - 
        key: "Rx speed:"
        value: "inf"
      - 
        key: "Tx speed:"
        value: "inf"
  - 
    level: 0
    name: "mavros: GPS"
    message: "3D fix"
    hardware_id: "udp://:14540@localhost:14557"
    values: 
      - 
        key: "Satellites visible"
        value: "10"
      - 
        key: "Fix type"
        value: "3"
      - 
        key: "EPH (m)"
        value: "0.00"
      - 
        key: "EPV (m)"
        value: "0.00"
  - 
    level: 0
    name: "mavros: Heartbeat"
    message: "Normal"
    hardware_id: "udp://:14540@localhost:14557"
    values: 
      - 
        key: "Heartbeats since startup"
        value: "1519"
      - 
        key: "Frequency (Hz)"
        value: "1.000000"
      - 
        key: "Vehicle type"
        value: "Quadrotor"
      - 
        key: "Autopilot type"
        value: "PX4 Autopilot"
      - 
        key: "Mode"
        value: "AUTO.TAKEOFF"
      - 
        key: "System status"
        value: "Active"
  - 
    level: 0
    name: "mavros: System"
    message: "Normal"
    hardware_id: "udp://:14540@localhost:14557"
    values: 
      - 
        key: "Sensor present"
        value: "0x0024002F"
      - 
        key: "Sensor enabled"
        value: "0x0020000F"
      - 
        key: "Sensor health"
        value: "0x0024002F"
      - 
        key: "3D gyro"
        value: "Ok"
      - 
        key: "3D accelerometer"
        value: "Ok"
      - 
        key: "3D magnetometer"
        value: "Ok"
      - 
        key: "absolute pressure"
        value: "Ok"
      - 
        key: "AHRS subsystem health"
        value: "Ok"
      - 
        key: "CPU Load (%)"
        value: "0.0"
      - 
        key: "Drop rate (%)"
        value: "0.0"
      - 
        key: "Errors comm"
        value: "0"
      - 
        key: "Errors count #1"
        value: "0"
      - 
        key: "Errors count #2"
        value: "0"
      - 
        key: "Errors count #3"
        value: "0"
      - 
        key: "Errors count #4"
        value: "0"
  - 
    level: 0
    name: "mavros: Battery"
    message: "Normal"
    hardware_id: "udp://:14540@localhost:14557"
    values: 
      - 
        key: "Voltage"
        value: "11.32"
      - 
        key: "Current"
        value: "-1.0"
      - 
        key: "Remaining"
        value: "51.0"
  - 
    level: 0
    name: "mavros: Time Sync"
    message: "Normal"
    hardware_id: "udp://:14540@localhost:14557"
    values: 
      - 
        key: "Timesyncs since startup"
        value: "15338"
      - 
        key: "Frequency (Hz)"
        value: "10.000000"
      - 
        key: "Last RTT (ms)"
        value: "0.000000"
      - 
        key: "Mean RTT (ms)"
        value: "0.024644"
      - 
        key: "Last remote time (s)"
        value: "1519.596879000"
      - 
        key: "Estimated time offset (s)"
        value: "164.657915409"

```

```shell
$ rostopic echo /mavros/global_position/global
```
![Screenshot from 2020-09-19 01-52-56](https://user-images.githubusercontent.com/69444682/93634483-e073ca80-fa1a-11ea-8713-e890644dab05.png)

```shell
$ rosrun mavros mavsafety arm
$ rosrun mavros mavsys mode -c OFFBOARD
 * rosrun mavros mavcmd -v land 0 0 0 0
 * rosrun mavros mavcmd -v takeoffcur 0 50 50
```
