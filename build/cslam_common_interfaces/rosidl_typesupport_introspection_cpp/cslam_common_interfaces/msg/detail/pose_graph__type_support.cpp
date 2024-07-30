// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from cslam_common_interfaces:msg/PoseGraph.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "cslam_common_interfaces/msg/detail/pose_graph__struct.hpp"
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

void PoseGraph_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) cslam_common_interfaces::msg::PoseGraph(_init);
}

void PoseGraph_fini_function(void * message_memory)
{
  auto typed_message = static_cast<cslam_common_interfaces::msg::PoseGraph *>(message_memory);
  typed_message->~PoseGraph();
}

size_t size_function__PoseGraph__edges(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<cslam_common_interfaces::msg::PoseGraphEdge> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PoseGraph__edges(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<cslam_common_interfaces::msg::PoseGraphEdge> *>(untyped_member);
  return &member[index];
}

void * get_function__PoseGraph__edges(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<cslam_common_interfaces::msg::PoseGraphEdge> *>(untyped_member);
  return &member[index];
}

void resize_function__PoseGraph__edges(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<cslam_common_interfaces::msg::PoseGraphEdge> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PoseGraph__values(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<cslam_common_interfaces::msg::PoseGraphValue> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PoseGraph__values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<cslam_common_interfaces::msg::PoseGraphValue> *>(untyped_member);
  return &member[index];
}

void * get_function__PoseGraph__values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<cslam_common_interfaces::msg::PoseGraphValue> *>(untyped_member);
  return &member[index];
}

void resize_function__PoseGraph__values(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<cslam_common_interfaces::msg::PoseGraphValue> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PoseGraph__gps_values_idx(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PoseGraph__gps_values_idx(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__PoseGraph__gps_values_idx(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void resize_function__PoseGraph__gps_values_idx(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PoseGraph__gps_values(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<sensor_msgs::msg::NavSatFix> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PoseGraph__gps_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<sensor_msgs::msg::NavSatFix> *>(untyped_member);
  return &member[index];
}

void * get_function__PoseGraph__gps_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<sensor_msgs::msg::NavSatFix> *>(untyped_member);
  return &member[index];
}

void resize_function__PoseGraph__gps_values(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<sensor_msgs::msg::NavSatFix> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PoseGraph_message_member_array[14] = {
  {
    "robot_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces::msg::PoseGraph, robot_id),  // bytes offset in struct
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
    offsetof(cslam_common_interfaces::msg::PoseGraph, origin_robot_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "connected_robots",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<cslam_common_interfaces::msg::RobotIds>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces::msg::PoseGraph, connected_robots),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "edges",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<cslam_common_interfaces::msg::PoseGraphEdge>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces::msg::PoseGraph, edges),  // bytes offset in struct
    nullptr,  // default value
    size_function__PoseGraph__edges,  // size() function pointer
    get_const_function__PoseGraph__edges,  // get_const(index) function pointer
    get_function__PoseGraph__edges,  // get(index) function pointer
    resize_function__PoseGraph__edges  // resize(index) function pointer
  },
  {
    "values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<cslam_common_interfaces::msg::PoseGraphValue>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces::msg::PoseGraph, values),  // bytes offset in struct
    nullptr,  // default value
    size_function__PoseGraph__values,  // size() function pointer
    get_const_function__PoseGraph__values,  // get_const(index) function pointer
    get_function__PoseGraph__values,  // get(index) function pointer
    resize_function__PoseGraph__values  // resize(index) function pointer
  },
  {
    "gps_values_idx",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces::msg::PoseGraph, gps_values_idx),  // bytes offset in struct
    nullptr,  // default value
    size_function__PoseGraph__gps_values_idx,  // size() function pointer
    get_const_function__PoseGraph__gps_values_idx,  // get_const(index) function pointer
    get_function__PoseGraph__gps_values_idx,  // get(index) function pointer
    resize_function__PoseGraph__gps_values_idx  // resize(index) function pointer
  },
  {
    "gps_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::NavSatFix>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces::msg::PoseGraph, gps_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__PoseGraph__gps_values,  // size() function pointer
    get_const_function__PoseGraph__gps_values,  // get_const(index) function pointer
    get_function__PoseGraph__gps_values,  // get(index) function pointer
    resize_function__PoseGraph__gps_values  // resize(index) function pointer
  },
  {
    "nb_matches",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces::msg::PoseGraph, nb_matches),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "nb_failed_matches",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces::msg::PoseGraph, nb_failed_matches),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "nb_vertices_transmitted",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces::msg::PoseGraph, nb_vertices_transmitted),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "nb_matches_selected",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces::msg::PoseGraph, nb_matches_selected),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "front_end_cumulative_communication_bytes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces::msg::PoseGraph, front_end_cumulative_communication_bytes),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "sparsification_cumulative_computation_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces::msg::PoseGraph, sparsification_cumulative_computation_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "spectral_matches",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<cslam_common_interfaces::msg::InterRobotMatches>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces::msg::PoseGraph, spectral_matches),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PoseGraph_message_members = {
  "cslam_common_interfaces::msg",  // message namespace
  "PoseGraph",  // message name
  14,  // number of fields
  sizeof(cslam_common_interfaces::msg::PoseGraph),
  PoseGraph_message_member_array,  // message members
  PoseGraph_init_function,  // function to initialize message memory (memory has to be allocated)
  PoseGraph_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PoseGraph_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PoseGraph_message_members,
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
get_message_type_support_handle<cslam_common_interfaces::msg::PoseGraph>()
{
  return &::cslam_common_interfaces::msg::rosidl_typesupport_introspection_cpp::PoseGraph_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cslam_common_interfaces, msg, PoseGraph)() {
  return &::cslam_common_interfaces::msg::rosidl_typesupport_introspection_cpp::PoseGraph_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
