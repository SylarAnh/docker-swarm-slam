// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cslam_common_interfaces:msg/InterRobotLoopClosure.idl
// generated code does not contain a copyright notice
#include "cslam_common_interfaces/msg/detail/inter_robot_loop_closure__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `transform`
#include "geometry_msgs/msg/detail/transform__functions.h"

bool
cslam_common_interfaces__msg__InterRobotLoopClosure__init(cslam_common_interfaces__msg__InterRobotLoopClosure * msg)
{
  if (!msg) {
    return false;
  }
  // robot0_keyframe_id
  // robot0_id
  // robot1_keyframe_id
  // robot1_id
  // success
  // transform
  if (!geometry_msgs__msg__Transform__init(&msg->transform)) {
    cslam_common_interfaces__msg__InterRobotLoopClosure__fini(msg);
    return false;
  }
  return true;
}

void
cslam_common_interfaces__msg__InterRobotLoopClosure__fini(cslam_common_interfaces__msg__InterRobotLoopClosure * msg)
{
  if (!msg) {
    return;
  }
  // robot0_keyframe_id
  // robot0_id
  // robot1_keyframe_id
  // robot1_id
  // success
  // transform
  geometry_msgs__msg__Transform__fini(&msg->transform);
}

bool
cslam_common_interfaces__msg__InterRobotLoopClosure__are_equal(const cslam_common_interfaces__msg__InterRobotLoopClosure * lhs, const cslam_common_interfaces__msg__InterRobotLoopClosure * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // robot0_keyframe_id
  if (lhs->robot0_keyframe_id != rhs->robot0_keyframe_id) {
    return false;
  }
  // robot0_id
  if (lhs->robot0_id != rhs->robot0_id) {
    return false;
  }
  // robot1_keyframe_id
  if (lhs->robot1_keyframe_id != rhs->robot1_keyframe_id) {
    return false;
  }
  // robot1_id
  if (lhs->robot1_id != rhs->robot1_id) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // transform
  if (!geometry_msgs__msg__Transform__are_equal(
      &(lhs->transform), &(rhs->transform)))
  {
    return false;
  }
  return true;
}

bool
cslam_common_interfaces__msg__InterRobotLoopClosure__copy(
  const cslam_common_interfaces__msg__InterRobotLoopClosure * input,
  cslam_common_interfaces__msg__InterRobotLoopClosure * output)
{
  if (!input || !output) {
    return false;
  }
  // robot0_keyframe_id
  output->robot0_keyframe_id = input->robot0_keyframe_id;
  // robot0_id
  output->robot0_id = input->robot0_id;
  // robot1_keyframe_id
  output->robot1_keyframe_id = input->robot1_keyframe_id;
  // robot1_id
  output->robot1_id = input->robot1_id;
  // success
  output->success = input->success;
  // transform
  if (!geometry_msgs__msg__Transform__copy(
      &(input->transform), &(output->transform)))
  {
    return false;
  }
  return true;
}

cslam_common_interfaces__msg__InterRobotLoopClosure *
cslam_common_interfaces__msg__InterRobotLoopClosure__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cslam_common_interfaces__msg__InterRobotLoopClosure * msg = (cslam_common_interfaces__msg__InterRobotLoopClosure *)allocator.allocate(sizeof(cslam_common_interfaces__msg__InterRobotLoopClosure), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cslam_common_interfaces__msg__InterRobotLoopClosure));
  bool success = cslam_common_interfaces__msg__InterRobotLoopClosure__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cslam_common_interfaces__msg__InterRobotLoopClosure__destroy(cslam_common_interfaces__msg__InterRobotLoopClosure * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cslam_common_interfaces__msg__InterRobotLoopClosure__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cslam_common_interfaces__msg__InterRobotLoopClosure__Sequence__init(cslam_common_interfaces__msg__InterRobotLoopClosure__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cslam_common_interfaces__msg__InterRobotLoopClosure * data = NULL;

  if (size) {
    data = (cslam_common_interfaces__msg__InterRobotLoopClosure *)allocator.zero_allocate(size, sizeof(cslam_common_interfaces__msg__InterRobotLoopClosure), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cslam_common_interfaces__msg__InterRobotLoopClosure__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cslam_common_interfaces__msg__InterRobotLoopClosure__fini(&data[i - 1]);
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
cslam_common_interfaces__msg__InterRobotLoopClosure__Sequence__fini(cslam_common_interfaces__msg__InterRobotLoopClosure__Sequence * array)
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
      cslam_common_interfaces__msg__InterRobotLoopClosure__fini(&array->data[i]);
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

cslam_common_interfaces__msg__InterRobotLoopClosure__Sequence *
cslam_common_interfaces__msg__InterRobotLoopClosure__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cslam_common_interfaces__msg__InterRobotLoopClosure__Sequence * array = (cslam_common_interfaces__msg__InterRobotLoopClosure__Sequence *)allocator.allocate(sizeof(cslam_common_interfaces__msg__InterRobotLoopClosure__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cslam_common_interfaces__msg__InterRobotLoopClosure__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cslam_common_interfaces__msg__InterRobotLoopClosure__Sequence__destroy(cslam_common_interfaces__msg__InterRobotLoopClosure__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cslam_common_interfaces__msg__InterRobotLoopClosure__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cslam_common_interfaces__msg__InterRobotLoopClosure__Sequence__are_equal(const cslam_common_interfaces__msg__InterRobotLoopClosure__Sequence * lhs, const cslam_common_interfaces__msg__InterRobotLoopClosure__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cslam_common_interfaces__msg__InterRobotLoopClosure__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cslam_common_interfaces__msg__InterRobotLoopClosure__Sequence__copy(
  const cslam_common_interfaces__msg__InterRobotLoopClosure__Sequence * input,
  cslam_common_interfaces__msg__InterRobotLoopClosure__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cslam_common_interfaces__msg__InterRobotLoopClosure);
    cslam_common_interfaces__msg__InterRobotLoopClosure * data =
      (cslam_common_interfaces__msg__InterRobotLoopClosure *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cslam_common_interfaces__msg__InterRobotLoopClosure__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          cslam_common_interfaces__msg__InterRobotLoopClosure__fini(&data[i]);
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
    if (!cslam_common_interfaces__msg__InterRobotLoopClosure__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
