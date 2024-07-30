// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cslam_common_interfaces:msg/LocalImageDescriptors.idl
// generated code does not contain a copyright notice
#include "cslam_common_interfaces/msg/detail/local_image_descriptors__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `matches_robot_id`
// Member `matches_keyframe_id`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `data`
#include "rtabmap_msgs/msg/detail/rgbd_image__functions.h"

bool
cslam_common_interfaces__msg__LocalImageDescriptors__init(cslam_common_interfaces__msg__LocalImageDescriptors * msg)
{
  if (!msg) {
    return false;
  }
  // keyframe_id
  // robot_id
  // matches_robot_id
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->matches_robot_id, 0)) {
    cslam_common_interfaces__msg__LocalImageDescriptors__fini(msg);
    return false;
  }
  // matches_keyframe_id
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->matches_keyframe_id, 0)) {
    cslam_common_interfaces__msg__LocalImageDescriptors__fini(msg);
    return false;
  }
  // data
  if (!rtabmap_msgs__msg__RGBDImage__init(&msg->data)) {
    cslam_common_interfaces__msg__LocalImageDescriptors__fini(msg);
    return false;
  }
  return true;
}

void
cslam_common_interfaces__msg__LocalImageDescriptors__fini(cslam_common_interfaces__msg__LocalImageDescriptors * msg)
{
  if (!msg) {
    return;
  }
  // keyframe_id
  // robot_id
  // matches_robot_id
  rosidl_runtime_c__uint32__Sequence__fini(&msg->matches_robot_id);
  // matches_keyframe_id
  rosidl_runtime_c__uint32__Sequence__fini(&msg->matches_keyframe_id);
  // data
  rtabmap_msgs__msg__RGBDImage__fini(&msg->data);
}

bool
cslam_common_interfaces__msg__LocalImageDescriptors__are_equal(const cslam_common_interfaces__msg__LocalImageDescriptors * lhs, const cslam_common_interfaces__msg__LocalImageDescriptors * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // keyframe_id
  if (lhs->keyframe_id != rhs->keyframe_id) {
    return false;
  }
  // robot_id
  if (lhs->robot_id != rhs->robot_id) {
    return false;
  }
  // matches_robot_id
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->matches_robot_id), &(rhs->matches_robot_id)))
  {
    return false;
  }
  // matches_keyframe_id
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->matches_keyframe_id), &(rhs->matches_keyframe_id)))
  {
    return false;
  }
  // data
  if (!rtabmap_msgs__msg__RGBDImage__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
cslam_common_interfaces__msg__LocalImageDescriptors__copy(
  const cslam_common_interfaces__msg__LocalImageDescriptors * input,
  cslam_common_interfaces__msg__LocalImageDescriptors * output)
{
  if (!input || !output) {
    return false;
  }
  // keyframe_id
  output->keyframe_id = input->keyframe_id;
  // robot_id
  output->robot_id = input->robot_id;
  // matches_robot_id
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->matches_robot_id), &(output->matches_robot_id)))
  {
    return false;
  }
  // matches_keyframe_id
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->matches_keyframe_id), &(output->matches_keyframe_id)))
  {
    return false;
  }
  // data
  if (!rtabmap_msgs__msg__RGBDImage__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

cslam_common_interfaces__msg__LocalImageDescriptors *
cslam_common_interfaces__msg__LocalImageDescriptors__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cslam_common_interfaces__msg__LocalImageDescriptors * msg = (cslam_common_interfaces__msg__LocalImageDescriptors *)allocator.allocate(sizeof(cslam_common_interfaces__msg__LocalImageDescriptors), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cslam_common_interfaces__msg__LocalImageDescriptors));
  bool success = cslam_common_interfaces__msg__LocalImageDescriptors__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cslam_common_interfaces__msg__LocalImageDescriptors__destroy(cslam_common_interfaces__msg__LocalImageDescriptors * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cslam_common_interfaces__msg__LocalImageDescriptors__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cslam_common_interfaces__msg__LocalImageDescriptors__Sequence__init(cslam_common_interfaces__msg__LocalImageDescriptors__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cslam_common_interfaces__msg__LocalImageDescriptors * data = NULL;

  if (size) {
    data = (cslam_common_interfaces__msg__LocalImageDescriptors *)allocator.zero_allocate(size, sizeof(cslam_common_interfaces__msg__LocalImageDescriptors), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cslam_common_interfaces__msg__LocalImageDescriptors__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cslam_common_interfaces__msg__LocalImageDescriptors__fini(&data[i - 1]);
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
cslam_common_interfaces__msg__LocalImageDescriptors__Sequence__fini(cslam_common_interfaces__msg__LocalImageDescriptors__Sequence * array)
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
      cslam_common_interfaces__msg__LocalImageDescriptors__fini(&array->data[i]);
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

cslam_common_interfaces__msg__LocalImageDescriptors__Sequence *
cslam_common_interfaces__msg__LocalImageDescriptors__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cslam_common_interfaces__msg__LocalImageDescriptors__Sequence * array = (cslam_common_interfaces__msg__LocalImageDescriptors__Sequence *)allocator.allocate(sizeof(cslam_common_interfaces__msg__LocalImageDescriptors__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cslam_common_interfaces__msg__LocalImageDescriptors__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cslam_common_interfaces__msg__LocalImageDescriptors__Sequence__destroy(cslam_common_interfaces__msg__LocalImageDescriptors__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cslam_common_interfaces__msg__LocalImageDescriptors__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cslam_common_interfaces__msg__LocalImageDescriptors__Sequence__are_equal(const cslam_common_interfaces__msg__LocalImageDescriptors__Sequence * lhs, const cslam_common_interfaces__msg__LocalImageDescriptors__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cslam_common_interfaces__msg__LocalImageDescriptors__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cslam_common_interfaces__msg__LocalImageDescriptors__Sequence__copy(
  const cslam_common_interfaces__msg__LocalImageDescriptors__Sequence * input,
  cslam_common_interfaces__msg__LocalImageDescriptors__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cslam_common_interfaces__msg__LocalImageDescriptors);
    cslam_common_interfaces__msg__LocalImageDescriptors * data =
      (cslam_common_interfaces__msg__LocalImageDescriptors *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cslam_common_interfaces__msg__LocalImageDescriptors__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          cslam_common_interfaces__msg__LocalImageDescriptors__fini(&data[i]);
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
    if (!cslam_common_interfaces__msg__LocalImageDescriptors__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
