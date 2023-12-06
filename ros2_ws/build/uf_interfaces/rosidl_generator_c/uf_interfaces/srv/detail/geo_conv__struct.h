// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from uf_interfaces:srv/GeoConv.idl
// generated code does not contain a copyright notice

#ifndef UF_INTERFACES__SRV__DETAIL__GEO_CONV__STRUCT_H_
#define UF_INTERFACES__SRV__DETAIL__GEO_CONV__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GeoConv in the package uf_interfaces.
typedef struct uf_interfaces__srv__GeoConv_Request
{
  double input_x;
  double input_y;
} uf_interfaces__srv__GeoConv_Request;

// Struct for a sequence of uf_interfaces__srv__GeoConv_Request.
typedef struct uf_interfaces__srv__GeoConv_Request__Sequence
{
  uf_interfaces__srv__GeoConv_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uf_interfaces__srv__GeoConv_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GeoConv in the package uf_interfaces.
typedef struct uf_interfaces__srv__GeoConv_Response
{
  double output_x;
  double output_y;
  bool success;
  rosidl_runtime_c__String message;
} uf_interfaces__srv__GeoConv_Response;

// Struct for a sequence of uf_interfaces__srv__GeoConv_Response.
typedef struct uf_interfaces__srv__GeoConv_Response__Sequence
{
  uf_interfaces__srv__GeoConv_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uf_interfaces__srv__GeoConv_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UF_INTERFACES__SRV__DETAIL__GEO_CONV__STRUCT_H_
