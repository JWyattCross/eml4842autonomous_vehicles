// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gps_nav_interfaces:srv/GetRoutePoses.idl
// generated code does not contain a copyright notice

#ifndef GPS_NAV_INTERFACES__SRV__DETAIL__GET_ROUTE_POSES__STRUCT_HPP_
#define GPS_NAV_INTERFACES__SRV__DETAIL__GET_ROUTE_POSES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__gps_nav_interfaces__srv__GetRoutePoses_Request __attribute__((deprecated))
#else
# define DEPRECATED__gps_nav_interfaces__srv__GetRoutePoses_Request __declspec(deprecated)
#endif

namespace gps_nav_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetRoutePoses_Request_
{
  using Type = GetRoutePoses_Request_<ContainerAllocator>;

  explicit GetRoutePoses_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetRoutePoses_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    gps_nav_interfaces::srv::GetRoutePoses_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const gps_nav_interfaces::srv::GetRoutePoses_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gps_nav_interfaces::srv::GetRoutePoses_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gps_nav_interfaces::srv::GetRoutePoses_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gps_nav_interfaces::srv::GetRoutePoses_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gps_nav_interfaces::srv::GetRoutePoses_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gps_nav_interfaces::srv::GetRoutePoses_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gps_nav_interfaces::srv::GetRoutePoses_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gps_nav_interfaces::srv::GetRoutePoses_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gps_nav_interfaces::srv::GetRoutePoses_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gps_nav_interfaces__srv__GetRoutePoses_Request
    std::shared_ptr<gps_nav_interfaces::srv::GetRoutePoses_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gps_nav_interfaces__srv__GetRoutePoses_Request
    std::shared_ptr<gps_nav_interfaces::srv::GetRoutePoses_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetRoutePoses_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetRoutePoses_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetRoutePoses_Request_

// alias to use template instance with default allocator
using GetRoutePoses_Request =
  gps_nav_interfaces::srv::GetRoutePoses_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gps_nav_interfaces


// Include directives for member types
// Member 'mypose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__gps_nav_interfaces__srv__GetRoutePoses_Response __attribute__((deprecated))
#else
# define DEPRECATED__gps_nav_interfaces__srv__GetRoutePoses_Response __declspec(deprecated)
#endif

namespace gps_nav_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetRoutePoses_Response_
{
  using Type = GetRoutePoses_Response_<ContainerAllocator>;

  explicit GetRoutePoses_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_route_poses = 0;
      this->mypose.fill(geometry_msgs::msg::Pose_<ContainerAllocator>{_init});
      this->offset_x = 0.0;
      this->offset_y = 0.0;
      std::fill<typename std::array<int16_t, 300>::iterator, int16_t>(this->state.begin(), this->state.end(), 0);
      this->want_loop = false;
      this->state_dictionary = "";
    }
  }

  explicit GetRoutePoses_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mypose(_alloc),
    state(_alloc),
    state_dictionary(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_route_poses = 0;
      this->mypose.fill(geometry_msgs::msg::Pose_<ContainerAllocator>{_alloc, _init});
      this->offset_x = 0.0;
      this->offset_y = 0.0;
      std::fill<typename std::array<int16_t, 300>::iterator, int16_t>(this->state.begin(), this->state.end(), 0);
      this->want_loop = false;
      this->state_dictionary = "";
    }
  }

  // field types and members
  using _num_route_poses_type =
    int16_t;
  _num_route_poses_type num_route_poses;
  using _mypose_type =
    std::array<geometry_msgs::msg::Pose_<ContainerAllocator>, 300>;
  _mypose_type mypose;
  using _offset_x_type =
    double;
  _offset_x_type offset_x;
  using _offset_y_type =
    double;
  _offset_y_type offset_y;
  using _state_type =
    std::array<int16_t, 300>;
  _state_type state;
  using _want_loop_type =
    bool;
  _want_loop_type want_loop;
  using _state_dictionary_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _state_dictionary_type state_dictionary;

  // setters for named parameter idiom
  Type & set__num_route_poses(
    const int16_t & _arg)
  {
    this->num_route_poses = _arg;
    return *this;
  }
  Type & set__mypose(
    const std::array<geometry_msgs::msg::Pose_<ContainerAllocator>, 300> & _arg)
  {
    this->mypose = _arg;
    return *this;
  }
  Type & set__offset_x(
    const double & _arg)
  {
    this->offset_x = _arg;
    return *this;
  }
  Type & set__offset_y(
    const double & _arg)
  {
    this->offset_y = _arg;
    return *this;
  }
  Type & set__state(
    const std::array<int16_t, 300> & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__want_loop(
    const bool & _arg)
  {
    this->want_loop = _arg;
    return *this;
  }
  Type & set__state_dictionary(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->state_dictionary = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gps_nav_interfaces::srv::GetRoutePoses_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const gps_nav_interfaces::srv::GetRoutePoses_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gps_nav_interfaces::srv::GetRoutePoses_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gps_nav_interfaces::srv::GetRoutePoses_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gps_nav_interfaces::srv::GetRoutePoses_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gps_nav_interfaces::srv::GetRoutePoses_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gps_nav_interfaces::srv::GetRoutePoses_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gps_nav_interfaces::srv::GetRoutePoses_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gps_nav_interfaces::srv::GetRoutePoses_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gps_nav_interfaces::srv::GetRoutePoses_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gps_nav_interfaces__srv__GetRoutePoses_Response
    std::shared_ptr<gps_nav_interfaces::srv::GetRoutePoses_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gps_nav_interfaces__srv__GetRoutePoses_Response
    std::shared_ptr<gps_nav_interfaces::srv::GetRoutePoses_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetRoutePoses_Response_ & other) const
  {
    if (this->num_route_poses != other.num_route_poses) {
      return false;
    }
    if (this->mypose != other.mypose) {
      return false;
    }
    if (this->offset_x != other.offset_x) {
      return false;
    }
    if (this->offset_y != other.offset_y) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->want_loop != other.want_loop) {
      return false;
    }
    if (this->state_dictionary != other.state_dictionary) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetRoutePoses_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetRoutePoses_Response_

// alias to use template instance with default allocator
using GetRoutePoses_Response =
  gps_nav_interfaces::srv::GetRoutePoses_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gps_nav_interfaces

namespace gps_nav_interfaces
{

namespace srv
{

struct GetRoutePoses
{
  using Request = gps_nav_interfaces::srv::GetRoutePoses_Request;
  using Response = gps_nav_interfaces::srv::GetRoutePoses_Response;
};

}  // namespace srv

}  // namespace gps_nav_interfaces

#endif  // GPS_NAV_INTERFACES__SRV__DETAIL__GET_ROUTE_POSES__STRUCT_HPP_
