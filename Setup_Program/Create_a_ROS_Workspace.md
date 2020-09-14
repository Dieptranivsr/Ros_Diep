
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

### package dependencies
When using catkin_create_pkg earlier, a few package dependencies were provided. These first-order dependencies can now be reviewed with the rospack tool.
```shell
$ rospack depends1 beginner_tutorials
   roscpp
   rospy
   std_msgs
```
As you can see, rospack lists the same dependencies that were used as arguments when running catkin_create_pkg. These dependencies for a package are stored in the package.xml file:
```shell
$ roscd beginner_tutorials
$ cat package.xml
```
```note
In order to make easy navigating with command-line tools such as "ls, cd, find", you must run command line: 
   $ source devel/setup.bash
in my ROS_Workspace path
```

### Indirect dependencies
In many cases, a dependency will also have its own dependencies. For instance, rospy has other dependencies.
```shell
$ rospack depends1 rospy
   genpy
   roscpp
   rosgraph
   rosgraph_msgs
   roslib
   std_msgs
```

A package can have quite a few indirect dependencies. Luckily rospack can recursively determine all nested dependencies.
```shell
$ rospack depends beginner_tutorials
   cpp_common
   rostime
   roscpp_traits
   roscpp_serialization
   catkin
   genmsg
   genpy
   message_runtime
   gencpp
   geneus
   gennodejs
   genlisp
   message_generation
   rosbuild
   rosconsole
   std_msgs
   rosgraph_msgs
   xmlrpcpp
   roscpp
   rosgraph
   ros_environment
   rospack
   roslib
   rospy
```












