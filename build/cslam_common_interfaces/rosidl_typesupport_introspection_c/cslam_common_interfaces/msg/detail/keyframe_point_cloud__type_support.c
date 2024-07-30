// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cslam_common_interfaces:msg/KeyframePointCloud.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cslam_common_interfaces/msg/detail/keyframe_point_cloud__rosidl_typesupport_introspection_c.h"
#include "cslam_common_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cslam_common_interfaces/msg/detail/keyframe_point_cloud__functions.h"
#include "cslam_common_interfaces/msg/detail/keyframe_point_cloud__struct.h"


// Include directives for member types
// Member `pointcloud`
#include "sensor_msgs/msg/point_cloud2.h"
// Member `pointcloud`
#include "sensor_msgs/msg/detail/point_cloud2__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void KeyframePointCloud__rosidl_typesupport_introspection_c__KeyframePointCloud_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cslam_common_interfaces__msg__KeyframePointCloud__init(message_memory);
}

void KeyframePointCloud__rosidl_typesupport_introspection_c__KeyframePointCloud_fini_function(void * message_memory)
{
  cslam_common_interfaces__msg__KeyframePointCloud__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember KeyframePointCloud__rosidl_typesupport_introspection_c__KeyframePointCloud_message_member_array[2] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces__msg__KeyframePointCloud, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pointcloud",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cslam_common_interfaces__msg__KeyframePointCloud, pointcloud),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers KeyframePointCloud__rosidl_typesupport_introspection_c__KeyframePointCloud_message_members = {
  "cslam_common_interfaces__msg",  // message namespace
  "KeyframePointCloud",  // message name
  2,  // number of fields
  sizeof(cslam_common_interfaces__msg__KeyframePointCloud),
  KeyframePointCloud__rosidl_typesupport_introspection_c__KeyframePointCloud_message_member_array,  // message members
  KeyframePointCloud__rosidl_typesupport_introspection_c__KeyframePointCloud_init_function,  // function to initialize message memory (memory has to be allocated)
  KeyframePointCloud__rosidl_typesupport_introspection_c__KeyframePointCloud_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t KeyframePointCloud__rosidl_typesupport_introspection_c__KeyframePointCloud_message_type_support_handle = {
  0,
  &KeyframePointCloud__rosidl_typesupport_introspection_c__KeyframePointCloud_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cslam_common_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cslam_common_interfaces, msg, KeyframePointCloud)() {
  KeyframePointCloud__rosidl_typesupport_introspection_c__KeyframePointCloud_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, PointCloud2)();
  if (!KeyframePointCloud__rosidl_typesupport_introspection_c__KeyframePointCloud_message_type_support_handle.typesupport_identifier) {
    KeyframePointCloud__rosidl_typesupport_introspection_c__KeyframePointCloud_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &KeyframePointCloud__rosidl_typesupport_introspection_c__KeyframePointCloud_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
