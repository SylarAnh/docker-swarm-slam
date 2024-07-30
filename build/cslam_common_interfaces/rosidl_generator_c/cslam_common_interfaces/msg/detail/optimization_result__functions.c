// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cslam_common_interfaces:msg/OptimizationResult.idl
// generated code does not contain a copyright notice
#include "cslam_common_interfaces/msg/detail/optimization_result__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `factors`
#include "cslam_common_interfaces/msg/detail/pose_graph_edge__functions.h"
// Member `estimates`
#include "cslam_common_interfaces/msg/detail/pose_graph_value__functions.h"

bool
cslam_common_interfaces__msg__OptimizationResult__init(cslam_common_interfaces__msg__OptimizationResult * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // origin_robot_id
  // factors
  if (!cslam_common_interfaces__msg__PoseGraphEdge__Sequence__init(&msg->factors, 0)) {
    cslam_common_interfaces__msg__OptimizationResult__fini(msg);
    return false;
  }
  // estimates
  if (!cslam_common_interfaces__msg__PoseGraphValue__Sequence__init(&msg->estimates, 0)) {
    cslam_common_interfaces__msg__OptimizationResult__fini(msg);
    return false;
  }
  return true;
}

void
cslam_common_interfaces__msg__OptimizationResult__fini(cslam_common_interfaces__msg__OptimizationResult * msg)
{
  if (!msg) {
    return;
  }
  // success
  // origin_robot_id
  // factors
  cslam_common_interfaces__msg__PoseGraphEdge__Sequence__fini(&msg->factors);
  // estimates
  cslam_common_interfaces__msg__PoseGraphValue__Sequence__fini(&msg->estimates);
}

bool
cslam_common_interfaces__msg__OptimizationResult__are_equal(const cslam_common_interfaces__msg__OptimizationResult * lhs, const cslam_common_interfaces__msg__OptimizationResult * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // origin_robot_id
  if (lhs->origin_robot_id != rhs->origin_robot_id) {
    return false;
  }
  // factors
  if (!cslam_common_interfaces__msg__PoseGraphEdge__Sequence__are_equal(
      &(lhs->factors), &(rhs->factors)))
  {
    return false;
  }
  // estimates
  if (!cslam_common_interfaces__msg__PoseGraphValue__Sequence__are_equal(
      &(lhs->estimates), &(rhs->estimates)))
  {
    return false;
  }
  return true;
}

bool
cslam_common_interfaces__msg__OptimizationResult__copy(
  const cslam_common_interfaces__msg__OptimizationResult * input,
  cslam_common_interfaces__msg__OptimizationResult * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // origin_robot_id
  output->origin_robot_id = input->origin_robot_id;
  // factors
  if (!cslam_common_interfaces__msg__PoseGraphEdge__Sequence__copy(
      &(input->factors), &(output->factors)))
  {
    return false;
  }
  // estimates
  if (!cslam_common_interfaces__msg__PoseGraphValue__Sequence__copy(
      &(input->estimates), &(output->estimates)))
  {
    return false;
  }
  return true;
}

cslam_common_interfaces__msg__OptimizationResult *
cslam_common_interfaces__msg__OptimizationResult__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cslam_common_interfaces__msg__OptimizationResult * msg = (cslam_common_interfaces__msg__OptimizationResult *)allocator.allocate(sizeof(cslam_common_interfaces__msg__OptimizationResult), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cslam_common_interfaces__msg__OptimizationResult));
  bool success = cslam_common_interfaces__msg__OptimizationResult__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cslam_common_interfaces__msg__OptimizationResult__destroy(cslam_common_interfaces__msg__OptimizationResult * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cslam_common_interfaces__msg__OptimizationResult__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cslam_common_interfaces__msg__OptimizationResult__Sequence__init(cslam_common_interfaces__msg__OptimizationResult__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cslam_common_interfaces__msg__OptimizationResult * data = NULL;

  if (size) {
    data = (cslam_common_interfaces__msg__OptimizationResult *)allocator.zero_allocate(size, sizeof(cslam_common_interfaces__msg__OptimizationResult), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cslam_common_interfaces__msg__OptimizationResult__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cslam_common_interfaces__msg__OptimizationResult__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
cslam_common_interfaces__msg__OptimizationResult__Sequence__fini(cslam_common_interfaces__msg__OptimizationResult__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cslam_common_interfaces__msg__OptimizationResult__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

cslam_common_interfaces__msg__OptimizationResult__Sequence *
cslam_common_interfaces__msg__OptimizationResult__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cslam_common_interfaces__msg__OptimizationResult__Sequence * array = (cslam_common_interfaces__msg__OptimizationResult__Sequence *)allocator.allocate(sizeof(cslam_common_interfaces__msg__OptimizationResult__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cslam_common_interfaces__msg__OptimizationResult__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cslam_common_interfaces__msg__OptimizationResult__Sequence__destroy(cslam_common_interfaces__msg__OptimizationResult__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cslam_common_interfaces__msg__OptimizationResult__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cslam_common_interfaces__msg__OptimizationResult__Sequence__are_equal(const cslam_common_interfaces__msg__OptimizationResult__Sequence * lhs, const cslam_common_interfaces__msg__OptimizationResult__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cslam_common_interfaces__msg__OptimizationResult__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cslam_common_interfaces__msg__OptimizationResult__Sequence__copy(
  const cslam_common_interfaces__msg__OptimizationResult__Sequence * input,
  cslam_common_interfaces__msg__OptimizationResult__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cslam_common_interfaces__msg__OptimizationResult);
    cslam_common_interfaces__msg__OptimizationResult * data =
      (cslam_common_interfaces__msg__OptimizationResult *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cslam_common_interfaces__msg__OptimizationResult__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          cslam_common_interfaces__msg__OptimizationResult__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cslam_common_interfaces__msg__OptimizationResult__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
