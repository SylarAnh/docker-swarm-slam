// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cslam_common_interfaces:msg/LocalDescriptorsRequest.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__LOCAL_DESCRIPTORS_REQUEST__BUILDER_HPP_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__LOCAL_DESCRIPTORS_REQUEST__BUILDER_HPP_

#include "cslam_common_interfaces/msg/detail/local_descriptors_request__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cslam_common_interfaces
{

namespace msg
{

namespace builder
{

class Init_LocalDescriptorsRequest_matches_keyframe_id
{
public:
  explicit Init_LocalDescriptorsRequest_matches_keyframe_id(::cslam_common_interfaces::msg::LocalDescriptorsRequest & msg)
  : msg_(msg)
  {}
  ::cslam_common_interfaces::msg::LocalDescriptorsRequest matches_keyframe_id(::cslam_common_interfaces::msg::LocalDescriptorsRequest::_matches_keyframe_id_type arg)
  {
    msg_.matches_keyframe_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cslam_common_interfaces::msg::LocalDescriptorsRequest msg_;
};

class Init_LocalDescriptorsRequest_matches_robot_id
{
public:
  explicit Init_LocalDescriptorsRequest_matches_robot_id(::cslam_common_interfaces::msg::LocalDescriptorsRequest & msg)
  : msg_(msg)
  {}
  Init_LocalDescriptorsRequest_matches_keyframe_id matches_robot_id(::cslam_common_interfaces::msg::LocalDescriptorsRequest::_matches_robot_id_type arg)
  {
    msg_.matches_robot_id = std::move(arg);
    return Init_LocalDescriptorsRequest_matches_keyframe_id(msg_);
  }

private:
  ::cslam_common_interfaces::msg::LocalDescriptorsRequest msg_;
};

class Init_LocalDescriptorsRequest_keyframe_id
{
public:
  Init_LocalDescriptorsRequest_keyframe_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LocalDescriptorsRequest_matches_robot_id keyframe_id(::cslam_common_interfaces::msg::LocalDescriptorsRequest::_keyframe_id_type arg)
  {
    msg_.keyframe_id = std::move(arg);
    return Init_LocalDescriptorsRequest_matches_robot_id(msg_);
  }

private:
  ::cslam_common_interfaces::msg::LocalDescriptorsRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cslam_common_interfaces::msg::LocalDescriptorsRequest>()
{
  return cslam_common_interfaces::msg::builder::Init_LocalDescriptorsRequest_keyframe_id();
}

}  // namespace cslam_common_interfaces

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__LOCAL_DESCRIPTORS_REQUEST__BUILDER_HPP_
