// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from cslam_common_interfaces:msg/VizPointCloud.idl
// generated code does not contain a copyright notice
#include "cslam_common_interfaces/msg/detail/viz_point_cloud__rosidl_typesupport_fastrtps_cpp.hpp"
#include "cslam_common_interfaces/msg/detail/viz_point_cloud__struct.hpp"

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
namespace sensor_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const sensor_msgs::msg::PointCloud2 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  sensor_msgs::msg::PointCloud2 &);
size_t get_serialized_size(
  const sensor_msgs::msg::PointCloud2 &,
  size_t current_alignment);
size_t
max_serialized_size_PointCloud2(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace sensor_msgs


namespace cslam_common_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cslam_common_interfaces
cdr_serialize(
  const cslam_common_interfaces::msg::VizPointCloud & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: robot_id
  cdr << ros_message.robot_id;
  // Member: keyframe_id
  cdr << ros_message.keyframe_id;
  // Member: pointcloud
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.pointcloud,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cslam_common_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cslam_common_interfaces::msg::VizPointCloud & ros_message)
{
  // Member: robot_id
  cdr >> ros_message.robot_id;

  // Member: keyframe_id
  cdr >> ros_message.keyframe_id;

  // Member: pointcloud
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.pointcloud);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cslam_common_interfaces
get_serialized_size(
  const cslam_common_interfaces::msg::VizPointCloud & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: robot_id
  {
    size_t item_size = sizeof(ros_message.robot_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: keyframe_id
  {
    size_t item_size = sizeof(ros_message.keyframe_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pointcloud

  current_alignment +=
    sensor_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.pointcloud, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cslam_common_interfaces
max_serialized_size_VizPointCloud(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: robot_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: keyframe_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pointcloud
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        sensor_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_PointCloud2(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _VizPointCloud__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const cslam_common_interfaces::msg::VizPointCloud *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _VizPointCloud__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<cslam_common_interfaces::msg::VizPointCloud *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _VizPointCloud__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const cslam_common_interfaces::msg::VizPointCloud *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _VizPointCloud__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_VizPointCloud(full_bounded, 0);
}

static message_type_support_callbacks_t _VizPointCloud__callbacks = {
  "cslam_common_interfaces::msg",
  "VizPointCloud",
  _VizPointCloud__cdr_serialize,
  _VizPointCloud__cdr_deserialize,
  _VizPointCloud__get_serialized_size,
  _VizPointCloud__max_serialized_size
};

static rosidl_message_type_support_t _VizPointCloud__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_VizPointCloud__callbacks,
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
get_message_type_support_handle<cslam_common_interfaces::msg::VizPointCloud>()
{
  return &cslam_common_interfaces::msg::typesupport_fastrtps_cpp::_VizPointCloud__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cslam_common_interfaces, msg, VizPointCloud)() {
  return &cslam_common_interfaces::msg::typesupport_fastrtps_cpp::_VizPointCloud__handle;
}

#ifdef __cplusplus
}
#endif
