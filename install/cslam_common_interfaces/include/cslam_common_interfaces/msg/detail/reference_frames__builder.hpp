// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cslam_common_interfaces:msg/ReferenceFrames.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__REFERENCE_FRAMES__BUILDER_HPP_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__REFERENCE_FRAMES__BUILDER_HPP_

#include "cslam_common_interfaces/msg/detail/reference_frames__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cslam_common_interfaces
{

namespace msg
{

namespace builder
{

class Init_ReferenceFrames_transforms
{
public:
  explicit Init_ReferenceFrames_transforms(::cslam_common_interfaces::msg::ReferenceFrames & msg)
  : msg_(msg)
  {}
  ::cslam_common_interfaces::msg::ReferenceFrames transforms(::cslam_common_interfaces::msg::ReferenceFrames::_transforms_type arg)
  {
    msg_.transforms = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cslam_common_interfaces::msg::ReferenceFrames msg_;
};

class Init_ReferenceFrames_frames_id
{
public:
  explicit Init_ReferenceFrames_frames_id(::cslam_common_interfaces::msg::ReferenceFrames & msg)
  : msg_(msg)
  {}
  Init_ReferenceFrames_transforms frames_id(::cslam_common_interfaces::msg::ReferenceFrames::_frames_id_type arg)
  {
    msg_.frames_id = std::move(arg);
    return Init_ReferenceFrames_transforms(msg_);
  }

private:
  ::cslam_common_interfaces::msg::ReferenceFrames msg_;
};

class Init_ReferenceFrames_origin_to_local
{
public:
  explicit Init_ReferenceFrames_origin_to_local(::cslam_common_interfaces::msg::ReferenceFrames & msg)
  : msg_(msg)
  {}
  Init_ReferenceFrames_frames_id origin_to_local(::cslam_common_interfaces::msg::ReferenceFrames::_origin_to_local_type arg)
  {
    msg_.origin_to_local = std::move(arg);
    return Init_ReferenceFrames_frames_id(msg_);
  }

private:
  ::cslam_common_interfaces::msg::ReferenceFrames msg_;
};

class Init_ReferenceFrames_robot_id
{
public:
  Init_ReferenceFrames_robot_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReferenceFrames_origin_to_local robot_id(::cslam_common_interfaces::msg::ReferenceFrames::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_ReferenceFrames_origin_to_local(msg_);
  }

private:
  ::cslam_common_interfaces::msg::ReferenceFrames msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cslam_common_interfaces::msg::ReferenceFrames>()
{
  return cslam_common_interfaces::msg::builder::Init_ReferenceFrames_robot_id();
}

}  // namespace cslam_common_interfaces

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__REFERENCE_FRAMES__BUILDER_HPP_
