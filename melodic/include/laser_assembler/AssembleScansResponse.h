// Generated by gencpp from file laser_assembler/AssembleScansResponse.msg
// DO NOT EDIT!


#ifndef LASER_ASSEMBLER_MESSAGE_ASSEMBLESCANSRESPONSE_H
#define LASER_ASSEMBLER_MESSAGE_ASSEMBLESCANSRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <sensor_msgs/PointCloud.h>

namespace laser_assembler
{
template <class ContainerAllocator>
struct AssembleScansResponse_
{
  typedef AssembleScansResponse_<ContainerAllocator> Type;

  AssembleScansResponse_()
    : cloud()  {
    }
  AssembleScansResponse_(const ContainerAllocator& _alloc)
    : cloud(_alloc)  {
  (void)_alloc;
    }



   typedef  ::sensor_msgs::PointCloud_<ContainerAllocator>  _cloud_type;
  _cloud_type cloud;





  typedef boost::shared_ptr< ::laser_assembler::AssembleScansResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::laser_assembler::AssembleScansResponse_<ContainerAllocator> const> ConstPtr;

}; // struct AssembleScansResponse_

typedef ::laser_assembler::AssembleScansResponse_<std::allocator<void> > AssembleScansResponse;

typedef boost::shared_ptr< ::laser_assembler::AssembleScansResponse > AssembleScansResponsePtr;
typedef boost::shared_ptr< ::laser_assembler::AssembleScansResponse const> AssembleScansResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::laser_assembler::AssembleScansResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::laser_assembler::AssembleScansResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::laser_assembler::AssembleScansResponse_<ContainerAllocator1> & lhs, const ::laser_assembler::AssembleScansResponse_<ContainerAllocator2> & rhs)
{
  return lhs.cloud == rhs.cloud;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::laser_assembler::AssembleScansResponse_<ContainerAllocator1> & lhs, const ::laser_assembler::AssembleScansResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace laser_assembler

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::laser_assembler::AssembleScansResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::laser_assembler::AssembleScansResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::laser_assembler::AssembleScansResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::laser_assembler::AssembleScansResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::laser_assembler::AssembleScansResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::laser_assembler::AssembleScansResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::laser_assembler::AssembleScansResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4217b28a903e4ad7869a83b3653110ff";
  }

  static const char* value(const ::laser_assembler::AssembleScansResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4217b28a903e4ad7ULL;
  static const uint64_t static_value2 = 0x869a83b3653110ffULL;
};

template<class ContainerAllocator>
struct DataType< ::laser_assembler::AssembleScansResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "laser_assembler/AssembleScansResponse";
  }

  static const char* value(const ::laser_assembler::AssembleScansResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::laser_assembler::AssembleScansResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# The point cloud holding the assembled clouds or scans. \n"
"# This cloud is in the frame specified by the ~fixed_frame node parameter. \n"
"# cloud is empty if no scans are received in the requested interval.\n"
"sensor_msgs/PointCloud cloud\n"
"\n"
"\n"
"================================================================================\n"
"MSG: sensor_msgs/PointCloud\n"
"# This message holds a collection of 3d points, plus optional additional\n"
"# information about each point.\n"
"\n"
"# Time of sensor data acquisition, coordinate frame ID.\n"
"Header header\n"
"\n"
"# Array of 3d points. Each Point32 should be interpreted as a 3d point\n"
"# in the frame given in the header.\n"
"geometry_msgs/Point32[] points\n"
"\n"
"# Each channel should have the same number of elements as points array,\n"
"# and the data in each channel should correspond 1:1 with each point.\n"
"# Channel names in common practice are listed in ChannelFloat32.msg.\n"
"ChannelFloat32[] channels\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point32\n"
"# This contains the position of a point in free space(with 32 bits of precision).\n"
"# It is recommeded to use Point wherever possible instead of Point32.  \n"
"# \n"
"# This recommendation is to promote interoperability.  \n"
"#\n"
"# This message is designed to take up less space when sending\n"
"# lots of points at once, as in the case of a PointCloud.  \n"
"\n"
"float32 x\n"
"float32 y\n"
"float32 z\n"
"================================================================================\n"
"MSG: sensor_msgs/ChannelFloat32\n"
"# This message is used by the PointCloud message to hold optional data\n"
"# associated with each point in the cloud. The length of the values\n"
"# array should be the same as the length of the points array in the\n"
"# PointCloud, and each value should be associated with the corresponding\n"
"# point.\n"
"\n"
"# Channel names in existing practice include:\n"
"#   \"u\", \"v\" - row and column (respectively) in the left stereo image.\n"
"#              This is opposite to usual conventions but remains for\n"
"#              historical reasons. The newer PointCloud2 message has no\n"
"#              such problem.\n"
"#   \"rgb\" - For point clouds produced by color stereo cameras. uint8\n"
"#           (R,G,B) values packed into the least significant 24 bits,\n"
"#           in order.\n"
"#   \"intensity\" - laser or pixel intensity.\n"
"#   \"distance\"\n"
"\n"
"# The channel name should give semantics of the channel (e.g.\n"
"# \"intensity\" instead of \"value\").\n"
"string name\n"
"\n"
"# The values array should be 1-1 with the elements of the associated\n"
"# PointCloud.\n"
"float32[] values\n"
;
  }

  static const char* value(const ::laser_assembler::AssembleScansResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::laser_assembler::AssembleScansResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.cloud);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AssembleScansResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::laser_assembler::AssembleScansResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::laser_assembler::AssembleScansResponse_<ContainerAllocator>& v)
  {
    s << indent << "cloud: ";
    s << std::endl;
    Printer< ::sensor_msgs::PointCloud_<ContainerAllocator> >::stream(s, indent + "  ", v.cloud);
  }
};

} // namespace message_operations
} // namespace ros

#endif // LASER_ASSEMBLER_MESSAGE_ASSEMBLESCANSRESPONSE_H
