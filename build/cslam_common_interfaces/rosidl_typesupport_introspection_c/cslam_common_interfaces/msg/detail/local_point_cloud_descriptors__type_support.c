// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cslam_common_interfaces:msg/LocalPointCloudDescriptors.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cslam_common_interfaces/msg/detail/local_point_cloud_descriptors__rosidl_typesupport_introspection_c.h"
#include "cslam_common_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cslam_common_interfaces/msg/detail/local_point_cloud_descriptors__functions.h"
#include "cslam_common_interfaces/msg/detail/local_point_cloud_descriptors__struct.h"


// Include directives for member types
// Member `matches_robot_id`
// Member `matches_keyframe_id`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `data`
#include "sensor_msgs/msg/point_cloud2.h"
// Member `data`
#include "sensor_msgs/msg/detail/point_cloud2__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LocalPointCloudDescriptors__rosidl_typesupport_introspection_c__LocalPointCloudDescriptors_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cslam_common_interfaces__msg__LocalPointCloudDescriptors__init(message_memory);
}

void LocalPointCloudDescriptors__rosidl_typesupport_introspection_c__LocalPointCloudDescriptors_fini_function(void * message_memory)
{
  cslam_common_interfaces__msg__LocalPointCloudDescriptors__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LocalPointCloudDescriptors__rosidl_typesupport_introspection_c__LocalPointCloudDescriptors_message_member_array[5] = {
  {
    "keyframe_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces__msg__LocalPointCloudDescriptors, keyframe_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces__msg__LocalPointCloudDescriptors, robot_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "matches_robot_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces__msg__LocalPointCloudDescriptors, matches_robot_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "matches_keyframe_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces__msg__LocalPointCloudDescriptors, matches_keyframe_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces__msg__LocalPointCloudDescriptors, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LocalPointCloudDescriptors__rosidl_typesupport_introspection_c__LocalPointCloudDescriptors_message_members = {
  "cslam_common_interfaces__msg",  // message namespace
  "LocalPointCloudDescriptors",  // message name
  5,  // number of fields
  sizeof(cslam_common_interfaces__msg__LocalPointCloudDescriptors),
  LocalPointCloudDescriptors__rosidl_typesupport_introspection_c__LocalPointCloudDescriptors_message_member_array,  // message members
  LocalPointCloudDescriptors__rosidl_typesupport_introspection_c__LocalPointCloudDescriptors_init_function,  // function to initialize message memory (memory has to be allocated)
  LocalPointCloudDescriptors__rosidl_typesupport_introspection_c__LocalPointCloudDescriptors_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LocalPointCloudDescriptors__rosidl_typesupport_introspection_c__LocalPointCloudDescriptors_message_type_support_handle = {
  0,
  &LocalPointCloudDescriptors__rosidl_typesupport_introspection_c__LocalPointCloudDescriptors_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cslam_common_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cslam_common_interfaces, msg, LocalPointCloudDescriptors)() {
  LocalPointCloudDescriptors__rosidl_typesupport_introspection_c__LocalPointCloudDescriptors_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, PointCloud2)();
  if (!LocalPointCloudDescriptors__rosidl_typesupport_introspection_c__LocalPointCloudDescriptors_message_type_support_handle.typesupport_identifier) {
    LocalPointCloudDescriptors__rosidl_typesupport_introspection_c__LocalPointCloudDescriptors_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LocalPointCloudDescriptors__rosidl_typesupport_introspection_c__LocalPointCloudDescriptors_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
