// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from uf_interfaces:srv/TaskAssign.idl
// generated code does not contain a copyright notice
#include "uf_interfaces/srv/detail/task_assign__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `target`
#include "rosidl_runtime_c/string_functions.h"

bool
uf_interfaces__srv__TaskAssign_Request__init(uf_interfaces__srv__TaskAssign_Request * msg)
{
  if (!msg) {
    return false;
  }
  // target
  if (!rosidl_runtime_c__String__init(&msg->target)) {
    uf_interfaces__srv__TaskAssign_Request__fini(msg);
    return false;
  }
  return true;
}

void
uf_interfaces__srv__TaskAssign_Request__fini(uf_interfaces__srv__TaskAssign_Request * msg)
{
  if (!msg) {
    return;
  }
  // target
  rosidl_runtime_c__String__fini(&msg->target);
}

bool
uf_interfaces__srv__TaskAssign_Request__are_equal(const uf_interfaces__srv__TaskAssign_Request * lhs, const uf_interfaces__srv__TaskAssign_Request * rhs)
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
uf_interfaces__srv__TaskAssign_Request__copy(
  const uf_interfaces__srv__TaskAssign_Request * input,
  uf_interfaces__srv__TaskAssign_Request * output)
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

uf_interfaces__srv__TaskAssign_Request *
uf_interfaces__srv__TaskAssign_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uf_interfaces__srv__TaskAssign_Request * msg = (uf_interfaces__srv__TaskAssign_Request *)allocator.allocate(sizeof(uf_interfaces__srv__TaskAssign_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uf_interfaces__srv__TaskAssign_Request));
  bool success = uf_interfaces__srv__TaskAssign_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
uf_interfaces__srv__TaskAssign_Request__destroy(uf_interfaces__srv__TaskAssign_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    uf_interfaces__srv__TaskAssign_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
uf_interfaces__srv__TaskAssign_Request__Sequence__init(uf_interfaces__srv__TaskAssign_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uf_interfaces__srv__TaskAssign_Request * data = NULL;

  if (size) {
    data = (uf_interfaces__srv__TaskAssign_Request *)allocator.zero_allocate(size, sizeof(uf_interfaces__srv__TaskAssign_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uf_interfaces__srv__TaskAssign_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uf_interfaces__srv__TaskAssign_Request__fini(&data[i - 1]);
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
uf_interfaces__srv__TaskAssign_Request__Sequence__fini(uf_interfaces__srv__TaskAssign_Request__Sequence * array)
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
      uf_interfaces__srv__TaskAssign_Request__fini(&array->data[i]);
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

uf_interfaces__srv__TaskAssign_Request__Sequence *
uf_interfaces__srv__TaskAssign_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uf_interfaces__srv__TaskAssign_Request__Sequence * array = (uf_interfaces__srv__TaskAssign_Request__Sequence *)allocator.allocate(sizeof(uf_interfaces__srv__TaskAssign_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = uf_interfaces__srv__TaskAssign_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
uf_interfaces__srv__TaskAssign_Request__Sequence__destroy(uf_interfaces__srv__TaskAssign_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    uf_interfaces__srv__TaskAssign_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
uf_interfaces__srv__TaskAssign_Request__Sequence__are_equal(const uf_interfaces__srv__TaskAssign_Request__Sequence * lhs, const uf_interfaces__srv__TaskAssign_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!uf_interfaces__srv__TaskAssign_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
uf_interfaces__srv__TaskAssign_Request__Sequence__copy(
  const uf_interfaces__srv__TaskAssign_Request__Sequence * input,
  uf_interfaces__srv__TaskAssign_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(uf_interfaces__srv__TaskAssign_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    uf_interfaces__srv__TaskAssign_Request * data =
      (uf_interfaces__srv__TaskAssign_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!uf_interfaces__srv__TaskAssign_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          uf_interfaces__srv__TaskAssign_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!uf_interfaces__srv__TaskAssign_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
uf_interfaces__srv__TaskAssign_Response__init(uf_interfaces__srv__TaskAssign_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    uf_interfaces__srv__TaskAssign_Response__fini(msg);
    return false;
  }
  return true;
}

void
uf_interfaces__srv__TaskAssign_Response__fini(uf_interfaces__srv__TaskAssign_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
uf_interfaces__srv__TaskAssign_Response__are_equal(const uf_interfaces__srv__TaskAssign_Response * lhs, const uf_interfaces__srv__TaskAssign_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
uf_interfaces__srv__TaskAssign_Response__copy(
  const uf_interfaces__srv__TaskAssign_Response * input,
  uf_interfaces__srv__TaskAssign_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

uf_interfaces__srv__TaskAssign_Response *
uf_interfaces__srv__TaskAssign_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uf_interfaces__srv__TaskAssign_Response * msg = (uf_interfaces__srv__TaskAssign_Response *)allocator.allocate(sizeof(uf_interfaces__srv__TaskAssign_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uf_interfaces__srv__TaskAssign_Response));
  bool success = uf_interfaces__srv__TaskAssign_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
uf_interfaces__srv__TaskAssign_Response__destroy(uf_interfaces__srv__TaskAssign_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    uf_interfaces__srv__TaskAssign_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
uf_interfaces__srv__TaskAssign_Response__Sequence__init(uf_interfaces__srv__TaskAssign_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uf_interfaces__srv__TaskAssign_Response * data = NULL;

  if (size) {
    data = (uf_interfaces__srv__TaskAssign_Response *)allocator.zero_allocate(size, sizeof(uf_interfaces__srv__TaskAssign_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uf_interfaces__srv__TaskAssign_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uf_interfaces__srv__TaskAssign_Response__fini(&data[i - 1]);
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
uf_interfaces__srv__TaskAssign_Response__Sequence__fini(uf_interfaces__srv__TaskAssign_Response__Sequence * array)
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
      uf_interfaces__srv__TaskAssign_Response__fini(&array->data[i]);
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

uf_interfaces__srv__TaskAssign_Response__Sequence *
uf_interfaces__srv__TaskAssign_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uf_interfaces__srv__TaskAssign_Response__Sequence * array = (uf_interfaces__srv__TaskAssign_Response__Sequence *)allocator.allocate(sizeof(uf_interfaces__srv__TaskAssign_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = uf_interfaces__srv__TaskAssign_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
uf_interfaces__srv__TaskAssign_Response__Sequence__destroy(uf_interfaces__srv__TaskAssign_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    uf_interfaces__srv__TaskAssign_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
uf_interfaces__srv__TaskAssign_Response__Sequence__are_equal(const uf_interfaces__srv__TaskAssign_Response__Sequence * lhs, const uf_interfaces__srv__TaskAssign_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!uf_interfaces__srv__TaskAssign_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
uf_interfaces__srv__TaskAssign_Response__Sequence__copy(
  const uf_interfaces__srv__TaskAssign_Response__Sequence * input,
  uf_interfaces__srv__TaskAssign_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(uf_interfaces__srv__TaskAssign_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    uf_interfaces__srv__TaskAssign_Response * data =
      (uf_interfaces__srv__TaskAssign_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!uf_interfaces__srv__TaskAssign_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          uf_interfaces__srv__TaskAssign_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!uf_interfaces__srv__TaskAssign_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
