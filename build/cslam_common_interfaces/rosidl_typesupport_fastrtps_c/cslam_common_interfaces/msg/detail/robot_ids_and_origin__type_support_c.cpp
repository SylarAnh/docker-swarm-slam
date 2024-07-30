// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from cslam_common_interfaces:msg/RobotIdsAndOrigin.idl
// generated code does not contain a copyright notice
#include "cslam_common_interfaces/msg/detail/robot_ids_and_origin__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "cslam_common_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cslam_common_interfaces/msg/detail/robot_ids_and_origin__struct.h"
#include "cslam_common_interfaces/msg/detail/robot_ids_and_origin__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "cslam_common_interfaces/msg/detail/robot_ids__functions.h"  // origins, robots

// forward declare type support functions
size_t get_serialized_size_cslam_common_interfaces__msg__RobotIds(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_cslam_common_interfaces__msg__RobotIds(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cslam_common_interfaces, msg, RobotIds)();


using _RobotIdsAndOrigin__ros_msg_type = cslam_common_interfaces__msg__RobotIdsAndOrigin;

static bool _RobotIdsAndOrigin__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RobotIdsAndOrigin__ros_msg_type * ros_message = static_cast<const _RobotIdsAndOrigin__ros_msg_type *>(untyped_ros_message);
  // Field name: robots
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cslam_common_interfaces, msg, RobotIds
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->robots, cdr))
    {
      return false;
    }
  }

  // Field name: origins
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cslam_common_interfaces, msg, RobotIds
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->origins, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _RobotIdsAndOrigin__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RobotIdsAndOrigin__ros_msg_type * ros_message = static_cast<_RobotIdsAndOrigin__ros_msg_type *>(untyped_ros_message);
  // Field name: robots
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cslam_common_interfaces, msg, RobotIds
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->robots))
    {
      return false;
    }
  }

  // Field name: origins
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cslam_common_interfaces, msg, RobotIds
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->origins))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cslam_common_interfaces
size_t get_serialized_size_cslam_common_interfaces__msg__RobotIdsAndOrigin(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RobotIdsAndOrigin__ros_msg_type * ros_message = static_cast<const _RobotIdsAndOrigin__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name robots

  current_alignment += get_serialized_size_cslam_common_interfaces__msg__RobotIds(
    &(ros_message->robots), current_alignment);
  // field.name origins

  current_alignment += get_serialized_size_cslam_common_interfaces__msg__RobotIds(
    &(ros_message->origins), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _RobotIdsAndOrigin__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cslam_common_interfaces__msg__RobotIdsAndOrigin(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cslam_common_interfaces
size_t max_serialized_size_cslam_common_interfaces__msg__RobotIdsAndOrigin(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: robots
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_cslam_common_interfaces__msg__RobotIds(
        full_bounded, current_alignment);
    }
  }
  // member: origins
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_cslam_common_interfaces__msg__RobotIds(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _RobotIdsAndOrigin__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_cslam_common_interfaces__msg__RobotIdsAndOrigin(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RobotIdsAndOrigin = {
  "cslam_common_interfaces::msg",
  "RobotIdsAndOrigin",
  _RobotIdsAndOrigin__cdr_serialize,
  _RobotIdsAndOrigin__cdr_deserialize,
  _RobotIdsAndOrigin__get_serialized_size,
  _RobotIdsAndOrigin__max_serialized_size
};

static rosidl_message_type_support_t _RobotIdsAndOrigin__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RobotIdsAndOrigin,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cslam_common_interfaces, msg, RobotIdsAndOrigin)() {
  return &_RobotIdsAndOrigin__type_support;
}

#if defined(__cplusplus)
}
#endif
