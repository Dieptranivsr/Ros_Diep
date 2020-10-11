
### Create a catkin Package.
```shell
$ cd ($Path_to_workspace)/src
$ catkin_create_pkg <package_name> [depend1] [depend2] [depend...] ...
```

### Build the packages in the catkin.
```shell
$ catkin build
```

### Source the generated setup file to add the workspace to your ROS environment.
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

### The CMakeLists.txt file created by catkin_create_pkg will be covered in the later tutorials about building ROS code.
```txt
cmake_minimum_required(VERSION 3.0.2)
project(control_basic)

find_package(catkin REQUIRED COMPONENTS
  geometry_msgs
  mavros_msgs
  roscpp
  rospy
  std_msgs
)

catkin_package(
  INCLUDE_DIRS include
#  LIBRARIES control_basic
  CATKIN_DEPENDS geometry_msgs mavros_msgs roscpp rospy std_msgs
#  DEPENDS system_lib
)

###########
## Build ##
###########

## Specify additional locations of header files
## Your package locations should be listed before other locations
include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)

## Declare a C++ library
# add_library(${PROJECT_NAME}
#   src/${PROJECT_NAME}/control_basic.cpp
# )

# add_dependencies(${PROJECT_NAME} ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
#add_dependencies(${PROJECT_NAME}_node ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})

add_executable(${PROJECT_NAME}_node src/control_basic_node.cpp)

target_link_libraries(${PROJECT_NAME}_node
  ${catkin_LIBRARIES}
)
```
