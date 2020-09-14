
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
So navigating with command-line tools such as ls, cd, find, you must run command line: 
   $ source devel/setup.bash
in my ROS_Workspace
```

```plantuml
!define ICONURL https://raw.githubusercontent.com/tupadr3/plantuml-icon-font-sprites/v2.1.0
skinparam defaultTextAlignment center
!include ICONURL/common.puml
!include ICONURL/font-awesome-5/gitlab.puml
!include ICONURL/font-awesome-5/java.puml
!include ICONURL/font-awesome-5/rocket.puml
!include ICONURL/font-awesome/newspaper_o.puml
FA_NEWSPAPER_O(news,good news!,node) #White {
FA5_GITLAB(gitlab,GitLab.com,node) #White
FA5_JAVA(java,PlantUML,node) #White
FA5_ROCKET(rocket,Integrated,node) #White
}
gitlab ..> java
java ..> rocket
```

1.   Item 1
1.   Item 2

     ```ruby
     def hello
        puts "Hello world!"
     end
     ```

1.   Item 3














