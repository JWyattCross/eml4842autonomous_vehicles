// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gps_nav_interfaces:msg/LookAheadSpecs.idl
// generated code does not contain a copyright notice

#ifndef GPS_NAV_INTERFACES__MSG__DETAIL__LOOK_AHEAD_SPECS__TRAITS_HPP_
#define GPS_NAV_INTERFACES__MSG__DETAIL__LOOK_AHEAD_SPECS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gps_nav_interfaces/msg/detail/look_ahead_specs__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace gps_nav_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const LookAheadSpecs & msg,
  std::ostream & out)
{
  out << "{";
  // member: look_ahead_dist
  {
    out << "look_ahead_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.look_ahead_dist, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LookAheadSpecs & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: look_ahead_dist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "look_ahead_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.look_ahead_dist, out);
    out << "\n";
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LookAheadSpecs & msg, bool use_flow_style = false)
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

}  // namespace gps_nav_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use gps_nav_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const gps_nav_interfaces::msg::LookAheadSpecs & msg,
  std::ostream & out, size_t indentation = 0)
{
  gps_nav_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gps_nav_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const gps_nav_interfaces::msg::LookAheadSpecs & msg)
{
  return gps_nav_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<gps_nav_interfaces::msg::LookAheadSpecs>()
{
  return "gps_nav_interfaces::msg::LookAheadSpecs";
}

template<>
inline const char * name<gps_nav_interfaces::msg::LookAheadSpecs>()
{
  return "gps_nav_interfaces/msg/LookAheadSpecs";
}

template<>
struct has_fixed_size<gps_nav_interfaces::msg::LookAheadSpecs>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<gps_nav_interfaces::msg::LookAheadSpecs>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<gps_nav_interfaces::msg::LookAheadSpecs>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GPS_NAV_INTERFACES__MSG__DETAIL__LOOK_AHEAD_SPECS__TRAITS_HPP_
