// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from cslam_common_interfaces:msg/RobotIdsAndOrigin.idl
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
#include "cslam_common_interfaces/msg/detail/robot_ids_and_origin__struct.h"
#include "cslam_common_interfaces/msg/detail/robot_ids_and_origin__functions.h"

bool cslam_common_interfaces__msg__robot_ids__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * cslam_common_interfaces__msg__robot_ids__convert_to_py(void * raw_ros_message);
bool cslam_common_interfaces__msg__robot_ids__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * cslam_common_interfaces__msg__robot_ids__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool cslam_common_interfaces__msg__robot_ids_and_origin__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[68];
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
    assert(strncmp("cslam_common_interfaces.msg._robot_ids_and_origin.RobotIdsAndOrigin", full_classname_dest, 67) == 0);
  }
  cslam_common_interfaces__msg__RobotIdsAndOrigin * ros_message = _ros_message;
  {  // robots
    PyObject * field = PyObject_GetAttrString(_pymsg, "robots");
    if (!field) {
      return false;
    }
    if (!cslam_common_interfaces__msg__robot_ids__convert_from_py(field, &ros_message->robots)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // origins
    PyObject * field = PyObject_GetAttrString(_pymsg, "origins");
    if (!field) {
      return false;
    }
    if (!cslam_common_interfaces__msg__robot_ids__convert_from_py(field, &ros_message->origins)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * cslam_common_interfaces__msg__robot_ids_and_origin__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RobotIdsAndOrigin */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("cslam_common_interfaces.msg._robot_ids_and_origin");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RobotIdsAndOrigin");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  cslam_common_interfaces__msg__RobotIdsAndOrigin * ros_message = (cslam_common_interfaces__msg__RobotIdsAndOrigin *)raw_ros_message;
  {  // robots
    PyObject * field = NULL;
    field = cslam_common_interfaces__msg__robot_ids__convert_to_py(&ros_message->robots);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "robots", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // origins
    PyObject * field = NULL;
    field = cslam_common_interfaces__msg__robot_ids__convert_to_py(&ros_message->origins);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "origins", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
