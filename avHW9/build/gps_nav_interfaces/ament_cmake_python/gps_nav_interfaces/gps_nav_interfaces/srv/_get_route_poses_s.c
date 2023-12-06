// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from gps_nav_interfaces:srv/GetRoutePoses.idl
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
#include "gps_nav_interfaces/srv/detail/get_route_poses__struct.h"
#include "gps_nav_interfaces/srv/detail/get_route_poses__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool gps_nav_interfaces__srv__get_route_poses__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[62];
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
    assert(strncmp("gps_nav_interfaces.srv._get_route_poses.GetRoutePoses_Request", full_classname_dest, 61) == 0);
  }
  gps_nav_interfaces__srv__GetRoutePoses_Request * ros_message = _ros_message;
  ros_message->structure_needs_at_least_one_member = 0;

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * gps_nav_interfaces__srv__get_route_poses__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetRoutePoses_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("gps_nav_interfaces.srv._get_route_poses");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetRoutePoses_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  (void)raw_ros_message;

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "gps_nav_interfaces/srv/detail/get_route_poses__struct.h"
// already included above
// #include "gps_nav_interfaces/srv/detail/get_route_poses__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

// Nested array functions includes
#include "geometry_msgs/msg/detail/pose__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool gps_nav_interfaces__srv__get_route_poses__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("gps_nav_interfaces.srv._get_route_poses.GetRoutePoses_Response", full_classname_dest, 62) == 0);
  }
  gps_nav_interfaces__srv__GetRoutePoses_Response * ros_message = _ros_message;
  {  // num_route_poses
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_route_poses");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_route_poses = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // mypose
    PyObject * field = PyObject_GetAttrString(_pymsg, "mypose");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'mypose'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = 300;
    geometry_msgs__msg__Pose * dest = ros_message->mypose;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!geometry_msgs__msg__pose__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // offset_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "offset_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->offset_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // offset_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "offset_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->offset_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // state
    PyObject * field = PyObject_GetAttrString(_pymsg, "state");
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
      assert(PyArray_TYPE(seq_field) == NPY_INT16);
      Py_ssize_t size = 300;
      int16_t * dest = ros_message->state;
      for (Py_ssize_t i = 0; i < size; ++i) {
        int16_t tmp = *(npy_int16 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(int16_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // want_loop
    PyObject * field = PyObject_GetAttrString(_pymsg, "want_loop");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->want_loop = (Py_True == field);
    Py_DECREF(field);
  }
  {  // state_dictionary
    PyObject * field = PyObject_GetAttrString(_pymsg, "state_dictionary");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->state_dictionary, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * gps_nav_interfaces__srv__get_route_poses__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetRoutePoses_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("gps_nav_interfaces.srv._get_route_poses");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetRoutePoses_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  gps_nav_interfaces__srv__GetRoutePoses_Response * ros_message = (gps_nav_interfaces__srv__GetRoutePoses_Response *)raw_ros_message;
  {  // num_route_poses
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->num_route_poses);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_route_poses", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mypose
    PyObject * field = NULL;
    size_t size = 300;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    geometry_msgs__msg__Pose * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->mypose[i]);
      PyObject * pyitem = geometry_msgs__msg__pose__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "mypose", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // offset_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->offset_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "offset_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // offset_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->offset_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "offset_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // state
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "state");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_INT16);
    assert(sizeof(npy_int16) == sizeof(int16_t));
    npy_int16 * dst = (npy_int16 *)PyArray_GETPTR1(seq_field, 0);
    int16_t * src = &(ros_message->state[0]);
    memcpy(dst, src, 300 * sizeof(int16_t));
    Py_DECREF(field);
  }
  {  // want_loop
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->want_loop ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "want_loop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // state_dictionary
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->state_dictionary.data,
      strlen(ros_message->state_dictionary.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "state_dictionary", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
