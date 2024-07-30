// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cslam_common_interfaces:msg/InterRobotLoopClosure.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__INTER_ROBOT_LOOP_CLOSURE__TRAITS_HPP_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__INTER_ROBOT_LOOP_CLOSURE__TRAITS_HPP_

#include "cslam_common_interfaces/msg/detail/inter_robot_loop_closure__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'transform'
#include "geometry_msgs/msg/detail/transform__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cslam_common_interfaces::msg::InterRobotLoopClosure>()
{
  return "cslam_common_interfaces::msg::InterRobotLoopClosure";
}

template<>
inline const char * name<cslam_common_interfaces::msg::InterRobotLoopClosure>()
{
  return "cslam_common_interfaces/msg/InterRobotLoopClosure";
}

template<>
struct has_fixed_size<cslam_common_interfaces::msg::InterRobotLoopClosure>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Transform>::value> {};

template<>
struct has_bounded_size<cslam_common_interfaces::msg::InterRobotLoopClosure>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Transform>::value> {};

template<>
struct is_message<cslam_common_interfaces::msg::InterRobotLoopClosure>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__INTER_ROBOT_LOOP_CLOSURE__TRAITS_HPP_
