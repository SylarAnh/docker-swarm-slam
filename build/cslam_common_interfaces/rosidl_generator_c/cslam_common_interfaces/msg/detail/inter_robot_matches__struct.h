// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cslam_common_interfaces:msg/InterRobotMatches.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__INTER_ROBOT_MATCHES__STRUCT_H_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__INTER_ROBOT_MATCHES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'matches'
#include "cslam_common_interfaces/msg/detail/inter_robot_match__struct.h"

// Struct defined in msg/InterRobotMatches in the package cslam_common_interfaces.
typedef struct cslam_common_interfaces__msg__InterRobotMatches
{
  uint32_t robot_id;
  cslam_common_interfaces__msg__InterRobotMatch__Sequence matches;
} cslam_common_interfaces__msg__InterRobotMatches;

// Struct for a sequence of cslam_common_interfaces__msg__InterRobotMatches.
typedef struct cslam_common_interfaces__msg__InterRobotMatches__Sequence
{
  cslam_common_interfaces__msg__InterRobotMatches * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cslam_common_interfaces__msg__InterRobotMatches__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__INTER_ROBOT_MATCHES__STRUCT_H_
