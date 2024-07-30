// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cslam_common_interfaces:msg/IntraRobotLoopClosure.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cslam_common_interfaces/msg/detail/intra_robot_loop_closure__rosidl_typesupport_introspection_c.h"
#include "cslam_common_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cslam_common_interfaces/msg/detail/intra_robot_loop_closure__functions.h"
#include "cslam_common_interfaces/msg/detail/intra_robot_loop_closure__struct.h"


// Include directives for member types
// Member `transform`
#include "geometry_msgs/msg/transform.h"
// Member `transform`
#include "geometry_msgs/msg/detail/transform__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void IntraRobotLoopClosure__rosidl_typesupport_introspection_c__IntraRobotLoopClosure_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cslam_common_interfaces__msg__IntraRobotLoopClosure__init(message_memory);
}

void IntraRobotLoopClosure__rosidl_typesupport_introspection_c__IntraRobotLoopClosure_fini_function(void * message_memory)
{
  cslam_common_interfaces__msg__IntraRobotLoopClosure__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember IntraRobotLoopClosure__rosidl_typesupport_introspection_c__IntraRobotLoopClosure_message_member_array[4] = {
  {
    "keyframe0_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces__msg__IntraRobotLoopClosure, keyframe0_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "keyframe1_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces__msg__IntraRobotLoopClosure, keyframe1_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces__msg__IntraRobotLoopClosure, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "transform",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces__msg__IntraRobotLoopClosure, transform),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers IntraRobotLoopClosure__rosidl_typesupport_introspection_c__IntraRobotLoopClosure_message_members = {
  "cslam_common_interfaces__msg",  // message namespace
  "IntraRobotLoopClosure",  // message name
  4,  // number of fields
  sizeof(cslam_common_interfaces__msg__IntraRobotLoopClosure),
  IntraRobotLoopClosure__rosidl_typesupport_introspection_c__IntraRobotLoopClosure_message_member_array,  // message members
  IntraRobotLoopClosure__rosidl_typesupport_introspection_c__IntraRobotLoopClosure_init_function,  // function to initialize message memory (memory has to be allocated)
  IntraRobotLoopClosure__rosidl_typesupport_introspection_c__IntraRobotLoopClosure_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t IntraRobotLoopClosure__rosidl_typesupport_introspection_c__IntraRobotLoopClosure_message_type_support_handle = {
  0,
  &IntraRobotLoopClosure__rosidl_typesupport_introspection_c__IntraRobotLoopClosure_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cslam_common_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cslam_common_interfaces, msg, IntraRobotLoopClosure)() {
  IntraRobotLoopClosure__rosidl_typesupport_introspection_c__IntraRobotLoopClosure_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Transform)();
  if (!IntraRobotLoopClosure__rosidl_typesupport_introspection_c__IntraRobotLoopClosure_message_type_support_handle.typesupport_identifier) {
    IntraRobotLoopClosure__rosidl_typesupport_introspection_c__IntraRobotLoopClosure_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &IntraRobotLoopClosure__rosidl_typesupport_introspection_c__IntraRobotLoopClosure_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
