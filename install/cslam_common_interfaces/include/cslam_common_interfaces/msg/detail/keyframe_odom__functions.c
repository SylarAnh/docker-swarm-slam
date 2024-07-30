// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cslam_common_interfaces:msg/KeyframeOdom.idl
// generated code does not contain a copyright notice
#include "cslam_common_interfaces/msg/detail/keyframe_odom__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `odom`
#include "nav_msgs/msg/detail/odometry__functions.h"
// Member `gps`
#include "sensor_msgs/msg/detail/nav_sat_fix__functions.h"

bool
cslam_common_interfaces__msg__KeyframeOdom__init(cslam_common_interfaces__msg__KeyframeOdom * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // odom
  if (!nav_msgs__msg__Odometry__init(&msg->odom)) {
    cslam_common_interfaces__msg__KeyframeOdom__fini(msg);
    return false;
  }
  // gps
  if (!sensor_msgs__msg__NavSatFix__init(&msg->gps)) {
    cslam_common_interfaces__msg__KeyframeOdom__fini(msg);
    return false;
  }
  return true;
}

void
cslam_common_interfaces__msg__KeyframeOdom__fini(cslam_common_interfaces__msg__KeyframeOdom * msg)
{
  if (!msg) {
    return;
  }
  // id
  // odom
  nav_msgs__msg__Odometry__fini(&msg->odom);
  // gps
  sensor_msgs__msg__NavSatFix__fini(&msg->gps);
}

bool
cslam_common_interfaces__msg__KeyframeOdom__are_equal(const cslam_common_interfaces__msg__KeyframeOdom * lhs, const cslam_common_interfaces__msg__KeyframeOdom * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // odom
  if (!nav_msgs__msg__Odometry__are_equal(
      &(lhs->odom), &(rhs->odom)))
  {
    return false;
  }
  // gps
  if (!sensor_msgs__msg__NavSatFix__are_equal(
      &(lhs->gps), &(rhs->gps)))
  {
    return false;
  }
  return true;
}

bool
cslam_common_interfaces__msg__KeyframeOdom__copy(
  const cslam_common_interfaces__msg__KeyframeOdom * input,
  cslam_common_interfaces__msg__KeyframeOdom * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // odom
  if (!nav_msgs__msg__Odometry__copy(
      &(input->odom), &(output->odom)))
  {
    return false;
  }
  // gps
  if (!sensor_msgs__msg__NavSatFix__copy(
      &(input->gps), &(output->gps)))
  {
    return false;
  }
  return true;
}

cslam_common_interfaces__msg__KeyframeOdom *
cslam_common_interfaces__msg__KeyframeOdom__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cslam_common_interfaces__msg__KeyframeOdom * msg = (cslam_common_interfaces__msg__KeyframeOdom *)allocator.allocate(sizeof(cslam_common_interfaces__msg__KeyframeOdom), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cslam_common_interfaces__msg__KeyframeOdom));
  bool success = cslam_common_interfaces__msg__KeyframeOdom__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cslam_common_interfaces__msg__KeyframeOdom__destroy(cslam_common_interfaces__msg__KeyframeOdom * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cslam_common_interfaces__msg__KeyframeOdom__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cslam_common_interfaces__msg__KeyframeOdom__Sequence__init(cslam_common_interfaces__msg__KeyframeOdom__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cslam_common_interfaces__msg__KeyframeOdom * data = NULL;

  if (size) {
    data = (cslam_common_interfaces__msg__KeyframeOdom *)allocator.zero_allocate(size, sizeof(cslam_common_interfaces__msg__KeyframeOdom), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cslam_common_interfaces__msg__KeyframeOdom__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cslam_common_interfaces__msg__KeyframeOdom__fini(&data[i - 1]);
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
cslam_common_interfaces__msg__KeyframeOdom__Sequence__fini(cslam_common_interfaces__msg__KeyframeOdom__Sequence * array)
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
      cslam_common_interfaces__msg__KeyframeOdom__fini(&array->data[i]);
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

cslam_common_interfaces__msg__KeyframeOdom__Sequence *
cslam_common_interfaces__msg__KeyframeOdom__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cslam_common_interfaces__msg__KeyframeOdom__Sequence * array = (cslam_common_interfaces__msg__KeyframeOdom__Sequence *)allocator.allocate(sizeof(cslam_common_interfaces__msg__KeyframeOdom__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cslam_common_interfaces__msg__KeyframeOdom__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cslam_common_interfaces__msg__KeyframeOdom__Sequence__destroy(cslam_common_interfaces__msg__KeyframeOdom__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cslam_common_interfaces__msg__KeyframeOdom__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cslam_common_interfaces__msg__KeyframeOdom__Sequence__are_equal(const cslam_common_interfaces__msg__KeyframeOdom__Sequence * lhs, const cslam_common_interfaces__msg__KeyframeOdom__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cslam_common_interfaces__msg__KeyframeOdom__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cslam_common_interfaces__msg__KeyframeOdom__Sequence__copy(
  const cslam_common_interfaces__msg__KeyframeOdom__Sequence * input,
  cslam_common_interfaces__msg__KeyframeOdom__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cslam_common_interfaces__msg__KeyframeOdom);
    cslam_common_interfaces__msg__KeyframeOdom * data =
      (cslam_common_interfaces__msg__KeyframeOdom *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cslam_common_interfaces__msg__KeyframeOdom__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          cslam_common_interfaces__msg__KeyframeOdom__fini(&data[i]);
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
    if (!cslam_common_interfaces__msg__KeyframeOdom__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
