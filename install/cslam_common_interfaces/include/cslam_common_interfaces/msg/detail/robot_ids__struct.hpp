// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cslam_common_interfaces:msg/RobotIds.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__ROBOT_IDS__STRUCT_HPP_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__ROBOT_IDS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__cslam_common_interfaces__msg__RobotIds __attribute__((deprecated))
#else
# define DEPRECATED__cslam_common_interfaces__msg__RobotIds __declspec(deprecated)
#endif

namespace cslam_common_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotIds_
{
  using Type = RobotIds_<ContainerAllocator>;

  explicit RobotIds_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit RobotIds_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _ids_type =
    std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other>;
  _ids_type ids;

  // setters for named parameter idiom
  Type & set__ids(
    const std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other> & _arg)
  {
    this->ids = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cslam_common_interfaces::msg::RobotIds_<ContainerAllocator> *;
  using ConstRawPtr =
    const cslam_common_interfaces::msg::RobotIds_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cslam_common_interfaces::msg::RobotIds_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cslam_common_interfaces::msg::RobotIds_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cslam_common_interfaces::msg::RobotIds_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cslam_common_interfaces::msg::RobotIds_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cslam_common_interfaces::msg::RobotIds_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cslam_common_interfaces::msg::RobotIds_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cslam_common_interfaces::msg::RobotIds_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cslam_common_interfaces::msg::RobotIds_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cslam_common_interfaces__msg__RobotIds
    std::shared_ptr<cslam_common_interfaces::msg::RobotIds_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cslam_common_interfaces__msg__RobotIds
    std::shared_ptr<cslam_common_interfaces::msg::RobotIds_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotIds_ & other) const
  {
    if (this->ids != other.ids) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotIds_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotIds_

// alias to use template instance with default allocator
using RobotIds =
  cslam_common_interfaces::msg::RobotIds_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cslam_common_interfaces

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__ROBOT_IDS__STRUCT_HPP_
