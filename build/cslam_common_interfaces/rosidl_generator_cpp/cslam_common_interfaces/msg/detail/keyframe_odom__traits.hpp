// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cslam_common_interfaces:msg/KeyframeOdom.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__KEYFRAME_ODOM__TRAITS_HPP_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__KEYFRAME_ODOM__TRAITS_HPP_

#include "cslam_common_interfaces/msg/detail/keyframe_odom__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'odom'
#include "nav_msgs/msg/detail/odometry__traits.hpp"
// Member 'gps'
#include "sensor_msgs/msg/detail/nav_sat_fix__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cslam_common_interfaces::msg::KeyframeOdom>()
{
  return "cslam_common_interfaces::msg::KeyframeOdom";
}

template<>
inline const char * name<cslam_common_interfaces::msg::KeyframeOdom>()
{
  return "cslam_common_interfaces/msg/KeyframeOdom";
}

template<>
struct has_fixed_size<cslam_common_interfaces::msg::KeyframeOdom>
  : std::integral_constant<bool, has_fixed_size<nav_msgs::msg::Odometry>::value && has_fixed_size<sensor_msgs::msg::NavSatFix>::value> {};

template<>
struct has_bounded_size<cslam_common_interfaces::msg::KeyframeOdom>
  : std::integral_constant<bool, has_bounded_size<nav_msgs::msg::Odometry>::value && has_bounded_size<sensor_msgs::msg::NavSatFix>::value> {};

template<>
struct is_message<cslam_common_interfaces::msg::KeyframeOdom>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__KEYFRAME_ODOM__TRAITS_HPP_
