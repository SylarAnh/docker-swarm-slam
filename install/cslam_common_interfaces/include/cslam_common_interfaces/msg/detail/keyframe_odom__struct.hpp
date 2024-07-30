// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cslam_common_interfaces:msg/KeyframeOdom.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__KEYFRAME_ODOM__STRUCT_HPP_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__KEYFRAME_ODOM__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'odom'
#include "nav_msgs/msg/detail/odometry__struct.hpp"
// Member 'gps'
#include "sensor_msgs/msg/detail/nav_sat_fix__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cslam_common_interfaces__msg__KeyframeOdom __attribute__((deprecated))
#else
# define DEPRECATED__cslam_common_interfaces__msg__KeyframeOdom __declspec(deprecated)
#endif

namespace cslam_common_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct KeyframeOdom_
{
  using Type = KeyframeOdom_<ContainerAllocator>;

  explicit KeyframeOdom_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : odom(_init),
    gps(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
    }
  }

  explicit KeyframeOdom_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : odom(_alloc, _init),
    gps(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
    }
  }

  // field types and members
  using _id_type =
    uint32_t;
  _id_type id;
  using _odom_type =
    nav_msgs::msg::Odometry_<ContainerAllocator>;
  _odom_type odom;
  using _gps_type =
    sensor_msgs::msg::NavSatFix_<ContainerAllocator>;
  _gps_type gps;

  // setters for named parameter idiom
  Type & set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__odom(
    const nav_msgs::msg::Odometry_<ContainerAllocator> & _arg)
  {
    this->odom = _arg;
    return *this;
  }
  Type & set__gps(
    const sensor_msgs::msg::NavSatFix_<ContainerAllocator> & _arg)
  {
    this->gps = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cslam_common_interfaces::msg::KeyframeOdom_<ContainerAllocator> *;
  using ConstRawPtr =
    const cslam_common_interfaces::msg::KeyframeOdom_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cslam_common_interfaces::msg::KeyframeOdom_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cslam_common_interfaces::msg::KeyframeOdom_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cslam_common_interfaces::msg::KeyframeOdom_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cslam_common_interfaces::msg::KeyframeOdom_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cslam_common_interfaces::msg::KeyframeOdom_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cslam_common_interfaces::msg::KeyframeOdom_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cslam_common_interfaces::msg::KeyframeOdom_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cslam_common_interfaces::msg::KeyframeOdom_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cslam_common_interfaces__msg__KeyframeOdom
    std::shared_ptr<cslam_common_interfaces::msg::KeyframeOdom_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cslam_common_interfaces__msg__KeyframeOdom
    std::shared_ptr<cslam_common_interfaces::msg::KeyframeOdom_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const KeyframeOdom_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->odom != other.odom) {
      return false;
    }
    if (this->gps != other.gps) {
      return false;
    }
    return true;
  }
  bool operator!=(const KeyframeOdom_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct KeyframeOdom_

// alias to use template instance with default allocator
using KeyframeOdom =
  cslam_common_interfaces::msg::KeyframeOdom_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cslam_common_interfaces

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__KEYFRAME_ODOM__STRUCT_HPP_
