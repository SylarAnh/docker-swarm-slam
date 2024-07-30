// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cslam_common_interfaces:msg/GlobalDescriptor.idl
// generated code does not contain a copyright notice
#include "cslam_common_interfaces/msg/detail/global_descriptor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `descriptor`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
cslam_common_interfaces__msg__GlobalDescriptor__init(cslam_common_interfaces__msg__GlobalDescriptor * msg)
{
  if (!msg) {
    return false;
  }
  // keyframe_id
  // robot_id
  // descriptor
  if (!rosidl_runtime_c__double__Sequence__init(&msg->descriptor, 0)) {
    cslam_common_interfaces__msg__GlobalDescriptor__fini(msg);
    return false;
  }
  return true;
}

void
cslam_common_interfaces__msg__GlobalDescriptor__fini(cslam_common_interfaces__msg__GlobalDescriptor * msg)
{
  if (!msg) {
    return;
  }
  // keyframe_id
  // robot_id
  // descriptor
  rosidl_runtime_c__double__Sequence__fini(&msg->descriptor);
}

bool
cslam_common_interfaces__msg__GlobalDescriptor__are_equal(const cslam_common_interfaces__msg__GlobalDescriptor * lhs, const cslam_common_interfaces__msg__GlobalDescriptor * rhs)
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
  // descriptor
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->descriptor), &(rhs->descriptor)))
  {
    return false;
  }
  return true;
}

bool
cslam_common_interfaces__msg__GlobalDescriptor__copy(
  const cslam_common_interfaces__msg__GlobalDescriptor * input,
  cslam_common_interfaces__msg__GlobalDescriptor * output)
{
  if (!input || !output) {
    return false;
  }
  // keyframe_id
  output->keyframe_id = input->keyframe_id;
  // robot_id
  output->robot_id = input->robot_id;
  // descriptor
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->descriptor), &(output->descriptor)))
  {
    return false;
  }
  return true;
}

cslam_common_interfaces__msg__GlobalDescriptor *
cslam_common_interfaces__msg__GlobalDescriptor__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cslam_common_interfaces__msg__GlobalDescriptor * msg = (cslam_common_interfaces__msg__GlobalDescriptor *)allocator.allocate(sizeof(cslam_common_interfaces__msg__GlobalDescriptor), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cslam_common_interfaces__msg__GlobalDescriptor));
  bool success = cslam_common_interfaces__msg__GlobalDescriptor__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cslam_common_interfaces__msg__GlobalDescriptor__destroy(cslam_common_interfaces__msg__GlobalDescriptor * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cslam_common_interfaces__msg__GlobalDescriptor__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cslam_common_interfaces__msg__GlobalDescriptor__Sequence__init(cslam_common_interfaces__msg__GlobalDescriptor__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cslam_common_interfaces__msg__GlobalDescriptor * data = NULL;

  if (size) {
    data = (cslam_common_interfaces__msg__GlobalDescriptor *)allocator.zero_allocate(size, sizeof(cslam_common_interfaces__msg__GlobalDescriptor), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cslam_common_interfaces__msg__GlobalDescriptor__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cslam_common_interfaces__msg__GlobalDescriptor__fini(&data[i - 1]);
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
cslam_common_interfaces__msg__GlobalDescriptor__Sequence__fini(cslam_common_interfaces__msg__GlobalDescriptor__Sequence * array)
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
      cslam_common_interfaces__msg__GlobalDescriptor__fini(&array->data[i]);
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

cslam_common_interfaces__msg__GlobalDescriptor__Sequence *
cslam_common_interfaces__msg__GlobalDescriptor__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cslam_common_interfaces__msg__GlobalDescriptor__Sequence * array = (cslam_common_interfaces__msg__GlobalDescriptor__Sequence *)allocator.allocate(sizeof(cslam_common_interfaces__msg__GlobalDescriptor__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cslam_common_interfaces__msg__GlobalDescriptor__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cslam_common_interfaces__msg__GlobalDescriptor__Sequence__destroy(cslam_common_interfaces__msg__GlobalDescriptor__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cslam_common_interfaces__msg__GlobalDescriptor__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cslam_common_interfaces__msg__GlobalDescriptor__Sequence__are_equal(const cslam_common_interfaces__msg__GlobalDescriptor__Sequence * lhs, const cslam_common_interfaces__msg__GlobalDescriptor__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cslam_common_interfaces__msg__GlobalDescriptor__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cslam_common_interfaces__msg__GlobalDescriptor__Sequence__copy(
  const cslam_common_interfaces__msg__GlobalDescriptor__Sequence * input,
  cslam_common_interfaces__msg__GlobalDescriptor__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cslam_common_interfaces__msg__GlobalDescriptor);
    cslam_common_interfaces__msg__GlobalDescriptor * data =
      (cslam_common_interfaces__msg__GlobalDescriptor *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cslam_common_interfaces__msg__GlobalDescriptor__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          cslam_common_interfaces__msg__GlobalDescriptor__fini(&data[i]);
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
    if (!cslam_common_interfaces__msg__GlobalDescriptor__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
