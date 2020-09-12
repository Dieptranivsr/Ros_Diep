// Generated by gencpp from file turtle_actionlib/ShapeResult.msg
// DO NOT EDIT!


#ifndef TURTLE_ACTIONLIB_MESSAGE_SHAPERESULT_H
#define TURTLE_ACTIONLIB_MESSAGE_SHAPERESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace turtle_actionlib
{
template <class ContainerAllocator>
struct ShapeResult_
{
  typedef ShapeResult_<ContainerAllocator> Type;

  ShapeResult_()
    : interior_angle(0.0)
    , apothem(0.0)  {
    }
  ShapeResult_(const ContainerAllocator& _alloc)
    : interior_angle(0.0)
    , apothem(0.0)  {
  (void)_alloc;
    }



   typedef float _interior_angle_type;
  _interior_angle_type interior_angle;

   typedef float _apothem_type;
  _apothem_type apothem;





  typedef boost::shared_ptr< ::turtle_actionlib::ShapeResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::turtle_actionlib::ShapeResult_<ContainerAllocator> const> ConstPtr;

}; // struct ShapeResult_

typedef ::turtle_actionlib::ShapeResult_<std::allocator<void> > ShapeResult;

typedef boost::shared_ptr< ::turtle_actionlib::ShapeResult > ShapeResultPtr;
typedef boost::shared_ptr< ::turtle_actionlib::ShapeResult const> ShapeResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::turtle_actionlib::ShapeResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::turtle_actionlib::ShapeResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::turtle_actionlib::ShapeResult_<ContainerAllocator1> & lhs, const ::turtle_actionlib::ShapeResult_<ContainerAllocator2> & rhs)
{
  return lhs.interior_angle == rhs.interior_angle &&
    lhs.apothem == rhs.apothem;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::turtle_actionlib::ShapeResult_<ContainerAllocator1> & lhs, const ::turtle_actionlib::ShapeResult_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace turtle_actionlib

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::turtle_actionlib::ShapeResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::turtle_actionlib::ShapeResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::turtle_actionlib::ShapeResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::turtle_actionlib::ShapeResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtle_actionlib::ShapeResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtle_actionlib::ShapeResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::turtle_actionlib::ShapeResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b06c6e2225f820dbc644270387cd1a7c";
  }

  static const char* value(const ::turtle_actionlib::ShapeResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb06c6e2225f820dbULL;
  static const uint64_t static_value2 = 0xc644270387cd1a7cULL;
};

template<class ContainerAllocator>
struct DataType< ::turtle_actionlib::ShapeResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "turtle_actionlib/ShapeResult";
  }

  static const char* value(const ::turtle_actionlib::ShapeResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::turtle_actionlib::ShapeResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"#result definition\n"
"float32 interior_angle\n"
"float32 apothem\n"
;
  }

  static const char* value(const ::turtle_actionlib::ShapeResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::turtle_actionlib::ShapeResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.interior_angle);
      stream.next(m.apothem);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ShapeResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::turtle_actionlib::ShapeResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::turtle_actionlib::ShapeResult_<ContainerAllocator>& v)
  {
    s << indent << "interior_angle: ";
    Printer<float>::stream(s, indent + "  ", v.interior_angle);
    s << indent << "apothem: ";
    Printer<float>::stream(s, indent + "  ", v.apothem);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TURTLE_ACTIONLIB_MESSAGE_SHAPERESULT_H
