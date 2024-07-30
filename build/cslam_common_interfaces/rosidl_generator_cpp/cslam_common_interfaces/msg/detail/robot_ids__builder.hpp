// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cslam_common_interfaces:msg/RobotIds.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__ROBOT_IDS__BUILDER_HPP_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__ROBOT_IDS__BUILDER_HPP_

#include "cslam_common_interfaces/msg/detail/robot_ids__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cslam_common_interfaces
{

namespace msg
{

namespace builder
{

class Init_RobotIds_ids
{
public:
  Init_RobotIds_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cslam_common_interfaces::msg::RobotIds ids(::cslam_common_interfaces::msg::RobotIds::_ids_type arg)
  {
    msg_.ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cslam_common_interfaces::msg::RobotIds msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cslam_common_interfaces::msg::RobotIds>()
{
  return cslam_common_interfaces::msg::builder::Init_RobotIds_ids();
}

}  // namespace cslam_common_interfaces

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__ROBOT_IDS__BUILDER_HPP_
