// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cslam_common_interfaces:msg/InterRobotMatch.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__INTER_ROBOT_MATCH__STRUCT_HPP_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__INTER_ROBOT_MATCH__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__cslam_common_interfaces__msg__InterRobotMatch __attribute__((deprecated))
#else
# define DEPRECATED__cslam_common_interfaces__msg__InterRobotMatch __declspec(deprecated)
#endif

namespace cslam_common_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct InterRobotMatch_
{
  using Type = InterRobotMatch_<ContainerAllocator>;

  explicit InterRobotMatch_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot0_id = 0ul;
      this->robot0_keyframe_id = 0ul;
      this->robot1_id = 0ul;
      this->robot1_keyframe_id = 0ul;
      this->weight = 0.0f;
    }
  }

  explicit InterRobotMatch_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot0_id = 0ul;
      this->robot0_keyframe_id = 0ul;
      this->robot1_id = 0ul;
      this->robot1_keyframe_id = 0ul;
      this->weight = 0.0f;
    }
  }

  // field types and members
  using _robot0_id_type =
    uint32_t;
  _robot0_id_type robot0_id;
  using _robot0_keyframe_id_type =
    uint32_t;
  _robot0_keyframe_id_type robot0_keyframe_id;
  using _robot1_id_type =
    uint32_t;
  _robot1_id_type robot1_id;
  using _robot1_keyframe_id_type =
    uint32_t;
  _robot1_keyframe_id_type robot1_keyframe_id;
  using _weight_type =
    float;
  _weight_type weight;

  // setters for named parameter idiom
  Type & set__robot0_id(
    const uint32_t & _arg)
  {
    this->robot0_id = _arg;
    return *this;
  }
  Type & set__robot0_keyframe_id(
    const uint32_t & _arg)
  {
    this->robot0_keyframe_id = _arg;
    return *this;
  }
  Type & set__robot1_id(
    const uint32_t & _arg)
  {
    this->robot1_id = _arg;
    return *this;
  }
  Type & set__robot1_keyframe_id(
    const uint32_t & _arg)
  {
    this->robot1_keyframe_id = _arg;
    return *this;
  }
  Type & set__weight(
    const float & _arg)
  {
    this->weight = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cslam_common_interfaces::msg::InterRobotMatch_<ContainerAllocator> *;
  using ConstRawPtr =
    const cslam_common_interfaces::msg::InterRobotMatch_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cslam_common_interfaces::msg::InterRobotMatch_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cslam_common_interfaces::msg::InterRobotMatch_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cslam_common_interfaces::msg::InterRobotMatch_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cslam_common_interfaces::msg::InterRobotMatch_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cslam_common_interfaces::msg::InterRobotMatch_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cslam_common_interfaces::msg::InterRobotMatch_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cslam_common_interfaces::msg::InterRobotMatch_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cslam_common_interfaces::msg::InterRobotMatch_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cslam_common_interfaces__msg__InterRobotMatch
    std::shared_ptr<cslam_common_interfaces::msg::InterRobotMatch_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cslam_common_interfaces__msg__InterRobotMatch
    std::shared_ptr<cslam_common_interfaces::msg::InterRobotMatch_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InterRobotMatch_ & other) const
  {
    if (this->robot0_id != other.robot0_id) {
      return false;
    }
    if (this->robot0_keyframe_id != other.robot0_keyframe_id) {
      return false;
    }
    if (this->robot1_id != other.robot1_id) {
      return false;
    }
    if (this->robot1_keyframe_id != other.robot1_keyframe_id) {
      return false;
    }
    if (this->weight != other.weight) {
      return false;
    }
    return true;
  }
  bool operator!=(const InterRobotMatch_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InterRobotMatch_

// alias to use template instance with default allocator
using InterRobotMatch =
  cslam_common_interfaces::msg::InterRobotMatch_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cslam_common_interfaces

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__INTER_ROBOT_MATCH__STRUCT_HPP_
