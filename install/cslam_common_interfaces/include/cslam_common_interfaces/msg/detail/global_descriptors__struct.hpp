// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cslam_common_interfaces:msg/GlobalDescriptors.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__GLOBAL_DESCRIPTORS__STRUCT_HPP_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__GLOBAL_DESCRIPTORS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'descriptors'
#include "cslam_common_interfaces/msg/detail/global_descriptor__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cslam_common_interfaces__msg__GlobalDescriptors __attribute__((deprecated))
#else
# define DEPRECATED__cslam_common_interfaces__msg__GlobalDescriptors __declspec(deprecated)
#endif

namespace cslam_common_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GlobalDescriptors_
{
  using Type = GlobalDescriptors_<ContainerAllocator>;

  explicit GlobalDescriptors_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GlobalDescriptors_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _descriptors_type =
    std::vector<cslam_common_interfaces::msg::GlobalDescriptor_<ContainerAllocator>, typename ContainerAllocator::template rebind<cslam_common_interfaces::msg::GlobalDescriptor_<ContainerAllocator>>::other>;
  _descriptors_type descriptors;

  // setters for named parameter idiom
  Type & set__descriptors(
    const std::vector<cslam_common_interfaces::msg::GlobalDescriptor_<ContainerAllocator>, typename ContainerAllocator::template rebind<cslam_common_interfaces::msg::GlobalDescriptor_<ContainerAllocator>>::other> & _arg)
  {
    this->descriptors = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cslam_common_interfaces::msg::GlobalDescriptors_<ContainerAllocator> *;
  using ConstRawPtr =
    const cslam_common_interfaces::msg::GlobalDescriptors_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cslam_common_interfaces::msg::GlobalDescriptors_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cslam_common_interfaces::msg::GlobalDescriptors_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cslam_common_interfaces::msg::GlobalDescriptors_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cslam_common_interfaces::msg::GlobalDescriptors_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cslam_common_interfaces::msg::GlobalDescriptors_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cslam_common_interfaces::msg::GlobalDescriptors_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cslam_common_interfaces::msg::GlobalDescriptors_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cslam_common_interfaces::msg::GlobalDescriptors_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cslam_common_interfaces__msg__GlobalDescriptors
    std::shared_ptr<cslam_common_interfaces::msg::GlobalDescriptors_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cslam_common_interfaces__msg__GlobalDescriptors
    std::shared_ptr<cslam_common_interfaces::msg::GlobalDescriptors_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GlobalDescriptors_ & other) const
  {
    if (this->descriptors != other.descriptors) {
      return false;
    }
    return true;
  }
  bool operator!=(const GlobalDescriptors_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GlobalDescriptors_

// alias to use template instance with default allocator
using GlobalDescriptors =
  cslam_common_interfaces::msg::GlobalDescriptors_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cslam_common_interfaces

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__GLOBAL_DESCRIPTORS__STRUCT_HPP_
