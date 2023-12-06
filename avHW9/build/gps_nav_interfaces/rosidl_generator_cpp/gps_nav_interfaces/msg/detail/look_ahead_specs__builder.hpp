// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gps_nav_interfaces:msg/LookAheadSpecs.idl
// generated code does not contain a copyright notice

#ifndef GPS_NAV_INTERFACES__MSG__DETAIL__LOOK_AHEAD_SPECS__BUILDER_HPP_
#define GPS_NAV_INTERFACES__MSG__DETAIL__LOOK_AHEAD_SPECS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gps_nav_interfaces/msg/detail/look_ahead_specs__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gps_nav_interfaces
{

namespace msg
{

namespace builder
{

class Init_LookAheadSpecs_speed
{
public:
  explicit Init_LookAheadSpecs_speed(::gps_nav_interfaces::msg::LookAheadSpecs & msg)
  : msg_(msg)
  {}
  ::gps_nav_interfaces::msg::LookAheadSpecs speed(::gps_nav_interfaces::msg::LookAheadSpecs::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gps_nav_interfaces::msg::LookAheadSpecs msg_;
};

class Init_LookAheadSpecs_look_ahead_dist
{
public:
  Init_LookAheadSpecs_look_ahead_dist()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LookAheadSpecs_speed look_ahead_dist(::gps_nav_interfaces::msg::LookAheadSpecs::_look_ahead_dist_type arg)
  {
    msg_.look_ahead_dist = std::move(arg);
    return Init_LookAheadSpecs_speed(msg_);
  }

private:
  ::gps_nav_interfaces::msg::LookAheadSpecs msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gps_nav_interfaces::msg::LookAheadSpecs>()
{
  return gps_nav_interfaces::msg::builder::Init_LookAheadSpecs_look_ahead_dist();
}

}  // namespace gps_nav_interfaces

#endif  // GPS_NAV_INTERFACES__MSG__DETAIL__LOOK_AHEAD_SPECS__BUILDER_HPP_
