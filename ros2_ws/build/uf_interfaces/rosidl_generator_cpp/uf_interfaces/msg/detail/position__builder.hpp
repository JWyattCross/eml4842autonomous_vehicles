// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from uf_interfaces:msg/Position.idl
// generated code does not contain a copyright notice

#ifndef UF_INTERFACES__MSG__DETAIL__POSITION__BUILDER_HPP_
#define UF_INTERFACES__MSG__DETAIL__POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "uf_interfaces/msg/detail/position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace uf_interfaces
{

namespace msg
{

namespace builder
{

class Init_Position_yaw
{
public:
  explicit Init_Position_yaw(::uf_interfaces::msg::Position & msg)
  : msg_(msg)
  {}
  ::uf_interfaces::msg::Position yaw(::uf_interfaces::msg::Position::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uf_interfaces::msg::Position msg_;
};

class Init_Position_z
{
public:
  explicit Init_Position_z(::uf_interfaces::msg::Position & msg)
  : msg_(msg)
  {}
  Init_Position_yaw z(::uf_interfaces::msg::Position::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_Position_yaw(msg_);
  }

private:
  ::uf_interfaces::msg::Position msg_;
};

class Init_Position_y
{
public:
  explicit Init_Position_y(::uf_interfaces::msg::Position & msg)
  : msg_(msg)
  {}
  Init_Position_z y(::uf_interfaces::msg::Position::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Position_z(msg_);
  }

private:
  ::uf_interfaces::msg::Position msg_;
};

class Init_Position_x
{
public:
  explicit Init_Position_x(::uf_interfaces::msg::Position & msg)
  : msg_(msg)
  {}
  Init_Position_y x(::uf_interfaces::msg::Position::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Position_y(msg_);
  }

private:
  ::uf_interfaces::msg::Position msg_;
};

class Init_Position_name
{
public:
  explicit Init_Position_name(::uf_interfaces::msg::Position & msg)
  : msg_(msg)
  {}
  Init_Position_x name(::uf_interfaces::msg::Position::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Position_x(msg_);
  }

private:
  ::uf_interfaces::msg::Position msg_;
};

class Init_Position_header
{
public:
  Init_Position_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Position_name header(::uf_interfaces::msg::Position::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Position_name(msg_);
  }

private:
  ::uf_interfaces::msg::Position msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::uf_interfaces::msg::Position>()
{
  return uf_interfaces::msg::builder::Init_Position_header();
}

}  // namespace uf_interfaces

#endif  // UF_INTERFACES__MSG__DETAIL__POSITION__BUILDER_HPP_
