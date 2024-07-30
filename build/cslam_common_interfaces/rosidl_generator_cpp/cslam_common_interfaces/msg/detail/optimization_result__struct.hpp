// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cslam_common_interfaces:msg/OptimizationResult.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__OPTIMIZATION_RESULT__STRUCT_HPP_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__OPTIMIZATION_RESULT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'factors'
#include "cslam_common_interfaces/msg/detail/pose_graph_edge__struct.hpp"
// Member 'estimates'
#include "cslam_common_interfaces/msg/detail/pose_graph_value__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cslam_common_interfaces__msg__OptimizationResult __attribute__((deprecated))
#else
# define DEPRECATED__cslam_common_interfaces__msg__OptimizationResult __declspec(deprecated)
#endif

namespace cslam_common_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OptimizationResult_
{
  using Type = OptimizationResult_<ContainerAllocator>;

  explicit OptimizationResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->origin_robot_id = 0ul;
    }
  }

  explicit OptimizationResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->origin_robot_id = 0ul;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _origin_robot_id_type =
    uint32_t;
  _origin_robot_id_type origin_robot_id;
  using _factors_type =
    std::vector<cslam_common_interfaces::msg::PoseGraphEdge_<ContainerAllocator>, typename ContainerAllocator::template rebind<cslam_common_interfaces::msg::PoseGraphEdge_<ContainerAllocator>>::other>;
  _factors_type factors;
  using _estimates_type =
    std::vector<cslam_common_interfaces::msg::PoseGraphValue_<ContainerAllocator>, typename ContainerAllocator::template rebind<cslam_common_interfaces::msg::PoseGraphValue_<ContainerAllocator>>::other>;
  _estimates_type estimates;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__origin_robot_id(
    const uint32_t & _arg)
  {
    this->origin_robot_id = _arg;
    return *this;
  }
  Type & set__factors(
    const std::vector<cslam_common_interfaces::msg::PoseGraphEdge_<ContainerAllocator>, typename ContainerAllocator::template rebind<cslam_common_interfaces::msg::PoseGraphEdge_<ContainerAllocator>>::other> & _arg)
  {
    this->factors = _arg;
    return *this;
  }
  Type & set__estimates(
    const std::vector<cslam_common_interfaces::msg::PoseGraphValue_<ContainerAllocator>, typename ContainerAllocator::template rebind<cslam_common_interfaces::msg::PoseGraphValue_<ContainerAllocator>>::other> & _arg)
  {
    this->estimates = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cslam_common_interfaces::msg::OptimizationResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const cslam_common_interfaces::msg::OptimizationResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cslam_common_interfaces::msg::OptimizationResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cslam_common_interfaces::msg::OptimizationResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cslam_common_interfaces::msg::OptimizationResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cslam_common_interfaces::msg::OptimizationResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cslam_common_interfaces::msg::OptimizationResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cslam_common_interfaces::msg::OptimizationResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cslam_common_interfaces::msg::OptimizationResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cslam_common_interfaces::msg::OptimizationResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cslam_common_interfaces__msg__OptimizationResult
    std::shared_ptr<cslam_common_interfaces::msg::OptimizationResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cslam_common_interfaces__msg__OptimizationResult
    std::shared_ptr<cslam_common_interfaces::msg::OptimizationResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OptimizationResult_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->origin_robot_id != other.origin_robot_id) {
      return false;
    }
    if (this->factors != other.factors) {
      return false;
    }
    if (this->estimates != other.estimates) {
      return false;
    }
    return true;
  }
  bool operator!=(const OptimizationResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OptimizationResult_

// alias to use template instance with default allocator
using OptimizationResult =
  cslam_common_interfaces::msg::OptimizationResult_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cslam_common_interfaces

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__OPTIMIZATION_RESULT__STRUCT_HPP_
