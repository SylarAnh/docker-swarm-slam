// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from cslam_common_interfaces:msg/IntraRobotLoopClosure.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "cslam_common_interfaces/msg/detail/intra_robot_loop_closure__struct.h"
#include "cslam_common_interfaces/msg/detail/intra_robot_loop_closure__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__transform__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__transform__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool cslam_common_interfaces__msg__intra_robot_loop_closure__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[76];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("cslam_common_interfaces.msg._intra_robot_loop_closure.IntraRobotLoopClosure", full_classname_dest, 75) == 0);
  }
  cslam_common_interfaces__msg__IntraRobotLoopClosure * ros_message = _ros_message;
  {  // keyframe0_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "keyframe0_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->keyframe0_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // keyframe1_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "keyframe1_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->keyframe1_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // success
    PyObject * field = PyObject_GetAttrString(_pymsg, "success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->success = (Py_True == field);
    Py_DECREF(field);
  }
  {  // transform
    PyObject * field = PyObject_GetAttrString(_pymsg, "transform");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__transform__convert_from_py(field, &ros_message->transform)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * cslam_common_interfaces__msg__intra_robot_loop_closure__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of IntraRobotLoopClosure */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("cslam_common_interfaces.msg._intra_robot_loop_closure");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "IntraRobotLoopClosure");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  cslam_common_interfaces__msg__IntraRobotLoopClosure * ros_message = (cslam_common_interfaces__msg__IntraRobotLoopClosure *)raw_ros_message;
  {  // keyframe0_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->keyframe0_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "keyframe0_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // keyframe1_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->keyframe1_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "keyframe1_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // success
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->success ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "success", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // transform
    PyObject * field = NULL;
    field = geometry_msgs__msg__transform__convert_to_py(&ros_message->transform);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "transform", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
