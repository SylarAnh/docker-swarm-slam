// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cslam_common_interfaces:msg/InterRobotMatches.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__INTER_ROBOT_MATCHES__BUILDER_HPP_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__INTER_ROBOT_MATCHES__BUILDER_HPP_

#include "cslam_common_interfaces/msg/detail/inter_robot_matches__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cslam_common_interfaces
{

namespace msg
{

namespace builder
{

class Init_InterRobotMatches_matches
{
public:
  explicit Init_InterRobotMatches_matches(::cslam_common_interfaces::msg::InterRobotMatches & msg)
  : msg_(msg)
  {}
  ::cslam_common_interfaces::msg::InterRobotMatches matches(::cslam_common_interfaces::msg::InterRobotMatches::_matches_type arg)
  {
    msg_.matches = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cslam_common_interfaces::msg::InterRobotMatches msg_;
};

class Init_InterRobotMatches_robot_id
{
public:
  Init_InterRobotMatches_robot_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InterRobotMatches_matches robot_id(::cslam_common_interfaces::msg::InterRobotMatches::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_InterRobotMatches_matches(msg_);
  }

private:
  ::cslam_common_interfaces::msg::InterRobotMatches msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cslam_common_interfaces::msg::InterRobotMatches>()
{
  return cslam_common_interfaces::msg::builder::Init_InterRobotMatches_robot_id();
}

}  // namespace cslam_common_interfaces

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__INTER_ROBOT_MATCHES__BUILDER_HPP_
