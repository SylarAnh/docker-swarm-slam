// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cslam_common_interfaces:msg/KeyframeRGB.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__KEYFRAME_RGB__STRUCT_H_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__KEYFRAME_RGB__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.h"

// Struct defined in msg/KeyframeRGB in the package cslam_common_interfaces.
typedef struct cslam_common_interfaces__msg__KeyframeRGB
{
  uint32_t id;
  sensor_msgs__msg__Image image;
} cslam_common_interfaces__msg__KeyframeRGB;

// Struct for a sequence of cslam_common_interfaces__msg__KeyframeRGB.
typedef struct cslam_common_interfaces__msg__KeyframeRGB__Sequence
{
  cslam_common_interfaces__msg__KeyframeRGB * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cslam_common_interfaces__msg__KeyframeRGB__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__KEYFRAME_RGB__STRUCT_H_
