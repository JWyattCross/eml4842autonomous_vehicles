// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from my_best3_interfaces:msg/Polar.idl
// generated code does not contain a copyright notice

#ifndef MY_BEST3_INTERFACES__MSG__DETAIL__POLAR__FUNCTIONS_H_
#define MY_BEST3_INTERFACES__MSG__DETAIL__POLAR__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "my_best3_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "my_best3_interfaces/msg/detail/polar__struct.h"

/// Initialize msg/Polar message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * my_best3_interfaces__msg__Polar
 * )) before or use
 * my_best3_interfaces__msg__Polar__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_my_best3_interfaces
bool
my_best3_interfaces__msg__Polar__init(my_best3_interfaces__msg__Polar * msg);

/// Finalize msg/Polar message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_best3_interfaces
void
my_best3_interfaces__msg__Polar__fini(my_best3_interfaces__msg__Polar * msg);

/// Create msg/Polar message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * my_best3_interfaces__msg__Polar__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_best3_interfaces
my_best3_interfaces__msg__Polar *
my_best3_interfaces__msg__Polar__create();

/// Destroy msg/Polar message.
/**
 * It calls
 * my_best3_interfaces__msg__Polar__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_best3_interfaces
void
my_best3_interfaces__msg__Polar__destroy(my_best3_interfaces__msg__Polar * msg);

/// Check for msg/Polar message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_best3_interfaces
bool
my_best3_interfaces__msg__Polar__are_equal(const my_best3_interfaces__msg__Polar * lhs, const my_best3_interfaces__msg__Polar * rhs);

/// Copy a msg/Polar message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_best3_interfaces
bool
my_best3_interfaces__msg__Polar__copy(
  const my_best3_interfaces__msg__Polar * input,
  my_best3_interfaces__msg__Polar * output);

/// Initialize array of msg/Polar messages.
/**
 * It allocates the memory for the number of elements and calls
 * my_best3_interfaces__msg__Polar__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_best3_interfaces
bool
my_best3_interfaces__msg__Polar__Sequence__init(my_best3_interfaces__msg__Polar__Sequence * array, size_t size);

/// Finalize array of msg/Polar messages.
/**
 * It calls
 * my_best3_interfaces__msg__Polar__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_best3_interfaces
void
my_best3_interfaces__msg__Polar__Sequence__fini(my_best3_interfaces__msg__Polar__Sequence * array);

/// Create array of msg/Polar messages.
/**
 * It allocates the memory for the array and calls
 * my_best3_interfaces__msg__Polar__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_best3_interfaces
my_best3_interfaces__msg__Polar__Sequence *
my_best3_interfaces__msg__Polar__Sequence__create(size_t size);

/// Destroy array of msg/Polar messages.
/**
 * It calls
 * my_best3_interfaces__msg__Polar__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_best3_interfaces
void
my_best3_interfaces__msg__Polar__Sequence__destroy(my_best3_interfaces__msg__Polar__Sequence * array);

/// Check for msg/Polar message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_best3_interfaces
bool
my_best3_interfaces__msg__Polar__Sequence__are_equal(const my_best3_interfaces__msg__Polar__Sequence * lhs, const my_best3_interfaces__msg__Polar__Sequence * rhs);

/// Copy an array of msg/Polar messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_best3_interfaces
bool
my_best3_interfaces__msg__Polar__Sequence__copy(
  const my_best3_interfaces__msg__Polar__Sequence * input,
  my_best3_interfaces__msg__Polar__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MY_BEST3_INTERFACES__MSG__DETAIL__POLAR__FUNCTIONS_H_
