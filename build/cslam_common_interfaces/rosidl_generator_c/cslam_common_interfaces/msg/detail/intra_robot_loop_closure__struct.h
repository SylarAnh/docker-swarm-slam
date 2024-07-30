// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cslam_common_interfaces:msg/IntraRobotLoopClosure.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__INTRA_ROBOT_LOOP_CLOSURE__STRUCT_H_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__INTRA_ROBOT_LOOP_CLOSURE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'transform'
#include "geometry_msgs/msg/detail/transform__struct.h"

// Struct defined in msg/IntraRobotLoopClosure in the package cslam_common_interfaces.
typedef struct cslam_common_interfaces__msg__IntraRobotLoopClosure
{
  uint32_t keyframe0_id;
  uint32_t keyframe1_id;
  bool success;
  geometry_msgs__msg__Transform transform;
} cslam_common_interfaces__msg__IntraRobotLoopClosure;

// Struct for a sequence of cslam_common_interfaces__msg__IntraRobotLoopClosure.
typedef struct cslam_common_interfaces__msg__IntraRobotLoopClosure__Sequence
{
  cslam_common_interfaces__msg__IntraRobotLoopClosure * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cslam_common_interfaces__msg__IntraRobotLoopClosure__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__INTRA_ROBOT_LOOP_CLOSURE__STRUCT_H_
