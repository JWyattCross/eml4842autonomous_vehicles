// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from gps_nav_interfaces:msg/LookAheadSpecs.idl
// generated code does not contain a copyright notice
#include "gps_nav_interfaces/msg/detail/look_ahead_specs__rosidl_typesupport_fastrtps_cpp.hpp"
#include "gps_nav_interfaces/msg/detail/look_ahead_specs__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace gps_nav_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gps_nav_interfaces
cdr_serialize(
  const gps_nav_interfaces::msg::LookAheadSpecs & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: look_ahead_dist
  cdr << ros_message.look_ahead_dist;
  // Member: speed
  cdr << ros_message.speed;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gps_nav_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  gps_nav_interfaces::msg::LookAheadSpecs & ros_message)
{
  // Member: look_ahead_dist
  cdr >> ros_message.look_ahead_dist;

  // Member: speed
  cdr >> ros_message.speed;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gps_nav_interfaces
get_serialized_size(
  const gps_nav_interfaces::msg::LookAheadSpecs & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: look_ahead_dist
  {
    size_t item_size = sizeof(ros_message.look_ahead_dist);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed
  {
    size_t item_size = sizeof(ros_message.speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gps_nav_interfaces
max_serialized_size_LookAheadSpecs(
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


  // Member: look_ahead_dist
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = gps_nav_interfaces::msg::LookAheadSpecs;
    is_plain =
      (
      offsetof(DataType, speed) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _LookAheadSpecs__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const gps_nav_interfaces::msg::LookAheadSpecs *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LookAheadSpecs__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<gps_nav_interfaces::msg::LookAheadSpecs *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LookAheadSpecs__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const gps_nav_interfaces::msg::LookAheadSpecs *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LookAheadSpecs__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_LookAheadSpecs(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _LookAheadSpecs__callbacks = {
  "gps_nav_interfaces::msg",
  "LookAheadSpecs",
  _LookAheadSpecs__cdr_serialize,
  _LookAheadSpecs__cdr_deserialize,
  _LookAheadSpecs__get_serialized_size,
  _LookAheadSpecs__max_serialized_size
};

static rosidl_message_type_support_t _LookAheadSpecs__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LookAheadSpecs__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace gps_nav_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_gps_nav_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<gps_nav_interfaces::msg::LookAheadSpecs>()
{
  return &gps_nav_interfaces::msg::typesupport_fastrtps_cpp::_LookAheadSpecs__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gps_nav_interfaces, msg, LookAheadSpecs)() {
  return &gps_nav_interfaces::msg::typesupport_fastrtps_cpp::_LookAheadSpecs__handle;
}

#ifdef __cplusplus
}
#endif
