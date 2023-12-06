// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_best3_interfaces:msg/Polar.idl
// generated code does not contain a copyright notice

#ifndef MY_BEST3_INTERFACES__MSG__DETAIL__POLAR__STRUCT_HPP_
#define MY_BEST3_INTERFACES__MSG__DETAIL__POLAR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'point'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_best3_interfaces__msg__Polar __attribute__((deprecated))
#else
# define DEPRECATED__my_best3_interfaces__msg__Polar __declspec(deprecated)
#endif

namespace my_best3_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Polar_
{
  using Type = Polar_<ContainerAllocator>;

  explicit Polar_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->r_meters = 0.0;
      this->theta_rad = 0.0;
    }
  }

  explicit Polar_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->r_meters = 0.0;
      this->theta_rad = 0.0;
    }
  }

  // field types and members
  using _r_meters_type =
    double;
  _r_meters_type r_meters;
  using _theta_rad_type =
    double;
  _theta_rad_type theta_rad;
  using _point_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _point_type point;

  // setters for named parameter idiom
  Type & set__r_meters(
    const double & _arg)
  {
    this->r_meters = _arg;
    return *this;
  }
  Type & set__theta_rad(
    const double & _arg)
  {
    this->theta_rad = _arg;
    return *this;
  }
  Type & set__point(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->point = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_best3_interfaces::msg::Polar_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_best3_interfaces::msg::Polar_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_best3_interfaces::msg::Polar_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_best3_interfaces::msg::Polar_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_best3_interfaces::msg::Polar_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_best3_interfaces::msg::Polar_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_best3_interfaces::msg::Polar_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_best3_interfaces::msg::Polar_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_best3_interfaces::msg::Polar_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_best3_interfaces::msg::Polar_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_best3_interfaces__msg__Polar
    std::shared_ptr<my_best3_interfaces::msg::Polar_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_best3_interfaces__msg__Polar
    std::shared_ptr<my_best3_interfaces::msg::Polar_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Polar_ & other) const
  {
    if (this->r_meters != other.r_meters) {
      return false;
    }
    if (this->theta_rad != other.theta_rad) {
      return false;
    }
    if (this->point != other.point) {
      return false;
    }
    return true;
  }
  bool operator!=(const Polar_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Polar_

// alias to use template instance with default allocator
using Polar =
  my_best3_interfaces::msg::Polar_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_best3_interfaces

#endif  // MY_BEST3_INTERFACES__MSG__DETAIL__POLAR__STRUCT_HPP_
