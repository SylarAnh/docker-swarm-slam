// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cslam_common_interfaces:msg/PoseGraph.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cslam_common_interfaces/msg/detail/pose_graph__rosidl_typesupport_introspection_c.h"
#include "cslam_common_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cslam_common_interfaces/msg/detail/pose_graph__functions.h"
#include "cslam_common_interfaces/msg/detail/pose_graph__struct.h"


// Include directives for member types
// Member `connected_robots`
#include "cslam_common_interfaces/msg/robot_ids.h"
// Member `connected_robots`
#include "cslam_common_interfaces/msg/detail/robot_ids__rosidl_typesupport_introspection_c.h"
// Member `edges`
#include "cslam_common_interfaces/msg/pose_graph_edge.h"
// Member `edges`
#include "cslam_common_interfaces/msg/detail/pose_graph_edge__rosidl_typesupport_introspection_c.h"
// Member `values`
#include "cslam_common_interfaces/msg/pose_graph_value.h"
// Member `values`
#include "cslam_common_interfaces/msg/detail/pose_graph_value__rosidl_typesupport_introspection_c.h"
// Member `gps_values_idx`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `gps_values`
#include "sensor_msgs/msg/nav_sat_fix.h"
// Member `gps_values`
#include "sensor_msgs/msg/detail/nav_sat_fix__rosidl_typesupport_introspection_c.h"
// Member `spectral_matches`
#include "cslam_common_interfaces/msg/inter_robot_matches.h"
// Member `spectral_matches`
#include "cslam_common_interfaces/msg/detail/inter_robot_matches__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PoseGraph__rosidl_typesupport_introspection_c__PoseGraph_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cslam_common_interfaces__msg__PoseGraph__init(message_memory);
}

void PoseGraph__rosidl_typesupport_introspection_c__PoseGraph_fini_function(void * message_memory)
{
  cslam_common_interfaces__msg__PoseGraph__fini(message_memory);
}

size_t PoseGraph__rosidl_typesupport_introspection_c__size_function__PoseGraphEdge__edges(
  const void * untyped_member)
{
  const cslam_common_interfaces__msg__PoseGraphEdge__Sequence * member =
    (const cslam_common_interfaces__msg__PoseGraphEdge__Sequence *)(untyped_member);
  return member->size;
}

const void * PoseGraph__rosidl_typesupport_introspection_c__get_const_function__PoseGraphEdge__edges(
  const void * untyped_member, size_t index)
{
  const cslam_common_interfaces__msg__PoseGraphEdge__Sequence * member =
    (const cslam_common_interfaces__msg__PoseGraphEdge__Sequence *)(untyped_member);
  return &member->data[index];
}

void * PoseGraph__rosidl_typesupport_introspection_c__get_function__PoseGraphEdge__edges(
  void * untyped_member, size_t index)
{
  cslam_common_interfaces__msg__PoseGraphEdge__Sequence * member =
    (cslam_common_interfaces__msg__PoseGraphEdge__Sequence *)(untyped_member);
  return &member->data[index];
}

bool PoseGraph__rosidl_typesupport_introspection_c__resize_function__PoseGraphEdge__edges(
  void * untyped_member, size_t size)
{
  cslam_common_interfaces__msg__PoseGraphEdge__Sequence * member =
    (cslam_common_interfaces__msg__PoseGraphEdge__Sequence *)(untyped_member);
  cslam_common_interfaces__msg__PoseGraphEdge__Sequence__fini(member);
  return cslam_common_interfaces__msg__PoseGraphEdge__Sequence__init(member, size);
}

size_t PoseGraph__rosidl_typesupport_introspection_c__size_function__PoseGraphValue__values(
  const void * untyped_member)
{
  const cslam_common_interfaces__msg__PoseGraphValue__Sequence * member =
    (const cslam_common_interfaces__msg__PoseGraphValue__Sequence *)(untyped_member);
  return member->size;
}

const void * PoseGraph__rosidl_typesupport_introspection_c__get_const_function__PoseGraphValue__values(
  const void * untyped_member, size_t index)
{
  const cslam_common_interfaces__msg__PoseGraphValue__Sequence * member =
    (const cslam_common_interfaces__msg__PoseGraphValue__Sequence *)(untyped_member);
  return &member->data[index];
}

void * PoseGraph__rosidl_typesupport_introspection_c__get_function__PoseGraphValue__values(
  void * untyped_member, size_t index)
{
  cslam_common_interfaces__msg__PoseGraphValue__Sequence * member =
    (cslam_common_interfaces__msg__PoseGraphValue__Sequence *)(untyped_member);
  return &member->data[index];
}

bool PoseGraph__rosidl_typesupport_introspection_c__resize_function__PoseGraphValue__values(
  void * untyped_member, size_t size)
{
  cslam_common_interfaces__msg__PoseGraphValue__Sequence * member =
    (cslam_common_interfaces__msg__PoseGraphValue__Sequence *)(untyped_member);
  cslam_common_interfaces__msg__PoseGraphValue__Sequence__fini(member);
  return cslam_common_interfaces__msg__PoseGraphValue__Sequence__init(member, size);
}

size_t PoseGraph__rosidl_typesupport_introspection_c__size_function__NavSatFix__gps_values(
  const void * untyped_member)
{
  const sensor_msgs__msg__NavSatFix__Sequence * member =
    (const sensor_msgs__msg__NavSatFix__Sequence *)(untyped_member);
  return member->size;
}

const void * PoseGraph__rosidl_typesupport_introspection_c__get_const_function__NavSatFix__gps_values(
  const void * untyped_member, size_t index)
{
  const sensor_msgs__msg__NavSatFix__Sequence * member =
    (const sensor_msgs__msg__NavSatFix__Sequence *)(untyped_member);
  return &member->data[index];
}

