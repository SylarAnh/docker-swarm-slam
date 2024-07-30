// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from cslam_common_interfaces:msg/InterRobotMatches.idl
// generated code does not contain a copyright notice
#include "cslam_common_interfaces/msg/detail/inter_robot_matches__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "cslam_common_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cslam_common_interfaces/msg/detail/inter_robot_matches__struct.h"
#include "cslam_common_interfaces/msg/detail/inter_robot_matches__functions.h"
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

#include "cslam_common_interfaces/msg/detail/inter_robot_match__functions.h"  // matches

// forward declare type support functions
size_t get_serialized_size_cslam_common_interfaces__msg__InterRobotMatch(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_cslam_common_interfaces__msg__InterRobotMatch(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cslam_common_interfaces, msg, InterRobotMatch)();


using _InterRobotMatches__ros_msg_type = cslam_common_interfaces__msg__InterRobotMatches;

static bool _InterRobotMatches__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _InterRobotMatches__ros_msg_type * ros_message = static_cast<const _InterRobotMatches__ros_msg_type *>(untyped_ros_message);
  // Field name: robot_id
  {
    cdr << ros_message->robot_id;
  }

  // Field name: matches
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cslam_common_interfaces, msg, InterRobotMatch
      )()->data);
    size_t size = ros_message->matches.size;
    auto array_ptr = ros_message->matches.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _InterRobotMatches__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _InterRobotMatches__ros_msg_type * ros_message = static_cast<_InterRobotMatches__ros_msg_type *>(untyped_ros_message);
  // Field name: robot_id
  {
    cdr >> ros_message->robot_id;
  }

  // Field name: matches
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cslam_common_interfaces, msg, InterRobotMatch
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->matches.data) {
      cslam_common_interfaces__msg__InterRobotMatch__Sequence__fini(&ros_message->matches);
    }
    if (!cslam_common_interfaces__msg__InterRobotMatch__Sequence__init(&ros_message->matches, size)) {
      return "failed to create array for field 'matches'";
    }
    auto array_ptr = ros_message->matches.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cslam_common_interfaces
size_t get_serialized_size_cslam_common_interfaces__msg__InterRobotMatches(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _InterRobotMatches__ros_msg_type * ros_message = static_cast<const _InterRobotMatches__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name robot_id
  {
    size_t item_size = sizeof(ros_message->robot_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name matches
  {
    size_t array_size = ros_message->matches.size;
    auto array_ptr = ros_message->matches.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_cslam_common_interfaces__msg__InterRobotMatch(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _InterRobotMatches__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cslam_common_interfaces__msg__InterRobotMatches(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cslam_common_interfaces
size_t max_serialized_size_cslam_common_interfaces__msg__InterRobotMatches(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: robot_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: matches
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_cslam_common_interfaces__msg__InterRobotMatch(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _InterRobotMatches__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_cslam_common_interfaces__msg__InterRobotMatches(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_InterRobotMatches = {
  "cslam_common_interfaces::msg",
  "InterRobotMatches",
  _InterRobotMatches__cdr_serialize,
  _InterRobotMatches__cdr_deserialize,
  _InterRobotMatches__get_serialized_size,
  _InterRobotMatches__max_serialized_size
};

static rosidl_message_type_support_t _InterRobotMatches__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_InterRobotMatches,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cslam_common_interfaces, msg, InterRobotMatches)() {
  return &_InterRobotMatches__type_support;
}

#if defined(__cplusplus)
}
#endif
