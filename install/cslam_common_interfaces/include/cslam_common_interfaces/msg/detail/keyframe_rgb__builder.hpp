// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cslam_common_interfaces:msg/KeyframeRGB.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__KEYFRAME_RGB__BUILDER_HPP_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__KEYFRAME_RGB__BUILDER_HPP_

#include "cslam_common_interfaces/msg/detail/keyframe_rgb__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cslam_common_interfaces
{

namespace msg
{

namespace builder
{

class Init_KeyframeRGB_image
{
public:
  explicit Init_KeyframeRGB_image(::cslam_common_interfaces::msg::KeyframeRGB & msg)
  : msg_(msg)
  {}
  ::cslam_common_interfaces::msg::KeyframeRGB image(::cslam_common_interfaces::msg::KeyframeRGB::_image_type arg)
  {
    msg_.image = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cslam_common_interfaces::msg::KeyframeRGB msg_;
};

class Init_KeyframeRGB_id
{
public:
  Init_KeyframeRGB_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KeyframeRGB_image id(::cslam_common_interfaces::msg::KeyframeRGB::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_KeyframeRGB_image(msg_);
  }

private:
  ::cslam_common_interfaces::msg::KeyframeRGB msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cslam_common_interfaces::msg::KeyframeRGB>()
{
  return cslam_common_interfaces::msg::builder::Init_KeyframeRGB_id();
}

}  // namespace cslam_common_interfaces

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__KEYFRAME_RGB__BUILDER_HPP_
