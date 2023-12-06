// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gps_nav_interfaces:msg/LookAheadSpecs.idl
// generated code does not contain a copyright notice

#ifndef GPS_NAV_INTERFACES__MSG__DETAIL__LOOK_AHEAD_SPECS__STRUCT_H_
#define GPS_NAV_INTERFACES__MSG__DETAIL__LOOK_AHEAD_SPECS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/LookAheadSpecs in the package gps_nav_interfaces.
typedef struct gps_nav_interfaces__msg__LookAheadSpecs
{
  float look_ahead_dist;
  float speed;
} gps_nav_interfaces__msg__LookAheadSpecs;

// Struct for a sequence of gps_nav_interfaces__msg__LookAheadSpecs.
typedef struct gps_nav_interfaces__msg__LookAheadSpecs__Sequence
{
  gps_nav_interfaces__msg__LookAheadSpecs * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gps_nav_interfaces__msg__LookAheadSpecs__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GPS_NAV_INTERFACES__MSG__DETAIL__LOOK_AHEAD_SPECS__STRUCT_H_
