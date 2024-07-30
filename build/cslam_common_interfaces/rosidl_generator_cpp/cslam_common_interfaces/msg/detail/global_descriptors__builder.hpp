// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cslam_common_interfaces:msg/GlobalDescriptors.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__GLOBAL_DESCRIPTORS__BUILDER_HPP_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__GLOBAL_DESCRIPTORS__BUILDER_HPP_

#include "cslam_common_interfaces/msg/detail/global_descriptors__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cslam_common_interfaces
{

namespace msg
{

namespace builder
{

class Init_GlobalDescriptors_descriptors
{
public:
  Init_GlobalDescriptors_descriptors()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cslam_common_interfaces::msg::GlobalDescriptors descriptors(::cslam_common_interfaces::msg::GlobalDescriptors::_descriptors_type arg)
  {
    msg_.descriptors = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cslam_common_interfaces::msg::GlobalDescriptors msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cslam_common_interfaces::msg::GlobalDescriptors>()
{
  return cslam_common_interfaces::msg::builder::Init_GlobalDescriptors_descriptors();
}

}  // namespace cslam_common_interfaces

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__GLOBAL_DESCRIPTORS__BUILDER_HPP_
