// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cslam_common_interfaces:msg/IntraRobotLoopClosure.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__INTRA_ROBOT_LOOP_CLOSURE__BUILDER_HPP_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__INTRA_ROBOT_LOOP_CLOSURE__BUILDER_HPP_

#include "cslam_common_interfaces/msg/detail/intra_robot_loop_closure__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cslam_common_interfaces
{

namespace msg
{

namespace builder
{

class Init_IntraRobotLoopClosure_transform
{
public:
  explicit Init_IntraRobotLoopClosure_transform(::cslam_common_interfaces::msg::IntraRobotLoopClosure & msg)
  : msg_(msg)
  {}
  ::cslam_common_interfaces::msg::IntraRobotLoopClosure transform(::cslam_common_interfaces::msg::IntraRobotLoopClosure::_transform_type arg)
  {
    msg_.transform = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cslam_common_interfaces::msg::IntraRobotLoopClosure msg_;
};

class Init_IntraRobotLoopClosure_success
{
public:
  explicit Init_IntraRobotLoopClosure_success(::cslam_common_interfaces::msg::IntraRobotLoopClosure & msg)
  : msg_(msg)
  {}
  Init_IntraRobotLoopClosure_transform success(::cslam_common_interfaces::msg::IntraRobotLoopClosure::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_IntraRobotLoopClosure_transform(msg_);
  }

private:
  ::cslam_common_interfaces::msg::IntraRobotLoopClosure msg_;
};

class Init_IntraRobotLoopClosure_keyframe1_id
{
public:
  explicit Init_IntraRobotLoopClosure_keyframe1_id(::cslam_common_interfaces::msg::IntraRobotLoopClosure & msg)
  : msg_(msg)
  {}
  Init_IntraRobotLoopClosure_success keyframe1_id(::cslam_common_interfaces::msg::IntraRobotLoopClosure::_keyframe1_id_type arg)
  {
    msg_.keyframe1_id = std::move(arg);
    return Init_IntraRobotLoopClosure_success(msg_);
  }

private:
  ::cslam_common_interfaces::msg::IntraRobotLoopClosure msg_;
};

class Init_IntraRobotLoopClosure_keyframe0_id
{
public:
  Init_IntraRobotLoopClosure_keyframe0_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IntraRobotLoopClosure_keyframe1_id keyframe0_id(::cslam_common_interfaces::msg::IntraRobotLoopClosure::_keyframe0_id_type arg)
  {
    msg_.keyframe0_id = std::move(arg);
    return Init_IntraRobotLoopClosure_keyframe1_id(msg_);
  }

private:
  ::cslam_common_interfaces::msg::IntraRobotLoopClosure msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cslam_common_interfaces::msg::IntraRobotLoopClosure>()
{
  return cslam_common_interfaces::msg::builder::Init_IntraRobotLoopClosure_keyframe0_id();
}

}  // namespace cslam_common_interfaces

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__INTRA_ROBOT_LOOP_CLOSURE__BUILDER_HPP_
