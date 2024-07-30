// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cslam_common_interfaces:msg/KeyframePointCloud.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__KEYFRAME_POINT_CLOUD__STRUCT_HPP_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__KEYFRAME_POINT_CLOUD__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'pointcloud'
#include "sensor_msgs/msg/detail/point_cloud2__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cslam_common_interfaces__msg__KeyframePointCloud __attribute__((deprecated))
#else
# define DEPRECATED__cslam_common_interfaces__msg__KeyframePointCloud __declspec(deprecated)
#endif

namespace cslam_common_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct KeyframePointCloud_
{
  using Type = KeyframePointCloud_<ContainerAllocator>;

  explicit KeyframePointCloud_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pointcloud(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
    }
  }

  explicit KeyframePointCloud_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pointcloud(_alloc, _init)
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
  using _pointcloud_type =
    sensor_msgs::msg::PointCloud2_<ContainerAllocator>;
  _pointcloud_type pointcloud;

  // setters for named parameter idiom
  Type & set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__pointcloud(
    const sensor_msgs::msg::PointCloud2_<ContainerAllocator> & _arg)
  {
    this->pointcloud = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cslam_common_interfaces::msg::KeyframePointCloud_<ContainerAllocator> *;
  using ConstRawPtr =
    const cslam_common_interfaces::msg::KeyframePointCloud_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cslam_common_interfaces::msg::KeyframePointCloud_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cslam_common_interfaces::msg::KeyframePointCloud_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cslam_common_interfaces::msg::KeyframePointCloud_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cslam_common_interfaces::msg::KeyframePointCloud_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cslam_common_interfaces::msg::KeyframePointCloud_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cslam_common_interfaces::msg::KeyframePointCloud_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cslam_common_interfaces::msg::KeyframePointCloud_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cslam_common_interfaces::msg::KeyframePointCloud_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cslam_common_interfaces__msg__KeyframePointCloud
    std::shared_ptr<cslam_common_interfaces::msg::KeyframePointCloud_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cslam_common_interfaces__msg__KeyframePointCloud
    std::shared_ptr<cslam_common_interfaces::msg::KeyframePointCloud_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const KeyframePointCloud_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->pointcloud != other.pointcloud) {
      return false;
    }
    return true;
  }
  bool operator!=(const KeyframePointCloud_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct KeyframePointCloud_

// alias to use template instance with default allocator
using KeyframePointCloud =
  cslam_common_interfaces::msg::KeyframePointCloud_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cslam_common_interfaces

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__KEYFRAME_POINT_CLOUD__STRUCT_HPP_
