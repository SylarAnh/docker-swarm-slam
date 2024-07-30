// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from cslam_common_interfaces:msg/InterRobotMatch.idl
// generated code does not contain a copyright notice
#include "cslam_common_interfaces/msg/detail/inter_robot_match__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "cslam_common_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cslam_common_interfaces/msg/detail/inter_robot_match__struct.h"
#include "cslam_common_interfaces/msg/detail/inter_robot_match__functions.h"
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


// forward declare type support functions


using _InterRobotMatch__ros_msg_type = cslam_common_interfaces__msg__InterRobotMatch;

static bool _InterRobotMatch__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _InterRobotMatch__ros_msg_type * ros_message = static_cast<const _InterRobotMatch__ros_msg_type *>(untyped_ros_message);
  // Field name: robot0_id
  {
    cdr << ros_message->robot0_id;
  }

  // Field name: robot0_keyframe_id
  {
    cdr << ros_message->robot0_keyframe_id;
  }

  // Field name: robot1_id
  {
    cdr << ros_message->robot1_id;
  }

  // Field name: robot1_keyframe_id
  {
    cdr << ros_message->robot1_keyframe_id;
  }

  // Field name: weight
  {
    cdr << ros_message->weight;
  }

  return true;
}

static bool _InterRobotMatch__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _InterRobotMatch__ros_msg_type * ros_message = static_cast<_InterRobotMatch__ros_msg_type *>(untyped_ros_message);
  // Field name: robot0_id
  {
    cdr >> ros_message->robot0_id;
  }

  // Field name: robot0_keyframe_id
  {
    cdr >> ros_message->robot0_keyframe_id;
  }

  // Field name: robot1_id
  {
    cdr >> ros_message->robot1_id;
  }

  // Field name: robot1_keyframe_id
  {
    cdr >> ros_message->robot1_keyframe_id;
  }

  // Field name: weight
  {
    cdr >> ros_message->weight;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cslam_common_interfaces
size_t get_serialized_size_cslam_common_interfaces__msg__InterRobotMatch(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _InterRobotMatch__ros_msg_type * ros_message = static_cast<const _InterRobotMatch__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name robot0_id
  {
    size_t item_size = sizeof(ros_message->robot0_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name robot0_keyframe_id
  {
    size_t item_size = sizeof(ros_message->robot0_keyframe_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name robot1_id
  {
    size_t item_size = sizeof(ros_message->robot1_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name robot1_keyframe_id
  {
    size_t item_size = sizeof(ros_message->robot1_keyframe_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name weight
  {
    size_t item_size = sizeof(ros_message->weight);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _InterRobotMatch__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cslam_common_interfaces__msg__InterRobotMatch(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cslam_common_interfaces
size_t max_serialized_size_cslam_common_interfaces__msg__InterRobotMatch(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: robot0_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: robot0_keyframe_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: robot1_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: robot1_keyframe_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: weight
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _InterRobotMatch__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_cslam_common_interfaces__msg__InterRobotMatch(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_InterRobotMatch = {
  "cslam_common_interfaces::msg",
  "InterRobotMatch",
  _InterRobotMatch__cdr_serialize,
  _InterRobotMatch__cdr_deserialize,
  _InterRobotMatch__get_serialized_size,
  _InterRobotMatch__max_serialized_size
};

static rosidl_message_type_support_t _InterRobotMatch__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_InterRobotMatch,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cslam_common_interfaces, msg, InterRobotMatch)() {
  return &_InterRobotMatch__type_support;
}

#if defined(__cplusplus)
}
#endif
