// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cslam_common_interfaces:msg/LocalPointCloudDescriptors.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__LOCAL_POINT_CLOUD_DESCRIPTORS__STRUCT_HPP_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__LOCAL_POINT_CLOUD_DESCRIPTORS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'data'
#include "sensor_msgs/msg/detail/point_cloud2__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cslam_common_interfaces__msg__LocalPointCloudDescriptors __attribute__((deprecated))
#else
# define DEPRECATED__cslam_common_interfaces__msg__LocalPointCloudDescriptors __declspec(deprecated)
#endif

namespace cslam_common_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LocalPointCloudDescriptors_
{
  using Type = LocalPointCloudDescriptors_<ContainerAllocator>;

  explicit LocalPointCloudDescriptors_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->keyframe_id = 0ul;
      this->robot_id = 0ul;
    }
  }

  explicit LocalPointCloudDescriptors_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_alloc, _init)
  {
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
  using _matches_robot_id_type =
    std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other>;
  _matches_robot_id_type matches_robot_id;
  using _matches_keyframe_id_type =
    std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other>;
  _matches_keyframe_id_type matches_keyframe_id;
  using _data_type =
    sensor_msgs::msg::PointCloud2_<ContainerAllocator>;
  _data_type data;

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
  Type & set__data(
    const sensor_msgs::msg::PointCloud2_<ContainerAllocator> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cslam_common_interfaces::msg::LocalPointCloudDescriptors_<ContainerAllocator> *;
  using ConstRawPtr =
    const cslam_common_interfaces::msg::LocalPointCloudDescriptors_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cslam_common_interfaces::msg::LocalPointCloudDescriptors_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cslam_common_interfaces::msg::LocalPointCloudDescriptors_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cslam_common_interfaces::msg::LocalPointCloudDescriptors_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cslam_common_interfaces::msg::LocalPointCloudDescriptors_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cslam_common_interfaces::msg::LocalPointCloudDescriptors_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cslam_common_interfaces::msg::LocalPointCloudDescriptors_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cslam_common_interfaces::msg::LocalPointCloudDescriptors_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cslam_common_interfaces::msg::LocalPointCloudDescriptors_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cslam_common_interfaces__msg__LocalPointCloudDescriptors
    std::shared_ptr<cslam_common_interfaces::msg::LocalPointCloudDescriptors_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cslam_common_interfaces__msg__LocalPointCloudDescriptors
    std::shared_ptr<cslam_common_interfaces::msg::LocalPointCloudDescriptors_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LocalPointCloudDescriptors_ & other) const
  {
    if (this->keyframe_id != other.keyframe_id) {
      return false;
    }
    if (this->robot_id != other.robot_id) {
      return false;
    }
    if (this->matches_robot_id != other.matches_robot_id) {
      return false;
    }
    if (this->matches_keyframe_id != other.matches_keyframe_id) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const LocalPointCloudDescriptors_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LocalPointCloudDescriptors_

// alias to use template instance with default allocator
using LocalPointCloudDescriptors =
  cslam_common_interfaces::msg::LocalPointCloudDescriptors_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cslam_common_interfaces

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__LOCAL_POINT_CLOUD_DESCRIPTORS__STRUCT_HPP_
