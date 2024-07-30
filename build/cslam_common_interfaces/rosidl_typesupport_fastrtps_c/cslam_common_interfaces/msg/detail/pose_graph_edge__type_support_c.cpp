// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from cslam_common_interfaces:msg/PoseGraphEdge.idl
// generated code does not contain a copyright notice
#include "cslam_common_interfaces/msg/detail/pose_graph_edge__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "cslam_common_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cslam_common_interfaces/msg/detail/pose_graph_edge__struct.h"
#include "cslam_common_interfaces/msg/detail/pose_graph_edge__functions.h"
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

#include "cslam_common_interfaces/msg/detail/multi_robot_key__functions.h"  // key_from, key_to
#include "geometry_msgs/msg/detail/pose__functions.h"  // measurement

// forward declare type support functions
size_t get_serialized_size_cslam_common_interfaces__msg__MultiRobotKey(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_cslam_common_interfaces__msg__MultiRobotKey(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cslam_common_interfaces, msg, MultiRobotKey)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cslam_common_interfaces
size_t get_serialized_size_geometry_msgs__msg__Pose(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cslam_common_interfaces
size_t max_serialized_size_geometry_msgs__msg__Pose(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cslam_common_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose)();


using _PoseGraphEdge__ros_msg_type = cslam_common_interfaces__msg__PoseGraphEdge;

static bool _PoseGraphEdge__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PoseGraphEdge__ros_msg_type * ros_message = static_cast<const _PoseGraphEdge__ros_msg_type *>(untyped_ros_message);
  // Field name: key_from
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cslam_common_interfaces, msg, MultiRobotKey
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->key_from, cdr))
    {
      return false;
    }
  }

  // Field name: key_to
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cslam_common_interfaces, msg, MultiRobotKey
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->key_to, cdr))
    {
      return false;
    }
  }

  // Field name: measurement
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->measurement, cdr))
    {
      return false;
    }
  }

  // Field name: noise_std
  {
    size_t size = 6;
    auto array_ptr = ros_message->noise_std;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _PoseGraphEdge__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PoseGraphEdge__ros_msg_type * ros_message = static_cast<_PoseGraphEdge__ros_msg_type *>(untyped_ros_message);
  // Field name: key_from
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cslam_common_interfaces, msg, MultiRobotKey
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->key_from))
    {
      return false;
    }
  }

  // Field name: key_to
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cslam_common_interfaces, msg, MultiRobotKey
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->key_to))
    {
      return false;
    }
  }

  // Field name: measurement
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->measurement))
    {
      return false;
    }
  }

  // Field name: noise_std
  {
    size_t size = 6;
    auto array_ptr = ros_message->noise_std;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cslam_common_interfaces
size_t get_serialized_size_cslam_common_interfaces__msg__PoseGraphEdge(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PoseGraphEdge__ros_msg_type * ros_message = static_cast<const _PoseGraphEdge__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name key_from

  current_alignment += get_serialized_size_cslam_common_interfaces__msg__MultiRobotKey(
    &(ros_message->key_from), current_alignment);
  // field.name key_to

  current_alignment += get_serialized_size_cslam_common_interfaces__msg__MultiRobotKey(
    &(ros_message->key_to), current_alignment);
  // field.name measurement

  current_alignment += get_serialized_size_geometry_msgs__msg__Pose(
    &(ros_message->measurement), current_alignment);
  // field.name noise_std
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->noise_std;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PoseGraphEdge__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cslam_common_interfaces__msg__PoseGraphEdge(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cslam_common_interfaces
size_t max_serialized_size_cslam_common_interfaces__msg__PoseGraphEdge(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: key_from
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_cslam_common_interfaces__msg__MultiRobotKey(
        full_bounded, current_alignment);
    }
  }
  // member: key_to
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_cslam_common_interfaces__msg__MultiRobotKey(
        full_bounded, current_alignment);
    }
  }
  // member: measurement
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Pose(
        full_bounded, current_alignment);
    }
  }
  // member: noise_std
  {
    size_t array_size = 6;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _PoseGraphEdge__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_cslam_common_interfaces__msg__PoseGraphEdge(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PoseGraphEdge = {
  "cslam_common_interfaces::msg",
  "PoseGraphEdge",
  _PoseGraphEdge__cdr_serialize,
  _PoseGraphEdge__cdr_deserialize,
  _PoseGraphEdge__get_serialized_size,
  _PoseGraphEdge__max_serialized_size
};

static rosidl_message_type_support_t _PoseGraphEdge__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PoseGraphEdge,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cslam_common_interfaces, msg, PoseGraphEdge)() {
  return &_PoseGraphEdge__type_support;
}

#if defined(__cplusplus)
}
#endif
