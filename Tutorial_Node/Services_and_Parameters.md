```shell
$ roscore
$ rosrun turtlesim turtle
$ rosrun turltesim turtle_teleop_key
$ rosnode list
```
![Screenshot from 2020-09-05 21-16-59](https://user-images.githubusercontent.com/69444682/92306958-32e5cd80-efbd-11ea-9ad9-d3235322cf3a.png)

```shell
$ rosnode info /turtlesim
$ rosservice list
$ rosservice -h
$ rosservice info /reset
```
![Screenshot from 2020-09-05 21-17-10](https://user-images.githubusercontent.com/69444682/92307037-bd2e3180-efbd-11ea-9ea6-81e377f82841.png)


![Screenshot from 2020-09-05 21-20-56](https://user-images.githubusercontent.com/69444682/92307039-bf908b80-efbd-11ea-93d6-85e0bb8aa70a.png)

```shell
$ rosservice call /reset
$ rosservice call /reset
$ rosservice call /clear
$ rosservice call /clear
$ rosservice call /reset
$ rosservice info /spawn
```
![Screenshot from 2020-09-05 21-25-46](https://user-images.githubusercontent.com/69444682/92307157-712fbc80-efbe-11ea-97aa-c555d9c552fa.png)

```shell
$ rosservice call /spawn 7 2 3.14 ""
$ rosnode list
$ rostopic list
```
![Screenshot from 2020-09-05 21-30-49](https://user-images.githubusercontent.com/69444682/92307255-26627480-efbf-11ea-9a5c-360f0afab05a.png)

```shell
$ rosparam get /background_b
$ rosparam set /background_b 0
$ rosparam set /background_g 0
$ rosparam set /background_r 0
$ r
```
![Screenshot from 2020-09-05 21-35-35](https://user-images.githubusercontent.com/69444682/92307628-e224a380-efc1-11ea-88f6-7a6cdb87e674.png)
![Screenshot from 2020-09-05 21-36-15](https://user-images.githubusercontent.com/69444682/92307629-e355d080-efc1-11ea-88da-36daea3dd240.png)

