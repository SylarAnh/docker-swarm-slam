// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cslam_common_interfaces:msg/PoseGraphValue.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__POSE_GRAPH_VALUE__STRUCT_HPP_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__POSE_GRAPH_VALUE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'key'
#include "cslam_common_interfaces/msg/detail/multi_robot_key__struct.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cslam_common_interfaces__msg__PoseGraphValue __attribute__((deprecated))
#else
# define DEPRECATED__cslam_common_interfaces__msg__PoseGraphValue __declspec(deprecated)
#endif

namespace cslam_common_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PoseGraphValue_
{
  using Type = PoseGraphValue_<ContainerAllocator>;

  explicit PoseGraphValue_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : key(_init),
    pose(_init)
  {
    (void)_init;
  }

  explicit PoseGraphValue_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : key(_alloc, _init),
    pose(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _key_type =
    cslam_common_interfaces::msg::MultiRobotKey_<ContainerAllocator>;
  _key_type key;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__key(
    const cslam_common_interfaces::msg::MultiRobotKey_<ContainerAllocator> & _arg)
  {
    this->key = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cslam_common_interfaces::msg::PoseGraphValue_<ContainerAllocator> *;
  using ConstRawPtr =
    const cslam_common_interfaces::msg::PoseGraphValue_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cslam_common_interfaces::msg::PoseGraphValue_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cslam_common_interfaces::msg::PoseGraphValue_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cslam_common_interfaces::msg::PoseGraphValue_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cslam_common_interfaces::msg::PoseGraphValue_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cslam_common_interfaces::msg::PoseGraphValue_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cslam_common_interfaces::msg::PoseGraphValue_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cslam_common_interfaces::msg::PoseGraphValue_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cslam_common_interfaces::msg::PoseGraphValue_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cslam_common_interfaces__msg__PoseGraphValue
    std::shared_ptr<cslam_common_interfaces::msg::PoseGraphValue_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cslam_common_interfaces__msg__PoseGraphValue
    std::shared_ptr<cslam_common_interfaces::msg::PoseGraphValue_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PoseGraphValue_ & other) const
  {
    if (this->key != other.key) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const PoseGraphValue_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PoseGraphValue_

// alias to use template instance with default allocator
using PoseGraphValue =
  cslam_common_interfaces::msg::PoseGraphValue_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cslam_common_interfaces

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__POSE_GRAPH_VALUE__STRUCT_HPP_
