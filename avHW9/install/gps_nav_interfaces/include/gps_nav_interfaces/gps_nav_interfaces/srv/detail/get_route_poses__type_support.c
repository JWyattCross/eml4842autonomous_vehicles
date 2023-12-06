// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from gps_nav_interfaces:srv/GetRoutePoses.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "gps_nav_interfaces/srv/detail/get_route_poses__rosidl_typesupport_introspection_c.h"
#include "gps_nav_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "gps_nav_interfaces/srv/detail/get_route_poses__functions.h"
#include "gps_nav_interfaces/srv/detail/get_route_poses__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void gps_nav_interfaces__srv__GetRoutePoses_Request__rosidl_typesupport_introspection_c__GetRoutePoses_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gps_nav_interfaces__srv__GetRoutePoses_Request__init(message_memory);
}

void gps_nav_interfaces__srv__GetRoutePoses_Request__rosidl_typesupport_introspection_c__GetRoutePoses_Request_fini_function(void * message_memory)
{
  gps_nav_interfaces__srv__GetRoutePoses_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember gps_nav_interfaces__srv__GetRoutePoses_Request__rosidl_typesupport_introspection_c__GetRoutePoses_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_nav_interfaces__srv__GetRoutePoses_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers gps_nav_interfaces__srv__GetRoutePoses_Request__rosidl_typesupport_introspection_c__GetRoutePoses_Request_message_members = {
  "gps_nav_interfaces__srv",  // message namespace
  "GetRoutePoses_Request",  // message name
  1,  // number of fields
  sizeof(gps_nav_interfaces__srv__GetRoutePoses_Request),
  gps_nav_interfaces__srv__GetRoutePoses_Request__rosidl_typesupport_introspection_c__GetRoutePoses_Request_message_member_array,  // message members
  gps_nav_interfaces__srv__GetRoutePoses_Request__rosidl_typesupport_introspection_c__GetRoutePoses_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  gps_nav_interfaces__srv__GetRoutePoses_Request__rosidl_typesupport_introspection_c__GetRoutePoses_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t gps_nav_interfaces__srv__GetRoutePoses_Request__rosidl_typesupport_introspection_c__GetRoutePoses_Request_message_type_support_handle = {
  0,
  &gps_nav_interfaces__srv__GetRoutePoses_Request__rosidl_typesupport_introspection_c__GetRoutePoses_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gps_nav_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gps_nav_interfaces, srv, GetRoutePoses_Request)() {
  if (!gps_nav_interfaces__srv__GetRoutePoses_Request__rosidl_typesupport_introspection_c__GetRoutePoses_Request_message_type_support_handle.typesupport_identifier) {
    gps_nav_interfaces__srv__GetRoutePoses_Request__rosidl_typesupport_introspection_c__GetRoutePoses_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &gps_nav_interfaces__srv__GetRoutePoses_Request__rosidl_typesupport_introspection_c__GetRoutePoses_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "gps_nav_interfaces/srv/detail/get_route_poses__rosidl_typesupport_introspection_c.h"
// already included above
// #include "gps_nav_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "gps_nav_interfaces/srv/detail/get_route_poses__functions.h"
// already included above
// #include "gps_nav_interfaces/srv/detail/get_route_poses__struct.h"


// Include directives for member types
// Member `mypose`
#include "geometry_msgs/msg/pose.h"
// Member `mypose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `state_dictionary`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void gps_nav_interfaces__srv__GetRoutePoses_Response__rosidl_typesupport_introspection_c__GetRoutePoses_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gps_nav_interfaces__srv__GetRoutePoses_Response__init(message_memory);
}

void gps_nav_interfaces__srv__GetRoutePoses_Response__rosidl_typesupport_introspection_c__GetRoutePoses_Response_fini_function(void * message_memory)
{
  gps_nav_interfaces__srv__GetRoutePoses_Response__fini(message_memory);
}

size_t gps_nav_interfaces__srv__GetRoutePoses_Response__rosidl_typesupport_introspection_c__size_function__GetRoutePoses_Response__mypose(
  const void * untyped_member)
{
  (void)untyped_member;
  return 300;
}

const void * gps_nav_interfaces__srv__GetRoutePoses_Response__rosidl_typesupport_introspection_c__get_const_function__GetRoutePoses_Response__mypose(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose * member =
    (const geometry_msgs__msg__Pose *)(untyped_member);
  return &member[index];
}

void * gps_nav_interfaces__srv__GetRoutePoses_Response__rosidl_typesupport_introspection_c__get_function__GetRoutePoses_Response__mypose(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose * member =
    (geometry_msgs__msg__Pose *)(untyped_member);
  return &member[index];
}

void gps_nav_interfaces__srv__GetRoutePoses_Response__rosidl_typesupport_introspection_c__fetch_function__GetRoutePoses_Response__mypose(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Pose * item =
    ((const geometry_msgs__msg__Pose *)
    gps_nav_interfaces__srv__GetRoutePoses_Response__rosidl_typesupport_introspection_c__get_const_function__GetRoutePoses_Response__mypose(untyped_member, index));
  geometry_msgs__msg__Pose * value =
    (geometry_msgs__msg__Pose *)(untyped_value);
  *value = *item;
}

void gps_nav_interfaces__srv__GetRoutePoses_Response__rosidl_typesupport_introspection_c__assign_function__GetRoutePoses_Response__mypose(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Pose * item =
    ((geometry_msgs__msg__Pose *)
    gps_nav_interfaces__srv__GetRoutePoses_Response__rosidl_typesupport_introspection_c__get_function__GetRoutePoses_Response__mypose(untyped_member, index));
  const geometry_msgs__msg__Pose * value =
    (const geometry_msgs__msg__Pose *)(untyped_value);
  *item = *value;
}

size_t gps_nav_interfaces__srv__GetRoutePoses_Response__rosidl_typesupport_introspection_c__size_function__GetRoutePoses_Response__state(
  const void * untyped_member)
{
  (void)untyped_member;
  return 300;
}

const void * gps_nav_interfaces__srv__GetRoutePoses_Response__rosidl_typesupport_introspection_c__get_const_function__GetRoutePoses_Response__state(
  const void * untyped_member, size_t index)
{
  const int16_t * member =
    (const int16_t *)(untyped_member);
  return &member[index];
}

void * gps_nav_interfaces__srv__GetRoutePoses_Response__rosidl_typesupport_introspection_c__get_function__GetRoutePoses_Response__state(
  void * untyped_member, size_t index)
{
  int16_t * member =
    (int16_t *)(untyped_member);
  return &member[index];
}

void gps_nav_interfaces__srv__GetRoutePoses_Response__rosidl_typesupport_introspection_c__fetch_function__GetRoutePoses_Response__state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    gps_nav_interfaces__srv__GetRoutePoses_Response__rosidl_typesupport_introspection_c__get_const_function__GetRoutePoses_Response__state(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void gps_nav_interfaces__srv__GetRoutePoses_Response__rosidl_typesupport_introspection_c__assign_function__GetRoutePoses_Response__state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    gps_nav_interfaces__srv__GetRoutePoses_Response__rosidl_typesupport_introspection_c__get_function__GetRoutePoses_Response__state(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember gps_nav_interfaces__srv__GetRoutePoses_Response__rosidl_typesupport_introspection_c__GetRoutePoses_Response_message_member_array[7] = {
  {
    "num_route_poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_nav_interfaces__srv__GetRoutePoses_Response, num_route_poses),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mypose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    300,  // array size
    false,  // is upper bound
    offsetof(gps_nav_interfaces__srv__GetRoutePoses_Response, mypose),  // bytes offset in struct
    NULL,  // default value
    gps_nav_interfaces__srv__GetRoutePoses_Response__rosidl_typesupport_introspection_c__size_function__GetRoutePoses_Response__mypose,  // size() function pointer
    gps_nav_interfaces__srv__GetRoutePoses_Response__rosidl_typesupport_introspection_c__get_const_function__GetRoutePoses_Response__mypose,  // get_const(index) function pointer
    gps_nav_interfaces__srv__GetRoutePoses_Response__rosidl_typesupport_introspection_c__get_function__GetRoutePoses_Response__mypose,  // get(index) function pointer
    gps_nav_interfaces__srv__GetRoutePoses_Response__rosidl_typesupport_introspection_c__fetch_function__GetRoutePoses_Response__mypose,  // fetch(index, &value) function pointer
    gps_nav_interfaces__srv__GetRoutePoses_Response__rosidl_typesupport_introspection_c__assign_function__GetRoutePoses_Response__mypose,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "offset_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_nav_interfaces__srv__GetRoutePoses_Response, offset_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "offset_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_nav_interfaces__srv__GetRoutePoses_Response, offset_y),  // bytes offset in struct
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
    true,  // is array
    300,  // array size
    false,  // is upper bound
    offsetof(gps_nav_interfaces__srv__GetRoutePoses_Response, state),  // bytes offset in struct
    NULL,  // default value
    gps_nav_interfaces__srv__GetRoutePoses_Response__rosidl_typesupport_introspection_c__size_function__GetRoutePoses_Response__state,  // size() function pointer
    gps_nav_interfaces__srv__GetRoutePoses_Response__rosidl_typesupport_introspection_c__get_const_function__GetRoutePoses_Response__state,  // get_const(index) function pointer
    gps_nav_interfaces__srv__GetRoutePoses_Response__rosidl_typesupport_introspection_c__get_function__GetRoutePoses_Response__state,  // get(index) function pointer
    gps_nav_interfaces__srv__GetRoutePoses_Response__rosidl_typesupport_introspection_c__fetch_function__GetRoutePoses_Response__state,  // fetch(index, &value) function pointer
    gps_nav_interfaces__srv__GetRoutePoses_Response__rosidl_typesupport_introspection_c__assign_function__GetRoutePoses_Response__state,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "want_loop",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_nav_interfaces__srv__GetRoutePoses_Response, want_loop),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state_dictionary",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_nav_interfaces__srv__GetRoutePoses_Response, state_dictionary),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers gps_nav_interfaces__srv__GetRoutePoses_Response__rosidl_typesupport_introspection_c__GetRoutePoses_Response_message_members = {
  "gps_nav_interfaces__srv",  // message namespace
  "GetRoutePoses_Response",  // message name
  7,  // number of fields
  sizeof(gps_nav_interfaces__srv__GetRoutePoses_Response),
  gps_nav_interfaces__srv__GetRoutePoses_Response__rosidl_typesupport_introspection_c__GetRoutePoses_Response_message_member_array,  // message members
  gps_nav_interfaces__srv__GetRoutePoses_Response__rosidl_typesupport_introspection_c__GetRoutePoses_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  gps_nav_interfaces__srv__GetRoutePoses_Response__rosidl_typesupport_introspection_c__GetRoutePoses_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t gps_nav_interfaces__srv__GetRoutePoses_Response__rosidl_typesupport_introspection_c__GetRoutePoses_Response_message_type_support_handle = {
  0,
  &gps_nav_interfaces__srv__GetRoutePoses_Response__rosidl_typesupport_introspection_c__GetRoutePoses_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gps_nav_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gps_nav_interfaces, srv, GetRoutePoses_Response)() {
  gps_nav_interfaces__srv__GetRoutePoses_Response__rosidl_typesupport_introspection_c__GetRoutePoses_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!gps_nav_interfaces__srv__GetRoutePoses_Response__rosidl_typesupport_introspection_c__GetRoutePoses_Response_message_type_support_handle.typesupport_identifier) {
    gps_nav_interfaces__srv__GetRoutePoses_Response__rosidl_typesupport_introspection_c__GetRoutePoses_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &gps_nav_interfaces__srv__GetRoutePoses_Response__rosidl_typesupport_introspection_c__GetRoutePoses_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "gps_nav_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "gps_nav_interfaces/srv/detail/get_route_poses__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers gps_nav_interfaces__srv__detail__get_route_poses__rosidl_typesupport_introspection_c__GetRoutePoses_service_members = {
  "gps_nav_interfaces__srv",  // service namespace
  "GetRoutePoses",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // gps_nav_interfaces__srv__detail__get_route_poses__rosidl_typesupport_introspection_c__GetRoutePoses_Request_message_type_support_handle,
  NULL  // response message
  // gps_nav_interfaces__srv__detail__get_route_poses__rosidl_typesupport_introspection_c__GetRoutePoses_Response_message_type_support_handle
};

static rosidl_service_type_support_t gps_nav_interfaces__srv__detail__get_route_poses__rosidl_typesupport_introspection_c__GetRoutePoses_service_type_support_handle = {
  0,
  &gps_nav_interfaces__srv__detail__get_route_poses__rosidl_typesupport_introspection_c__GetRoutePoses_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gps_nav_interfaces, srv, GetRoutePoses_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gps_nav_interfaces, srv, GetRoutePoses_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gps_nav_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gps_nav_interfaces, srv, GetRoutePoses)() {
  if (!gps_nav_interfaces__srv__detail__get_route_poses__rosidl_typesupport_introspection_c__GetRoutePoses_service_type_support_handle.typesupport_identifier) {
    gps_nav_interfaces__srv__detail__get_route_poses__rosidl_typesupport_introspection_c__GetRoutePoses_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)gps_nav_interfaces__srv__detail__get_route_poses__rosidl_typesupport_introspection_c__GetRoutePoses_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gps_nav_interfaces, srv, GetRoutePoses_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gps_nav_interfaces, srv, GetRoutePoses_Response)()->data;
  }

  return &gps_nav_interfaces__srv__detail__get_route_poses__rosidl_typesupport_introspection_c__GetRoutePoses_service_type_support_handle;
}
