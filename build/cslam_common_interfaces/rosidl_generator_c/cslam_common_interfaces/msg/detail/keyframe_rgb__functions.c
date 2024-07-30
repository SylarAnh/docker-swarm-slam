// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cslam_common_interfaces:msg/KeyframeRGB.idl
// generated code does not contain a copyright notice
#include "cslam_common_interfaces/msg/detail/keyframe_rgb__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `image`
#include "sensor_msgs/msg/detail/image__functions.h"

bool
cslam_common_interfaces__msg__KeyframeRGB__init(cslam_common_interfaces__msg__KeyframeRGB * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // image
  if (!sensor_msgs__msg__Image__init(&msg->image)) {
    cslam_common_interfaces__msg__KeyframeRGB__fini(msg);
    return false;
  }
  return true;
}

void
cslam_common_interfaces__msg__KeyframeRGB__fini(cslam_common_interfaces__msg__KeyframeRGB * msg)
{
  if (!msg) {
    return;
  }
  // id
  // image
  sensor_msgs__msg__Image__fini(&msg->image);
}

bool
cslam_common_interfaces__msg__KeyframeRGB__are_equal(const cslam_common_interfaces__msg__KeyframeRGB * lhs, const cslam_common_interfaces__msg__KeyframeRGB * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->image), &(rhs->image)))
  {
    return false;
  }
  return true;
}

bool
cslam_common_interfaces__msg__KeyframeRGB__copy(
  const cslam_common_interfaces__msg__KeyframeRGB * input,
  cslam_common_interfaces__msg__KeyframeRGB * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // image
  if (!sensor_msgs__msg__Image__copy(
      &(input->image), &(output->image)))
  {
    return false;
  }
  return true;
}

cslam_common_interfaces__msg__KeyframeRGB *
cslam_common_interfaces__msg__KeyframeRGB__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cslam_common_interfaces__msg__KeyframeRGB * msg = (cslam_common_interfaces__msg__KeyframeRGB *)allocator.allocate(sizeof(cslam_common_interfaces__msg__KeyframeRGB), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cslam_common_interfaces__msg__KeyframeRGB));
  bool success = cslam_common_interfaces__msg__KeyframeRGB__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cslam_common_interfaces__msg__KeyframeRGB__destroy(cslam_common_interfaces__msg__KeyframeRGB * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cslam_common_interfaces__msg__KeyframeRGB__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cslam_common_interfaces__msg__KeyframeRGB__Sequence__init(cslam_common_interfaces__msg__KeyframeRGB__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cslam_common_interfaces__msg__KeyframeRGB * data = NULL;

  if (size) {
    data = (cslam_common_interfaces__msg__KeyframeRGB *)allocator.zero_allocate(size, sizeof(cslam_common_interfaces__msg__KeyframeRGB), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cslam_common_interfaces__msg__KeyframeRGB__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cslam_common_interfaces__msg__KeyframeRGB__fini(&data[i - 1]);
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
cslam_common_interfaces__msg__KeyframeRGB__Sequence__fini(cslam_common_interfaces__msg__KeyframeRGB__Sequence * array)
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
      cslam_common_interfaces__msg__KeyframeRGB__fini(&array->data[i]);
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

cslam_common_interfaces__msg__KeyframeRGB__Sequence *
cslam_common_interfaces__msg__KeyframeRGB__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cslam_common_interfaces__msg__KeyframeRGB__Sequence * array = (cslam_common_interfaces__msg__KeyframeRGB__Sequence *)allocator.allocate(sizeof(cslam_common_interfaces__msg__KeyframeRGB__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cslam_common_interfaces__msg__KeyframeRGB__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cslam_common_interfaces__msg__KeyframeRGB__Sequence__destroy(cslam_common_interfaces__msg__KeyframeRGB__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cslam_common_interfaces__msg__KeyframeRGB__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cslam_common_interfaces__msg__KeyframeRGB__Sequence__are_equal(const cslam_common_interfaces__msg__KeyframeRGB__Sequence * lhs, const cslam_common_interfaces__msg__KeyframeRGB__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cslam_common_interfaces__msg__KeyframeRGB__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cslam_common_interfaces__msg__KeyframeRGB__Sequence__copy(
  const cslam_common_interfaces__msg__KeyframeRGB__Sequence * input,
  cslam_common_interfaces__msg__KeyframeRGB__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cslam_common_interfaces__msg__KeyframeRGB);
    cslam_common_interfaces__msg__KeyframeRGB * data =
      (cslam_common_interfaces__msg__KeyframeRGB *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cslam_common_interfaces__msg__KeyframeRGB__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          cslam_common_interfaces__msg__KeyframeRGB__fini(&data[i]);
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
    if (!cslam_common_interfaces__msg__KeyframeRGB__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
