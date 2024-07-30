// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cslam_common_interfaces:msg/OptimizationResult.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__OPTIMIZATION_RESULT__STRUCT_H_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__OPTIMIZATION_RESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'factors'
#include "cslam_common_interfaces/msg/detail/pose_graph_edge__struct.h"
// Member 'estimates'
#include "cslam_common_interfaces/msg/detail/pose_graph_value__struct.h"

// Struct defined in msg/OptimizationResult in the package cslam_common_interfaces.
typedef struct cslam_common_interfaces__msg__OptimizationResult
{
  bool success;
  uint32_t origin_robot_id;
  cslam_common_interfaces__msg__PoseGraphEdge__Sequence factors;
  cslam_common_interfaces__msg__PoseGraphValue__Sequence estimates;
} cslam_common_interfaces__msg__OptimizationResult;

// Struct for a sequence of cslam_common_interfaces__msg__OptimizationResult.
typedef struct cslam_common_interfaces__msg__OptimizationResult__Sequence
{
  cslam_common_interfaces__msg__OptimizationResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cslam_common_interfaces__msg__OptimizationResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__OPTIMIZATION_RESULT__STRUCT_H_
