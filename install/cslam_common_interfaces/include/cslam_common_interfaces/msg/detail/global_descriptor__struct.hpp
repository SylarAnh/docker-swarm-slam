// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cslam_common_interfaces:msg/GlobalDescriptor.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__GLOBAL_DESCRIPTOR__STRUCT_HPP_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__GLOBAL_DESCRIPTOR__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__cslam_common_interfaces__msg__GlobalDescriptor __attribute__((deprecated))
#else
# define DEPRECATED__cslam_common_interfaces__msg__GlobalDescriptor __declspec(deprecated)
#endif

namespace cslam_common_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GlobalDescriptor_
{
  using Type = GlobalDescriptor_<ContainerAllocator>;

  explicit GlobalDescriptor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->keyframe_id = 0ul;
      this->robot_id = 0ul;
    }
  }

  explicit GlobalDescriptor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->keyframe_id = 0ul;
      this->robot_id = 0ul;
    }
  }

  // field types and members
  using _keyframe_id_type =
    uint32_t;
  _keyframe_id_type keyframe_id;
  using _robot_id_type =
    uint32_t;
  _robot_id_type robot_id;
  using _descriptor_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _descriptor_type descriptor;

  // setters for named parameter idiom
  Type & set__keyframe_id(
    const uint32_t & _arg)
  {
    this->keyframe_id = _arg;
    return *this;
  }
  Type & set__robot_id(
    const uint32_t & _arg)
  {
    this->robot_id = _arg;
    return *this;
  }
  Type & set__descriptor(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->descriptor = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cslam_common_interfaces::msg::GlobalDescriptor_<ContainerAllocator> *;
  using ConstRawPtr =
    const cslam_common_interfaces::msg::GlobalDescriptor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cslam_common_interfaces::msg::GlobalDescriptor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cslam_common_interfaces::msg::GlobalDescriptor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cslam_common_interfaces::msg::GlobalDescriptor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cslam_common_interfaces::msg::GlobalDescriptor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cslam_common_interfaces::msg::GlobalDescriptor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cslam_common_interfaces::msg::GlobalDescriptor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cslam_common_interfaces::msg::GlobalDescriptor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cslam_common_interfaces::msg::GlobalDescriptor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cslam_common_interfaces__msg__GlobalDescriptor
    std::shared_ptr<cslam_common_interfaces::msg::GlobalDescriptor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cslam_common_interfaces__msg__GlobalDescriptor
    std::shared_ptr<cslam_common_interfaces::msg::GlobalDescriptor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GlobalDescriptor_ & other) const
  {
    if (this->keyframe_id != other.keyframe_id) {
      return false;
    }
    if (this->robot_id != other.robot_id) {
      return false;
    }
    if (this->descriptor != other.descriptor) {
      return false;
    }
    return true;
  }
  bool operator!=(const GlobalDescriptor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GlobalDescriptor_

// alias to use template instance with default allocator
using GlobalDescriptor =
  cslam_common_interfaces::msg::GlobalDescriptor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cslam_common_interfaces

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__GLOBAL_DESCRIPTOR__STRUCT_HPP_
