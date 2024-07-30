// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from cslam_common_interfaces:msg/GlobalDescriptors.idl
// generated code does not contain a copyright notice
#include "cslam_common_interfaces/msg/detail/global_descriptors__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "cslam_common_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cslam_common_interfaces/msg/detail/global_descriptors__struct.h"
#include "cslam_common_interfaces/msg/detail/global_descriptors__functions.h"
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

#include "cslam_common_interfaces/msg/detail/global_descriptor__functions.h"  // descriptors

// forward declare type support functions
size_t get_serialized_size_cslam_common_interfaces__msg__GlobalDescriptor(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_cslam_common_interfaces__msg__GlobalDescriptor(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cslam_common_interfaces, msg, GlobalDescriptor)();


using _GlobalDescriptors__ros_msg_type = cslam_common_interfaces__msg__GlobalDescriptors;

static bool _GlobalDescriptors__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GlobalDescriptors__ros_msg_type * ros_message = static_cast<const _GlobalDescriptors__ros_msg_type *>(untyped_ros_message);
  // Field name: descriptors
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cslam_common_interfaces, msg, GlobalDescriptor
      )()->data);
    size_t size = ros_message->descriptors.size;
    auto array_ptr = ros_message->descriptors.data;
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

static bool _GlobalDescriptors__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GlobalDescriptors__ros_msg_type * ros_message = static_cast<_GlobalDescriptors__ros_msg_type *>(untyped_ros_message);
  // Field name: descriptors
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cslam_common_interfaces, msg, GlobalDescriptor
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->descriptors.data) {
      cslam_common_interfaces__msg__GlobalDescriptor__Sequence__fini(&ros_message->descriptors);
    }
    if (!cslam_common_interfaces__msg__GlobalDescriptor__Sequence__init(&ros_message->descriptors, size)) {
      return "failed to create array for field 'descriptors'";
    }
    auto array_ptr = ros_message->descriptors.data;
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
size_t get_serialized_size_cslam_common_interfaces__msg__GlobalDescriptors(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GlobalDescriptors__ros_msg_type * ros_message = static_cast<const _GlobalDescriptors__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name descriptors
  {
    size_t array_size = ros_message->descriptors.size;
    auto array_ptr = ros_message->descriptors.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_cslam_common_interfaces__msg__GlobalDescriptor(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GlobalDescriptors__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cslam_common_interfaces__msg__GlobalDescriptors(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cslam_common_interfaces
size_t max_serialized_size_cslam_common_interfaces__msg__GlobalDescriptors(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: descriptors
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_cslam_common_interfaces__msg__GlobalDescriptor(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GlobalDescriptors__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_cslam_common_interfaces__msg__GlobalDescriptors(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GlobalDescriptors = {
  "cslam_common_interfaces::msg",
  "GlobalDescriptors",
  _GlobalDescriptors__cdr_serialize,
  _GlobalDescriptors__cdr_deserialize,
  _GlobalDescriptors__get_serialized_size,
  _GlobalDescriptors__max_serialized_size
};

static rosidl_message_type_support_t _GlobalDescriptors__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GlobalDescriptors,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cslam_common_interfaces, msg, GlobalDescriptors)() {
  return &_GlobalDescriptors__type_support;
}

#if defined(__cplusplus)
}
#endif