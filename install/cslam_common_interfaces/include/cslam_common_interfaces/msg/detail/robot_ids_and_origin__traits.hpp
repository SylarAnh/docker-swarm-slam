// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cslam_common_interfaces:msg/RobotIdsAndOrigin.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__ROBOT_IDS_AND_ORIGIN__TRAITS_HPP_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__ROBOT_IDS_AND_ORIGIN__TRAITS_HPP_

#include "cslam_common_interfaces/msg/detail/robot_ids_and_origin__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'robots'
// Member 'origins'
#include "cslam_common_interfaces/msg/detail/robot_ids__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cslam_common_interfaces::msg::RobotIdsAndOrigin>()
{
  return "cslam_common_interfaces::msg::RobotIdsAndOrigin";
}

template<>
inline const char * name<cslam_common_interfaces::msg::RobotIdsAndOrigin>()
{
  return "cslam_common_interfaces/msg/RobotIdsAndOrigin";
}

template<>
struct has_fixed_size<cslam_common_interfaces::msg::RobotIdsAndOrigin>
  : std::integral_constant<bool, has_fixed_size<cslam_common_interfaces::msg::RobotIds>::value> {};

template<>
struct has_bounded_size<cslam_common_interfaces::msg::RobotIdsAndOrigin>
  : std::integral_constant<bool, has_bounded_size<cslam_common_interfaces::msg::RobotIds>::value> {};

template<>
struct is_message<cslam_common_interfaces::msg::RobotIdsAndOrigin>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__ROBOT_IDS_AND_ORIGIN__TRAITS_HPP_
