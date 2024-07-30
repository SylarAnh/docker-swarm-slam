// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from cslam_common_interfaces:msg/OptimizationResult.idl
// generated code does not contain a copyright notice
#include "cslam_common_interfaces/msg/detail/optimization_result__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "cslam_common_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cslam_common_interfaces/msg/detail/optimization_result__struct.h"
#include "cslam_common_interfaces/msg/detail/optimization_result__functions.h"
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

#include "cslam_common_interfaces/msg/detail/pose_graph_edge__functions.h"  // factors
#include "cslam_common_interfaces/msg/detail/pose_graph_value__functions.h"  // estimates

// forward declare type support functions
size_t get_serialized_size_cslam_common_interfaces__msg__PoseGraphEdge(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_cslam_common_interfaces__msg__PoseGraphEdge(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cslam_common_interfaces, msg, PoseGraphEdge)();
size_t get_serialized_size_cslam_common_interfaces__msg__PoseGraphValue(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_cslam_common_interfaces__msg__PoseGraphValue(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cslam_common_interfaces, msg, PoseGraphValue)();


using _OptimizationResult__ros_msg_type = cslam_common_interfaces__msg__OptimizationResult;

static bool _OptimizationResult__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _OptimizationResult__ros_msg_type * ros_message = static_cast<const _OptimizationResult__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: origin_robot_id
  {
    cdr << ros_message->origin_robot_id;
  }

  // Field name: factors
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cslam_common_interfaces, msg, PoseGraphEdge
      )()->data);
    size_t size = ros_message->factors.size;
    auto array_ptr = ros_message->factors.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: estimates
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cslam_common_interfaces, msg, PoseGraphValue
      )()->data);
    size_t size = ros_message->estimates.size;
    auto array_ptr = ros_message->estimates.data;
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

static bool _OptimizationResult__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _OptimizationResult__ros_msg_type * ros_message = static_cast<_OptimizationResult__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  // Field name: origin_robot_id
  {
    cdr >> ros_message->origin_robot_id;
  }

  // Field name: factors
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cslam_common_interfaces, msg, PoseGraphEdge
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->factors.data) {
      cslam_common_interfaces__msg__PoseGraphEdge__Sequence__fini(&ros_message->factors);
    }
    if (!cslam_common_interfaces__msg__PoseGraphEdge__Sequence__init(&ros_message->factors, size)) {
      return "failed to create array for field 'factors'";
    }
    auto array_ptr = ros_message->factors.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: estimates
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cslam_common_interfaces, msg, PoseGraphValue
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->estimates.data) {
      cslam_common_interfaces__msg__PoseGraphValue__Sequence__fini(&ros_message->estimates);
    }
    if (!cslam_common_interfaces__msg__PoseGraphValue__Sequence__init(&ros_message->estimates, size)) {
      return "failed to create array for field 'estimates'";
    }
    auto array_ptr = ros_message->estimates.data;
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
size_t get_serialized_size_cslam_common_interfaces__msg__OptimizationResult(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _OptimizationResult__ros_msg_type * ros_message = static_cast<const _OptimizationResult__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name origin_robot_id
  {
    size_t item_size = sizeof(ros_message->origin_robot_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name factors
  {
    size_t array_size = ros_message->factors.size;
    auto array_ptr = ros_message->factors.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_cslam_common_interfaces__msg__PoseGraphEdge(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name estimates
  {
    size_t array_size = ros_message->estimates.size;
    auto array_ptr = ros_message->estimates.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_cslam_common_interfaces__msg__PoseGraphValue(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _OptimizationResult__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cslam_common_interfaces__msg__OptimizationResult(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cslam_common_interfaces
size_t max_serialized_size_cslam_common_interfaces__msg__OptimizationResult(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: origin_robot_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: factors
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_cslam_common_interfaces__msg__PoseGraphEdge(
        full_bounded, current_alignment);
    }
  }
  // member: estimates
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_cslam_common_interfaces__msg__PoseGraphValue(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _OptimizationResult__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_cslam_common_interfaces__msg__OptimizationResult(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_OptimizationResult = {
  "cslam_common_interfaces::msg",
  "OptimizationResult",
  _OptimizationResult__cdr_serialize,
  _OptimizationResult__cdr_deserialize,
  _OptimizationResult__get_serialized_size,
  _OptimizationResult__max_serialized_size
};

static rosidl_message_type_support_t _OptimizationResult__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_OptimizationResult,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cslam_common_interfaces, msg, OptimizationResult)() {
  return &_OptimizationResult__type_support;
}

#if defined(__cplusplus)
}
#endif
