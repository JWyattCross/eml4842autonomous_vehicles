// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from uf_interfaces:action/Defend.idl
// generated code does not contain a copyright notice
#include "uf_interfaces/action/detail/defend__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `target`
#include "rosidl_runtime_c/string_functions.h"

bool
uf_interfaces__action__Defend_Goal__init(uf_interfaces__action__Defend_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // target
  if (!rosidl_runtime_c__String__init(&msg->target)) {
    uf_interfaces__action__Defend_Goal__fini(msg);
    return false;
  }
  return true;
}

void
uf_interfaces__action__Defend_Goal__fini(uf_interfaces__action__Defend_Goal * msg)
{
  if (!msg) {
    return;
  }
  // target
  rosidl_runtime_c__String__fini(&msg->target);
}

bool
uf_interfaces__action__Defend_Goal__are_equal(const uf_interfaces__action__Defend_Goal * lhs, const uf_interfaces__action__Defend_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->target), &(rhs->target)))
  {
    return false;
  }
  return true;
}

bool
uf_interfaces__action__Defend_Goal__copy(
  const uf_interfaces__action__Defend_Goal * input,
  uf_interfaces__action__Defend_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // target
  if (!rosidl_runtime_c__String__copy(
      &(input->target), &(output->target)))
  {
    return false;
  }
  return true;
}

uf_interfaces__action__Defend_Goal *
uf_interfaces__action__Defend_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uf_interfaces__action__Defend_Goal * msg = (uf_interfaces__action__Defend_Goal *)allocator.allocate(sizeof(uf_interfaces__action__Defend_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uf_interfaces__action__Defend_Goal));
  bool success = uf_interfaces__action__Defend_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
