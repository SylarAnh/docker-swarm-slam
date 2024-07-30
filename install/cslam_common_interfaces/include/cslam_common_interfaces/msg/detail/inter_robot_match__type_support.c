// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cslam_common_interfaces:msg/InterRobotMatch.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cslam_common_interfaces/msg/detail/inter_robot_match__rosidl_typesupport_introspection_c.h"
#include "cslam_common_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cslam_common_interfaces/msg/detail/inter_robot_match__functions.h"
#include "cslam_common_interfaces/msg/detail/inter_robot_match__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void InterRobotMatch__rosidl_typesupport_introspection_c__InterRobotMatch_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cslam_common_interfaces__msg__InterRobotMatch__init(message_memory);
}

void InterRobotMatch__rosidl_typesupport_introspection_c__InterRobotMatch_fini_function(void * message_memory)
{
  cslam_common_interfaces__msg__InterRobotMatch__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember InterRobotMatch__rosidl_typesupport_introspection_c__InterRobotMatch_message_member_array[5] = {
  {
    "robot0_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces__msg__InterRobotMatch, robot0_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot0_keyframe_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces__msg__InterRobotMatch, robot0_keyframe_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot1_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces__msg__InterRobotMatch, robot1_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot1_keyframe_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces__msg__InterRobotMatch, robot1_keyframe_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "weight",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces__msg__InterRobotMatch, weight),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers InterRobotMatch__rosidl_typesupport_introspection_c__InterRobotMatch_message_members = {
  "cslam_common_interfaces__msg",  // message namespace
  "InterRobotMatch",  // message name
  5,  // number of fields
  sizeof(cslam_common_interfaces__msg__InterRobotMatch),
  InterRobotMatch__rosidl_typesupport_introspection_c__InterRobotMatch_message_member_array,  // message members
  InterRobotMatch__rosidl_typesupport_introspection_c__InterRobotMatch_init_function,  // function to initialize message memory (memory has to be allocated)
  InterRobotMatch__rosidl_typesupport_introspection_c__InterRobotMatch_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t InterRobotMatch__rosidl_typesupport_introspection_c__InterRobotMatch_message_type_support_handle = {
  0,
  &InterRobotMatch__rosidl_typesupport_introspection_c__InterRobotMatch_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cslam_common_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cslam_common_interfaces, msg, InterRobotMatch)() {
  if (!InterRobotMatch__rosidl_typesupport_introspection_c__InterRobotMatch_message_type_support_handle.typesupport_identifier) {
    InterRobotMatch__rosidl_typesupport_introspection_c__InterRobotMatch_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &InterRobotMatch__rosidl_typesupport_introspection_c__InterRobotMatch_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif