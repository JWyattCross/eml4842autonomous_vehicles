// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from my_best3_interfaces:msg/Polar.idl
// generated code does not contain a copyright notice
#include "my_best3_interfaces/msg/detail/polar__rosidl_typesupport_fastrtps_cpp.hpp"
#include "my_best3_interfaces/msg/detail/polar__struct.hpp"

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
namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Vector3 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Vector3 &);
size_t get_serialized_size(
  const geometry_msgs::msg::Vector3 &,
  size_t current_alignment);
size_t
max_serialized_size_Vector3(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs


namespace my_best3_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_best3_interfaces
cdr_serialize(
  const my_best3_interfaces::msg::Polar & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: r_meters
  cdr << ros_message.r_meters;
  // Member: theta_rad
  cdr << ros_message.theta_rad;
  // Member: point
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.point,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_best3_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  my_best3_interfaces::msg::Polar & ros_message)
{
  // Member: r_meters
  cdr >> ros_message.r_meters;

  // Member: theta_rad
  cdr >> ros_message.theta_rad;

  // Member: point
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.point);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_best3_interfaces
get_serialized_size(
  const my_best3_interfaces::msg::Polar & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: r_meters
  {
    size_t item_size = sizeof(ros_message.r_meters);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: theta_rad
  {
    size_t item_size = sizeof(ros_message.theta_rad);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: point

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.point, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_best3_interfaces
max_serialized_size_Polar(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: r_meters
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: theta_rad
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: point
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _Polar__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const my_best3_interfaces::msg::Polar *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Polar__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<my_best3_interfaces::msg::Polar *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Polar__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const my_best3_interfaces::msg::Polar *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Polar__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Polar(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Polar__callbacks = {
  "my_best3_interfaces::msg",
  "Polar",
  _Polar__cdr_serialize,
  _Polar__cdr_deserialize,
  _Polar__get_serialized_size,
  _Polar__max_serialized_size
};

static rosidl_message_type_support_t _Polar__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Polar__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace my_best3_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_my_best3_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<my_best3_interfaces::msg::Polar>()
{
  return &my_best3_interfaces::msg::typesupport_fastrtps_cpp::_Polar__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_best3_interfaces, msg, Polar)() {
  return &my_best3_interfaces::msg::typesupport_fastrtps_cpp::_Polar__handle;
}

#ifdef __cplusplus
}
#endif
