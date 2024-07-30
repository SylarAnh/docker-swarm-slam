// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cslam_common_interfaces:msg/InterRobotMatches.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cslam_common_interfaces/msg/detail/inter_robot_matches__rosidl_typesupport_introspection_c.h"
#include "cslam_common_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cslam_common_interfaces/msg/detail/inter_robot_matches__functions.h"
#include "cslam_common_interfaces/msg/detail/inter_robot_matches__struct.h"


// Include directives for member types
// Member `matches`
#include "cslam_common_interfaces/msg/inter_robot_match.h"
// Member `matches`
#include "cslam_common_interfaces/msg/detail/inter_robot_match__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void InterRobotMatches__rosidl_typesupport_introspection_c__InterRobotMatches_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cslam_common_interfaces__msg__InterRobotMatches__init(message_memory);
}

void InterRobotMatches__rosidl_typesupport_introspection_c__InterRobotMatches_fini_function(void * message_memory)
{
  cslam_common_interfaces__msg__InterRobotMatches__fini(message_memory);
}

size_t InterRobotMatches__rosidl_typesupport_introspection_c__size_function__InterRobotMatch__matches(
  const void * untyped_member)
{
  const cslam_common_interfaces__msg__InterRobotMatch__Sequence * member =
    (const cslam_common_interfaces__msg__InterRobotMatch__Sequence *)(untyped_member);
  return member->size;
}

const void * InterRobotMatches__rosidl_typesupport_introspection_c__get_const_function__InterRobotMatch__matches(
  const void * untyped_member, size_t index)
{
  const cslam_common_interfaces__msg__InterRobotMatch__Sequence * member =
    (const cslam_common_interfaces__msg__InterRobotMatch__Sequence *)(untyped_member);
  return &member->data[index];
}

void * InterRobotMatches__rosidl_typesupport_introspection_c__get_function__InterRobotMatch__matches(
  void * untyped_member, size_t index)
{
  cslam_common_interfaces__msg__InterRobotMatch__Sequence * member =
    (cslam_common_interfaces__msg__InterRobotMatch__Sequence *)(untyped_member);
  return &member->data[index];
}

bool InterRobotMatches__rosidl_typesupport_introspection_c__resize_function__InterRobotMatch__matches(
  void * untyped_member, size_t size)
{
  cslam_common_interfaces__msg__InterRobotMatch__Sequence * member =
    (cslam_common_interfaces__msg__InterRobotMatch__Sequence *)(untyped_member);
  cslam_common_interfaces__msg__InterRobotMatch__Sequence__fini(member);
  return cslam_common_interfaces__msg__InterRobotMatch__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember InterRobotMatches__rosidl_typesupport_introspection_c__InterRobotMatches_message_member_array[2] = {
  {
    "robot_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces__msg__InterRobotMatches, robot_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "matches",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces__msg__InterRobotMatches, matches),  // bytes offset in struct
    NULL,  // default value
    InterRobotMatches__rosidl_typesupport_introspection_c__size_function__InterRobotMatch__matches,  // size() function pointer
    InterRobotMatches__rosidl_typesupport_introspection_c__get_const_function__InterRobotMatch__matches,  // get_const(index) function pointer
    InterRobotMatches__rosidl_typesupport_introspection_c__get_function__InterRobotMatch__matches,  // get(index) function pointer
    InterRobotMatches__rosidl_typesupport_introspection_c__resize_function__InterRobotMatch__matches  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers InterRobotMatches__rosidl_typesupport_introspection_c__InterRobotMatches_message_members = {
  "cslam_common_interfaces__msg",  // message namespace
  "InterRobotMatches",  // message name
  2,  // number of fields
  sizeof(cslam_common_interfaces__msg__InterRobotMatches),
  InterRobotMatches__rosidl_typesupport_introspection_c__InterRobotMatches_message_member_array,  // message members
  InterRobotMatches__rosidl_typesupport_introspection_c__InterRobotMatches_init_function,  // function to initialize message memory (memory has to be allocated)
  InterRobotMatches__rosidl_typesupport_introspection_c__InterRobotMatches_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t InterRobotMatches__rosidl_typesupport_introspection_c__InterRobotMatches_message_type_support_handle = {
  0,
  &InterRobotMatches__rosidl_typesupport_introspection_c__InterRobotMatches_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cslam_common_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cslam_common_interfaces, msg, InterRobotMatches)() {
  InterRobotMatches__rosidl_typesupport_introspection_c__InterRobotMatches_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cslam_common_interfaces, msg, InterRobotMatch)();
  if (!InterRobotMatches__rosidl_typesupport_introspection_c__InterRobotMatches_message_type_support_handle.typesupport_identifier) {
    InterRobotMatches__rosidl_typesupport_introspection_c__InterRobotMatches_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &InterRobotMatches__rosidl_typesupport_introspection_c__InterRobotMatches_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
