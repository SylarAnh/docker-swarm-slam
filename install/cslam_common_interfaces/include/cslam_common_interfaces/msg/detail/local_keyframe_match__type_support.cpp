// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from cslam_common_interfaces:msg/LocalKeyframeMatch.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "cslam_common_interfaces/msg/detail/local_keyframe_match__struct.hpp"
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

void LocalKeyframeMatch_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) cslam_common_interfaces::msg::LocalKeyframeMatch(_init);
}

void LocalKeyframeMatch_fini_function(void * message_memory)
{
  auto typed_message = static_cast<cslam_common_interfaces::msg::LocalKeyframeMatch *>(message_memory);
  typed_message->~LocalKeyframeMatch();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LocalKeyframeMatch_message_member_array[2] = {
  {
    "keyframe0_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces::msg::LocalKeyframeMatch, keyframe0_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "keyframe1_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces::msg::LocalKeyframeMatch, keyframe1_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LocalKeyframeMatch_message_members = {
  "cslam_common_interfaces::msg",  // message namespace
  "LocalKeyframeMatch",  // message name
  2,  // number of fields
  sizeof(cslam_common_interfaces::msg::LocalKeyframeMatch),
  LocalKeyframeMatch_message_member_array,  // message members
  LocalKeyframeMatch_init_function,  // function to initialize message memory (memory has to be allocated)
  LocalKeyframeMatch_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LocalKeyframeMatch_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LocalKeyframeMatch_message_members,
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
get_message_type_support_handle<cslam_common_interfaces::msg::LocalKeyframeMatch>()
{
  return &::cslam_common_interfaces::msg::rosidl_typesupport_introspection_cpp::LocalKeyframeMatch_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cslam_common_interfaces, msg, LocalKeyframeMatch)() {
  return &::cslam_common_interfaces::msg::rosidl_typesupport_introspection_cpp::LocalKeyframeMatch_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
