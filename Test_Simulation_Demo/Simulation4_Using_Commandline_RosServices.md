# Using Command line Ros Service
# My workspace must drone_sim packages from https://github.com/charvi-077/Ros_projects.git

```shell
 * Terminal 1
$ roslaunch px4 mavros_posix_sitl.launch

 * Terminal 2
$ rosrun drone_sim mode_publisher.py

 * Terminal 3
 $ rostopic echo /mavros/state
 
 * Terminal 4
 $ rosrun drone_sim arming_call.py
 
```

```shell
 * Terminal 4
 $ rosrun drone_sim arming_call.py
 $ rosservice list 
/gazebo/apply_body_wrench
/gazebo/apply_joint_effort
/gazebo/clear_body_wrenches
/gazebo/clear_joint_forces
/gazebo/delete_light
/gazebo/delete_model
/gazebo/get_joint_properties
/gazebo/get_light_properties
/gazebo/get_link_properties
/gazebo/get_link_state
/gazebo/get_loggers
/gazebo/get_model_properties
/gazebo/get_model_state
/gazebo/get_physics_properties
/gazebo/get_world_properties
/gazebo/pause_physics
/gazebo/reset_simulation
/gazebo/reset_world
/gazebo/set_joint_properties
/gazebo/set_light_properties
/gazebo/set_link_properties
/gazebo/set_link_state
/gazebo/set_logger_level
/gazebo/set_model_configuration
/gazebo/set_model_state
/gazebo/set_parameters
/gazebo/set_physics_properties
/gazebo/spawn_sdf_model
/gazebo/spawn_urdf_model
/gazebo/unpause_physics
/gazebo_gui/get_loggers
/gazebo_gui/set_logger_level
/mav_uav/get_loggers
/mav_uav/set_logger_level
/mavros/cmd/arming
/mavros/cmd/command
/mavros/cmd/command_int
/mavros/cmd/land
/mavros/cmd/set_home
/mavros/cmd/takeoff
/mavros/cmd/trigger_control
/mavros/cmd/trigger_interval
/mavros/cmd/vtol_transition
/mavros/ftp/checksum
/mavros/ftp/close
/mavros/ftp/list
/mavros/ftp/mkdir
/mavros/ftp/open
/mavros/ftp/read
/mavros/ftp/remove
/mavros/ftp/rename
/mavros/ftp/reset
/mavros/ftp/rmdir
/mavros/ftp/truncate
/mavros/ftp/write
/mavros/get_loggers
/mavros/home_position/req_update
/mavros/log_transfer/raw/log_request_data
/mavros/log_transfer/raw/log_request_end
/mavros/log_transfer/raw/log_request_list
/mavros/mission/clear
/mavros/mission/pull
/mavros/mission/push
/mavros/mission/set_current
/mavros/mount_control/configure
/mavros/param/get
/mavros/param/pull
/mavros/param/push
/mavros/param/set
/mavros/set_logger_level
/mavros/set_message_interval
/mavros/set_mode
/mavros/set_stream_rate
/mavros/setpoint_position/mav_frame
/mavros/setpoint_trajectory/mav_frame
/mavros/setpoint_trajectory/reset
/mavros/setpoint_velocity/mav_frame
/mavros/vehicle_info_get
/rosout/get_loggers
/rosout/set_logger_level
/rostopic_12562_1603785140455/get_loggers
/rostopic_12562_1603785140455/set_logger_level
```
