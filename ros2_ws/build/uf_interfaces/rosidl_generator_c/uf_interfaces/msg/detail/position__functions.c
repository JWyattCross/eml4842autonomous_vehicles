// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from uf_interfaces:msg/Position.idl
// generated code does not contain a copyright notice
#include "uf_interfaces/msg/detail/position__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
uf_interfaces__msg__Position__init(uf_interfaces__msg__Position * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    uf_interfaces__msg__Position__fini(msg);
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    uf_interfaces__msg__Position__fini(msg);
    return false;
  }
  // x
  // y
  // z
  // yaw
  return true;
}

void
uf_interfaces__msg__Position__fini(uf_interfaces__msg__Position * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // x
  // y
  // z
  // yaw
}

bool
uf_interfaces__msg__Position__are_equal(const uf_interfaces__msg__Position * lhs, const uf_interfaces__msg__Position * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  return true;
}

bool
uf_interfaces__msg__Position__copy(
  const uf_interfaces__msg__Position * input,
  uf_interfaces__msg__Position * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // yaw
  output->yaw = input->yaw;
  return true;
}

uf_interfaces__msg__Position *
uf_interfaces__msg__Position__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uf_interfaces__msg__Position * msg = (uf_interfaces__msg__Position *)allocator.allocate(sizeof(uf_interfaces__msg__Position), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uf_interfaces__msg__Position));
  bool success = uf_interfaces__msg__Position__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
uf_interfaces__msg__Position__destroy(uf_interfaces__msg__Position * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    uf_interfaces__msg__Position__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
uf_interfaces__msg__Position__Sequence__init(uf_interfaces__msg__Position__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uf_interfaces__msg__Position * data = NULL;

  if (size) {
    data = (uf_interfaces__msg__Position *)allocator.zero_allocate(size, sizeof(uf_interfaces__msg__Position), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uf_interfaces__msg__Position__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uf_interfaces__msg__Position__fini(&data[i - 1]);
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
uf_interfaces__msg__Position__Sequence__fini(uf_interfaces__msg__Position__Sequence * array)
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
      uf_interfaces__msg__Position__fini(&array->data[i]);
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

uf_interfaces__msg__Position__Sequence *
uf_interfaces__msg__Position__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uf_interfaces__msg__Position__Sequence * array = (uf_interfaces__msg__Position__Sequence *)allocator.allocate(sizeof(uf_interfaces__msg__Position__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = uf_interfaces__msg__Position__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
uf_interfaces__msg__Position__Sequence__destroy(uf_interfaces__msg__Position__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    uf_interfaces__msg__Position__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
uf_interfaces__msg__Position__Sequence__are_equal(const uf_interfaces__msg__Position__Sequence * lhs, const uf_interfaces__msg__Position__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!uf_interfaces__msg__Position__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
uf_interfaces__msg__Position__Sequence__copy(
  const uf_interfaces__msg__Position__Sequence * input,
  uf_interfaces__msg__Position__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(uf_interfaces__msg__Position);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    uf_interfaces__msg__Position * data =
      (uf_interfaces__msg__Position *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!uf_interfaces__msg__Position__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          uf_interfaces__msg__Position__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!uf_interfaces__msg__Position__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
