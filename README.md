# Ros_Diep :vietnam:
Learn ROS from web http://wiki.ros.org/ :copyright:

# :pushpin: roscpp
roscpp is a C++ implementation of ROS. It provides a client library that enables C++ programmers to quickly interface with ROS Topics, Services, and Parameters. roscpp is the most widely used ROS client library and is designed to be the high-performance library for ROS.
### The main parts of roscpp are:

 * ros::init() : A version of ros::init() must be called before using any of the rest of the ROS system.
 * ros::NodeHandle : Public interface to topics, services, parameters, etc.
 * ros::master : Contains functions for querying information from the master
 * ros::this_node : Contains functions for querying information about this process' node
 * ros::service : Contains functions for querying information about services
 * ros::param : Contains functions for querying the parameter service without the need for a ros::NodeHandle
 * ros::names : Contains functions for manipulating ROS graph resource names
### Examples
Many examples of using ROS can be found on the wiki and in the roscpp_tutorials package.
