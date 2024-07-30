// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cslam_common_interfaces:msg/PoseGraphValue.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__POSE_GRAPH_VALUE__STRUCT_H_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__POSE_GRAPH_VALUE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'key'
#include "cslam_common_interfaces/msg/detail/multi_robot_key__struct.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

// Struct defined in msg/PoseGraphValue in the package cslam_common_interfaces.
typedef struct cslam_common_interfaces__msg__PoseGraphValue
{
  cslam_common_interfaces__msg__MultiRobotKey key;
  geometry_msgs__msg__Pose pose;
} cslam_common_interfaces__msg__PoseGraphValue;

// Struct for a sequence of cslam_common_interfaces__msg__PoseGraphValue.
typedef struct cslam_common_interfaces__msg__PoseGraphValue__Sequence
{
  cslam_common_interfaces__msg__PoseGraphValue * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cslam_common_interfaces__msg__PoseGraphValue__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__POSE_GRAPH_VALUE__STRUCT_H_
