// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cslam_common_interfaces:msg/PoseGraph.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__POSE_GRAPH__BUILDER_HPP_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__POSE_GRAPH__BUILDER_HPP_

#include "cslam_common_interfaces/msg/detail/pose_graph__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cslam_common_interfaces
{

namespace msg
{

namespace builder
{

class Init_PoseGraph_spectral_matches
{
public:
  explicit Init_PoseGraph_spectral_matches(::cslam_common_interfaces::msg::PoseGraph & msg)
  : msg_(msg)
  {}
  ::cslam_common_interfaces::msg::PoseGraph spectral_matches(::cslam_common_interfaces::msg::PoseGraph::_spectral_matches_type arg)
  {
    msg_.spectral_matches = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cslam_common_interfaces::msg::PoseGraph msg_;
};

class Init_PoseGraph_sparsification_cumulative_computation_time
{
public:
  explicit Init_PoseGraph_sparsification_cumulative_computation_time(::cslam_common_interfaces::msg::PoseGraph & msg)
  : msg_(msg)
  {}
  Init_PoseGraph_spectral_matches sparsification_cumulative_computation_time(::cslam_common_interfaces::msg::PoseGraph::_sparsification_cumulative_computation_time_type arg)
  {
    msg_.sparsification_cumulative_computation_time = std::move(arg);
    return Init_PoseGraph_spectral_matches(msg_);
  }

private:
  ::cslam_common_interfaces::msg::PoseGraph msg_;
};

class Init_PoseGraph_front_end_cumulative_communication_bytes
{
public:
  explicit Init_PoseGraph_front_end_cumulative_communication_bytes(::cslam_common_interfaces::msg::PoseGraph & msg)
  : msg_(msg)
  {}
  Init_PoseGraph_sparsification_cumulative_computation_time front_end_cumulative_communication_bytes(::cslam_common_interfaces::msg::PoseGraph::_front_end_cumulative_communication_bytes_type arg)
  {
    msg_.front_end_cumulative_communication_bytes = std::move(arg);
    return Init_PoseGraph_sparsification_cumulative_computation_time(msg_);
  }

private:
  ::cslam_common_interfaces::msg::PoseGraph msg_;
};

class Init_PoseGraph_nb_matches_selected
{
public:
  explicit Init_PoseGraph_nb_matches_selected(::cslam_common_interfaces::msg::PoseGraph & msg)
  : msg_(msg)
  {}
  Init_PoseGraph_front_end_cumulative_communication_bytes nb_matches_selected(::cslam_common_interfaces::msg::PoseGraph::_nb_matches_selected_type arg)
  {
    msg_.nb_matches_selected = std::move(arg);
    return Init_PoseGraph_front_end_cumulative_communication_bytes(msg_);
  }

private:
  ::cslam_common_interfaces::msg::PoseGraph msg_;
};

class Init_PoseGraph_nb_vertices_transmitted
{
public:
  explicit Init_PoseGraph_nb_vertices_transmitted(::cslam_common_interfaces::msg::PoseGraph & msg)
  : msg_(msg)
  {}
  Init_PoseGraph_nb_matches_selected nb_vertices_transmitted(::cslam_common_interfaces::msg::PoseGraph::_nb_vertices_transmitted_type arg)
  {
    msg_.nb_vertices_transmitted = std::move(arg);
    return Init_PoseGraph_nb_matches_selected(msg_);
  }

private:
  ::cslam_common_interfaces::msg::PoseGraph msg_;
};

class Init_PoseGraph_nb_failed_matches
{
public:
  explicit Init_PoseGraph_nb_failed_matches(::cslam_common_interfaces::msg::PoseGraph & msg)
  : msg_(msg)
  {}
  Init_PoseGraph_nb_vertices_transmitted nb_failed_matches(::cslam_common_interfaces::msg::PoseGraph::_nb_failed_matches_type arg)
  {
    msg_.nb_failed_matches = std::move(arg);
    return Init_PoseGraph_nb_vertices_transmitted(msg_);
  }

private:
  ::cslam_common_interfaces::msg::PoseGraph msg_;
};

class Init_PoseGraph_nb_matches
{
public:
  explicit Init_PoseGraph_nb_matches(::cslam_common_interfaces::msg::PoseGraph & msg)
  : msg_(msg)
  {}
  Init_PoseGraph_nb_failed_matches nb_matches(::cslam_common_interfaces::msg::PoseGraph::_nb_matches_type arg)
  {
    msg_.nb_matches = std::move(arg);
    return Init_PoseGraph_nb_failed_matches(msg_);
  }

private:
  ::cslam_common_interfaces::msg::PoseGraph msg_;
};

class Init_PoseGraph_gps_values
{
public:
  explicit Init_PoseGraph_gps_values(::cslam_common_interfaces::msg::PoseGraph & msg)
  : msg_(msg)
  {}
  Init_PoseGraph_nb_matches gps_values(::cslam_common_interfaces::msg::PoseGraph::_gps_values_type arg)
  {
    msg_.gps_values = std::move(arg);
    return Init_PoseGraph_nb_matches(msg_);
  }

private:
  ::cslam_common_interfaces::msg::PoseGraph msg_;
};

class Init_PoseGraph_gps_values_idx
{
public:
  explicit Init_PoseGraph_gps_values_idx(::cslam_common_interfaces::msg::PoseGraph & msg)
  : msg_(msg)
  {}
  Init_PoseGraph_gps_values gps_values_idx(::cslam_common_interfaces::msg::PoseGraph::_gps_values_idx_type arg)
  {
    msg_.gps_values_idx = std::move(arg);
    return Init_PoseGraph_gps_values(msg_);
  }

private:
  ::cslam_common_interfaces::msg::PoseGraph msg_;
};

class Init_PoseGraph_values
{
public:
  explicit Init_PoseGraph_values(::cslam_common_interfaces::msg::PoseGraph & msg)
  : msg_(msg)
  {}
  Init_PoseGraph_gps_values_idx values(::cslam_common_interfaces::msg::PoseGraph::_values_type arg)
  {
    msg_.values = std::move(arg);
    return Init_PoseGraph_gps_values_idx(msg_);
  }

private:
  ::cslam_common_interfaces::msg::PoseGraph msg_;
};

class Init_PoseGraph_edges
{
public:
  explicit Init_PoseGraph_edges(::cslam_common_interfaces::msg::PoseGraph & msg)
  : msg_(msg)
  {}
  Init_PoseGraph_values edges(::cslam_common_interfaces::msg::PoseGraph::_edges_type arg)
  {
    msg_.edges = std::move(arg);
    return Init_PoseGraph_values(msg_);
  }

private:
  ::cslam_common_interfaces::msg::PoseGraph msg_;
};

class Init_PoseGraph_connected_robots
{
public:
  explicit Init_PoseGraph_connected_robots(::cslam_common_interfaces::msg::PoseGraph & msg)
  : msg_(msg)
  {}
  Init_PoseGraph_edges connected_robots(::cslam_common_interfaces::msg::PoseGraph::_connected_robots_type arg)
  {
    msg_.connected_robots = std::move(arg);
    return Init_PoseGraph_edges(msg_);
  }

private:
  ::cslam_common_interfaces::msg::PoseGraph msg_;
};

class Init_PoseGraph_origin_robot_id
{
public:
  explicit Init_PoseGraph_origin_robot_id(::cslam_common_interfaces::msg::PoseGraph & msg)
  : msg_(msg)
  {}
  Init_PoseGraph_connected_robots origin_robot_id(::cslam_common_interfaces::msg::PoseGraph::_origin_robot_id_type arg)
  {
    msg_.origin_robot_id = std::move(arg);
    return Init_PoseGraph_connected_robots(msg_);
  }

private:
  ::cslam_common_interfaces::msg::PoseGraph msg_;
};

class Init_PoseGraph_robot_id
{
public:
  Init_PoseGraph_robot_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PoseGraph_origin_robot_id robot_id(::cslam_common_interfaces::msg::PoseGraph::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_PoseGraph_origin_robot_id(msg_);
  }

private:
  ::cslam_common_interfaces::msg::PoseGraph msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cslam_common_interfaces::msg::PoseGraph>()
{
  return cslam_common_interfaces::msg::builder::Init_PoseGraph_robot_id();
}

}  // namespace cslam_common_interfaces

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__POSE_GRAPH__BUILDER_HPP_
