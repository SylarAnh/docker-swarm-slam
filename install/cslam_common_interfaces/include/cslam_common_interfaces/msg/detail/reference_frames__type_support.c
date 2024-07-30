// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cslam_common_interfaces:msg/ReferenceFrames.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cslam_common_interfaces/msg/detail/reference_frames__rosidl_typesupport_introspection_c.h"
#include "cslam_common_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cslam_common_interfaces/msg/detail/reference_frames__functions.h"
#include "cslam_common_interfaces/msg/detail/reference_frames__struct.h"


// Include directives for member types
// Member `origin_to_local`
// Member `transforms`
#include "geometry_msgs/msg/transform_stamped.h"
// Member `origin_to_local`
// Member `transforms`
#include "geometry_msgs/msg/detail/transform_stamped__rosidl_typesupport_introspection_c.h"
// Member `frames_id`
#include "std_msgs/msg/string.h"
// Member `frames_id`
#include "std_msgs/msg/detail/string__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ReferenceFrames__rosidl_typesupport_introspection_c__ReferenceFrames_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cslam_common_interfaces__msg__ReferenceFrames__init(message_memory);
}

void ReferenceFrames__rosidl_typesupport_introspection_c__ReferenceFrames_fini_function(void * message_memory)
{
  cslam_common_interfaces__msg__ReferenceFrames__fini(message_memory);
}

size_t ReferenceFrames__rosidl_typesupport_introspection_c__size_function__String__frames_id(
  const void * untyped_member)
{
  const std_msgs__msg__String__Sequence * member =
    (const std_msgs__msg__String__Sequence *)(untyped_member);
  return member->size;
}

const void * ReferenceFrames__rosidl_typesupport_introspection_c__get_const_function__String__frames_id(
  const void * untyped_member, size_t index)
{
  const std_msgs__msg__String__Sequence * member =
    (const std_msgs__msg__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ReferenceFrames__rosidl_typesupport_introspection_c__get_function__String__frames_id(
  void * untyped_member, size_t index)
{
  std_msgs__msg__String__Sequence * member =
    (std_msgs__msg__String__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ReferenceFrames__rosidl_typesupport_introspection_c__resize_function__String__frames_id(
  void * untyped_member, size_t size)
{
  std_msgs__msg__String__Sequence * member =
    (std_msgs__msg__String__Sequence *)(untyped_member);
  std_msgs__msg__String__Sequence__fini(member);
  return std_msgs__msg__String__Sequence__init(member, size);
}

size_t ReferenceFrames__rosidl_typesupport_introspection_c__size_function__TransformStamped__transforms(
  const void * untyped_member)
{
  const geometry_msgs__msg__TransformStamped__Sequence * member =
    (const geometry_msgs__msg__TransformStamped__Sequence *)(untyped_member);
  return member->size;
}

const void * ReferenceFrames__rosidl_typesupport_introspection_c__get_const_function__TransformStamped__transforms(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__TransformStamped__Sequence * member =
    (const geometry_msgs__msg__TransformStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ReferenceFrames__rosidl_typesupport_introspection_c__get_function__TransformStamped__transforms(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__TransformStamped__Sequence * member =
    (geometry_msgs__msg__TransformStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ReferenceFrames__rosidl_typesupport_introspection_c__resize_function__TransformStamped__transforms(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__TransformStamped__Sequence * member =
    (geometry_msgs__msg__TransformStamped__Sequence *)(untyped_member);
  geometry_msgs__msg__TransformStamped__Sequence__fini(member);
  return geometry_msgs__msg__TransformStamped__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ReferenceFrames__rosidl_typesupport_introspection_c__ReferenceFrames_message_member_array[4] = {
  {
    "robot_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces__msg__ReferenceFrames, robot_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "origin_to_local",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces__msg__ReferenceFrames, origin_to_local),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "frames_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces__msg__ReferenceFrames, frames_id),  // bytes offset in struct
    NULL,  // default value
    ReferenceFrames__rosidl_typesupport_introspection_c__size_function__String__frames_id,  // size() function pointer
    ReferenceFrames__rosidl_typesupport_introspection_c__get_const_function__String__frames_id,  // get_const(index) function pointer
    ReferenceFrames__rosidl_typesupport_introspection_c__get_function__String__frames_id,  // get(index) function pointer
    ReferenceFrames__rosidl_typesupport_introspection_c__resize_function__String__frames_id  // resize(index) function pointer
  },
  {
    "transforms",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces__msg__ReferenceFrames, transforms),  // bytes offset in struct
    NULL,  // default value
    ReferenceFrames__rosidl_typesupport_introspection_c__size_function__TransformStamped__transforms,  // size() function pointer
    ReferenceFrames__rosidl_typesupport_introspection_c__get_const_function__TransformStamped__transforms,  // get_const(index) function pointer
    ReferenceFrames__rosidl_typesupport_introspection_c__get_function__TransformStamped__transforms,  // get(index) function pointer
    ReferenceFrames__rosidl_typesupport_introspection_c__resize_function__TransformStamped__transforms  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ReferenceFrames__rosidl_typesupport_introspection_c__ReferenceFrames_message_members = {
  "cslam_common_interfaces__msg",  // message namespace
  "ReferenceFrames",  // message name
  4,  // number of fields
  sizeof(cslam_common_interfaces__msg__ReferenceFrames),
  ReferenceFrames__rosidl_typesupport_introspection_c__ReferenceFrames_message_member_array,  // message members
  ReferenceFrames__rosidl_typesupport_introspection_c__ReferenceFrames_init_function,  // function to initialize message memory (memory has to be allocated)
  ReferenceFrames__rosidl_typesupport_introspection_c__ReferenceFrames_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ReferenceFrames__rosidl_typesupport_introspection_c__ReferenceFrames_message_type_support_handle = {
  0,
  &ReferenceFrames__rosidl_typesupport_introspection_c__ReferenceFrames_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cslam_common_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cslam_common_interfaces, msg, ReferenceFrames)() {
  ReferenceFrames__rosidl_typesupport_introspection_c__ReferenceFrames_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, TransformStamped)();
  ReferenceFrames__rosidl_typesupport_introspection_c__ReferenceFrames_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, String)();
  ReferenceFrames__rosidl_typesupport_introspection_c__ReferenceFrames_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, TransformStamped)();
  if (!ReferenceFrames__rosidl_typesupport_introspection_c__ReferenceFrames_message_type_support_handle.typesupport_identifier) {
    ReferenceFrames__rosidl_typesupport_introspection_c__ReferenceFrames_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ReferenceFrames__rosidl_typesupport_introspection_c__ReferenceFrames_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
