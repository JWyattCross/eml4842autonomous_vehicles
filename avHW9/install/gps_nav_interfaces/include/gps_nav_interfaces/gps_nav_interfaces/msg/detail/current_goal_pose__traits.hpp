// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gps_nav_interfaces:msg/CurrentGoalPose.idl
// generated code does not contain a copyright notice

#ifndef GPS_NAV_INTERFACES__MSG__DETAIL__CURRENT_GOAL_POSE__TRAITS_HPP_
#define GPS_NAV_INTERFACES__MSG__DETAIL__CURRENT_GOAL_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gps_nav_interfaces/msg/detail/current_goal_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'current_goal_pose'
// Member 'closest_pose'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"

namespace gps_nav_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const CurrentGoalPose & msg,
  std::ostream & out)
{
  out << "{";
  // member: current_goal_pose
  {
    out << "current_goal_pose: ";
    to_flow_style_yaml(msg.current_goal_pose, out);
    out << ", ";
  }

  // member: closest_pose
  {
    out << "closest_pose: ";
    to_flow_style_yaml(msg.closest_pose, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CurrentGoalPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_goal_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_goal_pose:\n";
    to_block_style_yaml(msg.current_goal_pose, out, indentation + 2);
  }

  // member: closest_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "closest_pose:\n";
    to_block_style_yaml(msg.closest_pose, out, indentation + 2);
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

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CurrentGoalPose & msg, bool use_flow_style = false)
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
  const gps_nav_interfaces::msg::CurrentGoalPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  gps_nav_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gps_nav_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const gps_nav_interfaces::msg::CurrentGoalPose & msg)
{
  return gps_nav_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<gps_nav_interfaces::msg::CurrentGoalPose>()
{
  return "gps_nav_interfaces::msg::CurrentGoalPose";
}

template<>
inline const char * name<gps_nav_interfaces::msg::CurrentGoalPose>()
{
  return "gps_nav_interfaces/msg/CurrentGoalPose";
}

template<>
struct has_fixed_size<gps_nav_interfaces::msg::CurrentGoalPose>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct has_bounded_size<gps_nav_interfaces::msg::CurrentGoalPose>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct is_message<gps_nav_interfaces::msg::CurrentGoalPose>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GPS_NAV_INTERFACES__MSG__DETAIL__CURRENT_GOAL_POSE__TRAITS_HPP_
