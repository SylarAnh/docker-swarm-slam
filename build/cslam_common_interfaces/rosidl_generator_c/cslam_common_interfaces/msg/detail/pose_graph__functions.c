// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cslam_common_interfaces:msg/PoseGraph.idl
// generated code does not contain a copyright notice
#include "cslam_common_interfaces/msg/detail/pose_graph__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `connected_robots`
#include "cslam_common_interfaces/msg/detail/robot_ids__functions.h"
// Member `edges`
#include "cslam_common_interfaces/msg/detail/pose_graph_edge__functions.h"
// Member `values`
#include "cslam_common_interfaces/msg/detail/pose_graph_value__functions.h"
// Member `gps_values_idx`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `gps_values`
#include "sensor_msgs/msg/detail/nav_sat_fix__functions.h"
// Member `spectral_matches`
#include "cslam_common_interfaces/msg/detail/inter_robot_matches__functions.h"

bool
cslam_common_interfaces__msg__PoseGraph__init(cslam_common_interfaces__msg__PoseGraph * msg)
{
  if (!msg) {
    return false;
  }
  // robot_id
  // origin_robot_id
  // connected_robots
  if (!cslam_common_interfaces__msg__RobotIds__init(&msg->connected_robots)) {
    cslam_common_interfaces__msg__PoseGraph__fini(msg);
    return false;
  }
  // edges
  if (!cslam_common_interfaces__msg__PoseGraphEdge__Sequence__init(&msg->edges, 0)) {
    cslam_common_interfaces__msg__PoseGraph__fini(msg);
    return false;
  }
  // values
  if (!cslam_common_interfaces__msg__PoseGraphValue__Sequence__init(&msg->values, 0)) {
    cslam_common_interfaces__msg__PoseGraph__fini(msg);
    return false;
  }
  // gps_values_idx
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->gps_values_idx, 0)) {
    cslam_common_interfaces__msg__PoseGraph__fini(msg);
    return false;
  }
  // gps_values
  if (!sensor_msgs__msg__NavSatFix__Sequence__init(&msg->gps_values, 0)) {
    cslam_common_interfaces__msg__PoseGraph__fini(msg);
    return false;
  }
  // nb_matches
  // nb_failed_matches
  // nb_vertices_transmitted
  // nb_matches_selected
  // front_end_cumulative_communication_bytes
  // sparsification_cumulative_computation_time
  // spectral_matches
  if (!cslam_common_interfaces__msg__InterRobotMatches__init(&msg->spectral_matches)) {
    cslam_common_interfaces__msg__PoseGraph__fini(msg);
    return false;
  }
  return true;
}

void
cslam_common_interfaces__msg__PoseGraph__fini(cslam_common_interfaces__msg__PoseGraph * msg)
{
  if (!msg) {
    return;
  }
  // robot_id
  // origin_robot_id
  // connected_robots
  cslam_common_interfaces__msg__RobotIds__fini(&msg->connected_robots);
  // edges
  cslam_common_interfaces__msg__PoseGraphEdge__Sequence__fini(&msg->edges);
  // values
  cslam_common_interfaces__msg__PoseGraphValue__Sequence__fini(&msg->values);
  // gps_values_idx
  rosidl_runtime_c__uint32__Sequence__fini(&msg->gps_values_idx);
  // gps_values
  sensor_msgs__msg__NavSatFix__Sequence__fini(&msg->gps_values);
  // nb_matches
  // nb_failed_matches
  // nb_vertices_transmitted
  // nb_matches_selected
  // front_end_cumulative_communication_bytes
  // sparsification_cumulative_computation_time
  // spectral_matches
  cslam_common_interfaces__msg__InterRobotMatches__fini(&msg->spectral_matches);
}

bool
cslam_common_interfaces__msg__PoseGraph__are_equal(const cslam_common_interfaces__msg__PoseGraph * lhs, const cslam_common_interfaces__msg__PoseGraph * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // robot_id
  if (lhs->robot_id != rhs->robot_id) {
    return false;
  }
  // origin_robot_id
  if (lhs->origin_robot_id != rhs->origin_robot_id) {
    return false;
  }
  // connected_robots
  if (!cslam_common_interfaces__msg__RobotIds__are_equal(
      &(lhs->connected_robots), &(rhs->connected_robots)))
  {
    return false;
  }
  // edges
  if (!cslam_common_interfaces__msg__PoseGraphEdge__Sequence__are_equal(
      &(lhs->edges), &(rhs->edges)))
  {
    return false;
  }
  // values
  if (!cslam_common_interfaces__msg__PoseGraphValue__Sequence__are_equal(
      &(lhs->values), &(rhs->values)))
  {
    return false;
  }
  // gps_values_idx
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->gps_values_idx), &(rhs->gps_values_idx)))
  {
    return false;
  }
  // gps_values
  if (!sensor_msgs__msg__NavSatFix__Sequence__are_equal(
      &(lhs->gps_values), &(rhs->gps_values)))
  {
    return false;
  }
  // nb_matches
  if (lhs->nb_matches != rhs->nb_matches) {
    return false;
  }
  // nb_failed_matches
  if (lhs->nb_failed_matches != rhs->nb_failed_matches) {
    return false;
  }
  // nb_vertices_transmitted
  if (lhs->nb_vertices_transmitted != rhs->nb_vertices_transmitted) {
    return false;
  }
  // nb_matches_selected
  if (lhs->nb_matches_selected != rhs->nb_matches_selected) {
    return false;
  }
  // front_end_cumulative_communication_bytes
  if (lhs->front_end_cumulative_communication_bytes != rhs->front_end_cumulative_communication_bytes) {
    return false;
  }
  // sparsification_cumulative_computation_time
  if (lhs->sparsification_cumulative_computation_time != rhs->sparsification_cumulative_computation_time) {
    return false;
  }
  // spectral_matches
  if (!cslam_common_interfaces__msg__InterRobotMatches__are_equal(
      &(lhs->spectral_matches), &(rhs->spectral_matches)))
  {
    return false;
  }
  return true;
}

