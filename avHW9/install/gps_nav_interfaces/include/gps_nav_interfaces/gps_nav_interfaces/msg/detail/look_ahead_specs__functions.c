// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gps_nav_interfaces:msg/LookAheadSpecs.idl
// generated code does not contain a copyright notice
#include "gps_nav_interfaces/msg/detail/look_ahead_specs__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
gps_nav_interfaces__msg__LookAheadSpecs__init(gps_nav_interfaces__msg__LookAheadSpecs * msg)
{
  if (!msg) {
    return false;
  }
  // look_ahead_dist
  // speed
  return true;
}

void
gps_nav_interfaces__msg__LookAheadSpecs__fini(gps_nav_interfaces__msg__LookAheadSpecs * msg)
{
  if (!msg) {
    return;
  }
  // look_ahead_dist
  // speed
}

bool
gps_nav_interfaces__msg__LookAheadSpecs__are_equal(const gps_nav_interfaces__msg__LookAheadSpecs * lhs, const gps_nav_interfaces__msg__LookAheadSpecs * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // look_ahead_dist
  if (lhs->look_ahead_dist != rhs->look_ahead_dist) {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  return true;
}

bool
gps_nav_interfaces__msg__LookAheadSpecs__copy(
  const gps_nav_interfaces__msg__LookAheadSpecs * input,
  gps_nav_interfaces__msg__LookAheadSpecs * output)
{
  if (!input || !output) {
    return false;
  }
  // look_ahead_dist
  output->look_ahead_dist = input->look_ahead_dist;
  // speed
  output->speed = input->speed;
  return true;
}

gps_nav_interfaces__msg__LookAheadSpecs *
gps_nav_interfaces__msg__LookAheadSpecs__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gps_nav_interfaces__msg__LookAheadSpecs * msg = (gps_nav_interfaces__msg__LookAheadSpecs *)allocator.allocate(sizeof(gps_nav_interfaces__msg__LookAheadSpecs), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gps_nav_interfaces__msg__LookAheadSpecs));
  bool success = gps_nav_interfaces__msg__LookAheadSpecs__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gps_nav_interfaces__msg__LookAheadSpecs__destroy(gps_nav_interfaces__msg__LookAheadSpecs * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gps_nav_interfaces__msg__LookAheadSpecs__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gps_nav_interfaces__msg__LookAheadSpecs__Sequence__init(gps_nav_interfaces__msg__LookAheadSpecs__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gps_nav_interfaces__msg__LookAheadSpecs * data = NULL;

  if (size) {
    data = (gps_nav_interfaces__msg__LookAheadSpecs *)allocator.zero_allocate(size, sizeof(gps_nav_interfaces__msg__LookAheadSpecs), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gps_nav_interfaces__msg__LookAheadSpecs__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gps_nav_interfaces__msg__LookAheadSpecs__fini(&data[i - 1]);
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
gps_nav_interfaces__msg__LookAheadSpecs__Sequence__fini(gps_nav_interfaces__msg__LookAheadSpecs__Sequence * array)
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
      gps_nav_interfaces__msg__LookAheadSpecs__fini(&array->data[i]);
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

gps_nav_interfaces__msg__LookAheadSpecs__Sequence *
gps_nav_interfaces__msg__LookAheadSpecs__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gps_nav_interfaces__msg__LookAheadSpecs__Sequence * array = (gps_nav_interfaces__msg__LookAheadSpecs__Sequence *)allocator.allocate(sizeof(gps_nav_interfaces__msg__LookAheadSpecs__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gps_nav_interfaces__msg__LookAheadSpecs__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gps_nav_interfaces__msg__LookAheadSpecs__Sequence__destroy(gps_nav_interfaces__msg__LookAheadSpecs__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gps_nav_interfaces__msg__LookAheadSpecs__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gps_nav_interfaces__msg__LookAheadSpecs__Sequence__are_equal(const gps_nav_interfaces__msg__LookAheadSpecs__Sequence * lhs, const gps_nav_interfaces__msg__LookAheadSpecs__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gps_nav_interfaces__msg__LookAheadSpecs__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gps_nav_interfaces__msg__LookAheadSpecs__Sequence__copy(
  const gps_nav_interfaces__msg__LookAheadSpecs__Sequence * input,
  gps_nav_interfaces__msg__LookAheadSpecs__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gps_nav_interfaces__msg__LookAheadSpecs);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gps_nav_interfaces__msg__LookAheadSpecs * data =
      (gps_nav_interfaces__msg__LookAheadSpecs *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gps_nav_interfaces__msg__LookAheadSpecs__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gps_nav_interfaces__msg__LookAheadSpecs__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gps_nav_interfaces__msg__LookAheadSpecs__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
