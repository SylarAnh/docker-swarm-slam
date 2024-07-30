// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from cslam_common_interfaces:msg/PoseGraphEdge.idl
// generated code does not contain a copyright notice
#include "cslam_common_interfaces/msg/detail/pose_graph_edge__rosidl_typesupport_fastrtps_cpp.hpp"
#include "cslam_common_interfaces/msg/detail/pose_graph_edge__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace cslam_common_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const cslam_common_interfaces::msg::MultiRobotKey &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  cslam_common_interfaces::msg::MultiRobotKey &);
size_t get_serialized_size(
  const cslam_common_interfaces::msg::MultiRobotKey &,
  size_t current_alignment);
size_t
max_serialized_size_MultiRobotKey(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace cslam_common_interfaces

namespace cslam_common_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const cslam_common_interfaces::msg::MultiRobotKey &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  cslam_common_interfaces::msg::MultiRobotKey &);
size_t get_serialized_size(
  const cslam_common_interfaces::msg::MultiRobotKey &,
  size_t current_alignment);
size_t
max_serialized_size_MultiRobotKey(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace cslam_common_interfaces

namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Pose &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Pose &);
size_t get_serialized_size(
  const geometry_msgs::msg::Pose &,
  size_t current_alignment);
size_t
max_serialized_size_Pose(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs


namespace cslam_common_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cslam_common_interfaces
cdr_serialize(
  const cslam_common_interfaces::msg::PoseGraphEdge & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: key_from
  cslam_common_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.key_from,
    cdr);
  // Member: key_to
  cslam_common_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.key_to,
    cdr);
  // Member: measurement
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.measurement,
    cdr);
  // Member: noise_std
  {
    cdr << ros_message.noise_std;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cslam_common_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cslam_common_interfaces::msg::PoseGraphEdge & ros_message)
{
  // Member: key_from
  cslam_common_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.key_from);

  // Member: key_to
  cslam_common_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.key_to);

  // Member: measurement
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.measurement);

  // Member: noise_std
  {
    cdr >> ros_message.noise_std;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cslam_common_interfaces
get_serialized_size(
  const cslam_common_interfaces::msg::PoseGraphEdge & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: key_from

  current_alignment +=
    cslam_common_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.key_from, current_alignment);
  // Member: key_to

  current_alignment +=
    cslam_common_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.key_to, current_alignment);
  // Member: measurement

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.measurement, current_alignment);
  // Member: noise_std
  {
    size_t array_size = 6;
    size_t item_size = sizeof(ros_message.noise_std[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cslam_common_interfaces
max_serialized_size_PoseGraphEdge(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: key_from
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        cslam_common_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_MultiRobotKey(
        full_bounded, current_alignment);
    }
  }

  // Member: key_to
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        cslam_common_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_MultiRobotKey(
        full_bounded, current_alignment);
    }
  }

  // Member: measurement
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Pose(
        full_bounded, current_alignment);
    }
  }

  // Member: noise_std
  {
    size_t array_size = 6;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _PoseGraphEdge__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const cslam_common_interfaces::msg::PoseGraphEdge *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PoseGraphEdge__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<cslam_common_interfaces::msg::PoseGraphEdge *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PoseGraphEdge__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const cslam_common_interfaces::msg::PoseGraphEdge *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PoseGraphEdge__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_PoseGraphEdge(full_bounded, 0);
}

static message_type_support_callbacks_t _PoseGraphEdge__callbacks = {
  "cslam_common_interfaces::msg",
  "PoseGraphEdge",
  _PoseGraphEdge__cdr_serialize,
  _PoseGraphEdge__cdr_deserialize,
  _PoseGraphEdge__get_serialized_size,
  _PoseGraphEdge__max_serialized_size
};

static rosidl_message_type_support_t _PoseGraphEdge__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PoseGraphEdge__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace cslam_common_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cslam_common_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<cslam_common_interfaces::msg::PoseGraphEdge>()
{
  return &cslam_common_interfaces::msg::typesupport_fastrtps_cpp::_PoseGraphEdge__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cslam_common_interfaces, msg, PoseGraphEdge)() {
  return &cslam_common_interfaces::msg::typesupport_fastrtps_cpp::_PoseGraphEdge__handle;
}

#ifdef __cplusplus
}
#endif
