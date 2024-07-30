// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from cslam_common_interfaces:msg/VizPointCloud.idl
// generated code does not contain a copyright notice
#include "cslam_common_interfaces/msg/detail/viz_point_cloud__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "cslam_common_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cslam_common_interfaces/msg/detail/viz_point_cloud__struct.h"
#include "cslam_common_interfaces/msg/detail/viz_point_cloud__functions.h"
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

#include "sensor_msgs/msg/detail/point_cloud2__functions.h"  // pointcloud

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cslam_common_interfaces
size_t get_serialized_size_sensor_msgs__msg__PointCloud2(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cslam_common_interfaces
size_t max_serialized_size_sensor_msgs__msg__PointCloud2(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cslam_common_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, PointCloud2)();


using _VizPointCloud__ros_msg_type = cslam_common_interfaces__msg__VizPointCloud;

static bool _VizPointCloud__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VizPointCloud__ros_msg_type * ros_message = static_cast<const _VizPointCloud__ros_msg_type *>(untyped_ros_message);
  // Field name: robot_id
  {
    cdr << ros_message->robot_id;
  }

  // Field name: keyframe_id
  {
    cdr << ros_message->keyframe_id;
  }

  // Field name: pointcloud
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, PointCloud2
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->pointcloud, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _VizPointCloud__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VizPointCloud__ros_msg_type * ros_message = static_cast<_VizPointCloud__ros_msg_type *>(untyped_ros_message);
  // Field name: robot_id
  {
    cdr >> ros_message->robot_id;
  }

  // Field name: keyframe_id
  {
    cdr >> ros_message->keyframe_id;
  }

  // Field name: pointcloud
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, PointCloud2
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->pointcloud))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cslam_common_interfaces
size_t get_serialized_size_cslam_common_interfaces__msg__VizPointCloud(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VizPointCloud__ros_msg_type * ros_message = static_cast<const _VizPointCloud__ros_msg_type *>(untyped_ros_message);
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
  // field.name keyframe_id
  {
    size_t item_size = sizeof(ros_message->keyframe_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pointcloud

  current_alignment += get_serialized_size_sensor_msgs__msg__PointCloud2(
    &(ros_message->pointcloud), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _VizPointCloud__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cslam_common_interfaces__msg__VizPointCloud(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cslam_common_interfaces
size_t max_serialized_size_cslam_common_interfaces__msg__VizPointCloud(
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
  // member: keyframe_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pointcloud
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_sensor_msgs__msg__PointCloud2(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _VizPointCloud__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_cslam_common_interfaces__msg__VizPointCloud(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_VizPointCloud = {
  "cslam_common_interfaces::msg",
  "VizPointCloud",
  _VizPointCloud__cdr_serialize,
  _VizPointCloud__cdr_deserialize,
  _VizPointCloud__get_serialized_size,
  _VizPointCloud__max_serialized_size
};

static rosidl_message_type_support_t _VizPointCloud__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VizPointCloud,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cslam_common_interfaces, msg, VizPointCloud)() {
  return &_VizPointCloud__type_support;
}

#if defined(__cplusplus)
}
#endif
