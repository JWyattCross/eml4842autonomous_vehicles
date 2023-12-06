// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_best3_interfaces:msg/Polar.idl
// generated code does not contain a copyright notice

#ifndef MY_BEST3_INTERFACES__MSG__DETAIL__POLAR__STRUCT_H_
#define MY_BEST3_INTERFACES__MSG__DETAIL__POLAR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'point'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/Polar in the package my_best3_interfaces.
typedef struct my_best3_interfaces__msg__Polar
{
  double r_meters;
  double theta_rad;
  geometry_msgs__msg__Vector3 point;
} my_best3_interfaces__msg__Polar;

// Struct for a sequence of my_best3_interfaces__msg__Polar.
typedef struct my_best3_interfaces__msg__Polar__Sequence
{
  my_best3_interfaces__msg__Polar * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_best3_interfaces__msg__Polar__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_BEST3_INTERFACES__MSG__DETAIL__POLAR__STRUCT_H_
