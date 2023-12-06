// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gps_nav_interfaces:msg/CurrentGoalPose.idl
// generated code does not contain a copyright notice

#ifndef GPS_NAV_INTERFACES__MSG__DETAIL__CURRENT_GOAL_POSE__BUILDER_HPP_
#define GPS_NAV_INTERFACES__MSG__DETAIL__CURRENT_GOAL_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gps_nav_interfaces/msg/detail/current_goal_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gps_nav_interfaces
{

namespace msg
{

namespace builder
{

class Init_CurrentGoalPose_state
{
public:
  explicit Init_CurrentGoalPose_state(::gps_nav_interfaces::msg::CurrentGoalPose & msg)
  : msg_(msg)
  {}
  ::gps_nav_interfaces::msg::CurrentGoalPose state(::gps_nav_interfaces::msg::CurrentGoalPose::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gps_nav_interfaces::msg::CurrentGoalPose msg_;
};

class Init_CurrentGoalPose_speed
{
public:
  explicit Init_CurrentGoalPose_speed(::gps_nav_interfaces::msg::CurrentGoalPose & msg)
  : msg_(msg)
  {}
  Init_CurrentGoalPose_state speed(::gps_nav_interfaces::msg::CurrentGoalPose::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_CurrentGoalPose_state(msg_);
  }

private:
  ::gps_nav_interfaces::msg::CurrentGoalPose msg_;
};

class Init_CurrentGoalPose_closest_pose
{
public:
  explicit Init_CurrentGoalPose_closest_pose(::gps_nav_interfaces::msg::CurrentGoalPose & msg)
  : msg_(msg)
  {}
  Init_CurrentGoalPose_speed closest_pose(::gps_nav_interfaces::msg::CurrentGoalPose::_closest_pose_type arg)
  {
    msg_.closest_pose = std::move(arg);
    return Init_CurrentGoalPose_speed(msg_);
  }

private:
  ::gps_nav_interfaces::msg::CurrentGoalPose msg_;
};

class Init_CurrentGoalPose_current_goal_pose
{
public:
  Init_CurrentGoalPose_current_goal_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CurrentGoalPose_closest_pose current_goal_pose(::gps_nav_interfaces::msg::CurrentGoalPose::_current_goal_pose_type arg)
  {
    msg_.current_goal_pose = std::move(arg);
    return Init_CurrentGoalPose_closest_pose(msg_);
  }

private:
  ::gps_nav_interfaces::msg::CurrentGoalPose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gps_nav_interfaces::msg::CurrentGoalPose>()
{
  return gps_nav_interfaces::msg::builder::Init_CurrentGoalPose_current_goal_pose();
}

}  // namespace gps_nav_interfaces

#endif  // GPS_NAV_INTERFACES__MSG__DETAIL__CURRENT_GOAL_POSE__BUILDER_HPP_
