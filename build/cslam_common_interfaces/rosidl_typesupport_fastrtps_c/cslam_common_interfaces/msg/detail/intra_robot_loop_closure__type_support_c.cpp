// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from cslam_common_interfaces:msg/IntraRobotLoopClosure.idl
// generated code does not contain a copyright notice
#include "cslam_common_interfaces/msg/detail/intra_robot_loop_closure__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "cslam_common_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cslam_common_interfaces/msg/detail/intra_robot_loop_closure__struct.h"
#include "cslam_common_interfaces/msg/detail/intra_robot_loop_closure__functions.h"
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

#include "geometry_msgs/msg/detail/transform__functions.h"  // transform

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cslam_common_interfaces
size_t get_serialized_size_geometry_msgs__msg__Transform(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cslam_common_interfaces
size_t max_serialized_size_geometry_msgs__msg__Transform(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cslam_common_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Transform)();


using _IntraRobotLoopClosure__ros_msg_type = cslam_common_interfaces__msg__IntraRobotLoopClosure;

static bool _IntraRobotLoopClosure__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _IntraRobotLoopClosure__ros_msg_type * ros_message = static_cast<const _IntraRobotLoopClosure__ros_msg_type *>(untyped_ros_message);
  // Field name: keyframe0_id
  {
    cdr << ros_message->keyframe0_id;
  }

  // Field name: keyframe1_id
  {
    cdr << ros_message->keyframe1_id;
  }

  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: transform
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Transform
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->transform, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _IntraRobotLoopClosure__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _IntraRobotLoopClosure__ros_msg_type * ros_message = static_cast<_IntraRobotLoopClosure__ros_msg_type *>(untyped_ros_message);
  // Field name: keyframe0_id
  {
    cdr >> ros_message->keyframe0_id;
  }

  // Field name: keyframe1_id
  {
    cdr >> ros_message->keyframe1_id;
  }

  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  // Field name: transform
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Transform
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->transform))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cslam_common_interfaces
size_t get_serialized_size_cslam_common_interfaces__msg__IntraRobotLoopClosure(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _IntraRobotLoopClosure__ros_msg_type * ros_message = static_cast<const _IntraRobotLoopClosure__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name keyframe0_id
  {
    size_t item_size = sizeof(ros_message->keyframe0_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name keyframe1_id
  {
    size_t item_size = sizeof(ros_message->keyframe1_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name transform

  current_alignment += get_serialized_size_geometry_msgs__msg__Transform(
    &(ros_message->transform), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _IntraRobotLoopClosure__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cslam_common_interfaces__msg__IntraRobotLoopClosure(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cslam_common_interfaces
size_t max_serialized_size_cslam_common_interfaces__msg__IntraRobotLoopClosure(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: keyframe0_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: keyframe1_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: transform
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Transform(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _IntraRobotLoopClosure__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_cslam_common_interfaces__msg__IntraRobotLoopClosure(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_IntraRobotLoopClosure = {
  "cslam_common_interfaces::msg",
  "IntraRobotLoopClosure",
  _IntraRobotLoopClosure__cdr_serialize,
  _IntraRobotLoopClosure__cdr_deserialize,
  _IntraRobotLoopClosure__get_serialized_size,
  _IntraRobotLoopClosure__max_serialized_size
};

static rosidl_message_type_support_t _IntraRobotLoopClosure__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_IntraRobotLoopClosure,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cslam_common_interfaces, msg, IntraRobotLoopClosure)() {
  return &_IntraRobotLoopClosure__type_support;
}

#if defined(__cplusplus)
}
#endif
