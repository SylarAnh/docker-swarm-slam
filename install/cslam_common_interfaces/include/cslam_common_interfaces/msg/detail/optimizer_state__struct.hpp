// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cslam_common_interfaces:msg/OptimizerState.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__OPTIMIZER_STATE__STRUCT_HPP_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__OPTIMIZER_STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__cslam_common_interfaces__msg__OptimizerState __attribute__((deprecated))
#else
# define DEPRECATED__cslam_common_interfaces__msg__OptimizerState __declspec(deprecated)
#endif

namespace cslam_common_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OptimizerState_
{
  using Type = OptimizerState_<ContainerAllocator>;

  explicit OptimizerState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0;
    }
  }

  explicit OptimizerState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0;
    }
  }

  // field types and members
  using _state_type =
    uint16_t;
  _state_type state;

  // setters for named parameter idiom
  Type & set__state(
    const uint16_t & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t IDLE =
    0u;
  static constexpr uint16_t WAITING_FOR_NEIGHBORS_INFO =
    1u;
  static constexpr uint16_t POSEGRAPH_COLLECTION =
    2u;
  static constexpr uint16_t WAITING_FOR_NEIGHBORS_POSEGRAPHS =
    3u;
  static constexpr uint16_t START_OPTIMIZATION =
    4u;
  static constexpr uint16_t OPTIMIZATION =
    5u;

  // pointer types
  using RawPtr =
    cslam_common_interfaces::msg::OptimizerState_<ContainerAllocator> *;
  using ConstRawPtr =
    const cslam_common_interfaces::msg::OptimizerState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cslam_common_interfaces::msg::OptimizerState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cslam_common_interfaces::msg::OptimizerState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cslam_common_interfaces::msg::OptimizerState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cslam_common_interfaces::msg::OptimizerState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cslam_common_interfaces::msg::OptimizerState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cslam_common_interfaces::msg::OptimizerState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cslam_common_interfaces::msg::OptimizerState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cslam_common_interfaces::msg::OptimizerState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cslam_common_interfaces__msg__OptimizerState
    std::shared_ptr<cslam_common_interfaces::msg::OptimizerState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cslam_common_interfaces__msg__OptimizerState
    std::shared_ptr<cslam_common_interfaces::msg::OptimizerState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OptimizerState_ & other) const
  {
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const OptimizerState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OptimizerState_

// alias to use template instance with default allocator
using OptimizerState =
  cslam_common_interfaces::msg::OptimizerState_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint16_t OptimizerState_<ContainerAllocator>::IDLE;
template<typename ContainerAllocator>
constexpr uint16_t OptimizerState_<ContainerAllocator>::WAITING_FOR_NEIGHBORS_INFO;
template<typename ContainerAllocator>
constexpr uint16_t OptimizerState_<ContainerAllocator>::POSEGRAPH_COLLECTION;
template<typename ContainerAllocator>
constexpr uint16_t OptimizerState_<ContainerAllocator>::WAITING_FOR_NEIGHBORS_POSEGRAPHS;
template<typename ContainerAllocator>
constexpr uint16_t OptimizerState_<ContainerAllocator>::START_OPTIMIZATION;
template<typename ContainerAllocator>
constexpr uint16_t OptimizerState_<ContainerAllocator>::OPTIMIZATION;

}  // namespace msg

}  // namespace cslam_common_interfaces

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__OPTIMIZER_STATE__STRUCT_HPP_
