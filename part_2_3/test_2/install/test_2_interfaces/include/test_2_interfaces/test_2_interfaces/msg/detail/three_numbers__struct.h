// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from test_2_interfaces:msg/ThreeNumbers.idl
// generated code does not contain a copyright notice

#ifndef TEST_2_INTERFACES__MSG__DETAIL__THREE_NUMBERS__STRUCT_H_
#define TEST_2_INTERFACES__MSG__DETAIL__THREE_NUMBERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ThreeNumbers in the package test_2_interfaces.
typedef struct test_2_interfaces__msg__ThreeNumbers
{
  float num1;
  float num2;
  float num3;
} test_2_interfaces__msg__ThreeNumbers;

// Struct for a sequence of test_2_interfaces__msg__ThreeNumbers.
typedef struct test_2_interfaces__msg__ThreeNumbers__Sequence
{
  test_2_interfaces__msg__ThreeNumbers * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_2_interfaces__msg__ThreeNumbers__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TEST_2_INTERFACES__MSG__DETAIL__THREE_NUMBERS__STRUCT_H_
