// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cslam_common_interfaces:msg/KeyframePointCloud.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__KEYFRAME_POINT_CLOUD__BUILDER_HPP_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__KEYFRAME_POINT_CLOUD__BUILDER_HPP_

#include "cslam_common_interfaces/msg/detail/keyframe_point_cloud__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cslam_common_interfaces
{

namespace msg
{

namespace builder
{

class Init_KeyframePointCloud_pointcloud
{
public:
  explicit Init_KeyframePointCloud_pointcloud(::cslam_common_interfaces::msg::KeyframePointCloud & msg)
  : msg_(msg)
  {}
  ::cslam_common_interfaces::msg::KeyframePointCloud pointcloud(::cslam_common_interfaces::msg::KeyframePointCloud::_pointcloud_type arg)
  {
    msg_.pointcloud = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cslam_common_interfaces::msg::KeyframePointCloud msg_;
};

class Init_KeyframePointCloud_id
{
public:
  Init_KeyframePointCloud_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KeyframePointCloud_pointcloud id(::cslam_common_interfaces::msg::KeyframePointCloud::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_KeyframePointCloud_pointcloud(msg_);
  }

private:
  ::cslam_common_interfaces::msg::KeyframePointCloud msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cslam_common_interfaces::msg::KeyframePointCloud>()
{
  return cslam_common_interfaces::msg::builder::Init_KeyframePointCloud_id();
}

}  // namespace cslam_common_interfaces

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__KEYFRAME_POINT_CLOUD__BUILDER_HPP_
