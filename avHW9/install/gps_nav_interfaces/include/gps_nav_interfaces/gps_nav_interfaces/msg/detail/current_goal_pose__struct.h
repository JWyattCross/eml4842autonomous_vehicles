// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gps_nav_interfaces:msg/CurrentGoalPose.idl
// generated code does not contain a copyright notice

#ifndef GPS_NAV_INTERFACES__MSG__DETAIL__CURRENT_GOAL_POSE__STRUCT_H_
#define GPS_NAV_INTERFACES__MSG__DETAIL__CURRENT_GOAL_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'current_goal_pose'
// Member 'closest_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in msg/CurrentGoalPose in the package gps_nav_interfaces.
typedef struct gps_nav_interfaces__msg__CurrentGoalPose
{
  geometry_msgs__msg__PoseStamped current_goal_pose;
  geometry_msgs__msg__PoseStamped closest_pose;
  float speed;
  int16_t state;
} gps_nav_interfaces__msg__CurrentGoalPose;

// Struct for a sequence of gps_nav_interfaces__msg__CurrentGoalPose.
typedef struct gps_nav_interfaces__msg__CurrentGoalPose__Sequence
{
  gps_nav_interfaces__msg__CurrentGoalPose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gps_nav_interfaces__msg__CurrentGoalPose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GPS_NAV_INTERFACES__MSG__DETAIL__CURRENT_GOAL_POSE__STRUCT_H_
