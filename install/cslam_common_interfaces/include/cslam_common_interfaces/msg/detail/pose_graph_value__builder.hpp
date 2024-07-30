// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cslam_common_interfaces:msg/PoseGraphValue.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__POSE_GRAPH_VALUE__BUILDER_HPP_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__POSE_GRAPH_VALUE__BUILDER_HPP_

#include "cslam_common_interfaces/msg/detail/pose_graph_value__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cslam_common_interfaces
{

namespace msg
{

namespace builder
{

class Init_PoseGraphValue_pose
{
public:
  explicit Init_PoseGraphValue_pose(::cslam_common_interfaces::msg::PoseGraphValue & msg)
  : msg_(msg)
  {}
  ::cslam_common_interfaces::msg::PoseGraphValue pose(::cslam_common_interfaces::msg::PoseGraphValue::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cslam_common_interfaces::msg::PoseGraphValue msg_;
};

class Init_PoseGraphValue_key
{
public:
  Init_PoseGraphValue_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PoseGraphValue_pose key(::cslam_common_interfaces::msg::PoseGraphValue::_key_type arg)
  {
    msg_.key = std::move(arg);
    return Init_PoseGraphValue_pose(msg_);
  }

private:
  ::cslam_common_interfaces::msg::PoseGraphValue msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cslam_common_interfaces::msg::PoseGraphValue>()
{
  return cslam_common_interfaces::msg::builder::Init_PoseGraphValue_key();
}

}  // namespace cslam_common_interfaces

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__POSE_GRAPH_VALUE__BUILDER_HPP_
