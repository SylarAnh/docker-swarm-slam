// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cslam_common_interfaces:msg/LocalKeyframeMatch.idl
// generated code does not contain a copyright notice
#include "cslam_common_interfaces/msg/detail/local_keyframe_match__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
cslam_common_interfaces__msg__LocalKeyframeMatch__init(cslam_common_interfaces__msg__LocalKeyframeMatch * msg)
{
  if (!msg) {
    return false;
  }
  // keyframe0_id
  // keyframe1_id
  return true;
}

void
cslam_common_interfaces__msg__LocalKeyframeMatch__fini(cslam_common_interfaces__msg__LocalKeyframeMatch * msg)
{
  if (!msg) {
    return;
  }
  // keyframe0_id
  // keyframe1_id
}

bool
cslam_common_interfaces__msg__LocalKeyframeMatch__are_equal(const cslam_common_interfaces__msg__LocalKeyframeMatch * lhs, const cslam_common_interfaces__msg__LocalKeyframeMatch * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // keyframe0_id
  if (lhs->keyframe0_id != rhs->keyframe0_id) {
    return false;
  }
  // keyframe1_id
  if (lhs->keyframe1_id != rhs->keyframe1_id) {
    return false;
  }
  return true;
}

bool
cslam_common_interfaces__msg__LocalKeyframeMatch__copy(
  const cslam_common_interfaces__msg__LocalKeyframeMatch * input,
  cslam_common_interfaces__msg__LocalKeyframeMatch * output)
{
  if (!input || !output) {
    return false;
  }
  // keyframe0_id
  output->keyframe0_id = input->keyframe0_id;
  // keyframe1_id
  output->keyframe1_id = input->keyframe1_id;
  return true;
}

cslam_common_interfaces__msg__LocalKeyframeMatch *
cslam_common_interfaces__msg__LocalKeyframeMatch__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cslam_common_interfaces__msg__LocalKeyframeMatch * msg = (cslam_common_interfaces__msg__LocalKeyframeMatch *)allocator.allocate(sizeof(cslam_common_interfaces__msg__LocalKeyframeMatch), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cslam_common_interfaces__msg__LocalKeyframeMatch));
  bool success = cslam_common_interfaces__msg__LocalKeyframeMatch__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cslam_common_interfaces__msg__LocalKeyframeMatch__destroy(cslam_common_interfaces__msg__LocalKeyframeMatch * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cslam_common_interfaces__msg__LocalKeyframeMatch__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cslam_common_interfaces__msg__LocalKeyframeMatch__Sequence__init(cslam_common_interfaces__msg__LocalKeyframeMatch__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cslam_common_interfaces__msg__LocalKeyframeMatch * data = NULL;

  if (size) {
    data = (cslam_common_interfaces__msg__LocalKeyframeMatch *)allocator.zero_allocate(size, sizeof(cslam_common_interfaces__msg__LocalKeyframeMatch), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cslam_common_interfaces__msg__LocalKeyframeMatch__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cslam_common_interfaces__msg__LocalKeyframeMatch__fini(&data[i - 1]);
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
cslam_common_interfaces__msg__LocalKeyframeMatch__Sequence__fini(cslam_common_interfaces__msg__LocalKeyframeMatch__Sequence * array)
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
      cslam_common_interfaces__msg__LocalKeyframeMatch__fini(&array->data[i]);
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

cslam_common_interfaces__msg__LocalKeyframeMatch__Sequence *
cslam_common_interfaces__msg__LocalKeyframeMatch__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cslam_common_interfaces__msg__LocalKeyframeMatch__Sequence * array = (cslam_common_interfaces__msg__LocalKeyframeMatch__Sequence *)allocator.allocate(sizeof(cslam_common_interfaces__msg__LocalKeyframeMatch__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cslam_common_interfaces__msg__LocalKeyframeMatch__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cslam_common_interfaces__msg__LocalKeyframeMatch__Sequence__destroy(cslam_common_interfaces__msg__LocalKeyframeMatch__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cslam_common_interfaces__msg__LocalKeyframeMatch__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cslam_common_interfaces__msg__LocalKeyframeMatch__Sequence__are_equal(const cslam_common_interfaces__msg__LocalKeyframeMatch__Sequence * lhs, const cslam_common_interfaces__msg__LocalKeyframeMatch__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cslam_common_interfaces__msg__LocalKeyframeMatch__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cslam_common_interfaces__msg__LocalKeyframeMatch__Sequence__copy(
  const cslam_common_interfaces__msg__LocalKeyframeMatch__Sequence * input,
  cslam_common_interfaces__msg__LocalKeyframeMatch__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cslam_common_interfaces__msg__LocalKeyframeMatch);
    cslam_common_interfaces__msg__LocalKeyframeMatch * data =
      (cslam_common_interfaces__msg__LocalKeyframeMatch *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cslam_common_interfaces__msg__LocalKeyframeMatch__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          cslam_common_interfaces__msg__LocalKeyframeMatch__fini(&data[i]);
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
    if (!cslam_common_interfaces__msg__LocalKeyframeMatch__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
