// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cslam_common_interfaces:msg/PoseGraph.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__POSE_GRAPH__STRUCT_H_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__POSE_GRAPH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'connected_robots'
#include "cslam_common_interfaces/msg/detail/robot_ids__struct.h"
// Member 'edges'
#include "cslam_common_interfaces/msg/detail/pose_graph_edge__struct.h"
// Member 'values'
#include "cslam_common_interfaces/msg/detail/pose_graph_value__struct.h"
// Member 'gps_values_idx'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'gps_values'
#include "sensor_msgs/msg/detail/nav_sat_fix__struct.h"
// Member 'spectral_matches'
#include "cslam_common_interfaces/msg/detail/inter_robot_matches__struct.h"

// Struct defined in msg/PoseGraph in the package cslam_common_interfaces.
typedef struct cslam_common_interfaces__msg__PoseGraph
{
  uint32_t robot_id;
  uint32_t origin_robot_id;
  cslam_common_interfaces__msg__RobotIds connected_robots;
  cslam_common_interfaces__msg__PoseGraphEdge__Sequence edges;
  cslam_common_interfaces__msg__PoseGraphValue__Sequence values;
  rosidl_runtime_c__uint32__Sequence gps_values_idx;
  sensor_msgs__msg__NavSatFix__Sequence gps_values;
  uint32_t nb_matches;
  uint32_t nb_failed_matches;
  uint32_t nb_vertices_transmitted;
  uint32_t nb_matches_selected;
  uint64_t front_end_cumulative_communication_bytes;
  double sparsification_cumulative_computation_time;
  cslam_common_interfaces__msg__InterRobotMatches spectral_matches;
} cslam_common_interfaces__msg__PoseGraph;

// Struct for a sequence of cslam_common_interfaces__msg__PoseGraph.
typedef struct cslam_common_interfaces__msg__PoseGraph__Sequence
{
  cslam_common_interfaces__msg__PoseGraph * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cslam_common_interfaces__msg__PoseGraph__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__POSE_GRAPH__STRUCT_H_
