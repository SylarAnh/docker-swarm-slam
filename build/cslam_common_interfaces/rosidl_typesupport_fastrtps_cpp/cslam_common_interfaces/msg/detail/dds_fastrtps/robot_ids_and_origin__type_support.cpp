// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from cslam_common_interfaces:msg/RobotIdsAndOrigin.idl
// generated code does not contain a copyright notice
#include "cslam_common_interfaces/msg/detail/robot_ids_and_origin__rosidl_typesupport_fastrtps_cpp.hpp"
#include "cslam_common_interfaces/msg/detail/robot_ids_and_origin__struct.hpp"

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
  const cslam_common_interfaces::msg::RobotIds &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  cslam_common_interfaces::msg::RobotIds &);
size_t get_serialized_size(
  const cslam_common_interfaces::msg::RobotIds &,
  size_t current_alignment);
size_t
max_serialized_size_RobotIds(
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
  const cslam_common_interfaces::msg::RobotIds &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  cslam_common_interfaces::msg::RobotIds &);
size_t get_serialized_size(
  const cslam_common_interfaces::msg::RobotIds &,
  size_t current_alignment);
size_t
max_serialized_size_RobotIds(
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

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cslam_common_interfaces
cdr_serialize(
  const cslam_common_interfaces::msg::RobotIdsAndOrigin & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: robots
  cslam_common_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.robots,
    cdr);
  // Member: origins
  cslam_common_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.origins,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cslam_common_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cslam_common_interfaces::msg::RobotIdsAndOrigin & ros_message)
{
  // Member: robots
  cslam_common_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.robots);

  // Member: origins
  cslam_common_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.origins);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cslam_common_interfaces
get_serialized_size(
  const cslam_common_interfaces::msg::RobotIdsAndOrigin & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: robots

  current_alignment +=
    cslam_common_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.robots, current_alignment);
  // Member: origins

  current_alignment +=
    cslam_common_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.origins, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cslam_common_interfaces
max_serialized_size_RobotIdsAndOrigin(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: robots
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        cslam_common_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_RobotIds(
        full_bounded, current_alignment);
    }
  }

  // Member: origins
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        cslam_common_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_RobotIds(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _RobotIdsAndOrigin__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const cslam_common_interfaces::msg::RobotIdsAndOrigin *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RobotIdsAndOrigin__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<cslam_common_interfaces::msg::RobotIdsAndOrigin *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RobotIdsAndOrigin__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const cslam_common_interfaces::msg::RobotIdsAndOrigin *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RobotIdsAndOrigin__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RobotIdsAndOrigin(full_bounded, 0);
}

static message_type_support_callbacks_t _RobotIdsAndOrigin__callbacks = {
  "cslam_common_interfaces::msg",
  "RobotIdsAndOrigin",
  _RobotIdsAndOrigin__cdr_serialize,
  _RobotIdsAndOrigin__cdr_deserialize,
  _RobotIdsAndOrigin__get_serialized_size,
  _RobotIdsAndOrigin__max_serialized_size
};

static rosidl_message_type_support_t _RobotIdsAndOrigin__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RobotIdsAndOrigin__callbacks,
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
get_message_type_support_handle<cslam_common_interfaces::msg::RobotIdsAndOrigin>()
{
  return &cslam_common_interfaces::msg::typesupport_fastrtps_cpp::_RobotIdsAndOrigin__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cslam_common_interfaces, msg, RobotIdsAndOrigin)() {
  return &cslam_common_interfaces::msg::typesupport_fastrtps_cpp::_RobotIdsAndOrigin__handle;
}

#ifdef __cplusplus
}
#endif
