// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cslam_common_interfaces:msg/MultiRobotKey.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__MULTI_ROBOT_KEY__BUILDER_HPP_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__MULTI_ROBOT_KEY__BUILDER_HPP_

#include "cslam_common_interfaces/msg/detail/multi_robot_key__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cslam_common_interfaces
{

namespace msg
{

namespace builder
{

class Init_MultiRobotKey_keyframe_id
{
public:
  explicit Init_MultiRobotKey_keyframe_id(::cslam_common_interfaces::msg::MultiRobotKey & msg)
  : msg_(msg)
  {}
  ::cslam_common_interfaces::msg::MultiRobotKey keyframe_id(::cslam_common_interfaces::msg::MultiRobotKey::_keyframe_id_type arg)
  {
    msg_.keyframe_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cslam_common_interfaces::msg::MultiRobotKey msg_;
};

class Init_MultiRobotKey_robot_id
{
public:
  Init_MultiRobotKey_robot_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MultiRobotKey_keyframe_id robot_id(::cslam_common_interfaces::msg::MultiRobotKey::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_MultiRobotKey_keyframe_id(msg_);
  }

private:
  ::cslam_common_interfaces::msg::MultiRobotKey msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cslam_common_interfaces::msg::MultiRobotKey>()
{
  return cslam_common_interfaces::msg::builder::Init_MultiRobotKey_robot_id();
}

}  // namespace cslam_common_interfaces

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__MULTI_ROBOT_KEY__BUILDER_HPP_
