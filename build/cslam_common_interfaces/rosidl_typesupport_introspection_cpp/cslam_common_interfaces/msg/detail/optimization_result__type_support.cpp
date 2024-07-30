// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from cslam_common_interfaces:msg/OptimizationResult.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "cslam_common_interfaces/msg/detail/optimization_result__struct.hpp"
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

void OptimizationResult_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) cslam_common_interfaces::msg::OptimizationResult(_init);
}

void OptimizationResult_fini_function(void * message_memory)
{
  auto typed_message = static_cast<cslam_common_interfaces::msg::OptimizationResult *>(message_memory);
  typed_message->~OptimizationResult();
}

size_t size_function__OptimizationResult__factors(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<cslam_common_interfaces::msg::PoseGraphEdge> *>(untyped_member);
  return member->size();
}

const void * get_const_function__OptimizationResult__factors(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<cslam_common_interfaces::msg::PoseGraphEdge> *>(untyped_member);
  return &member[index];
}

void * get_function__OptimizationResult__factors(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<cslam_common_interfaces::msg::PoseGraphEdge> *>(untyped_member);
  return &member[index];
}

void resize_function__OptimizationResult__factors(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<cslam_common_interfaces::msg::PoseGraphEdge> *>(untyped_member);
  member->resize(size);
}

size_t size_function__OptimizationResult__estimates(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<cslam_common_interfaces::msg::PoseGraphValue> *>(untyped_member);
  return member->size();
}

const void * get_const_function__OptimizationResult__estimates(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<cslam_common_interfaces::msg::PoseGraphValue> *>(untyped_member);
  return &member[index];
}

void * get_function__OptimizationResult__estimates(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<cslam_common_interfaces::msg::PoseGraphValue> *>(untyped_member);
  return &member[index];
}

void resize_function__OptimizationResult__estimates(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<cslam_common_interfaces::msg::PoseGraphValue> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember OptimizationResult_message_member_array[4] = {
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces::msg::OptimizationResult, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "origin_robot_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces::msg::OptimizationResult, origin_robot_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "factors",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<cslam_common_interfaces::msg::PoseGraphEdge>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces::msg::OptimizationResult, factors),  // bytes offset in struct
    nullptr,  // default value
    size_function__OptimizationResult__factors,  // size() function pointer
    get_const_function__OptimizationResult__factors,  // get_const(index) function pointer
    get_function__OptimizationResult__factors,  // get(index) function pointer
    resize_function__OptimizationResult__factors  // resize(index) function pointer
  },
  {
    "estimates",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<cslam_common_interfaces::msg::PoseGraphValue>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces::msg::OptimizationResult, estimates),  // bytes offset in struct
    nullptr,  // default value
    size_function__OptimizationResult__estimates,  // size() function pointer
    get_const_function__OptimizationResult__estimates,  // get_const(index) function pointer
    get_function__OptimizationResult__estimates,  // get(index) function pointer
    resize_function__OptimizationResult__estimates  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers OptimizationResult_message_members = {
  "cslam_common_interfaces::msg",  // message namespace
  "OptimizationResult",  // message name
  4,  // number of fields
  sizeof(cslam_common_interfaces::msg::OptimizationResult),
  OptimizationResult_message_member_array,  // message members
  OptimizationResult_init_function,  // function to initialize message memory (memory has to be allocated)
  OptimizationResult_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t OptimizationResult_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &OptimizationResult_message_members,
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
get_message_type_support_handle<cslam_common_interfaces::msg::OptimizationResult>()
{
  return &::cslam_common_interfaces::msg::rosidl_typesupport_introspection_cpp::OptimizationResult_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cslam_common_interfaces, msg, OptimizationResult)() {
  return &::cslam_common_interfaces::msg::rosidl_typesupport_introspection_cpp::OptimizationResult_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
