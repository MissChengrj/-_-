// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from test_2_interfaces:msg/ThreeNumbers.idl
// generated code does not contain a copyright notice
#include "test_2_interfaces/msg/detail/three_numbers__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
test_2_interfaces__msg__ThreeNumbers__init(test_2_interfaces__msg__ThreeNumbers * msg)
{
  if (!msg) {
    return false;
  }
  // num1
  // num2
  // num3
  return true;
}

void
test_2_interfaces__msg__ThreeNumbers__fini(test_2_interfaces__msg__ThreeNumbers * msg)
{
  if (!msg) {
    return;
  }
  // num1
  // num2
  // num3
}

bool
test_2_interfaces__msg__ThreeNumbers__are_equal(const test_2_interfaces__msg__ThreeNumbers * lhs, const test_2_interfaces__msg__ThreeNumbers * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // num1
  if (lhs->num1 != rhs->num1) {
    return false;
  }
  // num2
  if (lhs->num2 != rhs->num2) {
    return false;
  }
  // num3
  if (lhs->num3 != rhs->num3) {
    return false;
  }
  return true;
}

bool
test_2_interfaces__msg__ThreeNumbers__copy(
  const test_2_interfaces__msg__ThreeNumbers * input,
  test_2_interfaces__msg__ThreeNumbers * output)
{
  if (!input || !output) {
    return false;
  }
  // num1
  output->num1 = input->num1;
  // num2
  output->num2 = input->num2;
  // num3
  output->num3 = input->num3;
  return true;
}

test_2_interfaces__msg__ThreeNumbers *
test_2_interfaces__msg__ThreeNumbers__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  test_2_interfaces__msg__ThreeNumbers * msg = (test_2_interfaces__msg__ThreeNumbers *)allocator.allocate(sizeof(test_2_interfaces__msg__ThreeNumbers), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(test_2_interfaces__msg__ThreeNumbers));
  bool success = test_2_interfaces__msg__ThreeNumbers__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
test_2_interfaces__msg__ThreeNumbers__destroy(test_2_interfaces__msg__ThreeNumbers * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    test_2_interfaces__msg__ThreeNumbers__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
test_2_interfaces__msg__ThreeNumbers__Sequence__init(test_2_interfaces__msg__ThreeNumbers__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  test_2_interfaces__msg__ThreeNumbers * data = NULL;

  if (size) {
    data = (test_2_interfaces__msg__ThreeNumbers *)allocator.zero_allocate(size, sizeof(test_2_interfaces__msg__ThreeNumbers), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = test_2_interfaces__msg__ThreeNumbers__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        test_2_interfaces__msg__ThreeNumbers__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
test_2_interfaces__msg__ThreeNumbers__Sequence__fini(test_2_interfaces__msg__ThreeNumbers__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      test_2_interfaces__msg__ThreeNumbers__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

test_2_interfaces__msg__ThreeNumbers__Sequence *
test_2_interfaces__msg__ThreeNumbers__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  test_2_interfaces__msg__ThreeNumbers__Sequence * array = (test_2_interfaces__msg__ThreeNumbers__Sequence *)allocator.allocate(sizeof(test_2_interfaces__msg__ThreeNumbers__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = test_2_interfaces__msg__ThreeNumbers__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
test_2_interfaces__msg__ThreeNumbers__Sequence__destroy(test_2_interfaces__msg__ThreeNumbers__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    test_2_interfaces__msg__ThreeNumbers__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
test_2_interfaces__msg__ThreeNumbers__Sequence__are_equal(const test_2_interfaces__msg__ThreeNumbers__Sequence * lhs, const test_2_interfaces__msg__ThreeNumbers__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!test_2_interfaces__msg__ThreeNumbers__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
test_2_interfaces__msg__ThreeNumbers__Sequence__copy(
  const test_2_interfaces__msg__ThreeNumbers__Sequence * input,
  test_2_interfaces__msg__ThreeNumbers__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(test_2_interfaces__msg__ThreeNumbers);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    test_2_interfaces__msg__ThreeNumbers * data =
      (test_2_interfaces__msg__ThreeNumbers *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!test_2_interfaces__msg__ThreeNumbers__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          test_2_interfaces__msg__ThreeNumbers__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!test_2_interfaces__msg__ThreeNumbers__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
