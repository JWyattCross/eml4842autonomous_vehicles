// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gps_nav_interfaces:msg/CurrentGoalPose.idl
// generated code does not contain a copyright notice

#ifndef GPS_NAV_INTERFACES__MSG__DETAIL__CURRENT_GOAL_POSE__STRUCT_HPP_
#define GPS_NAV_INTERFACES__MSG__DETAIL__CURRENT_GOAL_POSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'current_goal_pose'
// Member 'closest_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__gps_nav_interfaces__msg__CurrentGoalPose __attribute__((deprecated))
#else
# define DEPRECATED__gps_nav_interfaces__msg__CurrentGoalPose __declspec(deprecated)
#endif

namespace gps_nav_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CurrentGoalPose_
{
  using Type = CurrentGoalPose_<ContainerAllocator>;

  explicit CurrentGoalPose_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_goal_pose(_init),
    closest_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0.0f;
      this->state = 0;
    }
  }

  explicit CurrentGoalPose_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_goal_pose(_alloc, _init),
    closest_pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0.0f;
      this->state = 0;
    }
  }

  // field types and members
  using _current_goal_pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _current_goal_pose_type current_goal_pose;
  using _closest_pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _closest_pose_type closest_pose;
  using _speed_type =
    float;
  _speed_type speed;
  using _state_type =
    int16_t;
  _state_type state;

  // setters for named parameter idiom
  Type & set__current_goal_pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->current_goal_pose = _arg;
    return *this;
  }
  Type & set__closest_pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->closest_pose = _arg;
    return *this;
  }
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__state(
    const int16_t & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gps_nav_interfaces::msg::CurrentGoalPose_<ContainerAllocator> *;
  using ConstRawPtr =
    const gps_nav_interfaces::msg::CurrentGoalPose_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gps_nav_interfaces::msg::CurrentGoalPose_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gps_nav_interfaces::msg::CurrentGoalPose_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gps_nav_interfaces::msg::CurrentGoalPose_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gps_nav_interfaces::msg::CurrentGoalPose_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gps_nav_interfaces::msg::CurrentGoalPose_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gps_nav_interfaces::msg::CurrentGoalPose_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gps_nav_interfaces::msg::CurrentGoalPose_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gps_nav_interfaces::msg::CurrentGoalPose_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gps_nav_interfaces__msg__CurrentGoalPose
    std::shared_ptr<gps_nav_interfaces::msg::CurrentGoalPose_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gps_nav_interfaces__msg__CurrentGoalPose
    std::shared_ptr<gps_nav_interfaces::msg::CurrentGoalPose_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CurrentGoalPose_ & other) const
  {
    if (this->current_goal_pose != other.current_goal_pose) {
      return false;
    }
    if (this->closest_pose != other.closest_pose) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const CurrentGoalPose_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CurrentGoalPose_

// alias to use template instance with default allocator
using CurrentGoalPose =
  gps_nav_interfaces::msg::CurrentGoalPose_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace gps_nav_interfaces

#endif  // GPS_NAV_INTERFACES__MSG__DETAIL__CURRENT_GOAL_POSE__STRUCT_HPP_
