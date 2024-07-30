// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cslam_common_interfaces:msg/GlobalDescriptor.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__GLOBAL_DESCRIPTOR__BUILDER_HPP_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__GLOBAL_DESCRIPTOR__BUILDER_HPP_

#include "cslam_common_interfaces/msg/detail/global_descriptor__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cslam_common_interfaces
{

namespace msg
{

namespace builder
{

class Init_GlobalDescriptor_descriptor
{
public:
  explicit Init_GlobalDescriptor_descriptor(::cslam_common_interfaces::msg::GlobalDescriptor & msg)
  : msg_(msg)
  {}
  ::cslam_common_interfaces::msg::GlobalDescriptor descriptor(::cslam_common_interfaces::msg::GlobalDescriptor::_descriptor_type arg)
  {
    msg_.descriptor = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cslam_common_interfaces::msg::GlobalDescriptor msg_;
};

class Init_GlobalDescriptor_robot_id
{
public:
  explicit Init_GlobalDescriptor_robot_id(::cslam_common_interfaces::msg::GlobalDescriptor & msg)
  : msg_(msg)
  {}
  Init_GlobalDescriptor_descriptor robot_id(::cslam_common_interfaces::msg::GlobalDescriptor::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_GlobalDescriptor_descriptor(msg_);
  }

private:
  ::cslam_common_interfaces::msg::GlobalDescriptor msg_;
};

class Init_GlobalDescriptor_keyframe_id
{
public:
  Init_GlobalDescriptor_keyframe_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GlobalDescriptor_robot_id keyframe_id(::cslam_common_interfaces::msg::GlobalDescriptor::_keyframe_id_type arg)
  {
    msg_.keyframe_id = std::move(arg);
    return Init_GlobalDescriptor_robot_id(msg_);
  }

private:
  ::cslam_common_interfaces::msg::GlobalDescriptor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cslam_common_interfaces::msg::GlobalDescriptor>()
{
  return cslam_common_interfaces::msg::builder::Init_GlobalDescriptor_keyframe_id();
}

}  // namespace cslam_common_interfaces

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__GLOBAL_DESCRIPTOR__BUILDER_HPP_
