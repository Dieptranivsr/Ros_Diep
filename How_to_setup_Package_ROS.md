
### Create a catkin Package
```shell
$ cd ($Path_to_workspace)/src
$ catkin_create_pkg <package_name> [depend1] [depend2] [depend...] ...
```

### Build the packages in the catkin
```shell
$ catkin build
```

### Source the generated setup file to add the workspace to your ROS environment
```shell
$ source ($Path_to_workspace)/devel/setup.bash
or $ . ($Path_to_workspace)/devel/setup.bash
```

### The generated package.xml should be in your new package. Now lets go through the new package.xml and touch up any elements that need your attention.

```xml
<?xml version="1.0"?>
<package format="2">
  <name>control_basic</name>
  <version>1.0.0</version>
  <description>The control_basic package</description>

  <maintainer email="dieptran@todo.todo">dieptran</maintainer>

  <license>TODO</license>

  <buildtool_depend>catkin</buildtool_depend>
  <build_depend>geometry_msgs</build_depend>
  <build_depend>mavros_msgs</build_depend>
  <build_depend>roscpp</build_depend>
  <build_depend>rospy</build_depend>
  <build_depend>std_msgs</build_depend>
  <build_export_depend>geometry_msgs</build_export_depend>
  <build_export_depend>mavros_msgs</build_export_depend>
  <build_export_depend>roscpp</build_export_depend>
  <build_export_depend>rospy</build_export_depend>
  <build_export_depend>std_msgs</build_export_depend>
  <exec_depend>geometry_msgs</exec_depend>
  <exec_depend>mavros_msgs</exec_depend>
  <exec_depend>roscpp</exec_depend>
  <exec_depend>rospy</exec_depend>
  <exec_depend>std_msgs</exec_depend>


  <export>
    <!-- Other tools can request additional information be placed here -->

  </export>
</package>
```
