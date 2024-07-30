// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cslam_common_interfaces:msg/OptimizationResult.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cslam_common_interfaces/msg/detail/optimization_result__rosidl_typesupport_introspection_c.h"
#include "cslam_common_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cslam_common_interfaces/msg/detail/optimization_result__functions.h"
#include "cslam_common_interfaces/msg/detail/optimization_result__struct.h"


// Include directives for member types
// Member `factors`
#include "cslam_common_interfaces/msg/pose_graph_edge.h"
// Member `factors`
#include "cslam_common_interfaces/msg/detail/pose_graph_edge__rosidl_typesupport_introspection_c.h"
// Member `estimates`
#include "cslam_common_interfaces/msg/pose_graph_value.h"
// Member `estimates`
#include "cslam_common_interfaces/msg/detail/pose_graph_value__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void OptimizationResult__rosidl_typesupport_introspection_c__OptimizationResult_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cslam_common_interfaces__msg__OptimizationResult__init(message_memory);
}

void OptimizationResult__rosidl_typesupport_introspection_c__OptimizationResult_fini_function(void * message_memory)
{
  cslam_common_interfaces__msg__OptimizationResult__fini(message_memory);
}

size_t OptimizationResult__rosidl_typesupport_introspection_c__size_function__PoseGraphEdge__factors(
  const void * untyped_member)
{
  const cslam_common_interfaces__msg__PoseGraphEdge__Sequence * member =
    (const cslam_common_interfaces__msg__PoseGraphEdge__Sequence *)(untyped_member);
  return member->size;
}

const void * OptimizationResult__rosidl_typesupport_introspection_c__get_const_function__PoseGraphEdge__factors(
  const void * untyped_member, size_t index)
{
  const cslam_common_interfaces__msg__PoseGraphEdge__Sequence * member =
    (const cslam_common_interfaces__msg__PoseGraphEdge__Sequence *)(untyped_member);
  return &member->data[index];
}

void * OptimizationResult__rosidl_typesupport_introspection_c__get_function__PoseGraphEdge__factors(
  void * untyped_member, size_t index)
{
  cslam_common_interfaces__msg__PoseGraphEdge__Sequence * member =
    (cslam_common_interfaces__msg__PoseGraphEdge__Sequence *)(untyped_member);
  return &member->data[index];
}

bool OptimizationResult__rosidl_typesupport_introspection_c__resize_function__PoseGraphEdge__factors(
  void * untyped_member, size_t size)
{
  cslam_common_interfaces__msg__PoseGraphEdge__Sequence * member =
    (cslam_common_interfaces__msg__PoseGraphEdge__Sequence *)(untyped_member);
  cslam_common_interfaces__msg__PoseGraphEdge__Sequence__fini(member);
  return cslam_common_interfaces__msg__PoseGraphEdge__Sequence__init(member, size);
}

size_t OptimizationResult__rosidl_typesupport_introspection_c__size_function__PoseGraphValue__estimates(
  const void * untyped_member)
{
  const cslam_common_interfaces__msg__PoseGraphValue__Sequence * member =
    (const cslam_common_interfaces__msg__PoseGraphValue__Sequence *)(untyped_member);
  return member->size;
}

const void * OptimizationResult__rosidl_typesupport_introspection_c__get_const_function__PoseGraphValue__estimates(
  const void * untyped_member, size_t index)
{
  const cslam_common_interfaces__msg__PoseGraphValue__Sequence * member =
    (const cslam_common_interfaces__msg__PoseGraphValue__Sequence *)(untyped_member);
  return &member->data[index];
}

void * OptimizationResult__rosidl_typesupport_introspection_c__get_function__PoseGraphValue__estimates(
  void * untyped_member, size_t index)
{
  cslam_common_interfaces__msg__PoseGraphValue__Sequence * member =
    (cslam_common_interfaces__msg__PoseGraphValue__Sequence *)(untyped_member);
  return &member->data[index];
}

bool OptimizationResult__rosidl_typesupport_introspection_c__resize_function__PoseGraphValue__estimates(
  void * untyped_member, size_t size)
{
  cslam_common_interfaces__msg__PoseGraphValue__Sequence * member =
    (cslam_common_interfaces__msg__PoseGraphValue__Sequence *)(untyped_member);
  cslam_common_interfaces__msg__PoseGraphValue__Sequence__fini(member);
  return cslam_common_interfaces__msg__PoseGraphValue__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember OptimizationResult__rosidl_typesupport_introspection_c__OptimizationResult_message_member_array[4] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces__msg__OptimizationResult, success),  // bytes offset in struct
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
    offsetof(cslam_common_interfaces__msg__OptimizationResult, origin_robot_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "factors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces__msg__OptimizationResult, factors),  // bytes offset in struct
    NULL,  // default value
    OptimizationResult__rosidl_typesupport_introspection_c__size_function__PoseGraphEdge__factors,  // size() function pointer
    OptimizationResult__rosidl_typesupport_introspection_c__get_const_function__PoseGraphEdge__factors,  // get_const(index) function pointer
    OptimizationResult__rosidl_typesupport_introspection_c__get_function__PoseGraphEdge__factors,  // get(index) function pointer
    OptimizationResult__rosidl_typesupport_introspection_c__resize_function__PoseGraphEdge__factors  // resize(index) function pointer
  },
  {
    "estimates",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces__msg__OptimizationResult, estimates),  // bytes offset in struct
    NULL,  // default value
    OptimizationResult__rosidl_typesupport_introspection_c__size_function__PoseGraphValue__estimates,  // size() function pointer
    OptimizationResult__rosidl_typesupport_introspection_c__get_const_function__PoseGraphValue__estimates,  // get_const(index) function pointer
    OptimizationResult__rosidl_typesupport_introspection_c__get_function__PoseGraphValue__estimates,  // get(index) function pointer
    OptimizationResult__rosidl_typesupport_introspection_c__resize_function__PoseGraphValue__estimates  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers OptimizationResult__rosidl_typesupport_introspection_c__OptimizationResult_message_members = {
  "cslam_common_interfaces__msg",  // message namespace
  "OptimizationResult",  // message name
  4,  // number of fields
  sizeof(cslam_common_interfaces__msg__OptimizationResult),
  OptimizationResult__rosidl_typesupport_introspection_c__OptimizationResult_message_member_array,  // message members
  OptimizationResult__rosidl_typesupport_introspection_c__OptimizationResult_init_function,  // function to initialize message memory (memory has to be allocated)
  OptimizationResult__rosidl_typesupport_introspection_c__OptimizationResult_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t OptimizationResult__rosidl_typesupport_introspection_c__OptimizationResult_message_type_support_handle = {
  0,
  &OptimizationResult__rosidl_typesupport_introspection_c__OptimizationResult_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cslam_common_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cslam_common_interfaces, msg, OptimizationResult)() {
  OptimizationResult__rosidl_typesupport_introspection_c__OptimizationResult_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cslam_common_interfaces, msg, PoseGraphEdge)();
  OptimizationResult__rosidl_typesupport_introspection_c__OptimizationResult_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cslam_common_interfaces, msg, PoseGraphValue)();
  if (!OptimizationResult__rosidl_typesupport_introspection_c__OptimizationResult_message_type_support_handle.typesupport_identifier) {
    OptimizationResult__rosidl_typesupport_introspection_c__OptimizationResult_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &OptimizationResult__rosidl_typesupport_introspection_c__OptimizationResult_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
