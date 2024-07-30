// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cslam_common_interfaces:msg/RobotIdsAndOrigin.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__ROBOT_IDS_AND_ORIGIN__BUILDER_HPP_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__ROBOT_IDS_AND_ORIGIN__BUILDER_HPP_

#include "cslam_common_interfaces/msg/detail/robot_ids_and_origin__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cslam_common_interfaces
{

namespace msg
{

namespace builder
{

class Init_RobotIdsAndOrigin_origins
{
public:
  explicit Init_RobotIdsAndOrigin_origins(::cslam_common_interfaces::msg::RobotIdsAndOrigin & msg)
  : msg_(msg)
  {}
  ::cslam_common_interfaces::msg::RobotIdsAndOrigin origins(::cslam_common_interfaces::msg::RobotIdsAndOrigin::_origins_type arg)
  {
    msg_.origins = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cslam_common_interfaces::msg::RobotIdsAndOrigin msg_;
};

class Init_RobotIdsAndOrigin_robots
{
public:
  Init_RobotIdsAndOrigin_robots()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotIdsAndOrigin_origins robots(::cslam_common_interfaces::msg::RobotIdsAndOrigin::_robots_type arg)
  {
    msg_.robots = std::move(arg);
    return Init_RobotIdsAndOrigin_origins(msg_);
  }

private:
  ::cslam_common_interfaces::msg::RobotIdsAndOrigin msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cslam_common_interfaces::msg::RobotIdsAndOrigin>()
{
  return cslam_common_interfaces::msg::builder::Init_RobotIdsAndOrigin_robots();
}

}  // namespace cslam_common_interfaces

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__ROBOT_IDS_AND_ORIGIN__BUILDER_HPP_
