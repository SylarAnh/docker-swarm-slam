// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from cslam_common_interfaces:msg/InterRobotMatch.idl
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
#include "cslam_common_interfaces/msg/detail/inter_robot_match__struct.h"
#include "cslam_common_interfaces/msg/detail/inter_robot_match__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool cslam_common_interfaces__msg__inter_robot_match__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[63];
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
    assert(strncmp("cslam_common_interfaces.msg._inter_robot_match.InterRobotMatch", full_classname_dest, 62) == 0);
  }
  cslam_common_interfaces__msg__InterRobotMatch * ros_message = _ros_message;
  {  // robot0_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "robot0_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->robot0_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // robot0_keyframe_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "robot0_keyframe_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->robot0_keyframe_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // robot1_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "robot1_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->robot1_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // robot1_keyframe_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "robot1_keyframe_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->robot1_keyframe_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // weight
    PyObject * field = PyObject_GetAttrString(_pymsg, "weight");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->weight = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * cslam_common_interfaces__msg__inter_robot_match__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of InterRobotMatch */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("cslam_common_interfaces.msg._inter_robot_match");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "InterRobotMatch");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  cslam_common_interfaces__msg__InterRobotMatch * ros_message = (cslam_common_interfaces__msg__InterRobotMatch *)raw_ros_message;
  {  // robot0_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->robot0_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "robot0_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // robot0_keyframe_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->robot0_keyframe_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "robot0_keyframe_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // robot1_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->robot1_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "robot1_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // robot1_keyframe_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->robot1_keyframe_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "robot1_keyframe_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // weight
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->weight);
    {
      int rc = PyObject_SetAttrString(_pymessage, "weight", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
