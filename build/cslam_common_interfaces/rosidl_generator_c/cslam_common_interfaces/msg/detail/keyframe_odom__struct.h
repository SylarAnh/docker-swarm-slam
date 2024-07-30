// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cslam_common_interfaces:msg/KeyframeOdom.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__KEYFRAME_ODOM__STRUCT_H_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__KEYFRAME_ODOM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'odom'
#include "nav_msgs/msg/detail/odometry__struct.h"
// Member 'gps'
#include "sensor_msgs/msg/detail/nav_sat_fix__struct.h"

// Struct defined in msg/KeyframeOdom in the package cslam_common_interfaces.
typedef struct cslam_common_interfaces__msg__KeyframeOdom
{
  uint32_t id;
  nav_msgs__msg__Odometry odom;
  sensor_msgs__msg__NavSatFix gps;
} cslam_common_interfaces__msg__KeyframeOdom;

// Struct for a sequence of cslam_common_interfaces__msg__KeyframeOdom.
typedef struct cslam_common_interfaces__msg__KeyframeOdom__Sequence
{
  cslam_common_interfaces__msg__KeyframeOdom * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cslam_common_interfaces__msg__KeyframeOdom__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__KEYFRAME_ODOM__STRUCT_H_
