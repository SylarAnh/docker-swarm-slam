// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cslam_common_interfaces:msg/KeyframePointCloud.idl
// generated code does not contain a copyright notice
#include "cslam_common_interfaces/msg/detail/keyframe_point_cloud__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pointcloud`
#include "sensor_msgs/msg/detail/point_cloud2__functions.h"

bool
cslam_common_interfaces__msg__KeyframePointCloud__init(cslam_common_interfaces__msg__KeyframePointCloud * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // pointcloud
  if (!sensor_msgs__msg__PointCloud2__init(&msg->pointcloud)) {
    cslam_common_interfaces__msg__KeyframePointCloud__fini(msg);
    return false;
  }
  return true;
}

void
cslam_common_interfaces__msg__KeyframePointCloud__fini(cslam_common_interfaces__msg__KeyframePointCloud * msg)
{
  if (!msg) {
    return;
  }
  // id
  // pointcloud
  sensor_msgs__msg__PointCloud2__fini(&msg->pointcloud);
}

bool
cslam_common_interfaces__msg__KeyframePointCloud__are_equal(const cslam_common_interfaces__msg__KeyframePointCloud * lhs, const cslam_common_interfaces__msg__KeyframePointCloud * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // pointcloud
  if (!sensor_msgs__msg__PointCloud2__are_equal(
      &(lhs->pointcloud), &(rhs->pointcloud)))
  {
    return false;
  }
  return true;
}

bool
cslam_common_interfaces__msg__KeyframePointCloud__copy(
  const cslam_common_interfaces__msg__KeyframePointCloud * input,
  cslam_common_interfaces__msg__KeyframePointCloud * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // pointcloud
  if (!sensor_msgs__msg__PointCloud2__copy(
      &(input->pointcloud), &(output->pointcloud)))
  {
    return false;
  }
  return true;
}

cslam_common_interfaces__msg__KeyframePointCloud *
cslam_common_interfaces__msg__KeyframePointCloud__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cslam_common_interfaces__msg__KeyframePointCloud * msg = (cslam_common_interfaces__msg__KeyframePointCloud *)allocator.allocate(sizeof(cslam_common_interfaces__msg__KeyframePointCloud), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cslam_common_interfaces__msg__KeyframePointCloud));
  bool success = cslam_common_interfaces__msg__KeyframePointCloud__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cslam_common_interfaces__msg__KeyframePointCloud__destroy(cslam_common_interfaces__msg__KeyframePointCloud * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cslam_common_interfaces__msg__KeyframePointCloud__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cslam_common_interfaces__msg__KeyframePointCloud__Sequence__init(cslam_common_interfaces__msg__KeyframePointCloud__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cslam_common_interfaces__msg__KeyframePointCloud * data = NULL;

  if (size) {
    data = (cslam_common_interfaces__msg__KeyframePointCloud *)allocator.zero_allocate(size, sizeof(cslam_common_interfaces__msg__KeyframePointCloud), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cslam_common_interfaces__msg__KeyframePointCloud__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cslam_common_interfaces__msg__KeyframePointCloud__fini(&data[i - 1]);
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
cslam_common_interfaces__msg__KeyframePointCloud__Sequence__fini(cslam_common_interfaces__msg__KeyframePointCloud__Sequence * array)
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
      cslam_common_interfaces__msg__KeyframePointCloud__fini(&array->data[i]);
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

cslam_common_interfaces__msg__KeyframePointCloud__Sequence *
cslam_common_interfaces__msg__KeyframePointCloud__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cslam_common_interfaces__msg__KeyframePointCloud__Sequence * array = (cslam_common_interfaces__msg__KeyframePointCloud__Sequence *)allocator.allocate(sizeof(cslam_common_interfaces__msg__KeyframePointCloud__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cslam_common_interfaces__msg__KeyframePointCloud__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cslam_common_interfaces__msg__KeyframePointCloud__Sequence__destroy(cslam_common_interfaces__msg__KeyframePointCloud__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cslam_common_interfaces__msg__KeyframePointCloud__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cslam_common_interfaces__msg__KeyframePointCloud__Sequence__are_equal(const cslam_common_interfaces__msg__KeyframePointCloud__Sequence * lhs, const cslam_common_interfaces__msg__KeyframePointCloud__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cslam_common_interfaces__msg__KeyframePointCloud__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cslam_common_interfaces__msg__KeyframePointCloud__Sequence__copy(
  const cslam_common_interfaces__msg__KeyframePointCloud__Sequence * input,
  cslam_common_interfaces__msg__KeyframePointCloud__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cslam_common_interfaces__msg__KeyframePointCloud);
    cslam_common_interfaces__msg__KeyframePointCloud * data =
      (cslam_common_interfaces__msg__KeyframePointCloud *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cslam_common_interfaces__msg__KeyframePointCloud__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          cslam_common_interfaces__msg__KeyframePointCloud__fini(&data[i]);
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
    if (!cslam_common_interfaces__msg__KeyframePointCloud__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
