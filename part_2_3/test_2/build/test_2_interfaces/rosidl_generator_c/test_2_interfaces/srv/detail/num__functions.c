// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from test_2_interfaces:srv/Num.idl
// generated code does not contain a copyright notice
#include "test_2_interfaces/srv/detail/num__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `operation`
#include "rosidl_runtime_c/string_functions.h"

bool
test_2_interfaces__srv__Num_Request__init(test_2_interfaces__srv__Num_Request * msg)
{
  if (!msg) {
    return false;
  }
  // a
  // b
  // c
  // operation
  if (!rosidl_runtime_c__String__init(&msg->operation)) {
    test_2_interfaces__srv__Num_Request__fini(msg);
    return false;
  }
  return true;
}

void
test_2_interfaces__srv__Num_Request__fini(test_2_interfaces__srv__Num_Request * msg)
{
  if (!msg) {
    return;
  }
  // a
  // b
  // c
  // operation
  rosidl_runtime_c__String__fini(&msg->operation);
}

bool
test_2_interfaces__srv__Num_Request__are_equal(const test_2_interfaces__srv__Num_Request * lhs, const test_2_interfaces__srv__Num_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // a
  if (lhs->a != rhs->a) {
    return false;
  }
  // b
  if (lhs->b != rhs->b) {
    return false;
  }
  // c
  if (lhs->c != rhs->c) {
    return false;
  }
  // operation
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->operation), &(rhs->operation)))
  {
    return false;
  }
  return true;
}

bool
test_2_interfaces__srv__Num_Request__copy(
  const test_2_interfaces__srv__Num_Request * input,
  test_2_interfaces__srv__Num_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // a
  output->a = input->a;
  // b
  output->b = input->b;
  // c
  output->c = input->c;
  // operation
  if (!rosidl_runtime_c__String__copy(
      &(input->operation), &(output->operation)))
  {
    return false;
  }
  return true;
}

test_2_interfaces__srv__Num_Request *
test_2_interfaces__srv__Num_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  test_2_interfaces__srv__Num_Request * msg = (test_2_interfaces__srv__Num_Request *)allocator.allocate(sizeof(test_2_interfaces__srv__Num_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(test_2_interfaces__srv__Num_Request));
  bool success = test_2_interfaces__srv__Num_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
test_2_interfaces__srv__Num_Request__destroy(test_2_interfaces__srv__Num_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    test_2_interfaces__srv__Num_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
test_2_interfaces__srv__Num_Request__Sequence__init(test_2_interfaces__srv__Num_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  test_2_interfaces__srv__Num_Request * data = NULL;

  if (size) {
    data = (test_2_interfaces__srv__Num_Request *)allocator.zero_allocate(size, sizeof(test_2_interfaces__srv__Num_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = test_2_interfaces__srv__Num_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        test_2_interfaces__srv__Num_Request__fini(&data[i - 1]);
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
test_2_interfaces__srv__Num_Request__Sequence__fini(test_2_interfaces__srv__Num_Request__Sequence * array)
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
      test_2_interfaces__srv__Num_Request__fini(&array->data[i]);
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

test_2_interfaces__srv__Num_Request__Sequence *
test_2_interfaces__srv__Num_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  test_2_interfaces__srv__Num_Request__Sequence * array = (test_2_interfaces__srv__Num_Request__Sequence *)allocator.allocate(sizeof(test_2_interfaces__srv__Num_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = test_2_interfaces__srv__Num_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
test_2_interfaces__srv__Num_Request__Sequence__destroy(test_2_interfaces__srv__Num_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    test_2_interfaces__srv__Num_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
test_2_interfaces__srv__Num_Request__Sequence__are_equal(const test_2_interfaces__srv__Num_Request__Sequence * lhs, const test_2_interfaces__srv__Num_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!test_2_interfaces__srv__Num_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
test_2_interfaces__srv__Num_Request__Sequence__copy(
  const test_2_interfaces__srv__Num_Request__Sequence * input,
  test_2_interfaces__srv__Num_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(test_2_interfaces__srv__Num_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    test_2_interfaces__srv__Num_Request * data =
      (test_2_interfaces__srv__Num_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!test_2_interfaces__srv__Num_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          test_2_interfaces__srv__Num_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!test_2_interfaces__srv__Num_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
test_2_interfaces__srv__Num_Response__init(test_2_interfaces__srv__Num_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  return true;
}

void
test_2_interfaces__srv__Num_Response__fini(test_2_interfaces__srv__Num_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
}

bool
test_2_interfaces__srv__Num_Response__are_equal(const test_2_interfaces__srv__Num_Response * lhs, const test_2_interfaces__srv__Num_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  return true;
}

bool
test_2_interfaces__srv__Num_Response__copy(
  const test_2_interfaces__srv__Num_Response * input,
  test_2_interfaces__srv__Num_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  output->result = input->result;
  return true;
}

test_2_interfaces__srv__Num_Response *
test_2_interfaces__srv__Num_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  test_2_interfaces__srv__Num_Response * msg = (test_2_interfaces__srv__Num_Response *)allocator.allocate(sizeof(test_2_interfaces__srv__Num_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(test_2_interfaces__srv__Num_Response));
  bool success = test_2_interfaces__srv__Num_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
test_2_interfaces__srv__Num_Response__destroy(test_2_interfaces__srv__Num_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    test_2_interfaces__srv__Num_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
test_2_interfaces__srv__Num_Response__Sequence__init(test_2_interfaces__srv__Num_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  test_2_interfaces__srv__Num_Response * data = NULL;

  if (size) {
    data = (test_2_interfaces__srv__Num_Response *)allocator.zero_allocate(size, sizeof(test_2_interfaces__srv__Num_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = test_2_interfaces__srv__Num_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        test_2_interfaces__srv__Num_Response__fini(&data[i - 1]);
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
test_2_interfaces__srv__Num_Response__Sequence__fini(test_2_interfaces__srv__Num_Response__Sequence * array)
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
      test_2_interfaces__srv__Num_Response__fini(&array->data[i]);
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

test_2_interfaces__srv__Num_Response__Sequence *
test_2_interfaces__srv__Num_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  test_2_interfaces__srv__Num_Response__Sequence * array = (test_2_interfaces__srv__Num_Response__Sequence *)allocator.allocate(sizeof(test_2_interfaces__srv__Num_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = test_2_interfaces__srv__Num_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
test_2_interfaces__srv__Num_Response__Sequence__destroy(test_2_interfaces__srv__Num_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    test_2_interfaces__srv__Num_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
test_2_interfaces__srv__Num_Response__Sequence__are_equal(const test_2_interfaces__srv__Num_Response__Sequence * lhs, const test_2_interfaces__srv__Num_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!test_2_interfaces__srv__Num_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
test_2_interfaces__srv__Num_Response__Sequence__copy(
  const test_2_interfaces__srv__Num_Response__Sequence * input,
  test_2_interfaces__srv__Num_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(test_2_interfaces__srv__Num_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    test_2_interfaces__srv__Num_Response * data =
      (test_2_interfaces__srv__Num_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!test_2_interfaces__srv__Num_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          test_2_interfaces__srv__Num_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!test_2_interfaces__srv__Num_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
