// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cslam_common_interfaces:msg/PoseGraphEdge.idl
// generated code does not contain a copyright notice
#include "cslam_common_interfaces/msg/detail/pose_graph_edge__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `key_from`
// Member `key_to`
#include "cslam_common_interfaces/msg/detail/multi_robot_key__functions.h"
// Member `measurement`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
cslam_common_interfaces__msg__PoseGraphEdge__init(cslam_common_interfaces__msg__PoseGraphEdge * msg)
{
  if (!msg) {
    return false;
  }
  // key_from
  if (!cslam_common_interfaces__msg__MultiRobotKey__init(&msg->key_from)) {
    cslam_common_interfaces__msg__PoseGraphEdge__fini(msg);
    return false;
  }
  // key_to
  if (!cslam_common_interfaces__msg__MultiRobotKey__init(&msg->key_to)) {
    cslam_common_interfaces__msg__PoseGraphEdge__fini(msg);
    return false;
  }
  // measurement
  if (!geometry_msgs__msg__Pose__init(&msg->measurement)) {
    cslam_common_interfaces__msg__PoseGraphEdge__fini(msg);
    return false;
  }
  // noise_std
  return true;
}

void
cslam_common_interfaces__msg__PoseGraphEdge__fini(cslam_common_interfaces__msg__PoseGraphEdge * msg)
{
  if (!msg) {
    return;
  }
  // key_from
  cslam_common_interfaces__msg__MultiRobotKey__fini(&msg->key_from);
  // key_to
  cslam_common_interfaces__msg__MultiRobotKey__fini(&msg->key_to);
  // measurement
  geometry_msgs__msg__Pose__fini(&msg->measurement);
  // noise_std
}

bool
cslam_common_interfaces__msg__PoseGraphEdge__are_equal(const cslam_common_interfaces__msg__PoseGraphEdge * lhs, const cslam_common_interfaces__msg__PoseGraphEdge * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // key_from
  if (!cslam_common_interfaces__msg__MultiRobotKey__are_equal(
      &(lhs->key_from), &(rhs->key_from)))
  {
    return false;
  }
  // key_to
  if (!cslam_common_interfaces__msg__MultiRobotKey__are_equal(
      &(lhs->key_to), &(rhs->key_to)))
  {
    return false;
  }
  // measurement
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->measurement), &(rhs->measurement)))
  {
    return false;
  }
  // noise_std
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->noise_std[i] != rhs->noise_std[i]) {
      return false;
    }
  }
  return true;
}

bool
cslam_common_interfaces__msg__PoseGraphEdge__copy(
  const cslam_common_interfaces__msg__PoseGraphEdge * input,
  cslam_common_interfaces__msg__PoseGraphEdge * output)
{
  if (!input || !output) {
    return false;
  }
  // key_from
  if (!cslam_common_interfaces__msg__MultiRobotKey__copy(
      &(input->key_from), &(output->key_from)))
  {
    return false;
  }
  // key_to
  if (!cslam_common_interfaces__msg__MultiRobotKey__copy(
      &(input->key_to), &(output->key_to)))
  {
    return false;
  }
  // measurement
  if (!geometry_msgs__msg__Pose__copy(
      &(input->measurement), &(output->measurement)))
  {
    return false;
  }
  // noise_std
  for (size_t i = 0; i < 6; ++i) {
    output->noise_std[i] = input->noise_std[i];
  }
  return true;
}

cslam_common_interfaces__msg__PoseGraphEdge *
cslam_common_interfaces__msg__PoseGraphEdge__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cslam_common_interfaces__msg__PoseGraphEdge * msg = (cslam_common_interfaces__msg__PoseGraphEdge *)allocator.allocate(sizeof(cslam_common_interfaces__msg__PoseGraphEdge), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cslam_common_interfaces__msg__PoseGraphEdge));
  bool success = cslam_common_interfaces__msg__PoseGraphEdge__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cslam_common_interfaces__msg__PoseGraphEdge__destroy(cslam_common_interfaces__msg__PoseGraphEdge * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cslam_common_interfaces__msg__PoseGraphEdge__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cslam_common_interfaces__msg__PoseGraphEdge__Sequence__init(cslam_common_interfaces__msg__PoseGraphEdge__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cslam_common_interfaces__msg__PoseGraphEdge * data = NULL;

  if (size) {
    data = (cslam_common_interfaces__msg__PoseGraphEdge *)allocator.zero_allocate(size, sizeof(cslam_common_interfaces__msg__PoseGraphEdge), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cslam_common_interfaces__msg__PoseGraphEdge__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cslam_common_interfaces__msg__PoseGraphEdge__fini(&data[i - 1]);
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
cslam_common_interfaces__msg__PoseGraphEdge__Sequence__fini(cslam_common_interfaces__msg__PoseGraphEdge__Sequence * array)
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
      cslam_common_interfaces__msg__PoseGraphEdge__fini(&array->data[i]);
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

cslam_common_interfaces__msg__PoseGraphEdge__Sequence *
cslam_common_interfaces__msg__PoseGraphEdge__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cslam_common_interfaces__msg__PoseGraphEdge__Sequence * array = (cslam_common_interfaces__msg__PoseGraphEdge__Sequence *)allocator.allocate(sizeof(cslam_common_interfaces__msg__PoseGraphEdge__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cslam_common_interfaces__msg__PoseGraphEdge__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cslam_common_interfaces__msg__PoseGraphEdge__Sequence__destroy(cslam_common_interfaces__msg__PoseGraphEdge__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cslam_common_interfaces__msg__PoseGraphEdge__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cslam_common_interfaces__msg__PoseGraphEdge__Sequence__are_equal(const cslam_common_interfaces__msg__PoseGraphEdge__Sequence * lhs, const cslam_common_interfaces__msg__PoseGraphEdge__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cslam_common_interfaces__msg__PoseGraphEdge__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cslam_common_interfaces__msg__PoseGraphEdge__Sequence__copy(
  const cslam_common_interfaces__msg__PoseGraphEdge__Sequence * input,
  cslam_common_interfaces__msg__PoseGraphEdge__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cslam_common_interfaces__msg__PoseGraphEdge);
    cslam_common_interfaces__msg__PoseGraphEdge * data =
      (cslam_common_interfaces__msg__PoseGraphEdge *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cslam_common_interfaces__msg__PoseGraphEdge__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          cslam_common_interfaces__msg__PoseGraphEdge__fini(&data[i]);
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
    if (!cslam_common_interfaces__msg__PoseGraphEdge__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
