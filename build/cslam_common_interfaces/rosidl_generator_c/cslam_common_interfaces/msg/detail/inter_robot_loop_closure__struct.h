// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cslam_common_interfaces:msg/InterRobotLoopClosure.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__INTER_ROBOT_LOOP_CLOSURE__STRUCT_H_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__INTER_ROBOT_LOOP_CLOSURE__STRUCT_H_

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

// Struct defined in msg/InterRobotLoopClosure in the package cslam_common_interfaces.
typedef struct cslam_common_interfaces__msg__InterRobotLoopClosure
{
  uint32_t robot0_keyframe_id;
  uint32_t robot0_id;
  uint32_t robot1_keyframe_id;
  uint32_t robot1_id;
  bool success;
  geometry_msgs__msg__Transform transform;
} cslam_common_interfaces__msg__InterRobotLoopClosure;

// Struct for a sequence of cslam_common_interfaces__msg__InterRobotLoopClosure.
typedef struct cslam_common_interfaces__msg__InterRobotLoopClosure__Sequence
{
  cslam_common_interfaces__msg__InterRobotLoopClosure * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cslam_common_interfaces__msg__InterRobotLoopClosure__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__INTER_ROBOT_LOOP_CLOSURE__STRUCT_H_
