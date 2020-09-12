# Ros_Diep :vietnam: :computer: :computer:
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

### PX4 Architectural Overview
PX4 consists of two main layers: the flight stack is an estimation and flight control system, and the middleware is a general robotics layer that can support any type of autonomous robot, providing internal/external communications and hardware integration.

All PX4 airframes share a single codebase (this includes other robotic systems like boats, rovers, submarines etc.). The complete system design is reactive, which means that:

 * All functionality is divided into exchangeable and reusable components
 * Communication is done by asynchronous message passing
 * The system can deal with varying workload
### High-Level Software Architecture
The diagram below provides a detailed overview of the building blocks of PX4. The top part of the diagram contains middleware blocks, while the lower section shows the components of the flight stack.
![](https://dev.px4.io/master/assets/diagrams/PX4_Architecture.svg)
