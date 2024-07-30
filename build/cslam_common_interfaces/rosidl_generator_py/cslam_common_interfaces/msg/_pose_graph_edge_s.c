// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from cslam_common_interfaces:msg/PoseGraphEdge.idl
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
#include "cslam_common_interfaces/msg/detail/pose_graph_edge__struct.h"
#include "cslam_common_interfaces/msg/detail/pose_graph_edge__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool cslam_common_interfaces__msg__multi_robot_key__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * cslam_common_interfaces__msg__multi_robot_key__convert_to_py(void * raw_ros_message);
bool cslam_common_interfaces__msg__multi_robot_key__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * cslam_common_interfaces__msg__multi_robot_key__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool cslam_common_interfaces__msg__pose_graph_edge__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[59];
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
    assert(strncmp("cslam_common_interfaces.msg._pose_graph_edge.PoseGraphEdge", full_classname_dest, 58) == 0);
  }
  cslam_common_interfaces__msg__PoseGraphEdge * ros_message = _ros_message;
  {  // key_from
    PyObject * field = PyObject_GetAttrString(_pymsg, "key_from");
    if (!field) {
      return false;
    }
    if (!cslam_common_interfaces__msg__multi_robot_key__convert_from_py(field, &ros_message->key_from)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // key_to
    PyObject * field = PyObject_GetAttrString(_pymsg, "key_to");
    if (!field) {
      return false;
    }
    if (!cslam_common_interfaces__msg__multi_robot_key__convert_from_py(field, &ros_message->key_to)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // measurement
    PyObject * field = PyObject_GetAttrString(_pymsg, "measurement");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose__convert_from_py(field, &ros_message->measurement)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // noise_std
    PyObject * field = PyObject_GetAttrString(_pymsg, "noise_std");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
      Py_ssize_t size = 6;
      double * dest = ros_message->noise_std;
      for (Py_ssize_t i = 0; i < size; ++i) {
        double tmp = *(npy_float64 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * cslam_common_interfaces__msg__pose_graph_edge__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PoseGraphEdge */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("cslam_common_interfaces.msg._pose_graph_edge");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PoseGraphEdge");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  cslam_common_interfaces__msg__PoseGraphEdge * ros_message = (cslam_common_interfaces__msg__PoseGraphEdge *)raw_ros_message;
  {  // key_from
    PyObject * field = NULL;
    field = cslam_common_interfaces__msg__multi_robot_key__convert_to_py(&ros_message->key_from);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "key_from", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // key_to
    PyObject * field = NULL;
    field = cslam_common_interfaces__msg__multi_robot_key__convert_to_py(&ros_message->key_to);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "key_to", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // measurement
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose__convert_to_py(&ros_message->measurement);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "measurement", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // noise_std
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "noise_std");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
    assert(sizeof(npy_float64) == sizeof(double));
    npy_float64 * dst = (npy_float64 *)PyArray_GETPTR1(seq_field, 0);
    double * src = &(ros_message->noise_std[0]);
    memcpy(dst, src, 6 * sizeof(double));
    Py_DECREF(field);
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
