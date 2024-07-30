// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from cslam_common_interfaces:msg/RobotIdsAndOrigin.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "cslam_common_interfaces/msg/detail/robot_ids_and_origin__struct.hpp"
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

void RobotIdsAndOrigin_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) cslam_common_interfaces::msg::RobotIdsAndOrigin(_init);
}

void RobotIdsAndOrigin_fini_function(void * message_memory)
{
  auto typed_message = static_cast<cslam_common_interfaces::msg::RobotIdsAndOrigin *>(message_memory);
  typed_message->~RobotIdsAndOrigin();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RobotIdsAndOrigin_message_member_array[2] = {
  {
    "robots",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<cslam_common_interfaces::msg::RobotIds>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces::msg::RobotIdsAndOrigin, robots),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "origins",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<cslam_common_interfaces::msg::RobotIds>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces::msg::RobotIdsAndOrigin, origins),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RobotIdsAndOrigin_message_members = {
  "cslam_common_interfaces::msg",  // message namespace
  "RobotIdsAndOrigin",  // message name
  2,  // number of fields
  sizeof(cslam_common_interfaces::msg::RobotIdsAndOrigin),
  RobotIdsAndOrigin_message_member_array,  // message members
  RobotIdsAndOrigin_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotIdsAndOrigin_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RobotIdsAndOrigin_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RobotIdsAndOrigin_message_members,
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
get_message_type_support_handle<cslam_common_interfaces::msg::RobotIdsAndOrigin>()
{
  return &::cslam_common_interfaces::msg::rosidl_typesupport_introspection_cpp::RobotIdsAndOrigin_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cslam_common_interfaces, msg, RobotIdsAndOrigin)() {
  return &::cslam_common_interfaces::msg::rosidl_typesupport_introspection_cpp::RobotIdsAndOrigin_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
