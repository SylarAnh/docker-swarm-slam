// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from cslam_common_interfaces:msg/PoseGraph.idl
// generated code does not contain a copyright notice
#include "cslam_common_interfaces/msg/detail/pose_graph__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "cslam_common_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cslam_common_interfaces/msg/detail/pose_graph__struct.h"
#include "cslam_common_interfaces/msg/detail/pose_graph__functions.h"
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

#include "cslam_common_interfaces/msg/detail/inter_robot_matches__functions.h"  // spectral_matches
#include "cslam_common_interfaces/msg/detail/pose_graph_edge__functions.h"  // edges
#include "cslam_common_interfaces/msg/detail/pose_graph_value__functions.h"  // values
#include "cslam_common_interfaces/msg/detail/robot_ids__functions.h"  // connected_robots
#include "rosidl_runtime_c/primitives_sequence.h"  // gps_values_idx
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // gps_values_idx
#include "sensor_msgs/msg/detail/nav_sat_fix__functions.h"  // gps_values

// forward declare type support functions
size_t get_serialized_size_cslam_common_interfaces__msg__InterRobotMatches(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_cslam_common_interfaces__msg__InterRobotMatches(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cslam_common_interfaces, msg, InterRobotMatches)();
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
size_t get_serialized_size_cslam_common_interfaces__msg__RobotIds(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_cslam_common_interfaces__msg__RobotIds(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cslam_common_interfaces, msg, RobotIds)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cslam_common_interfaces
size_t get_serialized_size_sensor_msgs__msg__NavSatFix(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cslam_common_interfaces
size_t max_serialized_size_sensor_msgs__msg__NavSatFix(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cslam_common_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, NavSatFix)();


using _PoseGraph__ros_msg_type = cslam_common_interfaces__msg__PoseGraph;

static bool _PoseGraph__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PoseGraph__ros_msg_type * ros_message = static_cast<const _PoseGraph__ros_msg_type *>(untyped_ros_message);
  // Field name: robot_id
  {
    cdr << ros_message->robot_id;
  }

  // Field name: origin_robot_id
  {
    cdr << ros_message->origin_robot_id;
  }

  // Field name: connected_robots
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cslam_common_interfaces, msg, RobotIds
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->connected_robots, cdr))
    {
      return false;
    }
  }

  // Field name: edges
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cslam_common_interfaces, msg, PoseGraphEdge
      )()->data);
    size_t size = ros_message->edges.size;
    auto array_ptr = ros_message->edges.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: values
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cslam_common_interfaces, msg, PoseGraphValue
      )()->data);
    size_t size = ros_message->values.size;
    auto array_ptr = ros_message->values.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: gps_values_idx
  {
    size_t size = ros_message->gps_values_idx.size;
    auto array_ptr = ros_message->gps_values_idx.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: gps_values
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, NavSatFix
      )()->data);
    size_t size = ros_message->gps_values.size;
    auto array_ptr = ros_message->gps_values.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: nb_matches
  {
    cdr << ros_message->nb_matches;
  }

  // Field name: nb_failed_matches
  {
    cdr << ros_message->nb_failed_matches;
  }

  // Field name: nb_vertices_transmitted
  {
    cdr << ros_message->nb_vertices_transmitted;
  }

  // Field name: nb_matches_selected
  {
    cdr << ros_message->nb_matches_selected;
  }

  // Field name: front_end_cumulative_communication_bytes
  {
    cdr << ros_message->front_end_cumulative_communication_bytes;
  }

  // Field name: sparsification_cumulative_computation_time
  {
    cdr << ros_message->sparsification_cumulative_computation_time;
  }

  // Field name: spectral_matches
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cslam_common_interfaces, msg, InterRobotMatches
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->spectral_matches, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _PoseGraph__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PoseGraph__ros_msg_type * ros_message = static_cast<_PoseGraph__ros_msg_type *>(untyped_ros_message);
  // Field name: robot_id
  {
    cdr >> ros_message->robot_id;
  }

  // Field name: origin_robot_id
  {
    cdr >> ros_message->origin_robot_id;
  }

  // Field name: connected_robots
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cslam_common_interfaces, msg, RobotIds
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->connected_robots))
    {
      return false;
    }
  }

  // Field name: edges
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cslam_common_interfaces, msg, PoseGraphEdge
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->edges.data) {
      cslam_common_interfaces__msg__PoseGraphEdge__Sequence__fini(&ros_message->edges);
    }
    if (!cslam_common_interfaces__msg__PoseGraphEdge__Sequence__init(&ros_message->edges, size)) {
      return "failed to create array for field 'edges'";
    }
    auto array_ptr = ros_message->edges.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: values
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cslam_common_interfaces, msg, PoseGraphValue
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->values.data) {
      cslam_common_interfaces__msg__PoseGraphValue__Sequence__fini(&ros_message->values);
    }
    if (!cslam_common_interfaces__msg__PoseGraphValue__Sequence__init(&ros_message->values, size)) {
      return "failed to create array for field 'values'";
    }
    auto array_ptr = ros_message->values.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: gps_values_idx
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->gps_values_idx.data) {
      rosidl_runtime_c__uint32__Sequence__fini(&ros_message->gps_values_idx);
    }
    if (!rosidl_runtime_c__uint32__Sequence__init(&ros_message->gps_values_idx, size)) {
      return "failed to create array for field 'gps_values_idx'";
    }
    auto array_ptr = ros_message->gps_values_idx.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: gps_values
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, NavSatFix
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->gps_values.data) {
      sensor_msgs__msg__NavSatFix__Sequence__fini(&ros_message->gps_values);
    }
    if (!sensor_msgs__msg__NavSatFix__Sequence__init(&ros_message->gps_values, size)) {
      return "failed to create array for field 'gps_values'";
    }
    auto array_ptr = ros_message->gps_values.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: nb_matches
  {
    cdr >> ros_message->nb_matches;
  }

  // Field name: nb_failed_matches
  {
    cdr >> ros_message->nb_failed_matches;
  }

  // Field name: nb_vertices_transmitted
  {
    cdr >> ros_message->nb_vertices_transmitted;
  }

  // Field name: nb_matches_selected
  {
    cdr >> ros_message->nb_matches_selected;
  }

  // Field name: front_end_cumulative_communication_bytes
  {
    cdr >> ros_message->front_end_cumulative_communication_bytes;
  }

  // Field name: sparsification_cumulative_computation_time
  {
    cdr >> ros_message->sparsification_cumulative_computation_time;
  }

  // Field name: spectral_matches
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cslam_common_interfaces, msg, InterRobotMatches
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->spectral_matches))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cslam_common_interfaces
size_t get_serialized_size_cslam_common_interfaces__msg__PoseGraph(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PoseGraph__ros_msg_type * ros_message = static_cast<const _PoseGraph__ros_msg_type *>(untyped_ros_message);
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
  // field.name origin_robot_id
  {
    size_t item_size = sizeof(ros_message->origin_robot_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name connected_robots

  current_alignment += get_serialized_size_cslam_common_interfaces__msg__RobotIds(
    &(ros_message->connected_robots), current_alignment);
  // field.name edges
  {
    size_t array_size = ros_message->edges.size;
    auto array_ptr = ros_message->edges.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_cslam_common_interfaces__msg__PoseGraphEdge(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name values
  {
    size_t array_size = ros_message->values.size;
    auto array_ptr = ros_message->values.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_cslam_common_interfaces__msg__PoseGraphValue(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name gps_values_idx
  {
    size_t array_size = ros_message->gps_values_idx.size;
    auto array_ptr = ros_message->gps_values_idx.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gps_values
  {
    size_t array_size = ros_message->gps_values.size;
    auto array_ptr = ros_message->gps_values.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_sensor_msgs__msg__NavSatFix(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name nb_matches
  {
    size_t item_size = sizeof(ros_message->nb_matches);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name nb_failed_matches
  {
    size_t item_size = sizeof(ros_message->nb_failed_matches);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name nb_vertices_transmitted
  {
    size_t item_size = sizeof(ros_message->nb_vertices_transmitted);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name nb_matches_selected
  {
    size_t item_size = sizeof(ros_message->nb_matches_selected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name front_end_cumulative_communication_bytes
  {
    size_t item_size = sizeof(ros_message->front_end_cumulative_communication_bytes);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sparsification_cumulative_computation_time
  {
    size_t item_size = sizeof(ros_message->sparsification_cumulative_computation_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name spectral_matches

  current_alignment += get_serialized_size_cslam_common_interfaces__msg__InterRobotMatches(
    &(ros_message->spectral_matches), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _PoseGraph__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cslam_common_interfaces__msg__PoseGraph(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cslam_common_interfaces
size_t max_serialized_size_cslam_common_interfaces__msg__PoseGraph(
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
  // member: origin_robot_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: connected_robots
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_cslam_common_interfaces__msg__RobotIds(
        full_bounded, current_alignment);
    }
  }
  // member: edges
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
  // member: values
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
  // member: gps_values_idx
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gps_values
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_sensor_msgs__msg__NavSatFix(
        full_bounded, current_alignment);
    }
  }
  // member: nb_matches
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: nb_failed_matches
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: nb_vertices_transmitted
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: nb_matches_selected
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: front_end_cumulative_communication_bytes
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: sparsification_cumulative_computation_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: spectral_matches
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_cslam_common_interfaces__msg__InterRobotMatches(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _PoseGraph__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_cslam_common_interfaces__msg__PoseGraph(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PoseGraph = {
  "cslam_common_interfaces::msg",
  "PoseGraph",
  _PoseGraph__cdr_serialize,
  _PoseGraph__cdr_deserialize,
  _PoseGraph__get_serialized_size,
  _PoseGraph__max_serialized_size
};

static rosidl_message_type_support_t _PoseGraph__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PoseGraph,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cslam_common_interfaces, msg, PoseGraph)() {
  return &_PoseGraph__type_support;
}

#if defined(__cplusplus)
}
#endif
