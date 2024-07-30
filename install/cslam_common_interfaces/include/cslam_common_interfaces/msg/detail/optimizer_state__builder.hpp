// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cslam_common_interfaces:msg/OptimizerState.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__OPTIMIZER_STATE__BUILDER_HPP_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__OPTIMIZER_STATE__BUILDER_HPP_

#include "cslam_common_interfaces/msg/detail/optimizer_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cslam_common_interfaces
{

namespace msg
{

namespace builder
{

class Init_OptimizerState_state
{
public:
  Init_OptimizerState_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cslam_common_interfaces::msg::OptimizerState state(::cslam_common_interfaces::msg::OptimizerState::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cslam_common_interfaces::msg::OptimizerState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cslam_common_interfaces::msg::OptimizerState>()
{
  return cslam_common_interfaces::msg::builder::Init_OptimizerState_state();
}

}  // namespace cslam_common_interfaces

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__OPTIMIZER_STATE__BUILDER_HPP_
