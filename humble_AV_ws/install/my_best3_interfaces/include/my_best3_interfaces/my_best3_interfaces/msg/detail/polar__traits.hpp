// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_best3_interfaces:msg/Polar.idl
// generated code does not contain a copyright notice

#ifndef MY_BEST3_INTERFACES__MSG__DETAIL__POLAR__TRAITS_HPP_
#define MY_BEST3_INTERFACES__MSG__DETAIL__POLAR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_best3_interfaces/msg/detail/polar__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'point'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace my_best3_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Polar & msg,
  std::ostream & out)
{
  out << "{";
  // member: r_meters
  {
    out << "r_meters: ";
    rosidl_generator_traits::value_to_yaml(msg.r_meters, out);
    out << ", ";
  }

  // member: theta_rad
  {
    out << "theta_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_rad, out);
    out << ", ";
  }

  // member: point
  {
    out << "point: ";
    to_flow_style_yaml(msg.point, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Polar & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: r_meters
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "r_meters: ";
    rosidl_generator_traits::value_to_yaml(msg.r_meters, out);
    out << "\n";
  }

  // member: theta_rad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_rad, out);
    out << "\n";
  }

  // member: point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "point:\n";
    to_block_style_yaml(msg.point, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Polar & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace my_best3_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_best3_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_best3_interfaces::msg::Polar & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_best3_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_best3_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_best3_interfaces::msg::Polar & msg)
{
  return my_best3_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_best3_interfaces::msg::Polar>()
{
  return "my_best3_interfaces::msg::Polar";
}

template<>
inline const char * name<my_best3_interfaces::msg::Polar>()
{
  return "my_best3_interfaces/msg/Polar";
}

template<>
struct has_fixed_size<my_best3_interfaces::msg::Polar>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<my_best3_interfaces::msg::Polar>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<my_best3_interfaces::msg::Polar>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_BEST3_INTERFACES__MSG__DETAIL__POLAR__TRAITS_HPP_
