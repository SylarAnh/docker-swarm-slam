// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cslam_common_interfaces:msg/KeyframePointCloud.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__KEYFRAME_POINT_CLOUD__TRAITS_HPP_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__KEYFRAME_POINT_CLOUD__TRAITS_HPP_

#include "cslam_common_interfaces/msg/detail/keyframe_point_cloud__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'pointcloud'
#include "sensor_msgs/msg/detail/point_cloud2__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cslam_common_interfaces::msg::KeyframePointCloud>()
{
  return "cslam_common_interfaces::msg::KeyframePointCloud";
}

template<>
inline const char * name<cslam_common_interfaces::msg::KeyframePointCloud>()
{
  return "cslam_common_interfaces/msg/KeyframePointCloud";
}

template<>
struct has_fixed_size<cslam_common_interfaces::msg::KeyframePointCloud>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::PointCloud2>::value> {};

template<>
struct has_bounded_size<cslam_common_interfaces::msg::KeyframePointCloud>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::PointCloud2>::value> {};

template<>
struct is_message<cslam_common_interfaces::msg::KeyframePointCloud>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__KEYFRAME_POINT_CLOUD__TRAITS_HPP_