bool
cslam_common_interfaces__msg__PoseGraph__copy(
  const cslam_common_interfaces__msg__PoseGraph * input,
  cslam_common_interfaces__msg__PoseGraph * output)
{
  if (!input || !output) {
    return false;
  }
  // robot_id
  output->robot_id = input->robot_id;
  // origin_robot_id
  output->origin_robot_id = input->origin_robot_id;
  // connected_robots
  if (!cslam_common_interfaces__msg__RobotIds__copy(
      &(input->connected_robots), &(output->connected_robots)))
  {
    return false;
  }
  // edges
  if (!cslam_common_interfaces__msg__PoseGraphEdge__Sequence__copy(
      &(input->edges), &(output->edges)))
  {
    return false;
  }
  // values
  if (!cslam_common_interfaces__msg__PoseGraphValue__Sequence__copy(
      &(input->values), &(output->values)))
  {
    return false;
  }
  // gps_values_idx
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->gps_values_idx), &(output->gps_values_idx)))
  {
    return false;
  }
  // gps_values
  if (!sensor_msgs__msg__NavSatFix__Sequence__copy(
      &(input->gps_values), &(output->gps_values)))
  {
    return false;
  }
  // nb_matches
  output->nb_matches = input->nb_matches;
  // nb_failed_matches
  output->nb_failed_matches = input->nb_failed_matches;
  // nb_vertices_transmitted
  output->nb_vertices_transmitted = input->nb_vertices_transmitted;
  // nb_matches_selected
  output->nb_matches_selected = input->nb_matches_selected;
  // front_end_cumulative_communication_bytes
  output->front_end_cumulative_communication_bytes = input->front_end_cumulative_communication_bytes;
  // sparsification_cumulative_computation_time
  output->sparsification_cumulative_computation_time = input->sparsification_cumulative_computation_time;
  // spectral_matches
  if (!cslam_common_interfaces__msg__InterRobotMatches__copy(
      &(input->spectral_matches), &(output->spectral_matches)))
  {
    return false;
  }
  return true;
}

cslam_common_interfaces__msg__PoseGraph *
cslam_common_interfaces__msg__PoseGraph__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cslam_common_interfaces__msg__PoseGraph * msg = (cslam_common_interfaces__msg__PoseGraph *)allocator.allocate(sizeof(cslam_common_interfaces__msg__PoseGraph), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cslam_common_interfaces__msg__PoseGraph));
  bool success = cslam_common_interfaces__msg__PoseGraph__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cslam_common_interfaces__msg__PoseGraph__destroy(cslam_common_interfaces__msg__PoseGraph * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cslam_common_interfaces__msg__PoseGraph__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cslam_common_interfaces__msg__PoseGraph__Sequence__init(cslam_common_interfaces__msg__PoseGraph__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cslam_common_interfaces__msg__PoseGraph * data = NULL;

  if (size) {
    data = (cslam_common_interfaces__msg__PoseGraph *)allocator.zero_allocate(size, sizeof(cslam_common_interfaces__msg__PoseGraph), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cslam_common_interfaces__msg__PoseGraph__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cslam_common_interfaces__msg__PoseGraph__fini(&data[i - 1]);
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
cslam_common_interfaces__msg__PoseGraph__Sequence__fini(cslam_common_interfaces__msg__PoseGraph__Sequence * array)
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
      cslam_common_interfaces__msg__PoseGraph__fini(&array->data[i]);
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

cslam_common_interfaces__msg__PoseGraph__Sequence *
cslam_common_interfaces__msg__PoseGraph__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cslam_common_interfaces__msg__PoseGraph__Sequence * array = (cslam_common_interfaces__msg__PoseGraph__Sequence *)allocator.allocate(sizeof(cslam_common_interfaces__msg__PoseGraph__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cslam_common_interfaces__msg__PoseGraph__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cslam_common_interfaces__msg__PoseGraph__Sequence__destroy(cslam_common_interfaces__msg__PoseGraph__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cslam_common_interfaces__msg__PoseGraph__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cslam_common_interfaces__msg__PoseGraph__Sequence__are_equal(const cslam_common_interfaces__msg__PoseGraph__Sequence * lhs, const cslam_common_interfaces__msg__PoseGraph__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cslam_common_interfaces__msg__PoseGraph__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cslam_common_interfaces__msg__PoseGraph__Sequence__copy(
  const cslam_common_interfaces__msg__PoseGraph__Sequence * input,
  cslam_common_interfaces__msg__PoseGraph__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cslam_common_interfaces__msg__PoseGraph);
    cslam_common_interfaces__msg__PoseGraph * data =
      (cslam_common_interfaces__msg__PoseGraph *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cslam_common_interfaces__msg__PoseGraph__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          cslam_common_interfaces__msg__PoseGraph__fini(&data[i]);
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
    if (!cslam_common_interfaces__msg__PoseGraph__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
