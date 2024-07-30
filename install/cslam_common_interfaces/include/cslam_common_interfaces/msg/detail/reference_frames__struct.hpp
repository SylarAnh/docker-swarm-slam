// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cslam_common_interfaces:msg/ReferenceFrames.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__REFERENCE_FRAMES__STRUCT_HPP_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__REFERENCE_FRAMES__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'origin_to_local'
// Member 'transforms'
#include "geometry_msgs/msg/detail/transform_stamped__struct.hpp"
// Member 'frames_id'
#include "std_msgs/msg/detail/string__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cslam_common_interfaces__msg__ReferenceFrames __attribute__((deprecated))
#else
# define DEPRECATED__cslam_common_interfaces__msg__ReferenceFrames __declspec(deprecated)
#endif

namespace cslam_common_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ReferenceFrames_
{
  using Type = ReferenceFrames_<ContainerAllocator>;

  explicit ReferenceFrames_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : origin_to_local(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = 0ul;
    }
  }

  explicit ReferenceFrames_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : origin_to_local(_alloc, _init)
  {
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
  using _origin_to_local_type =
    geometry_msgs::msg::TransformStamped_<ContainerAllocator>;
  _origin_to_local_type origin_to_local;
  using _frames_id_type =
    std::vector<std_msgs::msg::String_<ContainerAllocator>, typename ContainerAllocator::template rebind<std_msgs::msg::String_<ContainerAllocator>>::other>;
  _frames_id_type frames_id;
  using _transforms_type =
    std::vector<geometry_msgs::msg::TransformStamped_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::TransformStamped_<ContainerAllocator>>::other>;
  _transforms_type transforms;

  // setters for named parameter idiom
  Type & set__robot_id(
    const uint32_t & _arg)
  {
    this->robot_id = _arg;
    return *this;
  }
  Type & set__origin_to_local(
    const geometry_msgs::msg::TransformStamped_<ContainerAllocator> & _arg)
  {
    this->origin_to_local = _arg;
    return *this;
  }
  Type & set__frames_id(
    const std::vector<std_msgs::msg::String_<ContainerAllocator>, typename ContainerAllocator::template rebind<std_msgs::msg::String_<ContainerAllocator>>::other> & _arg)
  {
    this->frames_id = _arg;
    return *this;
  }
  Type & set__transforms(
    const std::vector<geometry_msgs::msg::TransformStamped_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::TransformStamped_<ContainerAllocator>>::other> & _arg)
  {
    this->transforms = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cslam_common_interfaces::msg::ReferenceFrames_<ContainerAllocator> *;
  using ConstRawPtr =
    const cslam_common_interfaces::msg::ReferenceFrames_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cslam_common_interfaces::msg::ReferenceFrames_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cslam_common_interfaces::msg::ReferenceFrames_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cslam_common_interfaces::msg::ReferenceFrames_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cslam_common_interfaces::msg::ReferenceFrames_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cslam_common_interfaces::msg::ReferenceFrames_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cslam_common_interfaces::msg::ReferenceFrames_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cslam_common_interfaces::msg::ReferenceFrames_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cslam_common_interfaces::msg::ReferenceFrames_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cslam_common_interfaces__msg__ReferenceFrames
    std::shared_ptr<cslam_common_interfaces::msg::ReferenceFrames_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cslam_common_interfaces__msg__ReferenceFrames
    std::shared_ptr<cslam_common_interfaces::msg::ReferenceFrames_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReferenceFrames_ & other) const
  {
    if (this->robot_id != other.robot_id) {
      return false;
    }
    if (this->origin_to_local != other.origin_to_local) {
      return false;
    }
    if (this->frames_id != other.frames_id) {
      return false;
    }
    if (this->transforms != other.transforms) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReferenceFrames_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReferenceFrames_

// alias to use template instance with default allocator
using ReferenceFrames =
  cslam_common_interfaces::msg::ReferenceFrames_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cslam_common_interfaces

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__REFERENCE_FRAMES__STRUCT_HPP_
