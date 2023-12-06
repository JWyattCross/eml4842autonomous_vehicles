// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gps_nav_interfaces:msg/CurrentGoalPose.idl
// generated code does not contain a copyright notice
#include "gps_nav_interfaces/msg/detail/current_goal_pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `current_goal_pose`
// Member `closest_pose`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"

bool
gps_nav_interfaces__msg__CurrentGoalPose__init(gps_nav_interfaces__msg__CurrentGoalPose * msg)
{
  if (!msg) {
    return false;
  }
  // current_goal_pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->current_goal_pose)) {
    gps_nav_interfaces__msg__CurrentGoalPose__fini(msg);
    return false;
  }
  // closest_pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->closest_pose)) {
    gps_nav_interfaces__msg__CurrentGoalPose__fini(msg);
    return false;
  }
  // speed
  // state
  return true;
}

void
gps_nav_interfaces__msg__CurrentGoalPose__fini(gps_nav_interfaces__msg__CurrentGoalPose * msg)
{
  if (!msg) {
    return;
  }
  // current_goal_pose
  geometry_msgs__msg__PoseStamped__fini(&msg->current_goal_pose);
  // closest_pose
  geometry_msgs__msg__PoseStamped__fini(&msg->closest_pose);
  // speed
  // state
}

bool
gps_nav_interfaces__msg__CurrentGoalPose__are_equal(const gps_nav_interfaces__msg__CurrentGoalPose * lhs, const gps_nav_interfaces__msg__CurrentGoalPose * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_goal_pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->current_goal_pose), &(rhs->current_goal_pose)))
  {
    return false;
  }
  // closest_pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->closest_pose), &(rhs->closest_pose)))
  {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  return true;
}

bool
gps_nav_interfaces__msg__CurrentGoalPose__copy(
  const gps_nav_interfaces__msg__CurrentGoalPose * input,
  gps_nav_interfaces__msg__CurrentGoalPose * output)
{
  if (!input || !output) {
    return false;
  }
  // current_goal_pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->current_goal_pose), &(output->current_goal_pose)))
  {
    return false;
  }
  // closest_pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->closest_pose), &(output->closest_pose)))
  {
    return false;
  }
  // speed
  output->speed = input->speed;
  // state
  output->state = input->state;
  return true;
}

gps_nav_interfaces__msg__CurrentGoalPose *
gps_nav_interfaces__msg__CurrentGoalPose__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gps_nav_interfaces__msg__CurrentGoalPose * msg = (gps_nav_interfaces__msg__CurrentGoalPose *)allocator.allocate(sizeof(gps_nav_interfaces__msg__CurrentGoalPose), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gps_nav_interfaces__msg__CurrentGoalPose));
  bool success = gps_nav_interfaces__msg__CurrentGoalPose__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gps_nav_interfaces__msg__CurrentGoalPose__destroy(gps_nav_interfaces__msg__CurrentGoalPose * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gps_nav_interfaces__msg__CurrentGoalPose__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gps_nav_interfaces__msg__CurrentGoalPose__Sequence__init(gps_nav_interfaces__msg__CurrentGoalPose__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gps_nav_interfaces__msg__CurrentGoalPose * data = NULL;

  if (size) {
    data = (gps_nav_interfaces__msg__CurrentGoalPose *)allocator.zero_allocate(size, sizeof(gps_nav_interfaces__msg__CurrentGoalPose), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gps_nav_interfaces__msg__CurrentGoalPose__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gps_nav_interfaces__msg__CurrentGoalPose__fini(&data[i - 1]);
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
gps_nav_interfaces__msg__CurrentGoalPose__Sequence__fini(gps_nav_interfaces__msg__CurrentGoalPose__Sequence * array)
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
      gps_nav_interfaces__msg__CurrentGoalPose__fini(&array->data[i]);
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

gps_nav_interfaces__msg__CurrentGoalPose__Sequence *
gps_nav_interfaces__msg__CurrentGoalPose__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gps_nav_interfaces__msg__CurrentGoalPose__Sequence * array = (gps_nav_interfaces__msg__CurrentGoalPose__Sequence *)allocator.allocate(sizeof(gps_nav_interfaces__msg__CurrentGoalPose__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gps_nav_interfaces__msg__CurrentGoalPose__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gps_nav_interfaces__msg__CurrentGoalPose__Sequence__destroy(gps_nav_interfaces__msg__CurrentGoalPose__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gps_nav_interfaces__msg__CurrentGoalPose__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gps_nav_interfaces__msg__CurrentGoalPose__Sequence__are_equal(const gps_nav_interfaces__msg__CurrentGoalPose__Sequence * lhs, const gps_nav_interfaces__msg__CurrentGoalPose__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gps_nav_interfaces__msg__CurrentGoalPose__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gps_nav_interfaces__msg__CurrentGoalPose__Sequence__copy(
  const gps_nav_interfaces__msg__CurrentGoalPose__Sequence * input,
  gps_nav_interfaces__msg__CurrentGoalPose__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gps_nav_interfaces__msg__CurrentGoalPose);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gps_nav_interfaces__msg__CurrentGoalPose * data =
      (gps_nav_interfaces__msg__CurrentGoalPose *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gps_nav_interfaces__msg__CurrentGoalPose__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gps_nav_interfaces__msg__CurrentGoalPose__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gps_nav_interfaces__msg__CurrentGoalPose__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
