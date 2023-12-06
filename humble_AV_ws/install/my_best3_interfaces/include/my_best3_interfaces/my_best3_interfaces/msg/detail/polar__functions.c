// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_best3_interfaces:msg/Polar.idl
// generated code does not contain a copyright notice
#include "my_best3_interfaces/msg/detail/polar__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `point`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
my_best3_interfaces__msg__Polar__init(my_best3_interfaces__msg__Polar * msg)
{
  if (!msg) {
    return false;
  }
  // r_meters
  // theta_rad
  // point
  if (!geometry_msgs__msg__Vector3__init(&msg->point)) {
    my_best3_interfaces__msg__Polar__fini(msg);
    return false;
  }
  return true;
}

void
my_best3_interfaces__msg__Polar__fini(my_best3_interfaces__msg__Polar * msg)
{
  if (!msg) {
    return;
  }
  // r_meters
  // theta_rad
  // point
  geometry_msgs__msg__Vector3__fini(&msg->point);
}

bool
my_best3_interfaces__msg__Polar__are_equal(const my_best3_interfaces__msg__Polar * lhs, const my_best3_interfaces__msg__Polar * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // r_meters
  if (lhs->r_meters != rhs->r_meters) {
    return false;
  }
  // theta_rad
  if (lhs->theta_rad != rhs->theta_rad) {
    return false;
  }
  // point
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->point), &(rhs->point)))
  {
    return false;
  }
  return true;
}

bool
my_best3_interfaces__msg__Polar__copy(
  const my_best3_interfaces__msg__Polar * input,
  my_best3_interfaces__msg__Polar * output)
{
  if (!input || !output) {
    return false;
  }
  // r_meters
  output->r_meters = input->r_meters;
  // theta_rad
  output->theta_rad = input->theta_rad;
  // point
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->point), &(output->point)))
  {
    return false;
  }
  return true;
}

my_best3_interfaces__msg__Polar *
my_best3_interfaces__msg__Polar__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_best3_interfaces__msg__Polar * msg = (my_best3_interfaces__msg__Polar *)allocator.allocate(sizeof(my_best3_interfaces__msg__Polar), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_best3_interfaces__msg__Polar));
  bool success = my_best3_interfaces__msg__Polar__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_best3_interfaces__msg__Polar__destroy(my_best3_interfaces__msg__Polar * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_best3_interfaces__msg__Polar__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_best3_interfaces__msg__Polar__Sequence__init(my_best3_interfaces__msg__Polar__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_best3_interfaces__msg__Polar * data = NULL;

  if (size) {
    data = (my_best3_interfaces__msg__Polar *)allocator.zero_allocate(size, sizeof(my_best3_interfaces__msg__Polar), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_best3_interfaces__msg__Polar__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_best3_interfaces__msg__Polar__fini(&data[i - 1]);
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
my_best3_interfaces__msg__Polar__Sequence__fini(my_best3_interfaces__msg__Polar__Sequence * array)
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
      my_best3_interfaces__msg__Polar__fini(&array->data[i]);
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

my_best3_interfaces__msg__Polar__Sequence *
my_best3_interfaces__msg__Polar__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_best3_interfaces__msg__Polar__Sequence * array = (my_best3_interfaces__msg__Polar__Sequence *)allocator.allocate(sizeof(my_best3_interfaces__msg__Polar__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_best3_interfaces__msg__Polar__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_best3_interfaces__msg__Polar__Sequence__destroy(my_best3_interfaces__msg__Polar__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_best3_interfaces__msg__Polar__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_best3_interfaces__msg__Polar__Sequence__are_equal(const my_best3_interfaces__msg__Polar__Sequence * lhs, const my_best3_interfaces__msg__Polar__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_best3_interfaces__msg__Polar__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_best3_interfaces__msg__Polar__Sequence__copy(
  const my_best3_interfaces__msg__Polar__Sequence * input,
  my_best3_interfaces__msg__Polar__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_best3_interfaces__msg__Polar);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_best3_interfaces__msg__Polar * data =
      (my_best3_interfaces__msg__Polar *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_best3_interfaces__msg__Polar__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_best3_interfaces__msg__Polar__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_best3_interfaces__msg__Polar__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
