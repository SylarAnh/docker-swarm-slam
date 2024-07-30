// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cslam_common_interfaces:msg/InterRobotMatch.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__INTER_ROBOT_MATCH__STRUCT_H_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__INTER_ROBOT_MATCH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/InterRobotMatch in the package cslam_common_interfaces.
typedef struct cslam_common_interfaces__msg__InterRobotMatch
{
  uint32_t robot0_id;
  uint32_t robot0_keyframe_id;
  uint32_t robot1_id;
  uint32_t robot1_keyframe_id;
  float weight;
} cslam_common_interfaces__msg__InterRobotMatch;

// Struct for a sequence of cslam_common_interfaces__msg__InterRobotMatch.
typedef struct cslam_common_interfaces__msg__InterRobotMatch__Sequence
{
  cslam_common_interfaces__msg__InterRobotMatch * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cslam_common_interfaces__msg__InterRobotMatch__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__INTER_ROBOT_MATCH__STRUCT_H_
