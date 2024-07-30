// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cslam_common_interfaces:msg/OptimizationResult.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__OPTIMIZATION_RESULT__BUILDER_HPP_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__OPTIMIZATION_RESULT__BUILDER_HPP_

#include "cslam_common_interfaces/msg/detail/optimization_result__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cslam_common_interfaces
{

namespace msg
{

namespace builder
{

class Init_OptimizationResult_estimates
{
public:
  explicit Init_OptimizationResult_estimates(::cslam_common_interfaces::msg::OptimizationResult & msg)
  : msg_(msg)
  {}
  ::cslam_common_interfaces::msg::OptimizationResult estimates(::cslam_common_interfaces::msg::OptimizationResult::_estimates_type arg)
  {
    msg_.estimates = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cslam_common_interfaces::msg::OptimizationResult msg_;
};

class Init_OptimizationResult_factors
{
public:
  explicit Init_OptimizationResult_factors(::cslam_common_interfaces::msg::OptimizationResult & msg)
  : msg_(msg)
  {}
  Init_OptimizationResult_estimates factors(::cslam_common_interfaces::msg::OptimizationResult::_factors_type arg)
  {
    msg_.factors = std::move(arg);
    return Init_OptimizationResult_estimates(msg_);
  }

private:
  ::cslam_common_interfaces::msg::OptimizationResult msg_;
};

class Init_OptimizationResult_origin_robot_id
{
public:
  explicit Init_OptimizationResult_origin_robot_id(::cslam_common_interfaces::msg::OptimizationResult & msg)
  : msg_(msg)
  {}
  Init_OptimizationResult_factors origin_robot_id(::cslam_common_interfaces::msg::OptimizationResult::_origin_robot_id_type arg)
  {
    msg_.origin_robot_id = std::move(arg);
    return Init_OptimizationResult_factors(msg_);
  }

private:
  ::cslam_common_interfaces::msg::OptimizationResult msg_;
};

class Init_OptimizationResult_success
{
public:
  Init_OptimizationResult_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OptimizationResult_origin_robot_id success(::cslam_common_interfaces::msg::OptimizationResult::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_OptimizationResult_origin_robot_id(msg_);
  }

private:
  ::cslam_common_interfaces::msg::OptimizationResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cslam_common_interfaces::msg::OptimizationResult>()
{
  return cslam_common_interfaces::msg::builder::Init_OptimizationResult_success();
}

}  // namespace cslam_common_interfaces

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__OPTIMIZATION_RESULT__BUILDER_HPP_
