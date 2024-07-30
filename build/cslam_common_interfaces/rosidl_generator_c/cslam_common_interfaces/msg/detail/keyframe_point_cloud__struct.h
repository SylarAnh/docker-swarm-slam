// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cslam_common_interfaces:msg/KeyframePointCloud.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__KEYFRAME_POINT_CLOUD__STRUCT_H_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__KEYFRAME_POINT_CLOUD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pointcloud'
#include "sensor_msgs/msg/detail/point_cloud2__struct.h"

// Struct defined in msg/KeyframePointCloud in the package cslam_common_interfaces.
typedef struct cslam_common_interfaces__msg__KeyframePointCloud
{
  uint32_t id;
  sensor_msgs__msg__PointCloud2 pointcloud;
} cslam_common_interfaces__msg__KeyframePointCloud;

// Struct for a sequence of cslam_common_interfaces__msg__KeyframePointCloud.
typedef struct cslam_common_interfaces__msg__KeyframePointCloud__Sequence
{
  cslam_common_interfaces__msg__KeyframePointCloud * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cslam_common_interfaces__msg__KeyframePointCloud__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__KEYFRAME_POINT_CLOUD__STRUCT_H_
