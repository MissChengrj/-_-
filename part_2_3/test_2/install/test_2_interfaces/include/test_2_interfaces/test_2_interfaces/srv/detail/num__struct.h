// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from test_2_interfaces:srv/Num.idl
// generated code does not contain a copyright notice

#ifndef TEST_2_INTERFACES__SRV__DETAIL__NUM__STRUCT_H_
#define TEST_2_INTERFACES__SRV__DETAIL__NUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'operation'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Num in the package test_2_interfaces.
typedef struct test_2_interfaces__srv__Num_Request
{
  float a;
  float b;
  float c;
  rosidl_runtime_c__String operation;
} test_2_interfaces__srv__Num_Request;

// Struct for a sequence of test_2_interfaces__srv__Num_Request.
typedef struct test_2_interfaces__srv__Num_Request__Sequence
{
  test_2_interfaces__srv__Num_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_2_interfaces__srv__Num_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Num in the package test_2_interfaces.
typedef struct test_2_interfaces__srv__Num_Response
{
  float result;
} test_2_interfaces__srv__Num_Response;

// Struct for a sequence of test_2_interfaces__srv__Num_Response.
typedef struct test_2_interfaces__srv__Num_Response__Sequence
{
  test_2_interfaces__srv__Num_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_2_interfaces__srv__Num_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TEST_2_INTERFACES__SRV__DETAIL__NUM__STRUCT_H_
