// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cslam_common_interfaces:msg/InterRobotLoopClosure.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__INTER_ROBOT_LOOP_CLOSURE__BUILDER_HPP_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__INTER_ROBOT_LOOP_CLOSURE__BUILDER_HPP_

#include "cslam_common_interfaces/msg/detail/inter_robot_loop_closure__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cslam_common_interfaces
{

namespace msg
{

namespace builder
{

class Init_InterRobotLoopClosure_transform
{
public:
  explicit Init_InterRobotLoopClosure_transform(::cslam_common_interfaces::msg::InterRobotLoopClosure & msg)
  : msg_(msg)
  {}
  ::cslam_common_interfaces::msg::InterRobotLoopClosure transform(::cslam_common_interfaces::msg::InterRobotLoopClosure::_transform_type arg)
  {
    msg_.transform = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cslam_common_interfaces::msg::InterRobotLoopClosure msg_;
};

class Init_InterRobotLoopClosure_success
{
public:
  explicit Init_InterRobotLoopClosure_success(::cslam_common_interfaces::msg::InterRobotLoopClosure & msg)
  : msg_(msg)
  {}
  Init_InterRobotLoopClosure_transform success(::cslam_common_interfaces::msg::InterRobotLoopClosure::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_InterRobotLoopClosure_transform(msg_);
  }

private:
  ::cslam_common_interfaces::msg::InterRobotLoopClosure msg_;
};

class Init_InterRobotLoopClosure_robot1_id
{
public:
  explicit Init_InterRobotLoopClosure_robot1_id(::cslam_common_interfaces::msg::InterRobotLoopClosure & msg)
  : msg_(msg)
  {}
  Init_InterRobotLoopClosure_success robot1_id(::cslam_common_interfaces::msg::InterRobotLoopClosure::_robot1_id_type arg)
  {
    msg_.robot1_id = std::move(arg);
    return Init_InterRobotLoopClosure_success(msg_);
  }

private:
  ::cslam_common_interfaces::msg::InterRobotLoopClosure msg_;
};

class Init_InterRobotLoopClosure_robot1_keyframe_id
{
public:
  explicit Init_InterRobotLoopClosure_robot1_keyframe_id(::cslam_common_interfaces::msg::InterRobotLoopClosure & msg)
  : msg_(msg)
  {}
  Init_InterRobotLoopClosure_robot1_id robot1_keyframe_id(::cslam_common_interfaces::msg::InterRobotLoopClosure::_robot1_keyframe_id_type arg)
  {
    msg_.robot1_keyframe_id = std::move(arg);
    return Init_InterRobotLoopClosure_robot1_id(msg_);
  }

private:
  ::cslam_common_interfaces::msg::InterRobotLoopClosure msg_;
};

class Init_InterRobotLoopClosure_robot0_id
{
public:
  explicit Init_InterRobotLoopClosure_robot0_id(::cslam_common_interfaces::msg::InterRobotLoopClosure & msg)
  : msg_(msg)
  {}
  Init_InterRobotLoopClosure_robot1_keyframe_id robot0_id(::cslam_common_interfaces::msg::InterRobotLoopClosure::_robot0_id_type arg)
  {
    msg_.robot0_id = std::move(arg);
    return Init_InterRobotLoopClosure_robot1_keyframe_id(msg_);
  }

private:
  ::cslam_common_interfaces::msg::InterRobotLoopClosure msg_;
};

class Init_InterRobotLoopClosure_robot0_keyframe_id
{
public:
  Init_InterRobotLoopClosure_robot0_keyframe_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InterRobotLoopClosure_robot0_id robot0_keyframe_id(::cslam_common_interfaces::msg::InterRobotLoopClosure::_robot0_keyframe_id_type arg)
  {
    msg_.robot0_keyframe_id = std::move(arg);
    return Init_InterRobotLoopClosure_robot0_id(msg_);
  }

private:
  ::cslam_common_interfaces::msg::InterRobotLoopClosure msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cslam_common_interfaces::msg::InterRobotLoopClosure>()
{
  return cslam_common_interfaces::msg::builder::Init_InterRobotLoopClosure_robot0_keyframe_id();
}

}  // namespace cslam_common_interfaces

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__INTER_ROBOT_LOOP_CLOSURE__BUILDER_HPP_
