// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cslam_common_interfaces:msg/LocalDescriptorsRequest.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__LOCAL_DESCRIPTORS_REQUEST__STRUCT_HPP_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__LOCAL_DESCRIPTORS_REQUEST__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__cslam_common_interfaces__msg__LocalDescriptorsRequest __attribute__((deprecated))
#else
# define DEPRECATED__cslam_common_interfaces__msg__LocalDescriptorsRequest __declspec(deprecated)
#endif

namespace cslam_common_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LocalDescriptorsRequest_
{
  using Type = LocalDescriptorsRequest_<ContainerAllocator>;

  explicit LocalDescriptorsRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->keyframe_id = 0ul;
    }
  }

  explicit LocalDescriptorsRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->keyframe_id = 0ul;
    }
  }

  // field types and members
  using _keyframe_id_type =
    uint32_t;
  _keyframe_id_type keyframe_id;
  using _matches_robot_id_type =
    std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other>;
  _matches_robot_id_type matches_robot_id;
  using _matches_keyframe_id_type =
    std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other>;
  _matches_keyframe_id_type matches_keyframe_id;

  // setters for named parameter idiom
  Type & set__keyframe_id(
    const uint32_t & _arg)
  {
    this->keyframe_id = _arg;
    return *this;
  }
  Type & set__matches_robot_id(
    const std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other> & _arg)
  {
    this->matches_robot_id = _arg;
    return *this;
  }
  Type & set__matches_keyframe_id(
    const std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other> & _arg)
  {
    this->matches_keyframe_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cslam_common_interfaces::msg::LocalDescriptorsRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const cslam_common_interfaces::msg::LocalDescriptorsRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cslam_common_interfaces::msg::LocalDescriptorsRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cslam_common_interfaces::msg::LocalDescriptorsRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cslam_common_interfaces::msg::LocalDescriptorsRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cslam_common_interfaces::msg::LocalDescriptorsRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cslam_common_interfaces::msg::LocalDescriptorsRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cslam_common_interfaces::msg::LocalDescriptorsRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cslam_common_interfaces::msg::LocalDescriptorsRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cslam_common_interfaces::msg::LocalDescriptorsRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cslam_common_interfaces__msg__LocalDescriptorsRequest
    std::shared_ptr<cslam_common_interfaces::msg::LocalDescriptorsRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cslam_common_interfaces__msg__LocalDescriptorsRequest
    std::shared_ptr<cslam_common_interfaces::msg::LocalDescriptorsRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LocalDescriptorsRequest_ & other) const
  {
    if (this->keyframe_id != other.keyframe_id) {
      return false;
    }
    if (this->matches_robot_id != other.matches_robot_id) {
      return false;
    }
    if (this->matches_keyframe_id != other.matches_keyframe_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const LocalDescriptorsRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LocalDescriptorsRequest_

// alias to use template instance with default allocator
using LocalDescriptorsRequest =
  cslam_common_interfaces::msg::LocalDescriptorsRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cslam_common_interfaces

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__LOCAL_DESCRIPTORS_REQUEST__STRUCT_HPP_
