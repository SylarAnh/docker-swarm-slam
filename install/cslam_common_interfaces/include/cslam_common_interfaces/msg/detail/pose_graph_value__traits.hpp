// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cslam_common_interfaces:msg/PoseGraphValue.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__POSE_GRAPH_VALUE__TRAITS_HPP_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__POSE_GRAPH_VALUE__TRAITS_HPP_

#include "cslam_common_interfaces/msg/detail/pose_graph_value__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'key'
#include "cslam_common_interfaces/msg/detail/multi_robot_key__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cslam_common_interfaces::msg::PoseGraphValue>()
{
  return "cslam_common_interfaces::msg::PoseGraphValue";
}

template<>
inline const char * name<cslam_common_interfaces::msg::PoseGraphValue>()
{
  return "cslam_common_interfaces/msg/PoseGraphValue";
}

template<>
struct has_fixed_size<cslam_common_interfaces::msg::PoseGraphValue>
  : std::integral_constant<bool, has_fixed_size<cslam_common_interfaces::msg::MultiRobotKey>::value && has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<cslam_common_interfaces::msg::PoseGraphValue>
  : std::integral_constant<bool, has_bounded_size<cslam_common_interfaces::msg::MultiRobotKey>::value && has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<cslam_common_interfaces::msg::PoseGraphValue>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__POSE_GRAPH_VALUE__TRAITS_HPP_
