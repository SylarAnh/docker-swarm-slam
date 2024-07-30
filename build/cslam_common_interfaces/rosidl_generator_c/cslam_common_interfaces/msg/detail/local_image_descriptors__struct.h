// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cslam_common_interfaces:msg/LocalImageDescriptors.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__LOCAL_IMAGE_DESCRIPTORS__STRUCT_H_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__LOCAL_IMAGE_DESCRIPTORS__STRUCT_H_

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
// Member 'data'
#include "rtabmap_msgs/msg/detail/rgbd_image__struct.h"

// Struct defined in msg/LocalImageDescriptors in the package cslam_common_interfaces.
typedef struct cslam_common_interfaces__msg__LocalImageDescriptors
{
  uint32_t keyframe_id;
  uint32_t robot_id;
  rosidl_runtime_c__uint32__Sequence matches_robot_id;
  rosidl_runtime_c__uint32__Sequence matches_keyframe_id;
  rtabmap_msgs__msg__RGBDImage data;
} cslam_common_interfaces__msg__LocalImageDescriptors;

// Struct for a sequence of cslam_common_interfaces__msg__LocalImageDescriptors.
typedef struct cslam_common_interfaces__msg__LocalImageDescriptors__Sequence
{
  cslam_common_interfaces__msg__LocalImageDescriptors * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cslam_common_interfaces__msg__LocalImageDescriptors__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__LOCAL_IMAGE_DESCRIPTORS__STRUCT_H_
