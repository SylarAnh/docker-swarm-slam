// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cslam_common_interfaces:msg/PoseGraph.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__POSE_GRAPH__TRAITS_HPP_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__POSE_GRAPH__TRAITS_HPP_

#include "cslam_common_interfaces/msg/detail/pose_graph__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'connected_robots'
#include "cslam_common_interfaces/msg/detail/robot_ids__traits.hpp"
// Member 'spectral_matches'
#include "cslam_common_interfaces/msg/detail/inter_robot_matches__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cslam_common_interfaces::msg::PoseGraph>()
{
  return "cslam_common_interfaces::msg::PoseGraph";
}

template<>
inline const char * name<cslam_common_interfaces::msg::PoseGraph>()
{
  return "cslam_common_interfaces/msg/PoseGraph";
}

template<>
struct has_fixed_size<cslam_common_interfaces::msg::PoseGraph>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cslam_common_interfaces::msg::PoseGraph>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cslam_common_interfaces::msg::PoseGraph>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__POSE_GRAPH__TRAITS_HPP_
