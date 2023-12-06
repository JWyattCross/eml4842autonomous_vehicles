// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uf_interfaces:srv/TaskAssign.idl
// generated code does not contain a copyright notice

#ifndef UF_INTERFACES__SRV__DETAIL__TASK_ASSIGN__TRAITS_HPP_
#define UF_INTERFACES__SRV__DETAIL__TASK_ASSIGN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "uf_interfaces/srv/detail/task_assign__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace uf_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const TaskAssign_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: target
  {
    out << "target: ";
    rosidl_generator_traits::value_to_yaml(msg.target, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TaskAssign_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target: ";
    rosidl_generator_traits::value_to_yaml(msg.target, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TaskAssign_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace uf_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use uf_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const uf_interfaces::srv::TaskAssign_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  uf_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uf_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const uf_interfaces::srv::TaskAssign_Request & msg)
{
  return uf_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<uf_interfaces::srv::TaskAssign_Request>()
{
  return "uf_interfaces::srv::TaskAssign_Request";
}

template<>
inline const char * name<uf_interfaces::srv::TaskAssign_Request>()
{
  return "uf_interfaces/srv/TaskAssign_Request";
}

template<>
struct has_fixed_size<uf_interfaces::srv::TaskAssign_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<uf_interfaces::srv::TaskAssign_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<uf_interfaces::srv::TaskAssign_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace uf_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const TaskAssign_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TaskAssign_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TaskAssign_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace uf_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use uf_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const uf_interfaces::srv::TaskAssign_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  uf_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uf_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const uf_interfaces::srv::TaskAssign_Response & msg)
{
  return uf_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<uf_interfaces::srv::TaskAssign_Response>()
{
  return "uf_interfaces::srv::TaskAssign_Response";
}

template<>
inline const char * name<uf_interfaces::srv::TaskAssign_Response>()
{
  return "uf_interfaces/srv/TaskAssign_Response";
}

template<>
struct has_fixed_size<uf_interfaces::srv::TaskAssign_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<uf_interfaces::srv::TaskAssign_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<uf_interfaces::srv::TaskAssign_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uf_interfaces::srv::TaskAssign>()
{
  return "uf_interfaces::srv::TaskAssign";
}

template<>
inline const char * name<uf_interfaces::srv::TaskAssign>()
{
  return "uf_interfaces/srv/TaskAssign";
}

template<>
struct has_fixed_size<uf_interfaces::srv::TaskAssign>
  : std::integral_constant<
    bool,
    has_fixed_size<uf_interfaces::srv::TaskAssign_Request>::value &&
    has_fixed_size<uf_interfaces::srv::TaskAssign_Response>::value
  >
{
};

template<>
struct has_bounded_size<uf_interfaces::srv::TaskAssign>
  : std::integral_constant<
    bool,
    has_bounded_size<uf_interfaces::srv::TaskAssign_Request>::value &&
    has_bounded_size<uf_interfaces::srv::TaskAssign_Response>::value
  >
{
};

template<>
struct is_service<uf_interfaces::srv::TaskAssign>
  : std::true_type
{
};

template<>
struct is_service_request<uf_interfaces::srv::TaskAssign_Request>
  : std::true_type
{
};

template<>
struct is_service_response<uf_interfaces::srv::TaskAssign_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UF_INTERFACES__SRV__DETAIL__TASK_ASSIGN__TRAITS_HPP_
