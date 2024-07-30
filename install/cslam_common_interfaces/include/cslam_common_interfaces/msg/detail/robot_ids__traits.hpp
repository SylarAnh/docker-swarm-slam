// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cslam_common_interfaces:msg/RobotIds.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__ROBOT_IDS__TRAITS_HPP_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__ROBOT_IDS__TRAITS_HPP_

#include "cslam_common_interfaces/msg/detail/robot_ids__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cslam_common_interfaces::msg::RobotIds>()
{
  return "cslam_common_interfaces::msg::RobotIds";
}

template<>
inline const char * name<cslam_common_interfaces::msg::RobotIds>()
{
  return "cslam_common_interfaces/msg/RobotIds";
}

template<>
struct has_fixed_size<cslam_common_interfaces::msg::RobotIds>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cslam_common_interfaces::msg::RobotIds>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cslam_common_interfaces::msg::RobotIds>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__ROBOT_IDS__TRAITS_HPP_
