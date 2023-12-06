// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from uf_interfaces:msg/Position.idl
// generated code does not contain a copyright notice

#ifndef UF_INTERFACES__MSG__DETAIL__POSITION__STRUCT_H_
#define UF_INTERFACES__MSG__DETAIL__POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Position in the package uf_interfaces.
typedef struct uf_interfaces__msg__Position
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String name;
  double x;
  double y;
  double z;
  double yaw;
} uf_interfaces__msg__Position;

// Struct for a sequence of uf_interfaces__msg__Position.
typedef struct uf_interfaces__msg__Position__Sequence
{
  uf_interfaces__msg__Position * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uf_interfaces__msg__Position__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UF_INTERFACES__MSG__DETAIL__POSITION__STRUCT_H_
