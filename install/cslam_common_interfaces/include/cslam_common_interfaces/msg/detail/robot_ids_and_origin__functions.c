// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cslam_common_interfaces:msg/RobotIdsAndOrigin.idl
// generated code does not contain a copyright notice
#include "cslam_common_interfaces/msg/detail/robot_ids_and_origin__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `robots`
// Member `origins`
#include "cslam_common_interfaces/msg/detail/robot_ids__functions.h"

bool
cslam_common_interfaces__msg__RobotIdsAndOrigin__init(cslam_common_interfaces__msg__RobotIdsAndOrigin * msg)
{
  if (!msg) {
    return false;
  }
  // robots
  if (!cslam_common_interfaces__msg__RobotIds__init(&msg->robots)) {
    cslam_common_interfaces__msg__RobotIdsAndOrigin__fini(msg);
    return false;
  }
  // origins
  if (!cslam_common_interfaces__msg__RobotIds__init(&msg->origins)) {
    cslam_common_interfaces__msg__RobotIdsAndOrigin__fini(msg);
    return false;
  }
  return true;
}

void
cslam_common_interfaces__msg__RobotIdsAndOrigin__fini(cslam_common_interfaces__msg__RobotIdsAndOrigin * msg)
{
  if (!msg) {
    return;
  }
  // robots
  cslam_common_interfaces__msg__RobotIds__fini(&msg->robots);
  // origins
  cslam_common_interfaces__msg__RobotIds__fini(&msg->origins);
}

bool
cslam_common_interfaces__msg__RobotIdsAndOrigin__are_equal(const cslam_common_interfaces__msg__RobotIdsAndOrigin * lhs, const cslam_common_interfaces__msg__RobotIdsAndOrigin * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // robots
  if (!cslam_common_interfaces__msg__RobotIds__are_equal(
      &(lhs->robots), &(rhs->robots)))
  {
    return false;
  }
  // origins
  if (!cslam_common_interfaces__msg__RobotIds__are_equal(
      &(lhs->origins), &(rhs->origins)))
  {
    return false;
  }
  return true;
}

bool
cslam_common_interfaces__msg__RobotIdsAndOrigin__copy(
  const cslam_common_interfaces__msg__RobotIdsAndOrigin * input,
  cslam_common_interfaces__msg__RobotIdsAndOrigin * output)
{
  if (!input || !output) {
    return false;
  }
  // robots
  if (!cslam_common_interfaces__msg__RobotIds__copy(
      &(input->robots), &(output->robots)))
  {
    return false;
  }
  // origins
  if (!cslam_common_interfaces__msg__RobotIds__copy(
      &(input->origins), &(output->origins)))
  {
    return false;
  }
  return true;
}

cslam_common_interfaces__msg__RobotIdsAndOrigin *
cslam_common_interfaces__msg__RobotIdsAndOrigin__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cslam_common_interfaces__msg__RobotIdsAndOrigin * msg = (cslam_common_interfaces__msg__RobotIdsAndOrigin *)allocator.allocate(sizeof(cslam_common_interfaces__msg__RobotIdsAndOrigin), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cslam_common_interfaces__msg__RobotIdsAndOrigin));
  bool success = cslam_common_interfaces__msg__RobotIdsAndOrigin__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cslam_common_interfaces__msg__RobotIdsAndOrigin__destroy(cslam_common_interfaces__msg__RobotIdsAndOrigin * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cslam_common_interfaces__msg__RobotIdsAndOrigin__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cslam_common_interfaces__msg__RobotIdsAndOrigin__Sequence__init(cslam_common_interfaces__msg__RobotIdsAndOrigin__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cslam_common_interfaces__msg__RobotIdsAndOrigin * data = NULL;

  if (size) {
    data = (cslam_common_interfaces__msg__RobotIdsAndOrigin *)allocator.zero_allocate(size, sizeof(cslam_common_interfaces__msg__RobotIdsAndOrigin), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cslam_common_interfaces__msg__RobotIdsAndOrigin__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cslam_common_interfaces__msg__RobotIdsAndOrigin__fini(&data[i - 1]);
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
cslam_common_interfaces__msg__RobotIdsAndOrigin__Sequence__fini(cslam_common_interfaces__msg__RobotIdsAndOrigin__Sequence * array)
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
      cslam_common_interfaces__msg__RobotIdsAndOrigin__fini(&array->data[i]);
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

cslam_common_interfaces__msg__RobotIdsAndOrigin__Sequence *
cslam_common_interfaces__msg__RobotIdsAndOrigin__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cslam_common_interfaces__msg__RobotIdsAndOrigin__Sequence * array = (cslam_common_interfaces__msg__RobotIdsAndOrigin__Sequence *)allocator.allocate(sizeof(cslam_common_interfaces__msg__RobotIdsAndOrigin__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cslam_common_interfaces__msg__RobotIdsAndOrigin__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cslam_common_interfaces__msg__RobotIdsAndOrigin__Sequence__destroy(cslam_common_interfaces__msg__RobotIdsAndOrigin__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cslam_common_interfaces__msg__RobotIdsAndOrigin__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cslam_common_interfaces__msg__RobotIdsAndOrigin__Sequence__are_equal(const cslam_common_interfaces__msg__RobotIdsAndOrigin__Sequence * lhs, const cslam_common_interfaces__msg__RobotIdsAndOrigin__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cslam_common_interfaces__msg__RobotIdsAndOrigin__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cslam_common_interfaces__msg__RobotIdsAndOrigin__Sequence__copy(
  const cslam_common_interfaces__msg__RobotIdsAndOrigin__Sequence * input,
  cslam_common_interfaces__msg__RobotIdsAndOrigin__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cslam_common_interfaces__msg__RobotIdsAndOrigin);
    cslam_common_interfaces__msg__RobotIdsAndOrigin * data =
      (cslam_common_interfaces__msg__RobotIdsAndOrigin *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cslam_common_interfaces__msg__RobotIdsAndOrigin__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          cslam_common_interfaces__msg__RobotIdsAndOrigin__fini(&data[i]);
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
    if (!cslam_common_interfaces__msg__RobotIdsAndOrigin__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
