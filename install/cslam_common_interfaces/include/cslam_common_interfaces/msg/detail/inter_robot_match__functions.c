// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cslam_common_interfaces:msg/InterRobotMatch.idl
// generated code does not contain a copyright notice
#include "cslam_common_interfaces/msg/detail/inter_robot_match__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
cslam_common_interfaces__msg__InterRobotMatch__init(cslam_common_interfaces__msg__InterRobotMatch * msg)
{
  if (!msg) {
    return false;
  }
  // robot0_id
  // robot0_keyframe_id
  // robot1_id
  // robot1_keyframe_id
  // weight
  return true;
}

void
cslam_common_interfaces__msg__InterRobotMatch__fini(cslam_common_interfaces__msg__InterRobotMatch * msg)
{
  if (!msg) {
    return;
  }
  // robot0_id
  // robot0_keyframe_id
  // robot1_id
  // robot1_keyframe_id
  // weight
}

bool
cslam_common_interfaces__msg__InterRobotMatch__are_equal(const cslam_common_interfaces__msg__InterRobotMatch * lhs, const cslam_common_interfaces__msg__InterRobotMatch * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // robot0_id
  if (lhs->robot0_id != rhs->robot0_id) {
    return false;
  }
  // robot0_keyframe_id
  if (lhs->robot0_keyframe_id != rhs->robot0_keyframe_id) {
    return false;
  }
  // robot1_id
  if (lhs->robot1_id != rhs->robot1_id) {
    return false;
  }
  // robot1_keyframe_id
  if (lhs->robot1_keyframe_id != rhs->robot1_keyframe_id) {
    return false;
  }
  // weight
  if (lhs->weight != rhs->weight) {
    return false;
  }
  return true;
}

bool
cslam_common_interfaces__msg__InterRobotMatch__copy(
  const cslam_common_interfaces__msg__InterRobotMatch * input,
  cslam_common_interfaces__msg__InterRobotMatch * output)
{
  if (!input || !output) {
    return false;
  }
  // robot0_id
  output->robot0_id = input->robot0_id;
  // robot0_keyframe_id
  output->robot0_keyframe_id = input->robot0_keyframe_id;
  // robot1_id
  output->robot1_id = input->robot1_id;
  // robot1_keyframe_id
  output->robot1_keyframe_id = input->robot1_keyframe_id;
  // weight
  output->weight = input->weight;
  return true;
}

cslam_common_interfaces__msg__InterRobotMatch *
cslam_common_interfaces__msg__InterRobotMatch__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cslam_common_interfaces__msg__InterRobotMatch * msg = (cslam_common_interfaces__msg__InterRobotMatch *)allocator.allocate(sizeof(cslam_common_interfaces__msg__InterRobotMatch), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cslam_common_interfaces__msg__InterRobotMatch));
  bool success = cslam_common_interfaces__msg__InterRobotMatch__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cslam_common_interfaces__msg__InterRobotMatch__destroy(cslam_common_interfaces__msg__InterRobotMatch * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cslam_common_interfaces__msg__InterRobotMatch__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cslam_common_interfaces__msg__InterRobotMatch__Sequence__init(cslam_common_interfaces__msg__InterRobotMatch__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cslam_common_interfaces__msg__InterRobotMatch * data = NULL;

  if (size) {
    data = (cslam_common_interfaces__msg__InterRobotMatch *)allocator.zero_allocate(size, sizeof(cslam_common_interfaces__msg__InterRobotMatch), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cslam_common_interfaces__msg__InterRobotMatch__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cslam_common_interfaces__msg__InterRobotMatch__fini(&data[i - 1]);
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
cslam_common_interfaces__msg__InterRobotMatch__Sequence__fini(cslam_common_interfaces__msg__InterRobotMatch__Sequence * array)
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
      cslam_common_interfaces__msg__InterRobotMatch__fini(&array->data[i]);
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

cslam_common_interfaces__msg__InterRobotMatch__Sequence *
cslam_common_interfaces__msg__InterRobotMatch__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cslam_common_interfaces__msg__InterRobotMatch__Sequence * array = (cslam_common_interfaces__msg__InterRobotMatch__Sequence *)allocator.allocate(sizeof(cslam_common_interfaces__msg__InterRobotMatch__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cslam_common_interfaces__msg__InterRobotMatch__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cslam_common_interfaces__msg__InterRobotMatch__Sequence__destroy(cslam_common_interfaces__msg__InterRobotMatch__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cslam_common_interfaces__msg__InterRobotMatch__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cslam_common_interfaces__msg__InterRobotMatch__Sequence__are_equal(const cslam_common_interfaces__msg__InterRobotMatch__Sequence * lhs, const cslam_common_interfaces__msg__InterRobotMatch__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cslam_common_interfaces__msg__InterRobotMatch__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cslam_common_interfaces__msg__InterRobotMatch__Sequence__copy(
  const cslam_common_interfaces__msg__InterRobotMatch__Sequence * input,
  cslam_common_interfaces__msg__InterRobotMatch__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cslam_common_interfaces__msg__InterRobotMatch);
    cslam_common_interfaces__msg__InterRobotMatch * data =
      (cslam_common_interfaces__msg__InterRobotMatch *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cslam_common_interfaces__msg__InterRobotMatch__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          cslam_common_interfaces__msg__InterRobotMatch__fini(&data[i]);
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
    if (!cslam_common_interfaces__msg__InterRobotMatch__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
