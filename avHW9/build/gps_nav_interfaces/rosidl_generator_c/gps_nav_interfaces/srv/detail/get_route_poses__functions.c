// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gps_nav_interfaces:srv/GetRoutePoses.idl
// generated code does not contain a copyright notice
#include "gps_nav_interfaces/srv/detail/get_route_poses__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
gps_nav_interfaces__srv__GetRoutePoses_Request__init(gps_nav_interfaces__srv__GetRoutePoses_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
gps_nav_interfaces__srv__GetRoutePoses_Request__fini(gps_nav_interfaces__srv__GetRoutePoses_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
gps_nav_interfaces__srv__GetRoutePoses_Request__are_equal(const gps_nav_interfaces__srv__GetRoutePoses_Request * lhs, const gps_nav_interfaces__srv__GetRoutePoses_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
gps_nav_interfaces__srv__GetRoutePoses_Request__copy(
  const gps_nav_interfaces__srv__GetRoutePoses_Request * input,
  gps_nav_interfaces__srv__GetRoutePoses_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

gps_nav_interfaces__srv__GetRoutePoses_Request *
gps_nav_interfaces__srv__GetRoutePoses_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gps_nav_interfaces__srv__GetRoutePoses_Request * msg = (gps_nav_interfaces__srv__GetRoutePoses_Request *)allocator.allocate(sizeof(gps_nav_interfaces__srv__GetRoutePoses_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gps_nav_interfaces__srv__GetRoutePoses_Request));
  bool success = gps_nav_interfaces__srv__GetRoutePoses_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gps_nav_interfaces__srv__GetRoutePoses_Request__destroy(gps_nav_interfaces__srv__GetRoutePoses_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gps_nav_interfaces__srv__GetRoutePoses_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gps_nav_interfaces__srv__GetRoutePoses_Request__Sequence__init(gps_nav_interfaces__srv__GetRoutePoses_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gps_nav_interfaces__srv__GetRoutePoses_Request * data = NULL;

  if (size) {
    data = (gps_nav_interfaces__srv__GetRoutePoses_Request *)allocator.zero_allocate(size, sizeof(gps_nav_interfaces__srv__GetRoutePoses_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gps_nav_interfaces__srv__GetRoutePoses_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gps_nav_interfaces__srv__GetRoutePoses_Request__fini(&data[i - 1]);
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
gps_nav_interfaces__srv__GetRoutePoses_Request__Sequence__fini(gps_nav_interfaces__srv__GetRoutePoses_Request__Sequence * array)
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
      gps_nav_interfaces__srv__GetRoutePoses_Request__fini(&array->data[i]);
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

gps_nav_interfaces__srv__GetRoutePoses_Request__Sequence *
gps_nav_interfaces__srv__GetRoutePoses_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gps_nav_interfaces__srv__GetRoutePoses_Request__Sequence * array = (gps_nav_interfaces__srv__GetRoutePoses_Request__Sequence *)allocator.allocate(sizeof(gps_nav_interfaces__srv__GetRoutePoses_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gps_nav_interfaces__srv__GetRoutePoses_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gps_nav_interfaces__srv__GetRoutePoses_Request__Sequence__destroy(gps_nav_interfaces__srv__GetRoutePoses_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gps_nav_interfaces__srv__GetRoutePoses_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gps_nav_interfaces__srv__GetRoutePoses_Request__Sequence__are_equal(const gps_nav_interfaces__srv__GetRoutePoses_Request__Sequence * lhs, const gps_nav_interfaces__srv__GetRoutePoses_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gps_nav_interfaces__srv__GetRoutePoses_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gps_nav_interfaces__srv__GetRoutePoses_Request__Sequence__copy(
  const gps_nav_interfaces__srv__GetRoutePoses_Request__Sequence * input,
  gps_nav_interfaces__srv__GetRoutePoses_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gps_nav_interfaces__srv__GetRoutePoses_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gps_nav_interfaces__srv__GetRoutePoses_Request * data =
      (gps_nav_interfaces__srv__GetRoutePoses_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gps_nav_interfaces__srv__GetRoutePoses_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gps_nav_interfaces__srv__GetRoutePoses_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gps_nav_interfaces__srv__GetRoutePoses_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `mypose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `state_dictionary`
#include "rosidl_runtime_c/string_functions.h"

bool
gps_nav_interfaces__srv__GetRoutePoses_Response__init(gps_nav_interfaces__srv__GetRoutePoses_Response * msg)
{
  if (!msg) {
    return false;
  }
  // num_route_poses
  // mypose
  for (size_t i = 0; i < 300; ++i) {
    if (!geometry_msgs__msg__Pose__init(&msg->mypose[i])) {
      gps_nav_interfaces__srv__GetRoutePoses_Response__fini(msg);
      return false;
    }
  }
  // offset_x
  // offset_y
  // state
  // want_loop
  // state_dictionary
  if (!rosidl_runtime_c__String__init(&msg->state_dictionary)) {
    gps_nav_interfaces__srv__GetRoutePoses_Response__fini(msg);
    return false;
  }
  return true;
}

void
gps_nav_interfaces__srv__GetRoutePoses_Response__fini(gps_nav_interfaces__srv__GetRoutePoses_Response * msg)
{
  if (!msg) {
    return;
  }
  // num_route_poses
  // mypose
  for (size_t i = 0; i < 300; ++i) {
    geometry_msgs__msg__Pose__fini(&msg->mypose[i]);
  }
  // offset_x
  // offset_y
  // state
  // want_loop
  // state_dictionary
  rosidl_runtime_c__String__fini(&msg->state_dictionary);
}

bool
gps_nav_interfaces__srv__GetRoutePoses_Response__are_equal(const gps_nav_interfaces__srv__GetRoutePoses_Response * lhs, const gps_nav_interfaces__srv__GetRoutePoses_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // num_route_poses
  if (lhs->num_route_poses != rhs->num_route_poses) {
    return false;
  }
  // mypose
  for (size_t i = 0; i < 300; ++i) {
    if (!geometry_msgs__msg__Pose__are_equal(
        &(lhs->mypose[i]), &(rhs->mypose[i])))
    {
      return false;
    }
  }
  // offset_x
  if (lhs->offset_x != rhs->offset_x) {
    return false;
  }
  // offset_y
  if (lhs->offset_y != rhs->offset_y) {
    return false;
  }
  // state
  for (size_t i = 0; i < 300; ++i) {
    if (lhs->state[i] != rhs->state[i]) {
      return false;
    }
  }
  // want_loop
  if (lhs->want_loop != rhs->want_loop) {
    return false;
  }
  // state_dictionary
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->state_dictionary), &(rhs->state_dictionary)))
  {
    return false;
  }
  return true;
}

bool
gps_nav_interfaces__srv__GetRoutePoses_Response__copy(
  const gps_nav_interfaces__srv__GetRoutePoses_Response * input,
  gps_nav_interfaces__srv__GetRoutePoses_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // num_route_poses
  output->num_route_poses = input->num_route_poses;
  // mypose
  for (size_t i = 0; i < 300; ++i) {
    if (!geometry_msgs__msg__Pose__copy(
        &(input->mypose[i]), &(output->mypose[i])))
    {
      return false;
    }
  }
  // offset_x
  output->offset_x = input->offset_x;
  // offset_y
  output->offset_y = input->offset_y;
  // state
  for (size_t i = 0; i < 300; ++i) {
    output->state[i] = input->state[i];
  }
  // want_loop
  output->want_loop = input->want_loop;
  // state_dictionary
  if (!rosidl_runtime_c__String__copy(
      &(input->state_dictionary), &(output->state_dictionary)))
  {
    return false;
  }
  return true;
}

gps_nav_interfaces__srv__GetRoutePoses_Response *
gps_nav_interfaces__srv__GetRoutePoses_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gps_nav_interfaces__srv__GetRoutePoses_Response * msg = (gps_nav_interfaces__srv__GetRoutePoses_Response *)allocator.allocate(sizeof(gps_nav_interfaces__srv__GetRoutePoses_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gps_nav_interfaces__srv__GetRoutePoses_Response));
  bool success = gps_nav_interfaces__srv__GetRoutePoses_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gps_nav_interfaces__srv__GetRoutePoses_Response__destroy(gps_nav_interfaces__srv__GetRoutePoses_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gps_nav_interfaces__srv__GetRoutePoses_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gps_nav_interfaces__srv__GetRoutePoses_Response__Sequence__init(gps_nav_interfaces__srv__GetRoutePoses_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gps_nav_interfaces__srv__GetRoutePoses_Response * data = NULL;

  if (size) {
    data = (gps_nav_interfaces__srv__GetRoutePoses_Response *)allocator.zero_allocate(size, sizeof(gps_nav_interfaces__srv__GetRoutePoses_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gps_nav_interfaces__srv__GetRoutePoses_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gps_nav_interfaces__srv__GetRoutePoses_Response__fini(&data[i - 1]);
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
gps_nav_interfaces__srv__GetRoutePoses_Response__Sequence__fini(gps_nav_interfaces__srv__GetRoutePoses_Response__Sequence * array)
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
      gps_nav_interfaces__srv__GetRoutePoses_Response__fini(&array->data[i]);
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

gps_nav_interfaces__srv__GetRoutePoses_Response__Sequence *
gps_nav_interfaces__srv__GetRoutePoses_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gps_nav_interfaces__srv__GetRoutePoses_Response__Sequence * array = (gps_nav_interfaces__srv__GetRoutePoses_Response__Sequence *)allocator.allocate(sizeof(gps_nav_interfaces__srv__GetRoutePoses_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gps_nav_interfaces__srv__GetRoutePoses_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gps_nav_interfaces__srv__GetRoutePoses_Response__Sequence__destroy(gps_nav_interfaces__srv__GetRoutePoses_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gps_nav_interfaces__srv__GetRoutePoses_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gps_nav_interfaces__srv__GetRoutePoses_Response__Sequence__are_equal(const gps_nav_interfaces__srv__GetRoutePoses_Response__Sequence * lhs, const gps_nav_interfaces__srv__GetRoutePoses_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gps_nav_interfaces__srv__GetRoutePoses_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gps_nav_interfaces__srv__GetRoutePoses_Response__Sequence__copy(
  const gps_nav_interfaces__srv__GetRoutePoses_Response__Sequence * input,
  gps_nav_interfaces__srv__GetRoutePoses_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gps_nav_interfaces__srv__GetRoutePoses_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gps_nav_interfaces__srv__GetRoutePoses_Response * data =
      (gps_nav_interfaces__srv__GetRoutePoses_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gps_nav_interfaces__srv__GetRoutePoses_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gps_nav_interfaces__srv__GetRoutePoses_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gps_nav_interfaces__srv__GetRoutePoses_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
