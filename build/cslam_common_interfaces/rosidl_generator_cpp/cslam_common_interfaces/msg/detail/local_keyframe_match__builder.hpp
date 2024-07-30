// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cslam_common_interfaces:msg/LocalKeyframeMatch.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__LOCAL_KEYFRAME_MATCH__BUILDER_HPP_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__LOCAL_KEYFRAME_MATCH__BUILDER_HPP_

#include "cslam_common_interfaces/msg/detail/local_keyframe_match__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cslam_common_interfaces
{

namespace msg
{

namespace builder
{

class Init_LocalKeyframeMatch_keyframe1_id
{
public:
  explicit Init_LocalKeyframeMatch_keyframe1_id(::cslam_common_interfaces::msg::LocalKeyframeMatch & msg)
  : msg_(msg)
  {}
  ::cslam_common_interfaces::msg::LocalKeyframeMatch keyframe1_id(::cslam_common_interfaces::msg::LocalKeyframeMatch::_keyframe1_id_type arg)
  {
    msg_.keyframe1_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cslam_common_interfaces::msg::LocalKeyframeMatch msg_;
};

class Init_LocalKeyframeMatch_keyframe0_id
{
public:
  Init_LocalKeyframeMatch_keyframe0_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LocalKeyframeMatch_keyframe1_id keyframe0_id(::cslam_common_interfaces::msg::LocalKeyframeMatch::_keyframe0_id_type arg)
  {
    msg_.keyframe0_id = std::move(arg);
    return Init_LocalKeyframeMatch_keyframe1_id(msg_);
  }

private:
  ::cslam_common_interfaces::msg::LocalKeyframeMatch msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cslam_common_interfaces::msg::LocalKeyframeMatch>()
{
  return cslam_common_interfaces::msg::builder::Init_LocalKeyframeMatch_keyframe0_id();
}

}  // namespace cslam_common_interfaces

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__LOCAL_KEYFRAME_MATCH__BUILDER_HPP_
