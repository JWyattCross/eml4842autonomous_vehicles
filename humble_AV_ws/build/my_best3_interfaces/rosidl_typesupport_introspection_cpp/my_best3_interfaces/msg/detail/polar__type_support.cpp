// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from my_best3_interfaces:msg/Polar.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "my_best3_interfaces/msg/detail/polar__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace my_best3_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Polar_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) my_best3_interfaces::msg::Polar(_init);
}

void Polar_fini_function(void * message_memory)
{
  auto typed_message = static_cast<my_best3_interfaces::msg::Polar *>(message_memory);
  typed_message->~Polar();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Polar_message_member_array[3] = {
  {
    "r_meters",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_best3_interfaces::msg::Polar, r_meters),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "theta_rad",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_best3_interfaces::msg::Polar, theta_rad),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "point",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Vector3>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_best3_interfaces::msg::Polar, point),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Polar_message_members = {
  "my_best3_interfaces::msg",  // message namespace
  "Polar",  // message name
  3,  // number of fields
  sizeof(my_best3_interfaces::msg::Polar),
  Polar_message_member_array,  // message members
  Polar_init_function,  // function to initialize message memory (memory has to be allocated)
  Polar_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Polar_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Polar_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace my_best3_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_best3_interfaces::msg::Polar>()
{
  return &::my_best3_interfaces::msg::rosidl_typesupport_introspection_cpp::Polar_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_best3_interfaces, msg, Polar)() {
  return &::my_best3_interfaces::msg::rosidl_typesupport_introspection_cpp::Polar_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
