// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from gps_nav_interfaces:srv/GetRoutePoses.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "gps_nav_interfaces/srv/detail/get_route_poses__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace gps_nav_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetRoutePoses_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) gps_nav_interfaces::srv::GetRoutePoses_Request(_init);
}

void GetRoutePoses_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<gps_nav_interfaces::srv::GetRoutePoses_Request *>(message_memory);
  typed_message->~GetRoutePoses_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetRoutePoses_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_nav_interfaces::srv::GetRoutePoses_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetRoutePoses_Request_message_members = {
  "gps_nav_interfaces::srv",  // message namespace
  "GetRoutePoses_Request",  // message name
  1,  // number of fields
  sizeof(gps_nav_interfaces::srv::GetRoutePoses_Request),
  GetRoutePoses_Request_message_member_array,  // message members
  GetRoutePoses_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetRoutePoses_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetRoutePoses_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetRoutePoses_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace gps_nav_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<gps_nav_interfaces::srv::GetRoutePoses_Request>()
{
  return &::gps_nav_interfaces::srv::rosidl_typesupport_introspection_cpp::GetRoutePoses_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gps_nav_interfaces, srv, GetRoutePoses_Request)() {
  return &::gps_nav_interfaces::srv::rosidl_typesupport_introspection_cpp::GetRoutePoses_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "gps_nav_interfaces/srv/detail/get_route_poses__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace gps_nav_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetRoutePoses_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) gps_nav_interfaces::srv::GetRoutePoses_Response(_init);
}

void GetRoutePoses_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<gps_nav_interfaces::srv::GetRoutePoses_Response *>(message_memory);
  typed_message->~GetRoutePoses_Response();
}

size_t size_function__GetRoutePoses_Response__mypose(const void * untyped_member)
{
  (void)untyped_member;
  return 300;
}

const void * get_const_function__GetRoutePoses_Response__mypose(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<geometry_msgs::msg::Pose, 300> *>(untyped_member);
  return &member[index];
}

void * get_function__GetRoutePoses_Response__mypose(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<geometry_msgs::msg::Pose, 300> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetRoutePoses_Response__mypose(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Pose *>(
    get_const_function__GetRoutePoses_Response__mypose(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Pose *>(untyped_value);
  value = item;
}

void assign_function__GetRoutePoses_Response__mypose(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Pose *>(
    get_function__GetRoutePoses_Response__mypose(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Pose *>(untyped_value);
  item = value;
}

size_t size_function__GetRoutePoses_Response__state(const void * untyped_member)
{
  (void)untyped_member;
  return 300;
}

const void * get_const_function__GetRoutePoses_Response__state(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int16_t, 300> *>(untyped_member);
  return &member[index];
}

void * get_function__GetRoutePoses_Response__state(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int16_t, 300> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetRoutePoses_Response__state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int16_t *>(
    get_const_function__GetRoutePoses_Response__state(untyped_member, index));
  auto & value = *reinterpret_cast<int16_t *>(untyped_value);
  value = item;
}

void assign_function__GetRoutePoses_Response__state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int16_t *>(
    get_function__GetRoutePoses_Response__state(untyped_member, index));
  const auto & value = *reinterpret_cast<const int16_t *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetRoutePoses_Response_message_member_array[7] = {
  {
    "num_route_poses",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_nav_interfaces::srv::GetRoutePoses_Response, num_route_poses),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "mypose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    true,  // is array
    300,  // array size
    false,  // is upper bound
    offsetof(gps_nav_interfaces::srv::GetRoutePoses_Response, mypose),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetRoutePoses_Response__mypose,  // size() function pointer
    get_const_function__GetRoutePoses_Response__mypose,  // get_const(index) function pointer
    get_function__GetRoutePoses_Response__mypose,  // get(index) function pointer
    fetch_function__GetRoutePoses_Response__mypose,  // fetch(index, &value) function pointer
    assign_function__GetRoutePoses_Response__mypose,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "offset_x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_nav_interfaces::srv::GetRoutePoses_Response, offset_x),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "offset_y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_nav_interfaces::srv::GetRoutePoses_Response, offset_y),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    300,  // array size
    false,  // is upper bound
    offsetof(gps_nav_interfaces::srv::GetRoutePoses_Response, state),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetRoutePoses_Response__state,  // size() function pointer
    get_const_function__GetRoutePoses_Response__state,  // get_const(index) function pointer
    get_function__GetRoutePoses_Response__state,  // get(index) function pointer
    fetch_function__GetRoutePoses_Response__state,  // fetch(index, &value) function pointer
    assign_function__GetRoutePoses_Response__state,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "want_loop",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_nav_interfaces::srv::GetRoutePoses_Response, want_loop),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "state_dictionary",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_nav_interfaces::srv::GetRoutePoses_Response, state_dictionary),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetRoutePoses_Response_message_members = {
  "gps_nav_interfaces::srv",  // message namespace
  "GetRoutePoses_Response",  // message name
  7,  // number of fields
  sizeof(gps_nav_interfaces::srv::GetRoutePoses_Response),
  GetRoutePoses_Response_message_member_array,  // message members
  GetRoutePoses_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetRoutePoses_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetRoutePoses_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetRoutePoses_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace gps_nav_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<gps_nav_interfaces::srv::GetRoutePoses_Response>()
{
  return &::gps_nav_interfaces::srv::rosidl_typesupport_introspection_cpp::GetRoutePoses_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gps_nav_interfaces, srv, GetRoutePoses_Response)() {
  return &::gps_nav_interfaces::srv::rosidl_typesupport_introspection_cpp::GetRoutePoses_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "gps_nav_interfaces/srv/detail/get_route_poses__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace gps_nav_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers GetRoutePoses_service_members = {
  "gps_nav_interfaces::srv",  // service namespace
  "GetRoutePoses",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<gps_nav_interfaces::srv::GetRoutePoses>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t GetRoutePoses_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetRoutePoses_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace gps_nav_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<gps_nav_interfaces::srv::GetRoutePoses>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::gps_nav_interfaces::srv::rosidl_typesupport_introspection_cpp::GetRoutePoses_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::gps_nav_interfaces::srv::GetRoutePoses_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::gps_nav_interfaces::srv::GetRoutePoses_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gps_nav_interfaces, srv, GetRoutePoses)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<gps_nav_interfaces::srv::GetRoutePoses>();
}

#ifdef __cplusplus
}
#endif
