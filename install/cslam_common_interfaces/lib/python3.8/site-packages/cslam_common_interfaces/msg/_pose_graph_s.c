// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from cslam_common_interfaces:msg/PoseGraph.idl
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
#include "cslam_common_interfaces/msg/detail/pose_graph__struct.h"
#include "cslam_common_interfaces/msg/detail/pose_graph__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "cslam_common_interfaces/msg/detail/pose_graph_edge__functions.h"
#include "cslam_common_interfaces/msg/detail/pose_graph_value__functions.h"
#include "sensor_msgs/msg/detail/nav_sat_fix__functions.h"
// end nested array functions include
bool cslam_common_interfaces__msg__robot_ids__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * cslam_common_interfaces__msg__robot_ids__convert_to_py(void * raw_ros_message);
bool cslam_common_interfaces__msg__pose_graph_edge__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * cslam_common_interfaces__msg__pose_graph_edge__convert_to_py(void * raw_ros_message);
bool cslam_common_interfaces__msg__pose_graph_value__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * cslam_common_interfaces__msg__pose_graph_value__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool sensor_msgs__msg__nav_sat_fix__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * sensor_msgs__msg__nav_sat_fix__convert_to_py(void * raw_ros_message);
bool cslam_common_interfaces__msg__inter_robot_matches__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * cslam_common_interfaces__msg__inter_robot_matches__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool cslam_common_interfaces__msg__pose_graph__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
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
    assert(strncmp("cslam_common_interfaces.msg._pose_graph.PoseGraph", full_classname_dest, 49) == 0);
  }
  cslam_common_interfaces__msg__PoseGraph * ros_message = _ros_message;
  {  // robot_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "robot_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->robot_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // origin_robot_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "origin_robot_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->origin_robot_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // connected_robots
    PyObject * field = PyObject_GetAttrString(_pymsg, "connected_robots");
    if (!field) {
      return false;
    }
    if (!cslam_common_interfaces__msg__robot_ids__convert_from_py(field, &ros_message->connected_robots)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // edges
    PyObject * field = PyObject_GetAttrString(_pymsg, "edges");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'edges'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!cslam_common_interfaces__msg__PoseGraphEdge__Sequence__init(&(ros_message->edges), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create cslam_common_interfaces__msg__PoseGraphEdge__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    cslam_common_interfaces__msg__PoseGraphEdge * dest = ros_message->edges.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!cslam_common_interfaces__msg__pose_graph_edge__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // values
    PyObject * field = PyObject_GetAttrString(_pymsg, "values");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'values'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!cslam_common_interfaces__msg__PoseGraphValue__Sequence__init(&(ros_message->values), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create cslam_common_interfaces__msg__PoseGraphValue__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    cslam_common_interfaces__msg__PoseGraphValue * dest = ros_message->values.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!cslam_common_interfaces__msg__pose_graph_value__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // gps_values_idx
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_values_idx");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(uint32_t);
      if (!rosidl_runtime_c__uint32__Sequence__init(&(ros_message->gps_values_idx), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create uint32__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      uint32_t * dest = ros_message->gps_values_idx.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'gps_values_idx'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__uint32__Sequence__init(&(ros_message->gps_values_idx), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create uint32__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      uint32_t * dest = ros_message->gps_values_idx.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyLong_Check(item));
        uint32_t tmp = PyLong_AsUnsignedLong(item);

        memcpy(&dest[i], &tmp, sizeof(uint32_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // gps_values
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_values");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'gps_values'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!sensor_msgs__msg__NavSatFix__Sequence__init(&(ros_message->gps_values), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create sensor_msgs__msg__NavSatFix__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    sensor_msgs__msg__NavSatFix * dest = ros_message->gps_values.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!sensor_msgs__msg__nav_sat_fix__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // nb_matches
    PyObject * field = PyObject_GetAttrString(_pymsg, "nb_matches");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->nb_matches = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // nb_failed_matches
    PyObject * field = PyObject_GetAttrString(_pymsg, "nb_failed_matches");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->nb_failed_matches = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // nb_vertices_transmitted
    PyObject * field = PyObject_GetAttrString(_pymsg, "nb_vertices_transmitted");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->nb_vertices_transmitted = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // nb_matches_selected
    PyObject * field = PyObject_GetAttrString(_pymsg, "nb_matches_selected");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->nb_matches_selected = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // front_end_cumulative_communication_bytes
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_end_cumulative_communication_bytes");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->front_end_cumulative_communication_bytes = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // sparsification_cumulative_computation_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "sparsification_cumulative_computation_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sparsification_cumulative_computation_time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // spectral_matches
    PyObject * field = PyObject_GetAttrString(_pymsg, "spectral_matches");
    if (!field) {
      return false;
    }
    if (!cslam_common_interfaces__msg__inter_robot_matches__convert_from_py(field, &ros_message->spectral_matches)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * cslam_common_interfaces__msg__pose_graph__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PoseGraph */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("cslam_common_interfaces.msg._pose_graph");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PoseGraph");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  cslam_common_interfaces__msg__PoseGraph * ros_message = (cslam_common_interfaces__msg__PoseGraph *)raw_ros_message;
  {  // robot_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->robot_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "robot_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // origin_robot_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->origin_robot_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "origin_robot_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // connected_robots
    PyObject * field = NULL;
    field = cslam_common_interfaces__msg__robot_ids__convert_to_py(&ros_message->connected_robots);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "connected_robots", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // edges
    PyObject * field = NULL;
    size_t size = ros_message->edges.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    cslam_common_interfaces__msg__PoseGraphEdge * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->edges.data[i]);
      PyObject * pyitem = cslam_common_interfaces__msg__pose_graph_edge__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "edges", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // values
    PyObject * field = NULL;
    size_t size = ros_message->values.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    cslam_common_interfaces__msg__PoseGraphValue * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->values.data[i]);
      PyObject * pyitem = cslam_common_interfaces__msg__pose_graph_value__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "values", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps_values_idx
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "gps_values_idx");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(uint32_t)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->gps_values_idx.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      uint32_t * src = &(ros_message->gps_values_idx.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->gps_values_idx.size * sizeof(uint32_t));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // gps_values
    PyObject * field = NULL;
    size_t size = ros_message->gps_values.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    sensor_msgs__msg__NavSatFix * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->gps_values.data[i]);
      PyObject * pyitem = sensor_msgs__msg__nav_sat_fix__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_values", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nb_matches
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->nb_matches);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nb_matches", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nb_failed_matches
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->nb_failed_matches);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nb_failed_matches", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nb_vertices_transmitted
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->nb_vertices_transmitted);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nb_vertices_transmitted", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nb_matches_selected
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->nb_matches_selected);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nb_matches_selected", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // front_end_cumulative_communication_bytes
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->front_end_cumulative_communication_bytes);
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_end_cumulative_communication_bytes", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sparsification_cumulative_computation_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->sparsification_cumulative_computation_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sparsification_cumulative_computation_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // spectral_matches
    PyObject * field = NULL;
    field = cslam_common_interfaces__msg__inter_robot_matches__convert_to_py(&ros_message->spectral_matches);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "spectral_matches", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
