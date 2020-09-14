
### Let's create and build a catkin workspace:
```shell
$ cd ~/<my_folder>/
$ mkdir -p ~/<my_folder>/<workspace_ws>/src
$ cd ~/<my_folder>/<workspace_ws>/src
$ catkin_init_workspace
$ cd ..
$ catkin_make
```

### Creating a catkin Package
```shell
$ cd ~/<my_folder>/<workspace_ws>/src
$ catkin_create_pkg beginner_tutorials std_msgs rospy roscpp
# catkin_create_pkg <package_name> [depend1] [depend2] [depend3]
```

### Building a catkin workspace and sourcing the setup file
```shell
$ cd ~/<my_folder>/<workspace_ws>
$ catkin_make
```
![Screenshot from 2020-09-14 22-49-22](https://user-images.githubusercontent.com/69444682/93108050-91592d00-f6dc-11ea-9083-04cde2f54f3d.png)

```shell
$ cd
$ clear
$ rospack find beginner_tutorials
[rospack] Error: package 'beginner_tutorials' not found
$ cd ~/Documents/ros_ws/
$ source devel/setup.bash
$ cd
$ rospack find beginner_tutorials
/home/dieptran/Documents/ros_ws/src/beginner_tutorials
```


















