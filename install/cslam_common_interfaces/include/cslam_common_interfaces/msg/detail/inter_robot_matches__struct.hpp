// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cslam_common_interfaces:msg/InterRobotMatches.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__INTER_ROBOT_MATCHES__STRUCT_HPP_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__INTER_ROBOT_MATCHES__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'matches'
#include "cslam_common_interfaces/msg/detail/inter_robot_match__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cslam_common_interfaces__msg__InterRobotMatches __attribute__((deprecated))
#else
# define DEPRECATED__cslam_common_interfaces__msg__InterRobotMatches __declspec(deprecated)
#endif

namespace cslam_common_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct InterRobotMatches_
{
  using Type = InterRobotMatches_<ContainerAllocator>;

  explicit InterRobotMatches_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = 0ul;
    }
  }

  explicit InterRobotMatches_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = 0ul;
    }
  }

  // field types and members
  using _robot_id_type =
    uint32_t;
  _robot_id_type robot_id;
  using _matches_type =
    std::vector<cslam_common_interfaces::msg::InterRobotMatch_<ContainerAllocator>, typename ContainerAllocator::template rebind<cslam_common_interfaces::msg::InterRobotMatch_<ContainerAllocator>>::other>;
  _matches_type matches;

  // setters for named parameter idiom
  Type & set__robot_id(
    const uint32_t & _arg)
  {
    this->robot_id = _arg;
    return *this;
  }
  Type & set__matches(
    const std::vector<cslam_common_interfaces::msg::InterRobotMatch_<ContainerAllocator>, typename ContainerAllocator::template rebind<cslam_common_interfaces::msg::InterRobotMatch_<ContainerAllocator>>::other> & _arg)
  {
    this->matches = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cslam_common_interfaces::msg::InterRobotMatches_<ContainerAllocator> *;
  using ConstRawPtr =
    const cslam_common_interfaces::msg::InterRobotMatches_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cslam_common_interfaces::msg::InterRobotMatches_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cslam_common_interfaces::msg::InterRobotMatches_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cslam_common_interfaces::msg::InterRobotMatches_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cslam_common_interfaces::msg::InterRobotMatches_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cslam_common_interfaces::msg::InterRobotMatches_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cslam_common_interfaces::msg::InterRobotMatches_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cslam_common_interfaces::msg::InterRobotMatches_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cslam_common_interfaces::msg::InterRobotMatches_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cslam_common_interfaces__msg__InterRobotMatches
    std::shared_ptr<cslam_common_interfaces::msg::InterRobotMatches_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cslam_common_interfaces__msg__InterRobotMatches
    std::shared_ptr<cslam_common_interfaces::msg::InterRobotMatches_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InterRobotMatches_ & other) const
  {
    if (this->robot_id != other.robot_id) {
      return false;
    }
    if (this->matches != other.matches) {
      return false;
    }
    return true;
  }
  bool operator!=(const InterRobotMatches_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InterRobotMatches_

// alias to use template instance with default allocator
using InterRobotMatches =
  cslam_common_interfaces::msg::InterRobotMatches_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cslam_common_interfaces

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__INTER_ROBOT_MATCHES__STRUCT_HPP_
