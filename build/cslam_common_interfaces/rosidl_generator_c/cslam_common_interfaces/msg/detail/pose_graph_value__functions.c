// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cslam_common_interfaces:msg/PoseGraphValue.idl
// generated code does not contain a copyright notice
#include "cslam_common_interfaces/msg/detail/pose_graph_value__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `key`
#include "cslam_common_interfaces/msg/detail/multi_robot_key__functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
cslam_common_interfaces__msg__PoseGraphValue__init(cslam_common_interfaces__msg__PoseGraphValue * msg)
{
  if (!msg) {
    return false;
  }
  // key
  if (!cslam_common_interfaces__msg__MultiRobotKey__init(&msg->key)) {
    cslam_common_interfaces__msg__PoseGraphValue__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    cslam_common_interfaces__msg__PoseGraphValue__fini(msg);
    return false;
  }
  return true;
}

void
cslam_common_interfaces__msg__PoseGraphValue__fini(cslam_common_interfaces__msg__PoseGraphValue * msg)
{
  if (!msg) {
    return;
  }
  // key
  cslam_common_interfaces__msg__MultiRobotKey__fini(&msg->key);
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
}

bool
cslam_common_interfaces__msg__PoseGraphValue__are_equal(const cslam_common_interfaces__msg__PoseGraphValue * lhs, const cslam_common_interfaces__msg__PoseGraphValue * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // key
  if (!cslam_common_interfaces__msg__MultiRobotKey__are_equal(
      &(lhs->key), &(rhs->key)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  return true;
}

bool
cslam_common_interfaces__msg__PoseGraphValue__copy(
  const cslam_common_interfaces__msg__PoseGraphValue * input,
  cslam_common_interfaces__msg__PoseGraphValue * output)
{
  if (!input || !output) {
    return false;
  }
  // key
  if (!cslam_common_interfaces__msg__MultiRobotKey__copy(
      &(input->key), &(output->key)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  return true;
}

cslam_common_interfaces__msg__PoseGraphValue *
cslam_common_interfaces__msg__PoseGraphValue__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cslam_common_interfaces__msg__PoseGraphValue * msg = (cslam_common_interfaces__msg__PoseGraphValue *)allocator.allocate(sizeof(cslam_common_interfaces__msg__PoseGraphValue), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cslam_common_interfaces__msg__PoseGraphValue));
  bool success = cslam_common_interfaces__msg__PoseGraphValue__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cslam_common_interfaces__msg__PoseGraphValue__destroy(cslam_common_interfaces__msg__PoseGraphValue * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cslam_common_interfaces__msg__PoseGraphValue__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cslam_common_interfaces__msg__PoseGraphValue__Sequence__init(cslam_common_interfaces__msg__PoseGraphValue__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cslam_common_interfaces__msg__PoseGraphValue * data = NULL;

  if (size) {
    data = (cslam_common_interfaces__msg__PoseGraphValue *)allocator.zero_allocate(size, sizeof(cslam_common_interfaces__msg__PoseGraphValue), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cslam_common_interfaces__msg__PoseGraphValue__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cslam_common_interfaces__msg__PoseGraphValue__fini(&data[i - 1]);
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
cslam_common_interfaces__msg__PoseGraphValue__Sequence__fini(cslam_common_interfaces__msg__PoseGraphValue__Sequence * array)
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
      cslam_common_interfaces__msg__PoseGraphValue__fini(&array->data[i]);
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

cslam_common_interfaces__msg__PoseGraphValue__Sequence *
cslam_common_interfaces__msg__PoseGraphValue__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cslam_common_interfaces__msg__PoseGraphValue__Sequence * array = (cslam_common_interfaces__msg__PoseGraphValue__Sequence *)allocator.allocate(sizeof(cslam_common_interfaces__msg__PoseGraphValue__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cslam_common_interfaces__msg__PoseGraphValue__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cslam_common_interfaces__msg__PoseGraphValue__Sequence__destroy(cslam_common_interfaces__msg__PoseGraphValue__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cslam_common_interfaces__msg__PoseGraphValue__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cslam_common_interfaces__msg__PoseGraphValue__Sequence__are_equal(const cslam_common_interfaces__msg__PoseGraphValue__Sequence * lhs, const cslam_common_interfaces__msg__PoseGraphValue__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cslam_common_interfaces__msg__PoseGraphValue__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cslam_common_interfaces__msg__PoseGraphValue__Sequence__copy(
  const cslam_common_interfaces__msg__PoseGraphValue__Sequence * input,
  cslam_common_interfaces__msg__PoseGraphValue__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cslam_common_interfaces__msg__PoseGraphValue);
    cslam_common_interfaces__msg__PoseGraphValue * data =
      (cslam_common_interfaces__msg__PoseGraphValue *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cslam_common_interfaces__msg__PoseGraphValue__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          cslam_common_interfaces__msg__PoseGraphValue__fini(&data[i]);
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
    if (!cslam_common_interfaces__msg__PoseGraphValue__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
