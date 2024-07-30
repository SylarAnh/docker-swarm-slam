// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cslam_common_interfaces:msg/GlobalDescriptors.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cslam_common_interfaces/msg/detail/global_descriptors__rosidl_typesupport_introspection_c.h"
#include "cslam_common_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cslam_common_interfaces/msg/detail/global_descriptors__functions.h"
#include "cslam_common_interfaces/msg/detail/global_descriptors__struct.h"


// Include directives for member types
// Member `descriptors`
#include "cslam_common_interfaces/msg/global_descriptor.h"
// Member `descriptors`
#include "cslam_common_interfaces/msg/detail/global_descriptor__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GlobalDescriptors__rosidl_typesupport_introspection_c__GlobalDescriptors_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cslam_common_interfaces__msg__GlobalDescriptors__init(message_memory);
}

void GlobalDescriptors__rosidl_typesupport_introspection_c__GlobalDescriptors_fini_function(void * message_memory)
{
  cslam_common_interfaces__msg__GlobalDescriptors__fini(message_memory);
}

size_t GlobalDescriptors__rosidl_typesupport_introspection_c__size_function__GlobalDescriptor__descriptors(
  const void * untyped_member)
{
  const cslam_common_interfaces__msg__GlobalDescriptor__Sequence * member =
    (const cslam_common_interfaces__msg__GlobalDescriptor__Sequence *)(untyped_member);
  return member->size;
}

const void * GlobalDescriptors__rosidl_typesupport_introspection_c__get_const_function__GlobalDescriptor__descriptors(
  const void * untyped_member, size_t index)
{
  const cslam_common_interfaces__msg__GlobalDescriptor__Sequence * member =
    (const cslam_common_interfaces__msg__GlobalDescriptor__Sequence *)(untyped_member);
  return &member->data[index];
}

void * GlobalDescriptors__rosidl_typesupport_introspection_c__get_function__GlobalDescriptor__descriptors(
  void * untyped_member, size_t index)
{
  cslam_common_interfaces__msg__GlobalDescriptor__Sequence * member =
    (cslam_common_interfaces__msg__GlobalDescriptor__Sequence *)(untyped_member);
  return &member->data[index];
}

bool GlobalDescriptors__rosidl_typesupport_introspection_c__resize_function__GlobalDescriptor__descriptors(
  void * untyped_member, size_t size)
{
  cslam_common_interfaces__msg__GlobalDescriptor__Sequence * member =
    (cslam_common_interfaces__msg__GlobalDescriptor__Sequence *)(untyped_member);
  cslam_common_interfaces__msg__GlobalDescriptor__Sequence__fini(member);
  return cslam_common_interfaces__msg__GlobalDescriptor__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember GlobalDescriptors__rosidl_typesupport_introspection_c__GlobalDescriptors_message_member_array[1] = {
  {
    "descriptors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces__msg__GlobalDescriptors, descriptors),  // bytes offset in struct
    NULL,  // default value
    GlobalDescriptors__rosidl_typesupport_introspection_c__size_function__GlobalDescriptor__descriptors,  // size() function pointer
    GlobalDescriptors__rosidl_typesupport_introspection_c__get_const_function__GlobalDescriptor__descriptors,  // get_const(index) function pointer
    GlobalDescriptors__rosidl_typesupport_introspection_c__get_function__GlobalDescriptor__descriptors,  // get(index) function pointer
    GlobalDescriptors__rosidl_typesupport_introspection_c__resize_function__GlobalDescriptor__descriptors  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GlobalDescriptors__rosidl_typesupport_introspection_c__GlobalDescriptors_message_members = {
  "cslam_common_interfaces__msg",  // message namespace
  "GlobalDescriptors",  // message name
  1,  // number of fields
  sizeof(cslam_common_interfaces__msg__GlobalDescriptors),
  GlobalDescriptors__rosidl_typesupport_introspection_c__GlobalDescriptors_message_member_array,  // message members
  GlobalDescriptors__rosidl_typesupport_introspection_c__GlobalDescriptors_init_function,  // function to initialize message memory (memory has to be allocated)
  GlobalDescriptors__rosidl_typesupport_introspection_c__GlobalDescriptors_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GlobalDescriptors__rosidl_typesupport_introspection_c__GlobalDescriptors_message_type_support_handle = {
  0,
  &GlobalDescriptors__rosidl_typesupport_introspection_c__GlobalDescriptors_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cslam_common_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cslam_common_interfaces, msg, GlobalDescriptors)() {
  GlobalDescriptors__rosidl_typesupport_introspection_c__GlobalDescriptors_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cslam_common_interfaces, msg, GlobalDescriptor)();
  if (!GlobalDescriptors__rosidl_typesupport_introspection_c__GlobalDescriptors_message_type_support_handle.typesupport_identifier) {
    GlobalDescriptors__rosidl_typesupport_introspection_c__GlobalDescriptors_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GlobalDescriptors__rosidl_typesupport_introspection_c__GlobalDescriptors_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
