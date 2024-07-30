// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cslam_common_interfaces:msg/InterRobotMatch.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__INTER_ROBOT_MATCH__BUILDER_HPP_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__INTER_ROBOT_MATCH__BUILDER_HPP_

#include "cslam_common_interfaces/msg/detail/inter_robot_match__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cslam_common_interfaces
{

namespace msg
{

namespace builder
{

class Init_InterRobotMatch_weight
{
public:
  explicit Init_InterRobotMatch_weight(::cslam_common_interfaces::msg::InterRobotMatch & msg)
  : msg_(msg)
  {}
  ::cslam_common_interfaces::msg::InterRobotMatch weight(::cslam_common_interfaces::msg::InterRobotMatch::_weight_type arg)
  {
    msg_.weight = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cslam_common_interfaces::msg::InterRobotMatch msg_;
};

class Init_InterRobotMatch_robot1_keyframe_id
{
public:
  explicit Init_InterRobotMatch_robot1_keyframe_id(::cslam_common_interfaces::msg::InterRobotMatch & msg)
  : msg_(msg)
  {}
  Init_InterRobotMatch_weight robot1_keyframe_id(::cslam_common_interfaces::msg::InterRobotMatch::_robot1_keyframe_id_type arg)
  {
    msg_.robot1_keyframe_id = std::move(arg);
    return Init_InterRobotMatch_weight(msg_);
  }

private:
  ::cslam_common_interfaces::msg::InterRobotMatch msg_;
};

class Init_InterRobotMatch_robot1_id
{
public:
  explicit Init_InterRobotMatch_robot1_id(::cslam_common_interfaces::msg::InterRobotMatch & msg)
  : msg_(msg)
  {}
  Init_InterRobotMatch_robot1_keyframe_id robot1_id(::cslam_common_interfaces::msg::InterRobotMatch::_robot1_id_type arg)
  {
    msg_.robot1_id = std::move(arg);
    return Init_InterRobotMatch_robot1_keyframe_id(msg_);
  }

private:
  ::cslam_common_interfaces::msg::InterRobotMatch msg_;
};

class Init_InterRobotMatch_robot0_keyframe_id
{
public:
  explicit Init_InterRobotMatch_robot0_keyframe_id(::cslam_common_interfaces::msg::InterRobotMatch & msg)
  : msg_(msg)
  {}
  Init_InterRobotMatch_robot1_id robot0_keyframe_id(::cslam_common_interfaces::msg::InterRobotMatch::_robot0_keyframe_id_type arg)
  {
    msg_.robot0_keyframe_id = std::move(arg);
    return Init_InterRobotMatch_robot1_id(msg_);
  }

private:
  ::cslam_common_interfaces::msg::InterRobotMatch msg_;
};

class Init_InterRobotMatch_robot0_id
{
public:
  Init_InterRobotMatch_robot0_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InterRobotMatch_robot0_keyframe_id robot0_id(::cslam_common_interfaces::msg::InterRobotMatch::_robot0_id_type arg)
  {
    msg_.robot0_id = std::move(arg);
    return Init_InterRobotMatch_robot0_keyframe_id(msg_);
  }

private:
  ::cslam_common_interfaces::msg::InterRobotMatch msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cslam_common_interfaces::msg::InterRobotMatch>()
{
  return cslam_common_interfaces::msg::builder::Init_InterRobotMatch_robot0_id();
}

}  // namespace cslam_common_interfaces

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__INTER_ROBOT_MATCH__BUILDER_HPP_
