// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cslam_common_interfaces:msg/GlobalDescriptors.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__GLOBAL_DESCRIPTORS__STRUCT_H_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__GLOBAL_DESCRIPTORS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'descriptors'
#include "cslam_common_interfaces/msg/detail/global_descriptor__struct.h"

// Struct defined in msg/GlobalDescriptors in the package cslam_common_interfaces.
typedef struct cslam_common_interfaces__msg__GlobalDescriptors
{
  cslam_common_interfaces__msg__GlobalDescriptor__Sequence descriptors;
} cslam_common_interfaces__msg__GlobalDescriptors;

// Struct for a sequence of cslam_common_interfaces__msg__GlobalDescriptors.
typedef struct cslam_common_interfaces__msg__GlobalDescriptors__Sequence
{
  cslam_common_interfaces__msg__GlobalDescriptors * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cslam_common_interfaces__msg__GlobalDescriptors__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__GLOBAL_DESCRIPTORS__STRUCT_H_