uf_interfaces__action__Defend_Goal__destroy(uf_interfaces__action__Defend_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    uf_interfaces__action__Defend_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
uf_interfaces__action__Defend_Goal__Sequence__init(uf_interfaces__action__Defend_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uf_interfaces__action__Defend_Goal * data = NULL;

  if (size) {
    data = (uf_interfaces__action__Defend_Goal *)allocator.zero_allocate(size, sizeof(uf_interfaces__action__Defend_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uf_interfaces__action__Defend_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uf_interfaces__action__Defend_Goal__fini(&data[i - 1]);
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
uf_interfaces__action__Defend_Goal__Sequence__fini(uf_interfaces__action__Defend_Goal__Sequence * array)
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
      uf_interfaces__action__Defend_Goal__fini(&array->data[i]);
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

uf_interfaces__action__Defend_Goal__Sequence *
uf_interfaces__action__Defend_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uf_interfaces__action__Defend_Goal__Sequence * array = (uf_interfaces__action__Defend_Goal__Sequence *)allocator.allocate(sizeof(uf_interfaces__action__Defend_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = uf_interfaces__action__Defend_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
uf_interfaces__action__Defend_Goal__Sequence__destroy(uf_interfaces__action__Defend_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    uf_interfaces__action__Defend_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
uf_interfaces__action__Defend_Goal__Sequence__are_equal(const uf_interfaces__action__Defend_Goal__Sequence * lhs, const uf_interfaces__action__Defend_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!uf_interfaces__action__Defend_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
uf_interfaces__action__Defend_Goal__Sequence__copy(
  const uf_interfaces__action__Defend_Goal__Sequence * input,
  uf_interfaces__action__Defend_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(uf_interfaces__action__Defend_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    uf_interfaces__action__Defend_Goal * data =
      (uf_interfaces__action__Defend_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!uf_interfaces__action__Defend_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          uf_interfaces__action__Defend_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!uf_interfaces__action__Defend_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `success`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
uf_interfaces__action__Defend_Result__init(uf_interfaces__action__Defend_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  if (!rosidl_runtime_c__String__init(&msg->success)) {
    uf_interfaces__action__Defend_Result__fini(msg);
    return false;
  }
  return true;
}

void
uf_interfaces__action__Defend_Result__fini(uf_interfaces__action__Defend_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
  rosidl_runtime_c__String__fini(&msg->success);
}

bool
uf_interfaces__action__Defend_Result__are_equal(const uf_interfaces__action__Defend_Result * lhs, const uf_interfaces__action__Defend_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->success), &(rhs->success)))
  {
    return false;
  }
  return true;
}

bool
uf_interfaces__action__Defend_Result__copy(
  const uf_interfaces__action__Defend_Result * input,
  uf_interfaces__action__Defend_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  if (!rosidl_runtime_c__String__copy(
      &(input->success), &(output->success)))
  {
    return false;
  }
  return true;
}

uf_interfaces__action__Defend_Result *
uf_interfaces__action__Defend_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uf_interfaces__action__Defend_Result * msg = (uf_interfaces__action__Defend_Result *)allocator.allocate(sizeof(uf_interfaces__action__Defend_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uf_interfaces__action__Defend_Result));
  bool success = uf_interfaces__action__Defend_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
uf_interfaces__action__Defend_Result__destroy(uf_interfaces__action__Defend_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    uf_interfaces__action__Defend_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
uf_interfaces__action__Defend_Result__Sequence__init(uf_interfaces__action__Defend_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uf_interfaces__action__Defend_Result * data = NULL;

  if (size) {
    data = (uf_interfaces__action__Defend_Result *)allocator.zero_allocate(size, sizeof(uf_interfaces__action__Defend_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uf_interfaces__action__Defend_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uf_interfaces__action__Defend_Result__fini(&data[i - 1]);
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
uf_interfaces__action__Defend_Result__Sequence__fini(uf_interfaces__action__Defend_Result__Sequence * array)
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
      uf_interfaces__action__Defend_Result__fini(&array->data[i]);
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

uf_interfaces__action__Defend_Result__Sequence *
uf_interfaces__action__Defend_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uf_interfaces__action__Defend_Result__Sequence * array = (uf_interfaces__action__Defend_Result__Sequence *)allocator.allocate(sizeof(uf_interfaces__action__Defend_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = uf_interfaces__action__Defend_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
uf_interfaces__action__Defend_Result__Sequence__destroy(uf_interfaces__action__Defend_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    uf_interfaces__action__Defend_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
uf_interfaces__action__Defend_Result__Sequence__are_equal(const uf_interfaces__action__Defend_Result__Sequence * lhs, const uf_interfaces__action__Defend_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!uf_interfaces__action__Defend_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
uf_interfaces__action__Defend_Result__Sequence__copy(
  const uf_interfaces__action__Defend_Result__Sequence * input,
  uf_interfaces__action__Defend_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(uf_interfaces__action__Defend_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    uf_interfaces__action__Defend_Result * data =
      (uf_interfaces__action__Defend_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!uf_interfaces__action__Defend_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          uf_interfaces__action__Defend_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!uf_interfaces__action__Defend_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
uf_interfaces__action__Defend_Feedback__init(uf_interfaces__action__Defend_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // distance
  return true;
}

void
uf_interfaces__action__Defend_Feedback__fini(uf_interfaces__action__Defend_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // distance
}

bool
uf_interfaces__action__Defend_Feedback__are_equal(const uf_interfaces__action__Defend_Feedback * lhs, const uf_interfaces__action__Defend_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // distance
  if (lhs->distance != rhs->distance) {
    return false;
  }
  return true;
}

bool
uf_interfaces__action__Defend_Feedback__copy(
  const uf_interfaces__action__Defend_Feedback * input,
  uf_interfaces__action__Defend_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // distance
  output->distance = input->distance;
  return true;
}

uf_interfaces__action__Defend_Feedback *
uf_interfaces__action__Defend_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uf_interfaces__action__Defend_Feedback * msg = (uf_interfaces__action__Defend_Feedback *)allocator.allocate(sizeof(uf_interfaces__action__Defend_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uf_interfaces__action__Defend_Feedback));
  bool success = uf_interfaces__action__Defend_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
uf_interfaces__action__Defend_Feedback__destroy(uf_interfaces__action__Defend_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    uf_interfaces__action__Defend_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
uf_interfaces__action__Defend_Feedback__Sequence__init(uf_interfaces__action__Defend_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uf_interfaces__action__Defend_Feedback * data = NULL;

  if (size) {
    data = (uf_interfaces__action__Defend_Feedback *)allocator.zero_allocate(size, sizeof(uf_interfaces__action__Defend_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uf_interfaces__action__Defend_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uf_interfaces__action__Defend_Feedback__fini(&data[i - 1]);
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
uf_interfaces__action__Defend_Feedback__Sequence__fini(uf_interfaces__action__Defend_Feedback__Sequence * array)
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
      uf_interfaces__action__Defend_Feedback__fini(&array->data[i]);
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

uf_interfaces__action__Defend_Feedback__Sequence *
uf_interfaces__action__Defend_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uf_interfaces__action__Defend_Feedback__Sequence * array = (uf_interfaces__action__Defend_Feedback__Sequence *)allocator.allocate(sizeof(uf_interfaces__action__Defend_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = uf_interfaces__action__Defend_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
uf_interfaces__action__Defend_Feedback__Sequence__destroy(uf_interfaces__action__Defend_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    uf_interfaces__action__Defend_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
uf_interfaces__action__Defend_Feedback__Sequence__are_equal(const uf_interfaces__action__Defend_Feedback__Sequence * lhs, const uf_interfaces__action__Defend_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!uf_interfaces__action__Defend_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
uf_interfaces__action__Defend_Feedback__Sequence__copy(
  const uf_interfaces__action__Defend_Feedback__Sequence * input,
  uf_interfaces__action__Defend_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(uf_interfaces__action__Defend_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    uf_interfaces__action__Defend_Feedback * data =
      (uf_interfaces__action__Defend_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!uf_interfaces__action__Defend_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          uf_interfaces__action__Defend_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!uf_interfaces__action__Defend_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "uf_interfaces/action/detail/defend__functions.h"

bool
uf_interfaces__action__Defend_SendGoal_Request__init(uf_interfaces__action__Defend_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    uf_interfaces__action__Defend_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!uf_interfaces__action__Defend_Goal__init(&msg->goal)) {
    uf_interfaces__action__Defend_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
uf_interfaces__action__Defend_SendGoal_Request__fini(uf_interfaces__action__Defend_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  uf_interfaces__action__Defend_Goal__fini(&msg->goal);
}

bool
uf_interfaces__action__Defend_SendGoal_Request__are_equal(const uf_interfaces__action__Defend_SendGoal_Request * lhs, const uf_interfaces__action__Defend_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!uf_interfaces__action__Defend_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
uf_interfaces__action__Defend_SendGoal_Request__copy(
  const uf_interfaces__action__Defend_SendGoal_Request * input,
  uf_interfaces__action__Defend_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!uf_interfaces__action__Defend_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

uf_interfaces__action__Defend_SendGoal_Request *
uf_interfaces__action__Defend_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uf_interfaces__action__Defend_SendGoal_Request * msg = (uf_interfaces__action__Defend_SendGoal_Request *)allocator.allocate(sizeof(uf_interfaces__action__Defend_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uf_interfaces__action__Defend_SendGoal_Request));
  bool success = uf_interfaces__action__Defend_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
uf_interfaces__action__Defend_SendGoal_Request__destroy(uf_interfaces__action__Defend_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    uf_interfaces__action__Defend_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
uf_interfaces__action__Defend_SendGoal_Request__Sequence__init(uf_interfaces__action__Defend_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uf_interfaces__action__Defend_SendGoal_Request * data = NULL;

  if (size) {
    data = (uf_interfaces__action__Defend_SendGoal_Request *)allocator.zero_allocate(size, sizeof(uf_interfaces__action__Defend_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uf_interfaces__action__Defend_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uf_interfaces__action__Defend_SendGoal_Request__fini(&data[i - 1]);
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
uf_interfaces__action__Defend_SendGoal_Request__Sequence__fini(uf_interfaces__action__Defend_SendGoal_Request__Sequence * array)
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
      uf_interfaces__action__Defend_SendGoal_Request__fini(&array->data[i]);
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

uf_interfaces__action__Defend_SendGoal_Request__Sequence *
uf_interfaces__action__Defend_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uf_interfaces__action__Defend_SendGoal_Request__Sequence * array = (uf_interfaces__action__Defend_SendGoal_Request__Sequence *)allocator.allocate(sizeof(uf_interfaces__action__Defend_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = uf_interfaces__action__Defend_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
uf_interfaces__action__Defend_SendGoal_Request__Sequence__destroy(uf_interfaces__action__Defend_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    uf_interfaces__action__Defend_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
uf_interfaces__action__Defend_SendGoal_Request__Sequence__are_equal(const uf_interfaces__action__Defend_SendGoal_Request__Sequence * lhs, const uf_interfaces__action__Defend_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!uf_interfaces__action__Defend_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
uf_interfaces__action__Defend_SendGoal_Request__Sequence__copy(
  const uf_interfaces__action__Defend_SendGoal_Request__Sequence * input,
  uf_interfaces__action__Defend_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(uf_interfaces__action__Defend_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    uf_interfaces__action__Defend_SendGoal_Request * data =
      (uf_interfaces__action__Defend_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!uf_interfaces__action__Defend_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          uf_interfaces__action__Defend_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!uf_interfaces__action__Defend_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
uf_interfaces__action__Defend_SendGoal_Response__init(uf_interfaces__action__Defend_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    uf_interfaces__action__Defend_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
uf_interfaces__action__Defend_SendGoal_Response__fini(uf_interfaces__action__Defend_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
uf_interfaces__action__Defend_SendGoal_Response__are_equal(const uf_interfaces__action__Defend_SendGoal_Response * lhs, const uf_interfaces__action__Defend_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
uf_interfaces__action__Defend_SendGoal_Response__copy(
  const uf_interfaces__action__Defend_SendGoal_Response * input,
  uf_interfaces__action__Defend_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

uf_interfaces__action__Defend_SendGoal_Response *
uf_interfaces__action__Defend_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uf_interfaces__action__Defend_SendGoal_Response * msg = (uf_interfaces__action__Defend_SendGoal_Response *)allocator.allocate(sizeof(uf_interfaces__action__Defend_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uf_interfaces__action__Defend_SendGoal_Response));
  bool success = uf_interfaces__action__Defend_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
uf_interfaces__action__Defend_SendGoal_Response__destroy(uf_interfaces__action__Defend_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    uf_interfaces__action__Defend_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
uf_interfaces__action__Defend_SendGoal_Response__Sequence__init(uf_interfaces__action__Defend_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uf_interfaces__action__Defend_SendGoal_Response * data = NULL;

  if (size) {
    data = (uf_interfaces__action__Defend_SendGoal_Response *)allocator.zero_allocate(size, sizeof(uf_interfaces__action__Defend_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uf_interfaces__action__Defend_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uf_interfaces__action__Defend_SendGoal_Response__fini(&data[i - 1]);
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
uf_interfaces__action__Defend_SendGoal_Response__Sequence__fini(uf_interfaces__action__Defend_SendGoal_Response__Sequence * array)
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
      uf_interfaces__action__Defend_SendGoal_Response__fini(&array->data[i]);
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

uf_interfaces__action__Defend_SendGoal_Response__Sequence *
uf_interfaces__action__Defend_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uf_interfaces__action__Defend_SendGoal_Response__Sequence * array = (uf_interfaces__action__Defend_SendGoal_Response__Sequence *)allocator.allocate(sizeof(uf_interfaces__action__Defend_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = uf_interfaces__action__Defend_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
uf_interfaces__action__Defend_SendGoal_Response__Sequence__destroy(uf_interfaces__action__Defend_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    uf_interfaces__action__Defend_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
uf_interfaces__action__Defend_SendGoal_Response__Sequence__are_equal(const uf_interfaces__action__Defend_SendGoal_Response__Sequence * lhs, const uf_interfaces__action__Defend_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!uf_interfaces__action__Defend_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
uf_interfaces__action__Defend_SendGoal_Response__Sequence__copy(
  const uf_interfaces__action__Defend_SendGoal_Response__Sequence * input,
  uf_interfaces__action__Defend_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(uf_interfaces__action__Defend_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    uf_interfaces__action__Defend_SendGoal_Response * data =
      (uf_interfaces__action__Defend_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!uf_interfaces__action__Defend_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          uf_interfaces__action__Defend_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!uf_interfaces__action__Defend_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
uf_interfaces__action__Defend_GetResult_Request__init(uf_interfaces__action__Defend_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    uf_interfaces__action__Defend_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
uf_interfaces__action__Defend_GetResult_Request__fini(uf_interfaces__action__Defend_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
uf_interfaces__action__Defend_GetResult_Request__are_equal(const uf_interfaces__action__Defend_GetResult_Request * lhs, const uf_interfaces__action__Defend_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
uf_interfaces__action__Defend_GetResult_Request__copy(
  const uf_interfaces__action__Defend_GetResult_Request * input,
  uf_interfaces__action__Defend_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

uf_interfaces__action__Defend_GetResult_Request *
uf_interfaces__action__Defend_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uf_interfaces__action__Defend_GetResult_Request * msg = (uf_interfaces__action__Defend_GetResult_Request *)allocator.allocate(sizeof(uf_interfaces__action__Defend_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uf_interfaces__action__Defend_GetResult_Request));
  bool success = uf_interfaces__action__Defend_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
uf_interfaces__action__Defend_GetResult_Request__destroy(uf_interfaces__action__Defend_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    uf_interfaces__action__Defend_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
uf_interfaces__action__Defend_GetResult_Request__Sequence__init(uf_interfaces__action__Defend_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uf_interfaces__action__Defend_GetResult_Request * data = NULL;

  if (size) {
    data = (uf_interfaces__action__Defend_GetResult_Request *)allocator.zero_allocate(size, sizeof(uf_interfaces__action__Defend_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uf_interfaces__action__Defend_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uf_interfaces__action__Defend_GetResult_Request__fini(&data[i - 1]);
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
uf_interfaces__action__Defend_GetResult_Request__Sequence__fini(uf_interfaces__action__Defend_GetResult_Request__Sequence * array)
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
      uf_interfaces__action__Defend_GetResult_Request__fini(&array->data[i]);
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

uf_interfaces__action__Defend_GetResult_Request__Sequence *
uf_interfaces__action__Defend_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uf_interfaces__action__Defend_GetResult_Request__Sequence * array = (uf_interfaces__action__Defend_GetResult_Request__Sequence *)allocator.allocate(sizeof(uf_interfaces__action__Defend_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = uf_interfaces__action__Defend_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
uf_interfaces__action__Defend_GetResult_Request__Sequence__destroy(uf_interfaces__action__Defend_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    uf_interfaces__action__Defend_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
uf_interfaces__action__Defend_GetResult_Request__Sequence__are_equal(const uf_interfaces__action__Defend_GetResult_Request__Sequence * lhs, const uf_interfaces__action__Defend_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!uf_interfaces__action__Defend_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
uf_interfaces__action__Defend_GetResult_Request__Sequence__copy(
  const uf_interfaces__action__Defend_GetResult_Request__Sequence * input,
  uf_interfaces__action__Defend_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(uf_interfaces__action__Defend_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    uf_interfaces__action__Defend_GetResult_Request * data =
      (uf_interfaces__action__Defend_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!uf_interfaces__action__Defend_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          uf_interfaces__action__Defend_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!uf_interfaces__action__Defend_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "uf_interfaces/action/detail/defend__functions.h"

bool
uf_interfaces__action__Defend_GetResult_Response__init(uf_interfaces__action__Defend_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!uf_interfaces__action__Defend_Result__init(&msg->result)) {
    uf_interfaces__action__Defend_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
uf_interfaces__action__Defend_GetResult_Response__fini(uf_interfaces__action__Defend_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  uf_interfaces__action__Defend_Result__fini(&msg->result);
}

bool
uf_interfaces__action__Defend_GetResult_Response__are_equal(const uf_interfaces__action__Defend_GetResult_Response * lhs, const uf_interfaces__action__Defend_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!uf_interfaces__action__Defend_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
uf_interfaces__action__Defend_GetResult_Response__copy(
  const uf_interfaces__action__Defend_GetResult_Response * input,
  uf_interfaces__action__Defend_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!uf_interfaces__action__Defend_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

uf_interfaces__action__Defend_GetResult_Response *
uf_interfaces__action__Defend_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uf_interfaces__action__Defend_GetResult_Response * msg = (uf_interfaces__action__Defend_GetResult_Response *)allocator.allocate(sizeof(uf_interfaces__action__Defend_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uf_interfaces__action__Defend_GetResult_Response));
  bool success = uf_interfaces__action__Defend_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
uf_interfaces__action__Defend_GetResult_Response__destroy(uf_interfaces__action__Defend_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    uf_interfaces__action__Defend_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
uf_interfaces__action__Defend_GetResult_Response__Sequence__init(uf_interfaces__action__Defend_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uf_interfaces__action__Defend_GetResult_Response * data = NULL;

  if (size) {
    data = (uf_interfaces__action__Defend_GetResult_Response *)allocator.zero_allocate(size, sizeof(uf_interfaces__action__Defend_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uf_interfaces__action__Defend_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uf_interfaces__action__Defend_GetResult_Response__fini(&data[i - 1]);
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
uf_interfaces__action__Defend_GetResult_Response__Sequence__fini(uf_interfaces__action__Defend_GetResult_Response__Sequence * array)
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
      uf_interfaces__action__Defend_GetResult_Response__fini(&array->data[i]);
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

uf_interfaces__action__Defend_GetResult_Response__Sequence *
uf_interfaces__action__Defend_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uf_interfaces__action__Defend_GetResult_Response__Sequence * array = (uf_interfaces__action__Defend_GetResult_Response__Sequence *)allocator.allocate(sizeof(uf_interfaces__action__Defend_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = uf_interfaces__action__Defend_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
uf_interfaces__action__Defend_GetResult_Response__Sequence__destroy(uf_interfaces__action__Defend_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    uf_interfaces__action__Defend_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
uf_interfaces__action__Defend_GetResult_Response__Sequence__are_equal(const uf_interfaces__action__Defend_GetResult_Response__Sequence * lhs, const uf_interfaces__action__Defend_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!uf_interfaces__action__Defend_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
uf_interfaces__action__Defend_GetResult_Response__Sequence__copy(
  const uf_interfaces__action__Defend_GetResult_Response__Sequence * input,
  uf_interfaces__action__Defend_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(uf_interfaces__action__Defend_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    uf_interfaces__action__Defend_GetResult_Response * data =
      (uf_interfaces__action__Defend_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!uf_interfaces__action__Defend_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          uf_interfaces__action__Defend_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!uf_interfaces__action__Defend_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "uf_interfaces/action/detail/defend__functions.h"

bool
uf_interfaces__action__Defend_FeedbackMessage__init(uf_interfaces__action__Defend_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    uf_interfaces__action__Defend_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!uf_interfaces__action__Defend_Feedback__init(&msg->feedback)) {
    uf_interfaces__action__Defend_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
uf_interfaces__action__Defend_FeedbackMessage__fini(uf_interfaces__action__Defend_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  uf_interfaces__action__Defend_Feedback__fini(&msg->feedback);
}

bool
uf_interfaces__action__Defend_FeedbackMessage__are_equal(const uf_interfaces__action__Defend_FeedbackMessage * lhs, const uf_interfaces__action__Defend_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!uf_interfaces__action__Defend_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
uf_interfaces__action__Defend_FeedbackMessage__copy(
  const uf_interfaces__action__Defend_FeedbackMessage * input,
  uf_interfaces__action__Defend_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!uf_interfaces__action__Defend_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

uf_interfaces__action__Defend_FeedbackMessage *
uf_interfaces__action__Defend_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uf_interfaces__action__Defend_FeedbackMessage * msg = (uf_interfaces__action__Defend_FeedbackMessage *)allocator.allocate(sizeof(uf_interfaces__action__Defend_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uf_interfaces__action__Defend_FeedbackMessage));
  bool success = uf_interfaces__action__Defend_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
uf_interfaces__action__Defend_FeedbackMessage__destroy(uf_interfaces__action__Defend_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    uf_interfaces__action__Defend_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
uf_interfaces__action__Defend_FeedbackMessage__Sequence__init(uf_interfaces__action__Defend_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uf_interfaces__action__Defend_FeedbackMessage * data = NULL;

  if (size) {
    data = (uf_interfaces__action__Defend_FeedbackMessage *)allocator.zero_allocate(size, sizeof(uf_interfaces__action__Defend_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uf_interfaces__action__Defend_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uf_interfaces__action__Defend_FeedbackMessage__fini(&data[i - 1]);
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
uf_interfaces__action__Defend_FeedbackMessage__Sequence__fini(uf_interfaces__action__Defend_FeedbackMessage__Sequence * array)
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
      uf_interfaces__action__Defend_FeedbackMessage__fini(&array->data[i]);
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

uf_interfaces__action__Defend_FeedbackMessage__Sequence *
uf_interfaces__action__Defend_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uf_interfaces__action__Defend_FeedbackMessage__Sequence * array = (uf_interfaces__action__Defend_FeedbackMessage__Sequence *)allocator.allocate(sizeof(uf_interfaces__action__Defend_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = uf_interfaces__action__Defend_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
uf_interfaces__action__Defend_FeedbackMessage__Sequence__destroy(uf_interfaces__action__Defend_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    uf_interfaces__action__Defend_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
uf_interfaces__action__Defend_FeedbackMessage__Sequence__are_equal(const uf_interfaces__action__Defend_FeedbackMessage__Sequence * lhs, const uf_interfaces__action__Defend_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!uf_interfaces__action__Defend_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
uf_interfaces__action__Defend_FeedbackMessage__Sequence__copy(
  const uf_interfaces__action__Defend_FeedbackMessage__Sequence * input,
  uf_interfaces__action__Defend_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(uf_interfaces__action__Defend_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    uf_interfaces__action__Defend_FeedbackMessage * data =
      (uf_interfaces__action__Defend_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!uf_interfaces__action__Defend_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          uf_interfaces__action__Defend_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!uf_interfaces__action__Defend_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
