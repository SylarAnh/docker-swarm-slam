// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from cslam_common_interfaces:msg/GlobalDescriptor.idl
// generated code does not contain a copyright notice
#include "cslam_common_interfaces/msg/detail/global_descriptor__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "cslam_common_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cslam_common_interfaces/msg/detail/global_descriptor__struct.h"
#include "cslam_common_interfaces/msg/detail/global_descriptor__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // descriptor
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // descriptor

// forward declare type support functions


using _GlobalDescriptor__ros_msg_type = cslam_common_interfaces__msg__GlobalDescriptor;

static bool _GlobalDescriptor__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GlobalDescriptor__ros_msg_type * ros_message = static_cast<const _GlobalDescriptor__ros_msg_type *>(untyped_ros_message);
  // Field name: keyframe_id
  {
    cdr << ros_message->keyframe_id;
  }

  // Field name: robot_id
  {
    cdr << ros_message->robot_id;
  }

  // Field name: descriptor
  {
    size_t size = ros_message->descriptor.size;
    auto array_ptr = ros_message->descriptor.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _GlobalDescriptor__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GlobalDescriptor__ros_msg_type * ros_message = static_cast<_GlobalDescriptor__ros_msg_type *>(untyped_ros_message);
  // Field name: keyframe_id
  {
    cdr >> ros_message->keyframe_id;
  }

  // Field name: robot_id
  {
    cdr >> ros_message->robot_id;
  }

  // Field name: descriptor
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->descriptor.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->descriptor);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->descriptor, size)) {
      return "failed to create array for field 'descriptor'";
    }
    auto array_ptr = ros_message->descriptor.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cslam_common_interfaces
size_t get_serialized_size_cslam_common_interfaces__msg__GlobalDescriptor(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GlobalDescriptor__ros_msg_type * ros_message = static_cast<const _GlobalDescriptor__ros_msg_type *>(untyped_ros_message);
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
  // field.name descriptor
  {
    size_t array_size = ros_message->descriptor.size;
    auto array_ptr = ros_message->descriptor.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GlobalDescriptor__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cslam_common_interfaces__msg__GlobalDescriptor(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cslam_common_interfaces
size_t max_serialized_size_cslam_common_interfaces__msg__GlobalDescriptor(
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
  // member: descriptor
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _GlobalDescriptor__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_cslam_common_interfaces__msg__GlobalDescriptor(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GlobalDescriptor = {
  "cslam_common_interfaces::msg",
  "GlobalDescriptor",
  _GlobalDescriptor__cdr_serialize,
  _GlobalDescriptor__cdr_deserialize,
  _GlobalDescriptor__get_serialized_size,
  _GlobalDescriptor__max_serialized_size
};

static rosidl_message_type_support_t _GlobalDescriptor__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GlobalDescriptor,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cslam_common_interfaces, msg, GlobalDescriptor)() {
  return &_GlobalDescriptor__type_support;
}

#if defined(__cplusplus)
}
#endif
