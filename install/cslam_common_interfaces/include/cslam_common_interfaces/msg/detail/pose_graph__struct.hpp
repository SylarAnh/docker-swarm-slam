// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cslam_common_interfaces:msg/PoseGraph.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__POSE_GRAPH__STRUCT_HPP_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__POSE_GRAPH__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'connected_robots'
#include "cslam_common_interfaces/msg/detail/robot_ids__struct.hpp"
// Member 'edges'
#include "cslam_common_interfaces/msg/detail/pose_graph_edge__struct.hpp"
// Member 'values'
#include "cslam_common_interfaces/msg/detail/pose_graph_value__struct.hpp"
// Member 'gps_values'
#include "sensor_msgs/msg/detail/nav_sat_fix__struct.hpp"
// Member 'spectral_matches'
#include "cslam_common_interfaces/msg/detail/inter_robot_matches__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cslam_common_interfaces__msg__PoseGraph __attribute__((deprecated))
#else
# define DEPRECATED__cslam_common_interfaces__msg__PoseGraph __declspec(deprecated)
#endif

namespace cslam_common_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PoseGraph_
{
  using Type = PoseGraph_<ContainerAllocator>;

  explicit PoseGraph_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : connected_robots(_init),
    spectral_matches(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = 0ul;
      this->origin_robot_id = 0ul;
      this->nb_matches = 0ul;
      this->nb_failed_matches = 0ul;
      this->nb_vertices_transmitted = 0ul;
      this->nb_matches_selected = 0ul;
      this->front_end_cumulative_communication_bytes = 0ull;
      this->sparsification_cumulative_computation_time = 0.0;
    }
  }

  explicit PoseGraph_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : connected_robots(_alloc, _init),
    spectral_matches(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = 0ul;
      this->origin_robot_id = 0ul;
      this->nb_matches = 0ul;
      this->nb_failed_matches = 0ul;
      this->nb_vertices_transmitted = 0ul;
      this->nb_matches_selected = 0ul;
      this->front_end_cumulative_communication_bytes = 0ull;
      this->sparsification_cumulative_computation_time = 0.0;
    }
  }

  // field types and members
  using _robot_id_type =
    uint32_t;
  _robot_id_type robot_id;
  using _origin_robot_id_type =
    uint32_t;
  _origin_robot_id_type origin_robot_id;
  using _connected_robots_type =
    cslam_common_interfaces::msg::RobotIds_<ContainerAllocator>;
  _connected_robots_type connected_robots;
  using _edges_type =
    std::vector<cslam_common_interfaces::msg::PoseGraphEdge_<ContainerAllocator>, typename ContainerAllocator::template rebind<cslam_common_interfaces::msg::PoseGraphEdge_<ContainerAllocator>>::other>;
  _edges_type edges;
  using _values_type =
    std::vector<cslam_common_interfaces::msg::PoseGraphValue_<ContainerAllocator>, typename ContainerAllocator::template rebind<cslam_common_interfaces::msg::PoseGraphValue_<ContainerAllocator>>::other>;
  _values_type values;
  using _gps_values_idx_type =
    std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other>;
  _gps_values_idx_type gps_values_idx;
  using _gps_values_type =
    std::vector<sensor_msgs::msg::NavSatFix_<ContainerAllocator>, typename ContainerAllocator::template rebind<sensor_msgs::msg::NavSatFix_<ContainerAllocator>>::other>;
  _gps_values_type gps_values;
  using _nb_matches_type =
    uint32_t;
  _nb_matches_type nb_matches;
  using _nb_failed_matches_type =
    uint32_t;
  _nb_failed_matches_type nb_failed_matches;
  using _nb_vertices_transmitted_type =
    uint32_t;
  _nb_vertices_transmitted_type nb_vertices_transmitted;
  using _nb_matches_selected_type =
    uint32_t;
  _nb_matches_selected_type nb_matches_selected;
  using _front_end_cumulative_communication_bytes_type =
    uint64_t;
  _front_end_cumulative_communication_bytes_type front_end_cumulative_communication_bytes;
  using _sparsification_cumulative_computation_time_type =
    double;
  _sparsification_cumulative_computation_time_type sparsification_cumulative_computation_time;
  using _spectral_matches_type =
    cslam_common_interfaces::msg::InterRobotMatches_<ContainerAllocator>;
  _spectral_matches_type spectral_matches;

  // setters for named parameter idiom
  Type & set__robot_id(
    const uint32_t & _arg)
  {
    this->robot_id = _arg;
    return *this;
  }
  Type & set__origin_robot_id(
    const uint32_t & _arg)
  {
    this->origin_robot_id = _arg;
    return *this;
  }
  Type & set__connected_robots(
    const cslam_common_interfaces::msg::RobotIds_<ContainerAllocator> & _arg)
  {
    this->connected_robots = _arg;
    return *this;
  }
  Type & set__edges(
    const std::vector<cslam_common_interfaces::msg::PoseGraphEdge_<ContainerAllocator>, typename ContainerAllocator::template rebind<cslam_common_interfaces::msg::PoseGraphEdge_<ContainerAllocator>>::other> & _arg)
  {
    this->edges = _arg;
    return *this;
  }
  Type & set__values(
    const std::vector<cslam_common_interfaces::msg::PoseGraphValue_<ContainerAllocator>, typename ContainerAllocator::template rebind<cslam_common_interfaces::msg::PoseGraphValue_<ContainerAllocator>>::other> & _arg)
  {
    this->values = _arg;
    return *this;
  }
  Type & set__gps_values_idx(
    const std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other> & _arg)
  {
    this->gps_values_idx = _arg;
    return *this;
  }
  Type & set__gps_values(
    const std::vector<sensor_msgs::msg::NavSatFix_<ContainerAllocator>, typename ContainerAllocator::template rebind<sensor_msgs::msg::NavSatFix_<ContainerAllocator>>::other> & _arg)
  {
    this->gps_values = _arg;
    return *this;
  }
  Type & set__nb_matches(
    const uint32_t & _arg)
  {
    this->nb_matches = _arg;
    return *this;
  }
  Type & set__nb_failed_matches(
    const uint32_t & _arg)
  {
    this->nb_failed_matches = _arg;
    return *this;
  }
  Type & set__nb_vertices_transmitted(
    const uint32_t & _arg)
  {
    this->nb_vertices_transmitted = _arg;
    return *this;
  }
  Type & set__nb_matches_selected(
    const uint32_t & _arg)
  {
    this->nb_matches_selected = _arg;
    return *this;
  }
  Type & set__front_end_cumulative_communication_bytes(
    const uint64_t & _arg)
  {
    this->front_end_cumulative_communication_bytes = _arg;
    return *this;
  }
  Type & set__sparsification_cumulative_computation_time(
    const double & _arg)
  {
    this->sparsification_cumulative_computation_time = _arg;
    return *this;
  }
  Type & set__spectral_matches(
    const cslam_common_interfaces::msg::InterRobotMatches_<ContainerAllocator> & _arg)
  {
    this->spectral_matches = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cslam_common_interfaces::msg::PoseGraph_<ContainerAllocator> *;
  using ConstRawPtr =
    const cslam_common_interfaces::msg::PoseGraph_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cslam_common_interfaces::msg::PoseGraph_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cslam_common_interfaces::msg::PoseGraph_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cslam_common_interfaces::msg::PoseGraph_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cslam_common_interfaces::msg::PoseGraph_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cslam_common_interfaces::msg::PoseGraph_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cslam_common_interfaces::msg::PoseGraph_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cslam_common_interfaces::msg::PoseGraph_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cslam_common_interfaces::msg::PoseGraph_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cslam_common_interfaces__msg__PoseGraph
    std::shared_ptr<cslam_common_interfaces::msg::PoseGraph_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cslam_common_interfaces__msg__PoseGraph
    std::shared_ptr<cslam_common_interfaces::msg::PoseGraph_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PoseGraph_ & other) const
  {
    if (this->robot_id != other.robot_id) {
      return false;
    }
    if (this->origin_robot_id != other.origin_robot_id) {
      return false;
    }
    if (this->connected_robots != other.connected_robots) {
      return false;
    }
    if (this->edges != other.edges) {
      return false;
    }
    if (this->values != other.values) {
      return false;
    }
    if (this->gps_values_idx != other.gps_values_idx) {
      return false;
    }
    if (this->gps_values != other.gps_values) {
      return false;
    }
    if (this->nb_matches != other.nb_matches) {
      return false;
    }
    if (this->nb_failed_matches != other.nb_failed_matches) {
      return false;
    }
    if (this->nb_vertices_transmitted != other.nb_vertices_transmitted) {
      return false;
    }
    if (this->nb_matches_selected != other.nb_matches_selected) {
      return false;
    }
    if (this->front_end_cumulative_communication_bytes != other.front_end_cumulative_communication_bytes) {
      return false;
    }
    if (this->sparsification_cumulative_computation_time != other.sparsification_cumulative_computation_time) {
      return false;
    }
    if (this->spectral_matches != other.spectral_matches) {
      return false;
    }
    return true;
  }
  bool operator!=(const PoseGraph_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PoseGraph_

// alias to use template instance with default allocator
using PoseGraph =
  cslam_common_interfaces::msg::PoseGraph_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cslam_common_interfaces

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__POSE_GRAPH__STRUCT_HPP_
