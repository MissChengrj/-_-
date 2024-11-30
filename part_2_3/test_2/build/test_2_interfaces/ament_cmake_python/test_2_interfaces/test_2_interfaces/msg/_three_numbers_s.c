// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from test_2_interfaces:msg/ThreeNumbers.idl
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
#include "test_2_interfaces/msg/detail/three_numbers__struct.h"
#include "test_2_interfaces/msg/detail/three_numbers__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool test_2_interfaces__msg__three_numbers__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("test_2_interfaces.msg._three_numbers.ThreeNumbers", full_classname_dest, 49) == 0);
  }
  test_2_interfaces__msg__ThreeNumbers * ros_message = _ros_message;
  {  // num1
    PyObject * field = PyObject_GetAttrString(_pymsg, "num1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->num1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // num2
    PyObject * field = PyObject_GetAttrString(_pymsg, "num2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->num2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // num3
    PyObject * field = PyObject_GetAttrString(_pymsg, "num3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->num3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * test_2_interfaces__msg__three_numbers__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ThreeNumbers */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("test_2_interfaces.msg._three_numbers");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ThreeNumbers");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  test_2_interfaces__msg__ThreeNumbers * ros_message = (test_2_interfaces__msg__ThreeNumbers *)raw_ros_message;
  {  // num1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->num1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->num2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->num3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
