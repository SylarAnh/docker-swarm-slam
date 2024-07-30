// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cslam_common_interfaces:msg/GlobalDescriptor.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__GLOBAL_DESCRIPTOR__STRUCT_H_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__GLOBAL_DESCRIPTOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'descriptor'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/GlobalDescriptor in the package cslam_common_interfaces.
typedef struct cslam_common_interfaces__msg__GlobalDescriptor
{
  uint32_t keyframe_id;
  uint32_t robot_id;
  rosidl_runtime_c__double__Sequence descriptor;
} cslam_common_interfaces__msg__GlobalDescriptor;

// Struct for a sequence of cslam_common_interfaces__msg__GlobalDescriptor.
typedef struct cslam_common_interfaces__msg__GlobalDescriptor__Sequence
{
  cslam_common_interfaces__msg__GlobalDescriptor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cslam_common_interfaces__msg__GlobalDescriptor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__GLOBAL_DESCRIPTOR__STRUCT_H_
