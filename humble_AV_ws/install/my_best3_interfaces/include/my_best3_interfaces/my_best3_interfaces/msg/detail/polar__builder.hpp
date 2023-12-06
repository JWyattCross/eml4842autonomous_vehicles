// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_best3_interfaces:msg/Polar.idl
// generated code does not contain a copyright notice

#ifndef MY_BEST3_INTERFACES__MSG__DETAIL__POLAR__BUILDER_HPP_
#define MY_BEST3_INTERFACES__MSG__DETAIL__POLAR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_best3_interfaces/msg/detail/polar__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_best3_interfaces
{

namespace msg
{

namespace builder
{

class Init_Polar_point
{
public:
  explicit Init_Polar_point(::my_best3_interfaces::msg::Polar & msg)
  : msg_(msg)
  {}
  ::my_best3_interfaces::msg::Polar point(::my_best3_interfaces::msg::Polar::_point_type arg)
  {
    msg_.point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_best3_interfaces::msg::Polar msg_;
};

class Init_Polar_theta_rad
{
public:
  explicit Init_Polar_theta_rad(::my_best3_interfaces::msg::Polar & msg)
  : msg_(msg)
  {}
  Init_Polar_point theta_rad(::my_best3_interfaces::msg::Polar::_theta_rad_type arg)
  {
    msg_.theta_rad = std::move(arg);
    return Init_Polar_point(msg_);
  }

private:
  ::my_best3_interfaces::msg::Polar msg_;
};

class Init_Polar_r_meters
{
public:
  Init_Polar_r_meters()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Polar_theta_rad r_meters(::my_best3_interfaces::msg::Polar::_r_meters_type arg)
  {
    msg_.r_meters = std::move(arg);
    return Init_Polar_theta_rad(msg_);
  }

private:
  ::my_best3_interfaces::msg::Polar msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_best3_interfaces::msg::Polar>()
{
  return my_best3_interfaces::msg::builder::Init_Polar_r_meters();
}

}  // namespace my_best3_interfaces

#endif  // MY_BEST3_INTERFACES__MSG__DETAIL__POLAR__BUILDER_HPP_
