// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from gps_nav_interfaces:srv/GetRoutePoses.idl
// generated code does not contain a copyright notice
#include "gps_nav_interfaces/srv/detail/get_route_poses__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "gps_nav_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "gps_nav_interfaces/srv/detail/get_route_poses__struct.h"
#include "gps_nav_interfaces/srv/detail/get_route_poses__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _GetRoutePoses_Request__ros_msg_type = gps_nav_interfaces__srv__GetRoutePoses_Request;

static bool _GetRoutePoses_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetRoutePoses_Request__ros_msg_type * ros_message = static_cast<const _GetRoutePoses_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _GetRoutePoses_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetRoutePoses_Request__ros_msg_type * ros_message = static_cast<_GetRoutePoses_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gps_nav_interfaces
size_t get_serialized_size_gps_nav_interfaces__srv__GetRoutePoses_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetRoutePoses_Request__ros_msg_type * ros_message = static_cast<const _GetRoutePoses_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetRoutePoses_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_gps_nav_interfaces__srv__GetRoutePoses_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gps_nav_interfaces
size_t max_serialized_size_gps_nav_interfaces__srv__GetRoutePoses_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = gps_nav_interfaces__srv__GetRoutePoses_Request;
    is_plain =
      (
      offsetof(DataType, structure_needs_at_least_one_member) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetRoutePoses_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_gps_nav_interfaces__srv__GetRoutePoses_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetRoutePoses_Request = {
  "gps_nav_interfaces::srv",
  "GetRoutePoses_Request",
  _GetRoutePoses_Request__cdr_serialize,
  _GetRoutePoses_Request__cdr_deserialize,
  _GetRoutePoses_Request__get_serialized_size,
  _GetRoutePoses_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetRoutePoses_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetRoutePoses_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gps_nav_interfaces, srv, GetRoutePoses_Request)() {
  return &_GetRoutePoses_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "gps_nav_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "gps_nav_interfaces/srv/detail/get_route_poses__struct.h"
// already included above
// #include "gps_nav_interfaces/srv/detail/get_route_poses__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/detail/pose__functions.h"  // mypose
#include "rosidl_runtime_c/string.h"  // state_dictionary
#include "rosidl_runtime_c/string_functions.h"  // state_dictionary

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_gps_nav_interfaces
size_t get_serialized_size_geometry_msgs__msg__Pose(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_gps_nav_interfaces
size_t max_serialized_size_geometry_msgs__msg__Pose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_gps_nav_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose)();


using _GetRoutePoses_Response__ros_msg_type = gps_nav_interfaces__srv__GetRoutePoses_Response;

static bool _GetRoutePoses_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetRoutePoses_Response__ros_msg_type * ros_message = static_cast<const _GetRoutePoses_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: num_route_poses
  {
    cdr << ros_message->num_route_poses;
  }

  // Field name: mypose
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose
      )()->data);
    size_t size = 300;
    auto array_ptr = ros_message->mypose;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: offset_x
  {
    cdr << ros_message->offset_x;
  }

  // Field name: offset_y
  {
    cdr << ros_message->offset_y;
  }

  // Field name: state
  {
    size_t size = 300;
    auto array_ptr = ros_message->state;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: want_loop
  {
    cdr << (ros_message->want_loop ? true : false);
  }

  // Field name: state_dictionary
  {
    const rosidl_runtime_c__String * str = &ros_message->state_dictionary;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _GetRoutePoses_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetRoutePoses_Response__ros_msg_type * ros_message = static_cast<_GetRoutePoses_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: num_route_poses
  {
    cdr >> ros_message->num_route_poses;
  }

  // Field name: mypose
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose
      )()->data);
    size_t size = 300;
    auto array_ptr = ros_message->mypose;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: offset_x
  {
    cdr >> ros_message->offset_x;
  }

  // Field name: offset_y
  {
    cdr >> ros_message->offset_y;
  }

  // Field name: state
  {
    size_t size = 300;
    auto array_ptr = ros_message->state;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: want_loop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->want_loop = tmp ? true : false;
  }

  // Field name: state_dictionary
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->state_dictionary.data) {
      rosidl_runtime_c__String__init(&ros_message->state_dictionary);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->state_dictionary,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'state_dictionary'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gps_nav_interfaces
size_t get_serialized_size_gps_nav_interfaces__srv__GetRoutePoses_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetRoutePoses_Response__ros_msg_type * ros_message = static_cast<const _GetRoutePoses_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name num_route_poses
  {
    size_t item_size = sizeof(ros_message->num_route_poses);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mypose
  {
    size_t array_size = 300;
    auto array_ptr = ros_message->mypose;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_geometry_msgs__msg__Pose(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name offset_x
  {
    size_t item_size = sizeof(ros_message->offset_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name offset_y
  {
    size_t item_size = sizeof(ros_message->offset_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name state
  {
    size_t array_size = 300;
    auto array_ptr = ros_message->state;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name want_loop
  {
    size_t item_size = sizeof(ros_message->want_loop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name state_dictionary
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->state_dictionary.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _GetRoutePoses_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_gps_nav_interfaces__srv__GetRoutePoses_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gps_nav_interfaces
size_t max_serialized_size_gps_nav_interfaces__srv__GetRoutePoses_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: num_route_poses
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: mypose
  {
    size_t array_size = 300;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: offset_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: offset_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: state
  {
    size_t array_size = 300;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: want_loop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: state_dictionary
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = gps_nav_interfaces__srv__GetRoutePoses_Response;
    is_plain =
      (
      offsetof(DataType, state_dictionary) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetRoutePoses_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_gps_nav_interfaces__srv__GetRoutePoses_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetRoutePoses_Response = {
  "gps_nav_interfaces::srv",
  "GetRoutePoses_Response",
  _GetRoutePoses_Response__cdr_serialize,
  _GetRoutePoses_Response__cdr_deserialize,
  _GetRoutePoses_Response__get_serialized_size,
  _GetRoutePoses_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetRoutePoses_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetRoutePoses_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gps_nav_interfaces, srv, GetRoutePoses_Response)() {
  return &_GetRoutePoses_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "gps_nav_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "gps_nav_interfaces/srv/get_route_poses.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetRoutePoses__callbacks = {
  "gps_nav_interfaces::srv",
  "GetRoutePoses",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gps_nav_interfaces, srv, GetRoutePoses_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gps_nav_interfaces, srv, GetRoutePoses_Response)(),
};

static rosidl_service_type_support_t GetRoutePoses__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetRoutePoses__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gps_nav_interfaces, srv, GetRoutePoses)() {
  return &GetRoutePoses__handle;
}

#if defined(__cplusplus)
}
#endif
