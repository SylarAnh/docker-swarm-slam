// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cslam_common_interfaces:msg/ReferenceFrames.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__REFERENCE_FRAMES__TRAITS_HPP_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__REFERENCE_FRAMES__TRAITS_HPP_

#include "cslam_common_interfaces/msg/detail/reference_frames__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'origin_to_local'
#include "geometry_msgs/msg/detail/transform_stamped__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cslam_common_interfaces::msg::ReferenceFrames>()
{
  return "cslam_common_interfaces::msg::ReferenceFrames";
}

template<>
inline const char * name<cslam_common_interfaces::msg::ReferenceFrames>()
{
  return "cslam_common_interfaces/msg/ReferenceFrames";
}

template<>
struct has_fixed_size<cslam_common_interfaces::msg::ReferenceFrames>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cslam_common_interfaces::msg::ReferenceFrames>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cslam_common_interfaces::msg::ReferenceFrames>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__REFERENCE_FRAMES__TRAITS_HPP_
