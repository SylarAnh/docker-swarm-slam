// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cslam_common_interfaces:msg/LocalKeyframeMatch.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__LOCAL_KEYFRAME_MATCH__STRUCT_HPP_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__LOCAL_KEYFRAME_MATCH__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__cslam_common_interfaces__msg__LocalKeyframeMatch __attribute__((deprecated))
#else
# define DEPRECATED__cslam_common_interfaces__msg__LocalKeyframeMatch __declspec(deprecated)
#endif

namespace cslam_common_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LocalKeyframeMatch_
{
  using Type = LocalKeyframeMatch_<ContainerAllocator>;

  explicit LocalKeyframeMatch_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->keyframe0_id = 0ul;
      this->keyframe1_id = 0ul;
    }
  }

  explicit LocalKeyframeMatch_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->keyframe0_id = 0ul;
      this->keyframe1_id = 0ul;
    }
  }

  // field types and members
  using _keyframe0_id_type =
    uint32_t;
  _keyframe0_id_type keyframe0_id;
  using _keyframe1_id_type =
    uint32_t;
  _keyframe1_id_type keyframe1_id;

  // setters for named parameter idiom
  Type & set__keyframe0_id(
    const uint32_t & _arg)
  {
    this->keyframe0_id = _arg;
    return *this;
  }
  Type & set__keyframe1_id(
    const uint32_t & _arg)
  {
    this->keyframe1_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cslam_common_interfaces::msg::LocalKeyframeMatch_<ContainerAllocator> *;
  using ConstRawPtr =
    const cslam_common_interfaces::msg::LocalKeyframeMatch_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cslam_common_interfaces::msg::LocalKeyframeMatch_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cslam_common_interfaces::msg::LocalKeyframeMatch_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cslam_common_interfaces::msg::LocalKeyframeMatch_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cslam_common_interfaces::msg::LocalKeyframeMatch_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cslam_common_interfaces::msg::LocalKeyframeMatch_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cslam_common_interfaces::msg::LocalKeyframeMatch_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cslam_common_interfaces::msg::LocalKeyframeMatch_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cslam_common_interfaces::msg::LocalKeyframeMatch_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cslam_common_interfaces__msg__LocalKeyframeMatch
    std::shared_ptr<cslam_common_interfaces::msg::LocalKeyframeMatch_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cslam_common_interfaces__msg__LocalKeyframeMatch
    std::shared_ptr<cslam_common_interfaces::msg::LocalKeyframeMatch_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LocalKeyframeMatch_ & other) const
  {
    if (this->keyframe0_id != other.keyframe0_id) {
      return false;
    }
    if (this->keyframe1_id != other.keyframe1_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const LocalKeyframeMatch_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LocalKeyframeMatch_

// alias to use template instance with default allocator
using LocalKeyframeMatch =
  cslam_common_interfaces::msg::LocalKeyframeMatch_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cslam_common_interfaces

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__LOCAL_KEYFRAME_MATCH__STRUCT_HPP_
