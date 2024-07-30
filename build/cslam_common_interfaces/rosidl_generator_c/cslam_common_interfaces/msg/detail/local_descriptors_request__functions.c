// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cslam_common_interfaces:msg/LocalDescriptorsRequest.idl
// generated code does not contain a copyright notice
#include "cslam_common_interfaces/msg/detail/local_descriptors_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `matches_robot_id`
// Member `matches_keyframe_id`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
cslam_common_interfaces__msg__LocalDescriptorsRequest__init(cslam_common_interfaces__msg__LocalDescriptorsRequest * msg)
{
  if (!msg) {
    return false;
  }
  // keyframe_id
  // matches_robot_id
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->matches_robot_id, 0)) {
    cslam_common_interfaces__msg__LocalDescriptorsRequest__fini(msg);
    return false;
  }
  // matches_keyframe_id
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->matches_keyframe_id, 0)) {
    cslam_common_interfaces__msg__LocalDescriptorsRequest__fini(msg);
    return false;
  }
  return true;
}

void
cslam_common_interfaces__msg__LocalDescriptorsRequest__fini(cslam_common_interfaces__msg__LocalDescriptorsRequest * msg)
{
  if (!msg) {
    return;
  }
  // keyframe_id
  // matches_robot_id
  rosidl_runtime_c__uint32__Sequence__fini(&msg->matches_robot_id);
  // matches_keyframe_id
  rosidl_runtime_c__uint32__Sequence__fini(&msg->matches_keyframe_id);
}

bool
cslam_common_interfaces__msg__LocalDescriptorsRequest__are_equal(const cslam_common_interfaces__msg__LocalDescriptorsRequest * lhs, const cslam_common_interfaces__msg__LocalDescriptorsRequest * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // keyframe_id
  if (lhs->keyframe_id != rhs->keyframe_id) {
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
  return true;
}

bool
cslam_common_interfaces__msg__LocalDescriptorsRequest__copy(
  const cslam_common_interfaces__msg__LocalDescriptorsRequest * input,
  cslam_common_interfaces__msg__LocalDescriptorsRequest * output)
{
  if (!input || !output) {
    return false;
  }
  // keyframe_id
  output->keyframe_id = input->keyframe_id;
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
  return true;
}

cslam_common_interfaces__msg__LocalDescriptorsRequest *
cslam_common_interfaces__msg__LocalDescriptorsRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cslam_common_interfaces__msg__LocalDescriptorsRequest * msg = (cslam_common_interfaces__msg__LocalDescriptorsRequest *)allocator.allocate(sizeof(cslam_common_interfaces__msg__LocalDescriptorsRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cslam_common_interfaces__msg__LocalDescriptorsRequest));
  bool success = cslam_common_interfaces__msg__LocalDescriptorsRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cslam_common_interfaces__msg__LocalDescriptorsRequest__destroy(cslam_common_interfaces__msg__LocalDescriptorsRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cslam_common_interfaces__msg__LocalDescriptorsRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cslam_common_interfaces__msg__LocalDescriptorsRequest__Sequence__init(cslam_common_interfaces__msg__LocalDescriptorsRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cslam_common_interfaces__msg__LocalDescriptorsRequest * data = NULL;

  if (size) {
    data = (cslam_common_interfaces__msg__LocalDescriptorsRequest *)allocator.zero_allocate(size, sizeof(cslam_common_interfaces__msg__LocalDescriptorsRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cslam_common_interfaces__msg__LocalDescriptorsRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cslam_common_interfaces__msg__LocalDescriptorsRequest__fini(&data[i - 1]);
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
cslam_common_interfaces__msg__LocalDescriptorsRequest__Sequence__fini(cslam_common_interfaces__msg__LocalDescriptorsRequest__Sequence * array)
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
      cslam_common_interfaces__msg__LocalDescriptorsRequest__fini(&array->data[i]);
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

cslam_common_interfaces__msg__LocalDescriptorsRequest__Sequence *
cslam_common_interfaces__msg__LocalDescriptorsRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cslam_common_interfaces__msg__LocalDescriptorsRequest__Sequence * array = (cslam_common_interfaces__msg__LocalDescriptorsRequest__Sequence *)allocator.allocate(sizeof(cslam_common_interfaces__msg__LocalDescriptorsRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cslam_common_interfaces__msg__LocalDescriptorsRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cslam_common_interfaces__msg__LocalDescriptorsRequest__Sequence__destroy(cslam_common_interfaces__msg__LocalDescriptorsRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cslam_common_interfaces__msg__LocalDescriptorsRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cslam_common_interfaces__msg__LocalDescriptorsRequest__Sequence__are_equal(const cslam_common_interfaces__msg__LocalDescriptorsRequest__Sequence * lhs, const cslam_common_interfaces__msg__LocalDescriptorsRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cslam_common_interfaces__msg__LocalDescriptorsRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cslam_common_interfaces__msg__LocalDescriptorsRequest__Sequence__copy(
  const cslam_common_interfaces__msg__LocalDescriptorsRequest__Sequence * input,
  cslam_common_interfaces__msg__LocalDescriptorsRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cslam_common_interfaces__msg__LocalDescriptorsRequest);
    cslam_common_interfaces__msg__LocalDescriptorsRequest * data =
      (cslam_common_interfaces__msg__LocalDescriptorsRequest *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cslam_common_interfaces__msg__LocalDescriptorsRequest__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          cslam_common_interfaces__msg__LocalDescriptorsRequest__fini(&data[i]);
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
    if (!cslam_common_interfaces__msg__LocalDescriptorsRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
