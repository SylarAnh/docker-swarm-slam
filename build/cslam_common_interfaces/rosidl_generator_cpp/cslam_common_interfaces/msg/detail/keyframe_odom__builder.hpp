// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cslam_common_interfaces:msg/KeyframeOdom.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__KEYFRAME_ODOM__BUILDER_HPP_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__KEYFRAME_ODOM__BUILDER_HPP_

#include "cslam_common_interfaces/msg/detail/keyframe_odom__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cslam_common_interfaces
{

namespace msg
{

namespace builder
{

class Init_KeyframeOdom_gps
{
public:
  explicit Init_KeyframeOdom_gps(::cslam_common_interfaces::msg::KeyframeOdom & msg)
  : msg_(msg)
  {}
  ::cslam_common_interfaces::msg::KeyframeOdom gps(::cslam_common_interfaces::msg::KeyframeOdom::_gps_type arg)
  {
    msg_.gps = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cslam_common_interfaces::msg::KeyframeOdom msg_;
};

class Init_KeyframeOdom_odom
{
public:
  explicit Init_KeyframeOdom_odom(::cslam_common_interfaces::msg::KeyframeOdom & msg)
  : msg_(msg)
  {}
  Init_KeyframeOdom_gps odom(::cslam_common_interfaces::msg::KeyframeOdom::_odom_type arg)
  {
    msg_.odom = std::move(arg);
    return Init_KeyframeOdom_gps(msg_);
  }

private:
  ::cslam_common_interfaces::msg::KeyframeOdom msg_;
};

class Init_KeyframeOdom_id
{
public:
  Init_KeyframeOdom_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KeyframeOdom_odom id(::cslam_common_interfaces::msg::KeyframeOdom::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_KeyframeOdom_odom(msg_);
  }

private:
  ::cslam_common_interfaces::msg::KeyframeOdom msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cslam_common_interfaces::msg::KeyframeOdom>()
{
  return cslam_common_interfaces::msg::builder::Init_KeyframeOdom_id();
}

}  // namespace cslam_common_interfaces

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__KEYFRAME_ODOM__BUILDER_HPP_
