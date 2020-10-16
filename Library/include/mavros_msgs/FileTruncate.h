// Generated by gencpp from file mavros_msgs/FileTruncate.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_FILETRUNCATE_H
#define MAVROS_MSGS_MESSAGE_FILETRUNCATE_H

#include <ros/service_traits.h>


#include <mavros_msgs/FileTruncateRequest.h>
#include <mavros_msgs/FileTruncateResponse.h>


namespace mavros_msgs
{

struct FileTruncate
{

typedef FileTruncateRequest Request;
typedef FileTruncateResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct FileTruncate
} // namespace mavros_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::mavros_msgs::FileTruncate > {
  static const char* value()
  {
    return "71bf45fe3600fc220a82346ce1d1430c";
  }

  static const char* value(const ::mavros_msgs::FileTruncate&) { return value(); }
};

template<>
struct DataType< ::mavros_msgs::FileTruncate > {
  static const char* value()
  {
    return "mavros_msgs/FileTruncate";
  }

  static const char* value(const ::mavros_msgs::FileTruncate&) { return value(); }
};


// service_traits::MD5Sum< ::mavros_msgs::FileTruncateRequest> should match
// service_traits::MD5Sum< ::mavros_msgs::FileTruncate >
template<>
struct MD5Sum< ::mavros_msgs::FileTruncateRequest>
{
  static const char* value()
  {
    return MD5Sum< ::mavros_msgs::FileTruncate >::value();
  }
  static const char* value(const ::mavros_msgs::FileTruncateRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::mavros_msgs::FileTruncateRequest> should match
// service_traits::DataType< ::mavros_msgs::FileTruncate >
template<>
struct DataType< ::mavros_msgs::FileTruncateRequest>
{
  static const char* value()
  {
    return DataType< ::mavros_msgs::FileTruncate >::value();
  }
  static const char* value(const ::mavros_msgs::FileTruncateRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::mavros_msgs::FileTruncateResponse> should match
// service_traits::MD5Sum< ::mavros_msgs::FileTruncate >
template<>
struct MD5Sum< ::mavros_msgs::FileTruncateResponse>
{
  static const char* value()
  {
    return MD5Sum< ::mavros_msgs::FileTruncate >::value();
  }
  static const char* value(const ::mavros_msgs::FileTruncateResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::mavros_msgs::FileTruncateResponse> should match
// service_traits::DataType< ::mavros_msgs::FileTruncate >
template<>
struct DataType< ::mavros_msgs::FileTruncateResponse>
{
  static const char* value()
  {
    return DataType< ::mavros_msgs::FileTruncate >::value();
  }
  static const char* value(const ::mavros_msgs::FileTruncateResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_FILETRUNCATE_H