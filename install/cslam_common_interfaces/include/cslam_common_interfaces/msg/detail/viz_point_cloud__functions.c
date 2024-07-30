// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cslam_common_interfaces:msg/VizPointCloud.idl
// generated code does not contain a copyright notice
#include "cslam_common_interfaces/msg/detail/viz_point_cloud__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pointcloud`
#include "sensor_msgs/msg/detail/point_cloud2__functions.h"

bool
cslam_common_interfaces__msg__VizPointCloud__init(cslam_common_interfaces__msg__VizPointCloud * msg)
{
  if (!msg) {
    return false;
  }
  // robot_id
  // keyframe_id
  // pointcloud
  if (!sensor_msgs__msg__PointCloud2__init(&msg->pointcloud)) {
    cslam_common_interfaces__msg__VizPointCloud__fini(msg);
    return false;
  }
  return true;
}

void
cslam_common_interfaces__msg__VizPointCloud__fini(cslam_common_interfaces__msg__VizPointCloud * msg)
{
  if (!msg) {
    return;
  }
  // robot_id
  // keyframe_id
  // pointcloud
  sensor_msgs__msg__PointCloud2__fini(&msg->pointcloud);
}

bool
cslam_common_interfaces__msg__VizPointCloud__are_equal(const cslam_common_interfaces__msg__VizPointCloud * lhs, const cslam_common_interfaces__msg__VizPointCloud * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // robot_id
  if (lhs->robot_id != rhs->robot_id) {
    return false;
  }
  // keyframe_id
  if (lhs->keyframe_id != rhs->keyframe_id) {
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
cslam_common_interfaces__msg__VizPointCloud__copy(
  const cslam_common_interfaces__msg__VizPointCloud * input,
  cslam_common_interfaces__msg__VizPointCloud * output)
{
  if (!input || !output) {
    return false;
  }
  // robot_id
  output->robot_id = input->robot_id;
  // keyframe_id
  output->keyframe_id = input->keyframe_id;
  // pointcloud
  if (!sensor_msgs__msg__PointCloud2__copy(
      &(input->pointcloud), &(output->pointcloud)))
  {
    return false;
  }
  return true;
}

cslam_common_interfaces__msg__VizPointCloud *
cslam_common_interfaces__msg__VizPointCloud__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cslam_common_interfaces__msg__VizPointCloud * msg = (cslam_common_interfaces__msg__VizPointCloud *)allocator.allocate(sizeof(cslam_common_interfaces__msg__VizPointCloud), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cslam_common_interfaces__msg__VizPointCloud));
  bool success = cslam_common_interfaces__msg__VizPointCloud__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cslam_common_interfaces__msg__VizPointCloud__destroy(cslam_common_interfaces__msg__VizPointCloud * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cslam_common_interfaces__msg__VizPointCloud__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cslam_common_interfaces__msg__VizPointCloud__Sequence__init(cslam_common_interfaces__msg__VizPointCloud__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cslam_common_interfaces__msg__VizPointCloud * data = NULL;

  if (size) {
    data = (cslam_common_interfaces__msg__VizPointCloud *)allocator.zero_allocate(size, sizeof(cslam_common_interfaces__msg__VizPointCloud), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cslam_common_interfaces__msg__VizPointCloud__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cslam_common_interfaces__msg__VizPointCloud__fini(&data[i - 1]);
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
cslam_common_interfaces__msg__VizPointCloud__Sequence__fini(cslam_common_interfaces__msg__VizPointCloud__Sequence * array)
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
      cslam_common_interfaces__msg__VizPointCloud__fini(&array->data[i]);
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

cslam_common_interfaces__msg__VizPointCloud__Sequence *
cslam_common_interfaces__msg__VizPointCloud__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cslam_common_interfaces__msg__VizPointCloud__Sequence * array = (cslam_common_interfaces__msg__VizPointCloud__Sequence *)allocator.allocate(sizeof(cslam_common_interfaces__msg__VizPointCloud__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cslam_common_interfaces__msg__VizPointCloud__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cslam_common_interfaces__msg__VizPointCloud__Sequence__destroy(cslam_common_interfaces__msg__VizPointCloud__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cslam_common_interfaces__msg__VizPointCloud__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cslam_common_interfaces__msg__VizPointCloud__Sequence__are_equal(const cslam_common_interfaces__msg__VizPointCloud__Sequence * lhs, const cslam_common_interfaces__msg__VizPointCloud__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cslam_common_interfaces__msg__VizPointCloud__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cslam_common_interfaces__msg__VizPointCloud__Sequence__copy(
  const cslam_common_interfaces__msg__VizPointCloud__Sequence * input,
  cslam_common_interfaces__msg__VizPointCloud__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cslam_common_interfaces__msg__VizPointCloud);
    cslam_common_interfaces__msg__VizPointCloud * data =
      (cslam_common_interfaces__msg__VizPointCloud *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cslam_common_interfaces__msg__VizPointCloud__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          cslam_common_interfaces__msg__VizPointCloud__fini(&data[i]);
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
    if (!cslam_common_interfaces__msg__VizPointCloud__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