void * PoseGraph__rosidl_typesupport_introspection_c__get_function__NavSatFix__gps_values(
  void * untyped_member, size_t index)
{
  sensor_msgs__msg__NavSatFix__Sequence * member =
    (sensor_msgs__msg__NavSatFix__Sequence *)(untyped_member);
  return &member->data[index];
}

bool PoseGraph__rosidl_typesupport_introspection_c__resize_function__NavSatFix__gps_values(
  void * untyped_member, size_t size)
{
  sensor_msgs__msg__NavSatFix__Sequence * member =
    (sensor_msgs__msg__NavSatFix__Sequence *)(untyped_member);
  sensor_msgs__msg__NavSatFix__Sequence__fini(member);
  return sensor_msgs__msg__NavSatFix__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember PoseGraph__rosidl_typesupport_introspection_c__PoseGraph_message_member_array[14] = {
  {
    "robot_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces__msg__PoseGraph, robot_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "origin_robot_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces__msg__PoseGraph, origin_robot_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "connected_robots",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces__msg__PoseGraph, connected_robots),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "edges",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces__msg__PoseGraph, edges),  // bytes offset in struct
    NULL,  // default value
    PoseGraph__rosidl_typesupport_introspection_c__size_function__PoseGraphEdge__edges,  // size() function pointer
    PoseGraph__rosidl_typesupport_introspection_c__get_const_function__PoseGraphEdge__edges,  // get_const(index) function pointer
    PoseGraph__rosidl_typesupport_introspection_c__get_function__PoseGraphEdge__edges,  // get(index) function pointer
    PoseGraph__rosidl_typesupport_introspection_c__resize_function__PoseGraphEdge__edges  // resize(index) function pointer
  },
  {
    "values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces__msg__PoseGraph, values),  // bytes offset in struct
    NULL,  // default value
    PoseGraph__rosidl_typesupport_introspection_c__size_function__PoseGraphValue__values,  // size() function pointer
    PoseGraph__rosidl_typesupport_introspection_c__get_const_function__PoseGraphValue__values,  // get_const(index) function pointer
    PoseGraph__rosidl_typesupport_introspection_c__get_function__PoseGraphValue__values,  // get(index) function pointer
    PoseGraph__rosidl_typesupport_introspection_c__resize_function__PoseGraphValue__values  // resize(index) function pointer
  },
  {
    "gps_values_idx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces__msg__PoseGraph, gps_values_idx),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gps_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces__msg__PoseGraph, gps_values),  // bytes offset in struct
    NULL,  // default value
    PoseGraph__rosidl_typesupport_introspection_c__size_function__NavSatFix__gps_values,  // size() function pointer
    PoseGraph__rosidl_typesupport_introspection_c__get_const_function__NavSatFix__gps_values,  // get_const(index) function pointer
    PoseGraph__rosidl_typesupport_introspection_c__get_function__NavSatFix__gps_values,  // get(index) function pointer
    PoseGraph__rosidl_typesupport_introspection_c__resize_function__NavSatFix__gps_values  // resize(index) function pointer
  },
  {
    "nb_matches",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces__msg__PoseGraph, nb_matches),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nb_failed_matches",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces__msg__PoseGraph, nb_failed_matches),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nb_vertices_transmitted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces__msg__PoseGraph, nb_vertices_transmitted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nb_matches_selected",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces__msg__PoseGraph, nb_matches_selected),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "front_end_cumulative_communication_bytes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces__msg__PoseGraph, front_end_cumulative_communication_bytes),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sparsification_cumulative_computation_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces__msg__PoseGraph, sparsification_cumulative_computation_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "spectral_matches",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces__msg__PoseGraph, spectral_matches),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PoseGraph__rosidl_typesupport_introspection_c__PoseGraph_message_members = {
  "cslam_common_interfaces__msg",  // message namespace
  "PoseGraph",  // message name
  14,  // number of fields
  sizeof(cslam_common_interfaces__msg__PoseGraph),
  PoseGraph__rosidl_typesupport_introspection_c__PoseGraph_message_member_array,  // message members
  PoseGraph__rosidl_typesupport_introspection_c__PoseGraph_init_function,  // function to initialize message memory (memory has to be allocated)
  PoseGraph__rosidl_typesupport_introspection_c__PoseGraph_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PoseGraph__rosidl_typesupport_introspection_c__PoseGraph_message_type_support_handle = {
  0,
  &PoseGraph__rosidl_typesupport_introspection_c__PoseGraph_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cslam_common_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cslam_common_interfaces, msg, PoseGraph)() {
  PoseGraph__rosidl_typesupport_introspection_c__PoseGraph_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cslam_common_interfaces, msg, RobotIds)();
  PoseGraph__rosidl_typesupport_introspection_c__PoseGraph_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cslam_common_interfaces, msg, PoseGraphEdge)();
  PoseGraph__rosidl_typesupport_introspection_c__PoseGraph_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cslam_common_interfaces, msg, PoseGraphValue)();
  PoseGraph__rosidl_typesupport_introspection_c__PoseGraph_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, NavSatFix)();
  PoseGraph__rosidl_typesupport_introspection_c__PoseGraph_message_member_array[13].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cslam_common_interfaces, msg, InterRobotMatches)();
  if (!PoseGraph__rosidl_typesupport_introspection_c__PoseGraph_message_type_support_handle.typesupport_identifier) {
    PoseGraph__rosidl_typesupport_introspection_c__PoseGraph_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PoseGraph__rosidl_typesupport_introspection_c__PoseGraph_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
