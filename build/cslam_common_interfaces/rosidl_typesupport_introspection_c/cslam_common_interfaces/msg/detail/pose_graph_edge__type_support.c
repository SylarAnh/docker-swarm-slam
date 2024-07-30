// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cslam_common_interfaces:msg/PoseGraphEdge.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cslam_common_interfaces/msg/detail/pose_graph_edge__rosidl_typesupport_introspection_c.h"
#include "cslam_common_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cslam_common_interfaces/msg/detail/pose_graph_edge__functions.h"
#include "cslam_common_interfaces/msg/detail/pose_graph_edge__struct.h"


// Include directives for member types
// Member `key_from`
// Member `key_to`
#include "cslam_common_interfaces/msg/multi_robot_key.h"
// Member `key_from`
// Member `key_to`
#include "cslam_common_interfaces/msg/detail/multi_robot_key__rosidl_typesupport_introspection_c.h"
// Member `measurement`
#include "geometry_msgs/msg/pose.h"
// Member `measurement`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PoseGraphEdge__rosidl_typesupport_introspection_c__PoseGraphEdge_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cslam_common_interfaces__msg__PoseGraphEdge__init(message_memory);
}

void PoseGraphEdge__rosidl_typesupport_introspection_c__PoseGraphEdge_fini_function(void * message_memory)
{
  cslam_common_interfaces__msg__PoseGraphEdge__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PoseGraphEdge__rosidl_typesupport_introspection_c__PoseGraphEdge_message_member_array[4] = {
  {
    "key_from",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces__msg__PoseGraphEdge, key_from),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "key_to",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces__msg__PoseGraphEdge, key_to),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "measurement",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces__msg__PoseGraphEdge, measurement),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "noise_std",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces__msg__PoseGraphEdge, noise_std),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PoseGraphEdge__rosidl_typesupport_introspection_c__PoseGraphEdge_message_members = {
  "cslam_common_interfaces__msg",  // message namespace
  "PoseGraphEdge",  // message name
  4,  // number of fields
  sizeof(cslam_common_interfaces__msg__PoseGraphEdge),
  PoseGraphEdge__rosidl_typesupport_introspection_c__PoseGraphEdge_message_member_array,  // message members
  PoseGraphEdge__rosidl_typesupport_introspection_c__PoseGraphEdge_init_function,  // function to initialize message memory (memory has to be allocated)
  PoseGraphEdge__rosidl_typesupport_introspection_c__PoseGraphEdge_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PoseGraphEdge__rosidl_typesupport_introspection_c__PoseGraphEdge_message_type_support_handle = {
  0,
  &PoseGraphEdge__rosidl_typesupport_introspection_c__PoseGraphEdge_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cslam_common_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cslam_common_interfaces, msg, PoseGraphEdge)() {
  PoseGraphEdge__rosidl_typesupport_introspection_c__PoseGraphEdge_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cslam_common_interfaces, msg, MultiRobotKey)();
  PoseGraphEdge__rosidl_typesupport_introspection_c__PoseGraphEdge_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cslam_common_interfaces, msg, MultiRobotKey)();
  PoseGraphEdge__rosidl_typesupport_introspection_c__PoseGraphEdge_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!PoseGraphEdge__rosidl_typesupport_introspection_c__PoseGraphEdge_message_type_support_handle.typesupport_identifier) {
    PoseGraphEdge__rosidl_typesupport_introspection_c__PoseGraphEdge_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PoseGraphEdge__rosidl_typesupport_introspection_c__PoseGraphEdge_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
