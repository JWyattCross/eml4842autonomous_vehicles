// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gps_nav_interfaces:msg/LookAheadSpecs.idl
// generated code does not contain a copyright notice

#ifndef GPS_NAV_INTERFACES__MSG__DETAIL__LOOK_AHEAD_SPECS__STRUCT_HPP_
#define GPS_NAV_INTERFACES__MSG__DETAIL__LOOK_AHEAD_SPECS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__gps_nav_interfaces__msg__LookAheadSpecs __attribute__((deprecated))
#else
# define DEPRECATED__gps_nav_interfaces__msg__LookAheadSpecs __declspec(deprecated)
#endif

namespace gps_nav_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LookAheadSpecs_
{
  using Type = LookAheadSpecs_<ContainerAllocator>;

  explicit LookAheadSpecs_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->look_ahead_dist = 0.0f;
      this->speed = 0.0f;
    }
  }

  explicit LookAheadSpecs_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->look_ahead_dist = 0.0f;
      this->speed = 0.0f;
    }
  }

  // field types and members
  using _look_ahead_dist_type =
    float;
  _look_ahead_dist_type look_ahead_dist;
  using _speed_type =
    float;
  _speed_type speed;

  // setters for named parameter idiom
  Type & set__look_ahead_dist(
    const float & _arg)
  {
    this->look_ahead_dist = _arg;
    return *this;
  }
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gps_nav_interfaces::msg::LookAheadSpecs_<ContainerAllocator> *;
  using ConstRawPtr =
    const gps_nav_interfaces::msg::LookAheadSpecs_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gps_nav_interfaces::msg::LookAheadSpecs_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gps_nav_interfaces::msg::LookAheadSpecs_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gps_nav_interfaces::msg::LookAheadSpecs_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gps_nav_interfaces::msg::LookAheadSpecs_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gps_nav_interfaces::msg::LookAheadSpecs_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gps_nav_interfaces::msg::LookAheadSpecs_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gps_nav_interfaces::msg::LookAheadSpecs_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gps_nav_interfaces::msg::LookAheadSpecs_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gps_nav_interfaces__msg__LookAheadSpecs
    std::shared_ptr<gps_nav_interfaces::msg::LookAheadSpecs_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gps_nav_interfaces__msg__LookAheadSpecs
    std::shared_ptr<gps_nav_interfaces::msg::LookAheadSpecs_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LookAheadSpecs_ & other) const
  {
    if (this->look_ahead_dist != other.look_ahead_dist) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const LookAheadSpecs_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LookAheadSpecs_

// alias to use template instance with default allocator
using LookAheadSpecs =
  gps_nav_interfaces::msg::LookAheadSpecs_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace gps_nav_interfaces

#endif  // GPS_NAV_INTERFACES__MSG__DETAIL__LOOK_AHEAD_SPECS__STRUCT_HPP_
