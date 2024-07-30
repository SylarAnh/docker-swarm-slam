// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cslam_common_interfaces:msg/ReferenceFrames.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__REFERENCE_FRAMES__STRUCT_H_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__REFERENCE_FRAMES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'origin_to_local'
// Member 'transforms'
#include "geometry_msgs/msg/detail/transform_stamped__struct.h"
// Member 'frames_id'
#include "std_msgs/msg/detail/string__struct.h"

// Struct defined in msg/ReferenceFrames in the package cslam_common_interfaces.
typedef struct cslam_common_interfaces__msg__ReferenceFrames
{
  uint32_t robot_id;
  geometry_msgs__msg__TransformStamped origin_to_local;
  std_msgs__msg__String__Sequence frames_id;
  geometry_msgs__msg__TransformStamped__Sequence transforms;
} cslam_common_interfaces__msg__ReferenceFrames;

// Struct for a sequence of cslam_common_interfaces__msg__ReferenceFrames.
typedef struct cslam_common_interfaces__msg__ReferenceFrames__Sequence
{
  cslam_common_interfaces__msg__ReferenceFrames * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cslam_common_interfaces__msg__ReferenceFrames__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__REFERENCE_FRAMES__STRUCT_H_
