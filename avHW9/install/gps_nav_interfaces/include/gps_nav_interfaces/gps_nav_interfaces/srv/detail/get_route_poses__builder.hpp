// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gps_nav_interfaces:srv/GetRoutePoses.idl
// generated code does not contain a copyright notice

#ifndef GPS_NAV_INTERFACES__SRV__DETAIL__GET_ROUTE_POSES__BUILDER_HPP_
#define GPS_NAV_INTERFACES__SRV__DETAIL__GET_ROUTE_POSES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gps_nav_interfaces/srv/detail/get_route_poses__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gps_nav_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gps_nav_interfaces::srv::GetRoutePoses_Request>()
{
  return ::gps_nav_interfaces::srv::GetRoutePoses_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace gps_nav_interfaces


namespace gps_nav_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetRoutePoses_Response_state_dictionary
{
public:
  explicit Init_GetRoutePoses_Response_state_dictionary(::gps_nav_interfaces::srv::GetRoutePoses_Response & msg)
  : msg_(msg)
  {}
  ::gps_nav_interfaces::srv::GetRoutePoses_Response state_dictionary(::gps_nav_interfaces::srv::GetRoutePoses_Response::_state_dictionary_type arg)
  {
    msg_.state_dictionary = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gps_nav_interfaces::srv::GetRoutePoses_Response msg_;
};

class Init_GetRoutePoses_Response_want_loop
{
public:
  explicit Init_GetRoutePoses_Response_want_loop(::gps_nav_interfaces::srv::GetRoutePoses_Response & msg)
  : msg_(msg)
  {}
  Init_GetRoutePoses_Response_state_dictionary want_loop(::gps_nav_interfaces::srv::GetRoutePoses_Response::_want_loop_type arg)
  {
    msg_.want_loop = std::move(arg);
    return Init_GetRoutePoses_Response_state_dictionary(msg_);
  }

private:
  ::gps_nav_interfaces::srv::GetRoutePoses_Response msg_;
};

class Init_GetRoutePoses_Response_state
{
public:
  explicit Init_GetRoutePoses_Response_state(::gps_nav_interfaces::srv::GetRoutePoses_Response & msg)
  : msg_(msg)
  {}
  Init_GetRoutePoses_Response_want_loop state(::gps_nav_interfaces::srv::GetRoutePoses_Response::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_GetRoutePoses_Response_want_loop(msg_);
  }

private:
  ::gps_nav_interfaces::srv::GetRoutePoses_Response msg_;
};

class Init_GetRoutePoses_Response_offset_y
{
public:
  explicit Init_GetRoutePoses_Response_offset_y(::gps_nav_interfaces::srv::GetRoutePoses_Response & msg)
  : msg_(msg)
  {}
  Init_GetRoutePoses_Response_state offset_y(::gps_nav_interfaces::srv::GetRoutePoses_Response::_offset_y_type arg)
  {
    msg_.offset_y = std::move(arg);
    return Init_GetRoutePoses_Response_state(msg_);
  }

private:
  ::gps_nav_interfaces::srv::GetRoutePoses_Response msg_;
};

class Init_GetRoutePoses_Response_offset_x
{
public:
  explicit Init_GetRoutePoses_Response_offset_x(::gps_nav_interfaces::srv::GetRoutePoses_Response & msg)
  : msg_(msg)
  {}
  Init_GetRoutePoses_Response_offset_y offset_x(::gps_nav_interfaces::srv::GetRoutePoses_Response::_offset_x_type arg)
  {
    msg_.offset_x = std::move(arg);
    return Init_GetRoutePoses_Response_offset_y(msg_);
  }

private:
  ::gps_nav_interfaces::srv::GetRoutePoses_Response msg_;
};

class Init_GetRoutePoses_Response_mypose
{
public:
  explicit Init_GetRoutePoses_Response_mypose(::gps_nav_interfaces::srv::GetRoutePoses_Response & msg)
  : msg_(msg)
  {}
  Init_GetRoutePoses_Response_offset_x mypose(::gps_nav_interfaces::srv::GetRoutePoses_Response::_mypose_type arg)
  {
    msg_.mypose = std::move(arg);
    return Init_GetRoutePoses_Response_offset_x(msg_);
  }

private:
  ::gps_nav_interfaces::srv::GetRoutePoses_Response msg_;
};

class Init_GetRoutePoses_Response_num_route_poses
{
public:
  Init_GetRoutePoses_Response_num_route_poses()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetRoutePoses_Response_mypose num_route_poses(::gps_nav_interfaces::srv::GetRoutePoses_Response::_num_route_poses_type arg)
  {
    msg_.num_route_poses = std::move(arg);
    return Init_GetRoutePoses_Response_mypose(msg_);
  }

private:
  ::gps_nav_interfaces::srv::GetRoutePoses_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gps_nav_interfaces::srv::GetRoutePoses_Response>()
{
  return gps_nav_interfaces::srv::builder::Init_GetRoutePoses_Response_num_route_poses();
}

}  // namespace gps_nav_interfaces

#endif  // GPS_NAV_INTERFACES__SRV__DETAIL__GET_ROUTE_POSES__BUILDER_HPP_
