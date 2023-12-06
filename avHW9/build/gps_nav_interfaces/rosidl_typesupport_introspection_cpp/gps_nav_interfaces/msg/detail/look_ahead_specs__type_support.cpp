// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from gps_nav_interfaces:msg/LookAheadSpecs.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "gps_nav_interfaces/msg/detail/look_ahead_specs__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace gps_nav_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void LookAheadSpecs_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) gps_nav_interfaces::msg::LookAheadSpecs(_init);
}

void LookAheadSpecs_fini_function(void * message_memory)
{
  auto typed_message = static_cast<gps_nav_interfaces::msg::LookAheadSpecs *>(message_memory);
  typed_message->~LookAheadSpecs();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LookAheadSpecs_message_member_array[2] = {
  {
    "look_ahead_dist",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_nav_interfaces::msg::LookAheadSpecs, look_ahead_dist),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "speed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_nav_interfaces::msg::LookAheadSpecs, speed),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LookAheadSpecs_message_members = {
  "gps_nav_interfaces::msg",  // message namespace
  "LookAheadSpecs",  // message name
  2,  // number of fields
  sizeof(gps_nav_interfaces::msg::LookAheadSpecs),
  LookAheadSpecs_message_member_array,  // message members
  LookAheadSpecs_init_function,  // function to initialize message memory (memory has to be allocated)
  LookAheadSpecs_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LookAheadSpecs_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LookAheadSpecs_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace gps_nav_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<gps_nav_interfaces::msg::LookAheadSpecs>()
{
  return &::gps_nav_interfaces::msg::rosidl_typesupport_introspection_cpp::LookAheadSpecs_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gps_nav_interfaces, msg, LookAheadSpecs)() {
  return &::gps_nav_interfaces::msg::rosidl_typesupport_introspection_cpp::LookAheadSpecs_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
