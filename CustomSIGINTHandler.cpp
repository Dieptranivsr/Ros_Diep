#include <ros/ros.h>
#include <signal.h>
 
void mySigintHandler(int sig)
{
   // Do some custom action.
   // For example, publish a stop message to some other nodes.
   
   // All the default sigint handler does is call shutdown()
   ros::shutdown();
}
 
int main(int argc, char** argv)
{
   ros::init(argc, argv, "my_node_name", ros::init_options::NoSigintHandler);
   ros::NodeHandle nh;
 
   // Override the default ros sigint handler.
   // This must be set after the first NodeHandle is created.
   signal(SIGINT, mySigintHandler);
   
   //...
   ros::spin();
   return 0;
}
