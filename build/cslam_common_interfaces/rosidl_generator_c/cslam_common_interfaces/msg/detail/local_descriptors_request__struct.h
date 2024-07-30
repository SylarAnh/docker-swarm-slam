// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cslam_common_interfaces:msg/LocalDescriptorsRequest.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__LOCAL_DESCRIPTORS_REQUEST__STRUCT_H_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__LOCAL_DESCRIPTORS_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'matches_robot_id'
// Member 'matches_keyframe_id'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/LocalDescriptorsRequest in the package cslam_common_interfaces.
typedef struct cslam_common_interfaces__msg__LocalDescriptorsRequest
{
  uint32_t keyframe_id;
  rosidl_runtime_c__uint32__Sequence matches_robot_id;
  rosidl_runtime_c__uint32__Sequence matches_keyframe_id;
} cslam_common_interfaces__msg__LocalDescriptorsRequest;

// Struct for a sequence of cslam_common_interfaces__msg__LocalDescriptorsRequest.
typedef struct cslam_common_interfaces__msg__LocalDescriptorsRequest__Sequence
{
  cslam_common_interfaces__msg__LocalDescriptorsRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cslam_common_interfaces__msg__LocalDescriptorsRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__LOCAL_DESCRIPTORS_REQUEST__STRUCT_H_
