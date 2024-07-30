// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cslam_common_interfaces:msg/RobotIdsAndOrigin.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__ROBOT_IDS_AND_ORIGIN__STRUCT_H_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__ROBOT_IDS_AND_ORIGIN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'robots'
// Member 'origins'
#include "cslam_common_interfaces/msg/detail/robot_ids__struct.h"

// Struct defined in msg/RobotIdsAndOrigin in the package cslam_common_interfaces.
typedef struct cslam_common_interfaces__msg__RobotIdsAndOrigin
{
  cslam_common_interfaces__msg__RobotIds robots;
  cslam_common_interfaces__msg__RobotIds origins;
} cslam_common_interfaces__msg__RobotIdsAndOrigin;

// Struct for a sequence of cslam_common_interfaces__msg__RobotIdsAndOrigin.
typedef struct cslam_common_interfaces__msg__RobotIdsAndOrigin__Sequence
{
  cslam_common_interfaces__msg__RobotIdsAndOrigin * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cslam_common_interfaces__msg__RobotIdsAndOrigin__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__ROBOT_IDS_AND_ORIGIN__STRUCT_H_
