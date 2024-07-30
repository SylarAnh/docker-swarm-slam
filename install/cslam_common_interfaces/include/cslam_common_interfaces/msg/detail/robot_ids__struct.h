// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cslam_common_interfaces:msg/RobotIds.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__ROBOT_IDS__STRUCT_H_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__ROBOT_IDS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'ids'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/RobotIds in the package cslam_common_interfaces.
typedef struct cslam_common_interfaces__msg__RobotIds
{
  rosidl_runtime_c__uint32__Sequence ids;
} cslam_common_interfaces__msg__RobotIds;

// Struct for a sequence of cslam_common_interfaces__msg__RobotIds.
typedef struct cslam_common_interfaces__msg__RobotIds__Sequence
{
  cslam_common_interfaces__msg__RobotIds * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cslam_common_interfaces__msg__RobotIds__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__ROBOT_IDS__STRUCT_H_
