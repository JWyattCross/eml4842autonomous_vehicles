// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gps_nav_interfaces:srv/GetRoutePoses.idl
// generated code does not contain a copyright notice

#ifndef GPS_NAV_INTERFACES__SRV__DETAIL__GET_ROUTE_POSES__STRUCT_H_
#define GPS_NAV_INTERFACES__SRV__DETAIL__GET_ROUTE_POSES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetRoutePoses in the package gps_nav_interfaces.
typedef struct gps_nav_interfaces__srv__GetRoutePoses_Request
{
  uint8_t structure_needs_at_least_one_member;
} gps_nav_interfaces__srv__GetRoutePoses_Request;

// Struct for a sequence of gps_nav_interfaces__srv__GetRoutePoses_Request.
typedef struct gps_nav_interfaces__srv__GetRoutePoses_Request__Sequence
{
  gps_nav_interfaces__srv__GetRoutePoses_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gps_nav_interfaces__srv__GetRoutePoses_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'mypose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'state_dictionary'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetRoutePoses in the package gps_nav_interfaces.
typedef struct gps_nav_interfaces__srv__GetRoutePoses_Response
{
  int16_t num_route_poses;
  geometry_msgs__msg__Pose mypose[300];
  double offset_x;
  double offset_y;
  int16_t state[300];
  bool want_loop;
  rosidl_runtime_c__String state_dictionary;
} gps_nav_interfaces__srv__GetRoutePoses_Response;

// Struct for a sequence of gps_nav_interfaces__srv__GetRoutePoses_Response.
typedef struct gps_nav_interfaces__srv__GetRoutePoses_Response__Sequence
{
  gps_nav_interfaces__srv__GetRoutePoses_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gps_nav_interfaces__srv__GetRoutePoses_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GPS_NAV_INTERFACES__SRV__DETAIL__GET_ROUTE_POSES__STRUCT_H_
