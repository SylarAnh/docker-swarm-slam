// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from cslam_common_interfaces:msg/ReferenceFrames.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "cslam_common_interfaces/msg/detail/reference_frames__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace cslam_common_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ReferenceFrames_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) cslam_common_interfaces::msg::ReferenceFrames(_init);
}

void ReferenceFrames_fini_function(void * message_memory)
{
  auto typed_message = static_cast<cslam_common_interfaces::msg::ReferenceFrames *>(message_memory);
  typed_message->~ReferenceFrames();
}

size_t size_function__ReferenceFrames__frames_id(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std_msgs::msg::String> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ReferenceFrames__frames_id(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std_msgs::msg::String> *>(untyped_member);
  return &member[index];
}

void * get_function__ReferenceFrames__frames_id(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std_msgs::msg::String> *>(untyped_member);
  return &member[index];
}

void resize_function__ReferenceFrames__frames_id(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std_msgs::msg::String> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ReferenceFrames__transforms(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::TransformStamped> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ReferenceFrames__transforms(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::TransformStamped> *>(untyped_member);
  return &member[index];
}

void * get_function__ReferenceFrames__transforms(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::TransformStamped> *>(untyped_member);
  return &member[index];
}

void resize_function__ReferenceFrames__transforms(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::TransformStamped> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ReferenceFrames_message_member_array[4] = {
  {
    "robot_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces::msg::ReferenceFrames, robot_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "origin_to_local",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::TransformStamped>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces::msg::ReferenceFrames, origin_to_local),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "frames_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::String>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces::msg::ReferenceFrames, frames_id),  // bytes offset in struct
    nullptr,  // default value
    size_function__ReferenceFrames__frames_id,  // size() function pointer
    get_const_function__ReferenceFrames__frames_id,  // get_const(index) function pointer
    get_function__ReferenceFrames__frames_id,  // get(index) function pointer
    resize_function__ReferenceFrames__frames_id  // resize(index) function pointer
  },
  {
    "transforms",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::TransformStamped>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces::msg::ReferenceFrames, transforms),  // bytes offset in struct
    nullptr,  // default value
    size_function__ReferenceFrames__transforms,  // size() function pointer
    get_const_function__ReferenceFrames__transforms,  // get_const(index) function pointer
    get_function__ReferenceFrames__transforms,  // get(index) function pointer
    resize_function__ReferenceFrames__transforms  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ReferenceFrames_message_members = {
  "cslam_common_interfaces::msg",  // message namespace
  "ReferenceFrames",  // message name
  4,  // number of fields
  sizeof(cslam_common_interfaces::msg::ReferenceFrames),
  ReferenceFrames_message_member_array,  // message members
  ReferenceFrames_init_function,  // function to initialize message memory (memory has to be allocated)
  ReferenceFrames_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ReferenceFrames_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ReferenceFrames_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace cslam_common_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cslam_common_interfaces::msg::ReferenceFrames>()
{
  return &::cslam_common_interfaces::msg::rosidl_typesupport_introspection_cpp::ReferenceFrames_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cslam_common_interfaces, msg, ReferenceFrames)() {
  return &::cslam_common_interfaces::msg::rosidl_typesupport_introspection_cpp::ReferenceFrames_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
