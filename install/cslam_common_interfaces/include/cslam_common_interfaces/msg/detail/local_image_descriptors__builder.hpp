// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cslam_common_interfaces:msg/LocalImageDescriptors.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__LOCAL_IMAGE_DESCRIPTORS__BUILDER_HPP_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__LOCAL_IMAGE_DESCRIPTORS__BUILDER_HPP_

#include "cslam_common_interfaces/msg/detail/local_image_descriptors__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cslam_common_interfaces
{

namespace msg
{

namespace builder
{

class Init_LocalImageDescriptors_data
{
public:
  explicit Init_LocalImageDescriptors_data(::cslam_common_interfaces::msg::LocalImageDescriptors & msg)
  : msg_(msg)
  {}
  ::cslam_common_interfaces::msg::LocalImageDescriptors data(::cslam_common_interfaces::msg::LocalImageDescriptors::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cslam_common_interfaces::msg::LocalImageDescriptors msg_;
};

class Init_LocalImageDescriptors_matches_keyframe_id
{
public:
  explicit Init_LocalImageDescriptors_matches_keyframe_id(::cslam_common_interfaces::msg::LocalImageDescriptors & msg)
  : msg_(msg)
  {}
  Init_LocalImageDescriptors_data matches_keyframe_id(::cslam_common_interfaces::msg::LocalImageDescriptors::_matches_keyframe_id_type arg)
  {
    msg_.matches_keyframe_id = std::move(arg);
    return Init_LocalImageDescriptors_data(msg_);
  }

private:
  ::cslam_common_interfaces::msg::LocalImageDescriptors msg_;
};

class Init_LocalImageDescriptors_matches_robot_id
{
public:
  explicit Init_LocalImageDescriptors_matches_robot_id(::cslam_common_interfaces::msg::LocalImageDescriptors & msg)
  : msg_(msg)
  {}
  Init_LocalImageDescriptors_matches_keyframe_id matches_robot_id(::cslam_common_interfaces::msg::LocalImageDescriptors::_matches_robot_id_type arg)
  {
    msg_.matches_robot_id = std::move(arg);
    return Init_LocalImageDescriptors_matches_keyframe_id(msg_);
  }

private:
  ::cslam_common_interfaces::msg::LocalImageDescriptors msg_;
};

class Init_LocalImageDescriptors_robot_id
{
public:
  explicit Init_LocalImageDescriptors_robot_id(::cslam_common_interfaces::msg::LocalImageDescriptors & msg)
  : msg_(msg)
  {}
  Init_LocalImageDescriptors_matches_robot_id robot_id(::cslam_common_interfaces::msg::LocalImageDescriptors::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_LocalImageDescriptors_matches_robot_id(msg_);
  }

private:
  ::cslam_common_interfaces::msg::LocalImageDescriptors msg_;
};

class Init_LocalImageDescriptors_keyframe_id
{
public:
  Init_LocalImageDescriptors_keyframe_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LocalImageDescriptors_robot_id keyframe_id(::cslam_common_interfaces::msg::LocalImageDescriptors::_keyframe_id_type arg)
  {
    msg_.keyframe_id = std::move(arg);
    return Init_LocalImageDescriptors_robot_id(msg_);
  }

private:
  ::cslam_common_interfaces::msg::LocalImageDescriptors msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cslam_common_interfaces::msg::LocalImageDescriptors>()
{
  return cslam_common_interfaces::msg::builder::Init_LocalImageDescriptors_keyframe_id();
}

}  // namespace cslam_common_interfaces

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__LOCAL_IMAGE_DESCRIPTORS__BUILDER_HPP_
