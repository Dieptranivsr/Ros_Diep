```shell
$ roscore
```

## New terminal
```shell
$ rosrun turtlesim turtlesim_node
```

## New terminal
```shell
$ rosrun turtlesim turtle_teleop_key
```
![Screenshot from 2020-09-05 09-15-29](https://user-images.githubusercontent.com/69444682/92295819-5e829c80-ef58-11ea-8724-f502c40cbbb8.png)


## New terminal
```shell
$ rostop -h
$ rostopic -h
$ rostopic list
$ rostopic echo /turtle1/cmd_vel
```
![Screenshot from 2020-09-05 09-18-16](https://user-images.githubusercontent.com/69444682/92296037-84a93c00-ef5a-11ea-9e59-d59949bb0aad.png)

```shell
$ clean
$ rostopic list -v
$ rostopic type /turtle1/cmd_vel
$ rostopic type /turtle/color_sensor
$ rosmsg show geometry_msgs/Twist
$ rosrun rqt_graph rqt_graph
```
![Screenshot from 2020-09-05 09-38-05](https://user-images.githubusercontent.com/69444682/92296136-90e1c900-ef5b-11ea-820f-4a91cac571a5.png)

### exit window "rqt_graph_RosGraph - rqt"
```shell
$ rostopic -h
$ rostopic info /turtle1/cmd_velrostopic pub -1 /turtle1/cmd_vel geometry_msgs/Twist -- '[1.0, 0.0, 0.0]' '[0.0, 0.0, 4.0]'
```
![Screenshot from 2020-09-05 09-56-16](https://user-images.githubusercontent.com/69444682/92296354-0fd80100-ef5e-11ea-979e-1b691a51b498.png)
```shell
$ rostopic pub -1 /turtle1/cmd_vel geometry_msgs/Twist -- '[2.0, 0.0, 0.0]' '[0.0, 0.0, 4.0]'

$ rostopic pub -1 /turtle1/cmd_vel geometry_msgs/Twist -- '[3.0, 0.0, 0.0]' '[0.0, 0.0, 4.0]'

$ rostopic pub -1 /turtle1/cmd_vel geometry_msgs/Twist -- '[4.0, 0.0, 0.0]' '[0.0, 0.0, 4.0]'

$ rostopic pub -1 /turtle1/cmd_vel geometry_msgs/Twist -- '[5.0, 0.0, 0.0]' '[0.0, 0.0, 4.0]'
```
![Screenshot from 2020-09-05 09-59-20](https://user-images.githubusercontent.com/69444682/92296405-7e1cc380-ef5e-11ea-8fc6-63ebbe6af66b.png)

```shell
$ rostopic pub /turtle1/cmd_vel geometry_msgs/Twist -r 1 -- '[4.0, 0.0, 0.0]' '[0.0, 0.0, 4.0]'
$ rosrun rqt_graph rqt_graph
```
![Screenshot from 2020-09-05 10-07-35](https://user-images.githubusercontent.com/69444682/92296516-b1ac1d80-ef5f-11ea-8b24-12d2820aa000.png)

![Screenshot from 2020-09-05 10-17-27](https://user-images.githubusercontent.com/69444682/92296698-8296ab80-ef61-11ea-8a55-55d5ef7cd5a7.png)
![Screenshot from 2020-09-05 10-19-03](https://user-images.githubusercontent.com/69444682/92296699-83c7d880-ef61-11ea-93ed-df425d9355d5.png)
![Screenshot from 2020-09-05 10-20-05](https://user-images.githubusercontent.com/69444682/92296700-83c7d880-ef61-11ea-9947-ece185ef9c94.png)
