// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cslam_common_interfaces:msg/MultiRobotKey.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__MULTI_ROBOT_KEY__TRAITS_HPP_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__MULTI_ROBOT_KEY__TRAITS_HPP_

#include "cslam_common_interfaces/msg/detail/multi_robot_key__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cslam_common_interfaces::msg::MultiRobotKey>()
{
  return "cslam_common_interfaces::msg::MultiRobotKey";
}

template<>
inline const char * name<cslam_common_interfaces::msg::MultiRobotKey>()
{
  return "cslam_common_interfaces/msg/MultiRobotKey";
}

template<>
struct has_fixed_size<cslam_common_interfaces::msg::MultiRobotKey>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cslam_common_interfaces::msg::MultiRobotKey>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cslam_common_interfaces::msg::MultiRobotKey>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__MULTI_ROBOT_KEY__TRAITS_HPP_
