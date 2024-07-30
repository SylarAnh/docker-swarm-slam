// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cslam_common_interfaces:msg/OptimizerState.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__OPTIMIZER_STATE__STRUCT_H_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__OPTIMIZER_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'IDLE'.
enum
{
  cslam_common_interfaces__msg__OptimizerState__IDLE = 0
};

/// Constant 'WAITING_FOR_NEIGHBORS_INFO'.
enum
{
  cslam_common_interfaces__msg__OptimizerState__WAITING_FOR_NEIGHBORS_INFO = 1
};

/// Constant 'POSEGRAPH_COLLECTION'.
enum
{
  cslam_common_interfaces__msg__OptimizerState__POSEGRAPH_COLLECTION = 2
};

/// Constant 'WAITING_FOR_NEIGHBORS_POSEGRAPHS'.
enum
{
  cslam_common_interfaces__msg__OptimizerState__WAITING_FOR_NEIGHBORS_POSEGRAPHS = 3
};

/// Constant 'START_OPTIMIZATION'.
enum
{
  cslam_common_interfaces__msg__OptimizerState__START_OPTIMIZATION = 4
};

/// Constant 'OPTIMIZATION'.
enum
{
  cslam_common_interfaces__msg__OptimizerState__OPTIMIZATION = 5
};

// Struct defined in msg/OptimizerState in the package cslam_common_interfaces.
typedef struct cslam_common_interfaces__msg__OptimizerState
{
  uint16_t state;
} cslam_common_interfaces__msg__OptimizerState;

// Struct for a sequence of cslam_common_interfaces__msg__OptimizerState.
typedef struct cslam_common_interfaces__msg__OptimizerState__Sequence
{
  cslam_common_interfaces__msg__OptimizerState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cslam_common_interfaces__msg__OptimizerState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__OPTIMIZER_STATE__STRUCT_H_
