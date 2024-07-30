// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cslam_common_interfaces:msg/RobotIdsAndOrigin.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__ROBOT_IDS_AND_ORIGIN__STRUCT_HPP_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__ROBOT_IDS_AND_ORIGIN__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'robots'
// Member 'origins'
#include "cslam_common_interfaces/msg/detail/robot_ids__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cslam_common_interfaces__msg__RobotIdsAndOrigin __attribute__((deprecated))
#else
# define DEPRECATED__cslam_common_interfaces__msg__RobotIdsAndOrigin __declspec(deprecated)
#endif

namespace cslam_common_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotIdsAndOrigin_
{
  using Type = RobotIdsAndOrigin_<ContainerAllocator>;

  explicit RobotIdsAndOrigin_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robots(_init),
    origins(_init)
  {
    (void)_init;
  }

  explicit RobotIdsAndOrigin_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robots(_alloc, _init),
    origins(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _robots_type =
    cslam_common_interfaces::msg::RobotIds_<ContainerAllocator>;
  _robots_type robots;
  using _origins_type =
    cslam_common_interfaces::msg::RobotIds_<ContainerAllocator>;
  _origins_type origins;

  // setters for named parameter idiom
  Type & set__robots(
    const cslam_common_interfaces::msg::RobotIds_<ContainerAllocator> & _arg)
  {
    this->robots = _arg;
    return *this;
  }
  Type & set__origins(
    const cslam_common_interfaces::msg::RobotIds_<ContainerAllocator> & _arg)
  {
    this->origins = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cslam_common_interfaces::msg::RobotIdsAndOrigin_<ContainerAllocator> *;
  using ConstRawPtr =
    const cslam_common_interfaces::msg::RobotIdsAndOrigin_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cslam_common_interfaces::msg::RobotIdsAndOrigin_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cslam_common_interfaces::msg::RobotIdsAndOrigin_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cslam_common_interfaces::msg::RobotIdsAndOrigin_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cslam_common_interfaces::msg::RobotIdsAndOrigin_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cslam_common_interfaces::msg::RobotIdsAndOrigin_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cslam_common_interfaces::msg::RobotIdsAndOrigin_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cslam_common_interfaces::msg::RobotIdsAndOrigin_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cslam_common_interfaces::msg::RobotIdsAndOrigin_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cslam_common_interfaces__msg__RobotIdsAndOrigin
    std::shared_ptr<cslam_common_interfaces::msg::RobotIdsAndOrigin_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cslam_common_interfaces__msg__RobotIdsAndOrigin
    std::shared_ptr<cslam_common_interfaces::msg::RobotIdsAndOrigin_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotIdsAndOrigin_ & other) const
  {
    if (this->robots != other.robots) {
      return false;
    }
    if (this->origins != other.origins) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotIdsAndOrigin_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotIdsAndOrigin_

// alias to use template instance with default allocator
using RobotIdsAndOrigin =
  cslam_common_interfaces::msg::RobotIdsAndOrigin_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cslam_common_interfaces

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__ROBOT_IDS_AND_ORIGIN__STRUCT_HPP_
