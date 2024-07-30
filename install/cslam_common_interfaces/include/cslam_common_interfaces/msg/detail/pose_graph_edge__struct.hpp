// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cslam_common_interfaces:msg/PoseGraphEdge.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__POSE_GRAPH_EDGE__STRUCT_HPP_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__POSE_GRAPH_EDGE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'key_from'
// Member 'key_to'
#include "cslam_common_interfaces/msg/detail/multi_robot_key__struct.hpp"
// Member 'measurement'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cslam_common_interfaces__msg__PoseGraphEdge __attribute__((deprecated))
#else
# define DEPRECATED__cslam_common_interfaces__msg__PoseGraphEdge __declspec(deprecated)
#endif

namespace cslam_common_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PoseGraphEdge_
{
  using Type = PoseGraphEdge_<ContainerAllocator>;

  explicit PoseGraphEdge_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : key_from(_init),
    key_to(_init),
    measurement(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 6>::iterator, double>(this->noise_std.begin(), this->noise_std.end(), 0.0);
    }
  }

  explicit PoseGraphEdge_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : key_from(_alloc, _init),
    key_to(_alloc, _init),
    measurement(_alloc, _init),
    noise_std(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 6>::iterator, double>(this->noise_std.begin(), this->noise_std.end(), 0.0);
    }
  }

  // field types and members
  using _key_from_type =
    cslam_common_interfaces::msg::MultiRobotKey_<ContainerAllocator>;
  _key_from_type key_from;
  using _key_to_type =
    cslam_common_interfaces::msg::MultiRobotKey_<ContainerAllocator>;
  _key_to_type key_to;
  using _measurement_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _measurement_type measurement;
  using _noise_std_type =
    std::array<double, 6>;
  _noise_std_type noise_std;

  // setters for named parameter idiom
  Type & set__key_from(
    const cslam_common_interfaces::msg::MultiRobotKey_<ContainerAllocator> & _arg)
  {
    this->key_from = _arg;
    return *this;
  }
  Type & set__key_to(
    const cslam_common_interfaces::msg::MultiRobotKey_<ContainerAllocator> & _arg)
  {
    this->key_to = _arg;
    return *this;
  }
  Type & set__measurement(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->measurement = _arg;
    return *this;
  }
  Type & set__noise_std(
    const std::array<double, 6> & _arg)
  {
    this->noise_std = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cslam_common_interfaces::msg::PoseGraphEdge_<ContainerAllocator> *;
  using ConstRawPtr =
    const cslam_common_interfaces::msg::PoseGraphEdge_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cslam_common_interfaces::msg::PoseGraphEdge_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cslam_common_interfaces::msg::PoseGraphEdge_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cslam_common_interfaces::msg::PoseGraphEdge_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cslam_common_interfaces::msg::PoseGraphEdge_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cslam_common_interfaces::msg::PoseGraphEdge_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cslam_common_interfaces::msg::PoseGraphEdge_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cslam_common_interfaces::msg::PoseGraphEdge_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cslam_common_interfaces::msg::PoseGraphEdge_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cslam_common_interfaces__msg__PoseGraphEdge
    std::shared_ptr<cslam_common_interfaces::msg::PoseGraphEdge_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cslam_common_interfaces__msg__PoseGraphEdge
    std::shared_ptr<cslam_common_interfaces::msg::PoseGraphEdge_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PoseGraphEdge_ & other) const
  {
    if (this->key_from != other.key_from) {
      return false;
    }
    if (this->key_to != other.key_to) {
      return false;
    }
    if (this->measurement != other.measurement) {
      return false;
    }
    if (this->noise_std != other.noise_std) {
      return false;
    }
    return true;
  }
  bool operator!=(const PoseGraphEdge_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PoseGraphEdge_

// alias to use template instance with default allocator
using PoseGraphEdge =
  cslam_common_interfaces::msg::PoseGraphEdge_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cslam_common_interfaces

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__POSE_GRAPH_EDGE__STRUCT_HPP_
