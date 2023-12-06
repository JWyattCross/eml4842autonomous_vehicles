// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from gps_nav_interfaces:msg/CurrentGoalPose.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "gps_nav_interfaces/msg/detail/current_goal_pose__rosidl_typesupport_introspection_c.h"
#include "gps_nav_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "gps_nav_interfaces/msg/detail/current_goal_pose__functions.h"
#include "gps_nav_interfaces/msg/detail/current_goal_pose__struct.h"


// Include directives for member types
// Member `current_goal_pose`
// Member `closest_pose`
#include "geometry_msgs/msg/pose_stamped.h"
// Member `current_goal_pose`
// Member `closest_pose`
#include "geometry_msgs/msg/detail/pose_stamped__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void gps_nav_interfaces__msg__CurrentGoalPose__rosidl_typesupport_introspection_c__CurrentGoalPose_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gps_nav_interfaces__msg__CurrentGoalPose__init(message_memory);
}

void gps_nav_interfaces__msg__CurrentGoalPose__rosidl_typesupport_introspection_c__CurrentGoalPose_fini_function(void * message_memory)
{
  gps_nav_interfaces__msg__CurrentGoalPose__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember gps_nav_interfaces__msg__CurrentGoalPose__rosidl_typesupport_introspection_c__CurrentGoalPose_message_member_array[4] = {
  {
    "current_goal_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_nav_interfaces__msg__CurrentGoalPose, current_goal_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "closest_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_nav_interfaces__msg__CurrentGoalPose, closest_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_nav_interfaces__msg__CurrentGoalPose, speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_nav_interfaces__msg__CurrentGoalPose, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers gps_nav_interfaces__msg__CurrentGoalPose__rosidl_typesupport_introspection_c__CurrentGoalPose_message_members = {
  "gps_nav_interfaces__msg",  // message namespace
  "CurrentGoalPose",  // message name
  4,  // number of fields
  sizeof(gps_nav_interfaces__msg__CurrentGoalPose),
  gps_nav_interfaces__msg__CurrentGoalPose__rosidl_typesupport_introspection_c__CurrentGoalPose_message_member_array,  // message members
  gps_nav_interfaces__msg__CurrentGoalPose__rosidl_typesupport_introspection_c__CurrentGoalPose_init_function,  // function to initialize message memory (memory has to be allocated)
  gps_nav_interfaces__msg__CurrentGoalPose__rosidl_typesupport_introspection_c__CurrentGoalPose_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t gps_nav_interfaces__msg__CurrentGoalPose__rosidl_typesupport_introspection_c__CurrentGoalPose_message_type_support_handle = {
  0,
  &gps_nav_interfaces__msg__CurrentGoalPose__rosidl_typesupport_introspection_c__CurrentGoalPose_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gps_nav_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gps_nav_interfaces, msg, CurrentGoalPose)() {
  gps_nav_interfaces__msg__CurrentGoalPose__rosidl_typesupport_introspection_c__CurrentGoalPose_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  gps_nav_interfaces__msg__CurrentGoalPose__rosidl_typesupport_introspection_c__CurrentGoalPose_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  if (!gps_nav_interfaces__msg__CurrentGoalPose__rosidl_typesupport_introspection_c__CurrentGoalPose_message_type_support_handle.typesupport_identifier) {
    gps_nav_interfaces__msg__CurrentGoalPose__rosidl_typesupport_introspection_c__CurrentGoalPose_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &gps_nav_interfaces__msg__CurrentGoalPose__rosidl_typesupport_introspection_c__CurrentGoalPose_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
