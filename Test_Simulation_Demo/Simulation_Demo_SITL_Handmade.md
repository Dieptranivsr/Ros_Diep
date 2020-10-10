### Make sure status of PX4 is SITL
### Check file iris.sdf
```sdf
      <serialEnabled>0</serialEnabled>                <!--mo phon tren may tinh>
      <serialDevice>/dev/ttyACM0</serialDevice>
      <baudRate>921600</baudRate>
      <qgc_addr>INADDR_ANY</qgc_addr>
      <qgc_udp_port>14550</qgc_udp_port>
      <hil_mode>0</hil_mode>                          <!--mo phong phan mem-->
 ```
 
### Launch MAVROS and Gazebo simulation at the same time, simply use:
```shell
  $ roslaunch px4 mavros_posix_sitl.launch
```
A window should pop out which looks like:
![image](https://user-images.githubusercontent.com/69444682/93872216-07235100-fcfa-11ea-8d93-eae2b0b158e9.png)

You fix :

### In a new terminal, if you type:
```txt
   header: 
  seq: 1
  stamp: 
    secs: 730
    nsecs: 280000000
  frame_id: ''
connected: True
armed: False
guided: False
mode: "MANUAL"
system_status: 3
---
```
If you see the above results and 'connected: True', it means your simulation environment is properly set up and MAVROS  connection is successful. 


