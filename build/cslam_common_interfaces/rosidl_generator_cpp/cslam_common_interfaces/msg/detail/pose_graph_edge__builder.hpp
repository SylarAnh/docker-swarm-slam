// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cslam_common_interfaces:msg/PoseGraphEdge.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__POSE_GRAPH_EDGE__BUILDER_HPP_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__POSE_GRAPH_EDGE__BUILDER_HPP_

#include "cslam_common_interfaces/msg/detail/pose_graph_edge__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cslam_common_interfaces
{

namespace msg
{

namespace builder
{

class Init_PoseGraphEdge_noise_std
{
public:
  explicit Init_PoseGraphEdge_noise_std(::cslam_common_interfaces::msg::PoseGraphEdge & msg)
  : msg_(msg)
  {}
  ::cslam_common_interfaces::msg::PoseGraphEdge noise_std(::cslam_common_interfaces::msg::PoseGraphEdge::_noise_std_type arg)
  {
    msg_.noise_std = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cslam_common_interfaces::msg::PoseGraphEdge msg_;
};

class Init_PoseGraphEdge_measurement
{
public:
  explicit Init_PoseGraphEdge_measurement(::cslam_common_interfaces::msg::PoseGraphEdge & msg)
  : msg_(msg)
  {}
  Init_PoseGraphEdge_noise_std measurement(::cslam_common_interfaces::msg::PoseGraphEdge::_measurement_type arg)
  {
    msg_.measurement = std::move(arg);
    return Init_PoseGraphEdge_noise_std(msg_);
  }

private:
  ::cslam_common_interfaces::msg::PoseGraphEdge msg_;
};

class Init_PoseGraphEdge_key_to
{
public:
  explicit Init_PoseGraphEdge_key_to(::cslam_common_interfaces::msg::PoseGraphEdge & msg)
  : msg_(msg)
  {}
  Init_PoseGraphEdge_measurement key_to(::cslam_common_interfaces::msg::PoseGraphEdge::_key_to_type arg)
  {
    msg_.key_to = std::move(arg);
    return Init_PoseGraphEdge_measurement(msg_);
  }

private:
  ::cslam_common_interfaces::msg::PoseGraphEdge msg_;
};

class Init_PoseGraphEdge_key_from
{
public:
  Init_PoseGraphEdge_key_from()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PoseGraphEdge_key_to key_from(::cslam_common_interfaces::msg::PoseGraphEdge::_key_from_type arg)
  {
    msg_.key_from = std::move(arg);
    return Init_PoseGraphEdge_key_to(msg_);
  }

private:
  ::cslam_common_interfaces::msg::PoseGraphEdge msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cslam_common_interfaces::msg::PoseGraphEdge>()
{
  return cslam_common_interfaces::msg::builder::Init_PoseGraphEdge_key_from();
}

}  // namespace cslam_common_interfaces

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__POSE_GRAPH_EDGE__BUILDER_HPP_
