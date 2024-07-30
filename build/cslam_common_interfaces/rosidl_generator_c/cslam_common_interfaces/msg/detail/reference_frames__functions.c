// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cslam_common_interfaces:msg/ReferenceFrames.idl
// generated code does not contain a copyright notice
#include "cslam_common_interfaces/msg/detail/reference_frames__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `origin_to_local`
// Member `transforms`
#include "geometry_msgs/msg/detail/transform_stamped__functions.h"
// Member `frames_id`
#include "std_msgs/msg/detail/string__functions.h"

bool
cslam_common_interfaces__msg__ReferenceFrames__init(cslam_common_interfaces__msg__ReferenceFrames * msg)
{
  if (!msg) {
    return false;
  }
  // robot_id
  // origin_to_local
  if (!geometry_msgs__msg__TransformStamped__init(&msg->origin_to_local)) {
    cslam_common_interfaces__msg__ReferenceFrames__fini(msg);
    return false;
  }
  // frames_id
  if (!std_msgs__msg__String__Sequence__init(&msg->frames_id, 0)) {
    cslam_common_interfaces__msg__ReferenceFrames__fini(msg);
    return false;
  }
  // transforms
  if (!geometry_msgs__msg__TransformStamped__Sequence__init(&msg->transforms, 0)) {
    cslam_common_interfaces__msg__ReferenceFrames__fini(msg);
    return false;
  }
  return true;
}

void
cslam_common_interfaces__msg__ReferenceFrames__fini(cslam_common_interfaces__msg__ReferenceFrames * msg)
{
  if (!msg) {
    return;
  }
  // robot_id
  // origin_to_local
  geometry_msgs__msg__TransformStamped__fini(&msg->origin_to_local);
  // frames_id
  std_msgs__msg__String__Sequence__fini(&msg->frames_id);
  // transforms
  geometry_msgs__msg__TransformStamped__Sequence__fini(&msg->transforms);
}

bool
cslam_common_interfaces__msg__ReferenceFrames__are_equal(const cslam_common_interfaces__msg__ReferenceFrames * lhs, const cslam_common_interfaces__msg__ReferenceFrames * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // robot_id
  if (lhs->robot_id != rhs->robot_id) {
    return false;
  }
  // origin_to_local
  if (!geometry_msgs__msg__TransformStamped__are_equal(
      &(lhs->origin_to_local), &(rhs->origin_to_local)))
  {
    return false;
  }
  // frames_id
  if (!std_msgs__msg__String__Sequence__are_equal(
      &(lhs->frames_id), &(rhs->frames_id)))
  {
    return false;
  }
  // transforms
  if (!geometry_msgs__msg__TransformStamped__Sequence__are_equal(
      &(lhs->transforms), &(rhs->transforms)))
  {
    return false;
  }
  return true;
}

bool
cslam_common_interfaces__msg__ReferenceFrames__copy(
  const cslam_common_interfaces__msg__ReferenceFrames * input,
  cslam_common_interfaces__msg__ReferenceFrames * output)
{
  if (!input || !output) {
    return false;
  }
  // robot_id
  output->robot_id = input->robot_id;
  // origin_to_local
  if (!geometry_msgs__msg__TransformStamped__copy(
      &(input->origin_to_local), &(output->origin_to_local)))
  {
    return false;
  }
  // frames_id
  if (!std_msgs__msg__String__Sequence__copy(
      &(input->frames_id), &(output->frames_id)))
  {
    return false;
  }
  // transforms
  if (!geometry_msgs__msg__TransformStamped__Sequence__copy(
      &(input->transforms), &(output->transforms)))
  {
    return false;
  }
  return true;
}

cslam_common_interfaces__msg__ReferenceFrames *
cslam_common_interfaces__msg__ReferenceFrames__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cslam_common_interfaces__msg__ReferenceFrames * msg = (cslam_common_interfaces__msg__ReferenceFrames *)allocator.allocate(sizeof(cslam_common_interfaces__msg__ReferenceFrames), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cslam_common_interfaces__msg__ReferenceFrames));
  bool success = cslam_common_interfaces__msg__ReferenceFrames__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cslam_common_interfaces__msg__ReferenceFrames__destroy(cslam_common_interfaces__msg__ReferenceFrames * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cslam_common_interfaces__msg__ReferenceFrames__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cslam_common_interfaces__msg__ReferenceFrames__Sequence__init(cslam_common_interfaces__msg__ReferenceFrames__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cslam_common_interfaces__msg__ReferenceFrames * data = NULL;

  if (size) {
    data = (cslam_common_interfaces__msg__ReferenceFrames *)allocator.zero_allocate(size, sizeof(cslam_common_interfaces__msg__ReferenceFrames), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cslam_common_interfaces__msg__ReferenceFrames__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cslam_common_interfaces__msg__ReferenceFrames__fini(&data[i - 1]);
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
cslam_common_interfaces__msg__ReferenceFrames__Sequence__fini(cslam_common_interfaces__msg__ReferenceFrames__Sequence * array)
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
      cslam_common_interfaces__msg__ReferenceFrames__fini(&array->data[i]);
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

cslam_common_interfaces__msg__ReferenceFrames__Sequence *
cslam_common_interfaces__msg__ReferenceFrames__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cslam_common_interfaces__msg__ReferenceFrames__Sequence * array = (cslam_common_interfaces__msg__ReferenceFrames__Sequence *)allocator.allocate(sizeof(cslam_common_interfaces__msg__ReferenceFrames__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cslam_common_interfaces__msg__ReferenceFrames__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cslam_common_interfaces__msg__ReferenceFrames__Sequence__destroy(cslam_common_interfaces__msg__ReferenceFrames__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cslam_common_interfaces__msg__ReferenceFrames__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cslam_common_interfaces__msg__ReferenceFrames__Sequence__are_equal(const cslam_common_interfaces__msg__ReferenceFrames__Sequence * lhs, const cslam_common_interfaces__msg__ReferenceFrames__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cslam_common_interfaces__msg__ReferenceFrames__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cslam_common_interfaces__msg__ReferenceFrames__Sequence__copy(
  const cslam_common_interfaces__msg__ReferenceFrames__Sequence * input,
  cslam_common_interfaces__msg__ReferenceFrames__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cslam_common_interfaces__msg__ReferenceFrames);
    cslam_common_interfaces__msg__ReferenceFrames * data =
      (cslam_common_interfaces__msg__ReferenceFrames *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cslam_common_interfaces__msg__ReferenceFrames__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          cslam_common_interfaces__msg__ReferenceFrames__fini(&data[i]);
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
    if (!cslam_common_interfaces__msg__ReferenceFrames__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
