// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from cslam_common_interfaces:msg/LocalImageDescriptors.idl
// generated code does not contain a copyright notice
#include "cslam_common_interfaces/msg/detail/local_image_descriptors__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "cslam_common_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cslam_common_interfaces/msg/detail/local_image_descriptors__struct.h"
#include "cslam_common_interfaces/msg/detail/local_image_descriptors__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // matches_keyframe_id, matches_robot_id
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // matches_keyframe_id, matches_robot_id
#include "rtabmap_msgs/msg/detail/rgbd_image__functions.h"  // data

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cslam_common_interfaces
size_t get_serialized_size_rtabmap_msgs__msg__RGBDImage(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cslam_common_interfaces
size_t max_serialized_size_rtabmap_msgs__msg__RGBDImage(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cslam_common_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rtabmap_msgs, msg, RGBDImage)();


using _LocalImageDescriptors__ros_msg_type = cslam_common_interfaces__msg__LocalImageDescriptors;

static bool _LocalImageDescriptors__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LocalImageDescriptors__ros_msg_type * ros_message = static_cast<const _LocalImageDescriptors__ros_msg_type *>(untyped_ros_message);
  // Field name: keyframe_id
  {
    cdr << ros_message->keyframe_id;
  }

  // Field name: robot_id
  {
    cdr << ros_message->robot_id;
  }

  // Field name: matches_robot_id
  {
    size_t size = ros_message->matches_robot_id.size;
    auto array_ptr = ros_message->matches_robot_id.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: matches_keyframe_id
  {
    size_t size = ros_message->matches_keyframe_id.size;
    auto array_ptr = ros_message->matches_keyframe_id.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rtabmap_msgs, msg, RGBDImage
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->data, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _LocalImageDescriptors__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LocalImageDescriptors__ros_msg_type * ros_message = static_cast<_LocalImageDescriptors__ros_msg_type *>(untyped_ros_message);
  // Field name: keyframe_id
  {
    cdr >> ros_message->keyframe_id;
  }

  // Field name: robot_id
  {
    cdr >> ros_message->robot_id;
  }

  // Field name: matches_robot_id
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->matches_robot_id.data) {
      rosidl_runtime_c__uint32__Sequence__fini(&ros_message->matches_robot_id);
    }
    if (!rosidl_runtime_c__uint32__Sequence__init(&ros_message->matches_robot_id, size)) {
      return "failed to create array for field 'matches_robot_id'";
    }
    auto array_ptr = ros_message->matches_robot_id.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: matches_keyframe_id
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->matches_keyframe_id.data) {
      rosidl_runtime_c__uint32__Sequence__fini(&ros_message->matches_keyframe_id);
    }
    if (!rosidl_runtime_c__uint32__Sequence__init(&ros_message->matches_keyframe_id, size)) {
      return "failed to create array for field 'matches_keyframe_id'";
    }
    auto array_ptr = ros_message->matches_keyframe_id.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rtabmap_msgs, msg, RGBDImage
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->data))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cslam_common_interfaces
size_t get_serialized_size_cslam_common_interfaces__msg__LocalImageDescriptors(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LocalImageDescriptors__ros_msg_type * ros_message = static_cast<const _LocalImageDescriptors__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name keyframe_id
  {
    size_t item_size = sizeof(ros_message->keyframe_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name robot_id
  {
    size_t item_size = sizeof(ros_message->robot_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name matches_robot_id
  {
    size_t array_size = ros_message->matches_robot_id.size;
    auto array_ptr = ros_message->matches_robot_id.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name matches_keyframe_id
  {
    size_t array_size = ros_message->matches_keyframe_id.size;
    auto array_ptr = ros_message->matches_keyframe_id.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name data

  current_alignment += get_serialized_size_rtabmap_msgs__msg__RGBDImage(
    &(ros_message->data), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _LocalImageDescriptors__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cslam_common_interfaces__msg__LocalImageDescriptors(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cslam_common_interfaces
size_t max_serialized_size_cslam_common_interfaces__msg__LocalImageDescriptors(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: keyframe_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: robot_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: matches_robot_id
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: matches_keyframe_id
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: data
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_rtabmap_msgs__msg__RGBDImage(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _LocalImageDescriptors__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_cslam_common_interfaces__msg__LocalImageDescriptors(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_LocalImageDescriptors = {
  "cslam_common_interfaces::msg",
  "LocalImageDescriptors",
  _LocalImageDescriptors__cdr_serialize,
  _LocalImageDescriptors__cdr_deserialize,
  _LocalImageDescriptors__get_serialized_size,
  _LocalImageDescriptors__max_serialized_size
};

static rosidl_message_type_support_t _LocalImageDescriptors__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LocalImageDescriptors,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cslam_common_interfaces, msg, LocalImageDescriptors)() {
  return &_LocalImageDescriptors__type_support;
}

#if defined(__cplusplus)
}
#endif
