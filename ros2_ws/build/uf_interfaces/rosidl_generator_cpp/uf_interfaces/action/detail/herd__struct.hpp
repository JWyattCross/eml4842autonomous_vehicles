// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from uf_interfaces:action/Herd.idl
// generated code does not contain a copyright notice

#ifndef UF_INTERFACES__ACTION__DETAIL__HERD__STRUCT_HPP_
#define UF_INTERFACES__ACTION__DETAIL__HERD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__uf_interfaces__action__Herd_Goal __attribute__((deprecated))
#else
# define DEPRECATED__uf_interfaces__action__Herd_Goal __declspec(deprecated)
#endif

namespace uf_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Herd_Goal_
{
  using Type = Herd_Goal_<ContainerAllocator>;

  explicit Herd_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target = "";
    }
  }

  explicit Herd_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target = "";
    }
  }

  // field types and members
  using _target_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _target_type target;

  // setters for named parameter idiom
  Type & set__target(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->target = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uf_interfaces::action::Herd_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const uf_interfaces::action::Herd_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uf_interfaces::action::Herd_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uf_interfaces::action::Herd_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uf_interfaces::action::Herd_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uf_interfaces::action::Herd_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uf_interfaces::action::Herd_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uf_interfaces::action::Herd_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uf_interfaces::action::Herd_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uf_interfaces::action::Herd_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uf_interfaces__action__Herd_Goal
    std::shared_ptr<uf_interfaces::action::Herd_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uf_interfaces__action__Herd_Goal
    std::shared_ptr<uf_interfaces::action::Herd_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Herd_Goal_ & other) const
  {
    if (this->target != other.target) {
      return false;
    }
    return true;
  }
  bool operator!=(const Herd_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Herd_Goal_

// alias to use template instance with default allocator
using Herd_Goal =
  uf_interfaces::action::Herd_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace uf_interfaces


#ifndef _WIN32
# define DEPRECATED__uf_interfaces__action__Herd_Result __attribute__((deprecated))
#else
# define DEPRECATED__uf_interfaces__action__Herd_Result __declspec(deprecated)
#endif

namespace uf_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Herd_Result_
{
  using Type = Herd_Result_<ContainerAllocator>;

  explicit Herd_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = "";
    }
  }

  explicit Herd_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : success(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = "";
    }
  }

  // field types and members
  using _success_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uf_interfaces::action::Herd_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const uf_interfaces::action::Herd_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uf_interfaces::action::Herd_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uf_interfaces::action::Herd_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uf_interfaces::action::Herd_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uf_interfaces::action::Herd_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uf_interfaces::action::Herd_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uf_interfaces::action::Herd_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uf_interfaces::action::Herd_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uf_interfaces::action::Herd_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uf_interfaces__action__Herd_Result
    std::shared_ptr<uf_interfaces::action::Herd_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uf_interfaces__action__Herd_Result
    std::shared_ptr<uf_interfaces::action::Herd_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Herd_Result_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const Herd_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Herd_Result_

// alias to use template instance with default allocator
using Herd_Result =
  uf_interfaces::action::Herd_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace uf_interfaces


#ifndef _WIN32
# define DEPRECATED__uf_interfaces__action__Herd_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__uf_interfaces__action__Herd_Feedback __declspec(deprecated)
#endif

namespace uf_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Herd_Feedback_
{
  using Type = Herd_Feedback_<ContainerAllocator>;

  explicit Herd_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance = 0.0;
    }
  }

  explicit Herd_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance = 0.0;
    }
  }

  // field types and members
  using _distance_type =
    double;
  _distance_type distance;

  // setters for named parameter idiom
  Type & set__distance(
    const double & _arg)
  {
    this->distance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uf_interfaces::action::Herd_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const uf_interfaces::action::Herd_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uf_interfaces::action::Herd_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uf_interfaces::action::Herd_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uf_interfaces::action::Herd_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uf_interfaces::action::Herd_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uf_interfaces::action::Herd_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uf_interfaces::action::Herd_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uf_interfaces::action::Herd_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uf_interfaces::action::Herd_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uf_interfaces__action__Herd_Feedback
    std::shared_ptr<uf_interfaces::action::Herd_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uf_interfaces__action__Herd_Feedback
    std::shared_ptr<uf_interfaces::action::Herd_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Herd_Feedback_ & other) const
  {
    if (this->distance != other.distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const Herd_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Herd_Feedback_

// alias to use template instance with default allocator
using Herd_Feedback =
  uf_interfaces::action::Herd_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace uf_interfaces


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "uf_interfaces/action/detail/herd__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__uf_interfaces__action__Herd_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__uf_interfaces__action__Herd_SendGoal_Request __declspec(deprecated)
#endif

namespace uf_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Herd_SendGoal_Request_
{
  using Type = Herd_SendGoal_Request_<ContainerAllocator>;

  explicit Herd_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit Herd_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    uf_interfaces::action::Herd_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const uf_interfaces::action::Herd_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uf_interfaces::action::Herd_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const uf_interfaces::action::Herd_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uf_interfaces::action::Herd_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uf_interfaces::action::Herd_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uf_interfaces::action::Herd_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uf_interfaces::action::Herd_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uf_interfaces::action::Herd_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uf_interfaces::action::Herd_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uf_interfaces::action::Herd_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uf_interfaces::action::Herd_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uf_interfaces__action__Herd_SendGoal_Request
    std::shared_ptr<uf_interfaces::action::Herd_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uf_interfaces__action__Herd_SendGoal_Request
    std::shared_ptr<uf_interfaces::action::Herd_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Herd_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const Herd_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Herd_SendGoal_Request_

// alias to use template instance with default allocator
using Herd_SendGoal_Request =
  uf_interfaces::action::Herd_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace uf_interfaces


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__uf_interfaces__action__Herd_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__uf_interfaces__action__Herd_SendGoal_Response __declspec(deprecated)
#endif

namespace uf_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Herd_SendGoal_Response_
{
  using Type = Herd_SendGoal_Response_<ContainerAllocator>;

  explicit Herd_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit Herd_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uf_interfaces::action::Herd_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const uf_interfaces::action::Herd_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uf_interfaces::action::Herd_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uf_interfaces::action::Herd_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uf_interfaces::action::Herd_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uf_interfaces::action::Herd_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uf_interfaces::action::Herd_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uf_interfaces::action::Herd_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uf_interfaces::action::Herd_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uf_interfaces::action::Herd_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uf_interfaces__action__Herd_SendGoal_Response
    std::shared_ptr<uf_interfaces::action::Herd_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uf_interfaces__action__Herd_SendGoal_Response
    std::shared_ptr<uf_interfaces::action::Herd_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Herd_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const Herd_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Herd_SendGoal_Response_

// alias to use template instance with default allocator
using Herd_SendGoal_Response =
  uf_interfaces::action::Herd_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace uf_interfaces

namespace uf_interfaces
{

namespace action
{

struct Herd_SendGoal
{
  using Request = uf_interfaces::action::Herd_SendGoal_Request;
  using Response = uf_interfaces::action::Herd_SendGoal_Response;
};

}  // namespace action

}  // namespace uf_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__uf_interfaces__action__Herd_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__uf_interfaces__action__Herd_GetResult_Request __declspec(deprecated)
#endif

namespace uf_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Herd_GetResult_Request_
{
  using Type = Herd_GetResult_Request_<ContainerAllocator>;

  explicit Herd_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit Herd_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uf_interfaces::action::Herd_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const uf_interfaces::action::Herd_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uf_interfaces::action::Herd_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uf_interfaces::action::Herd_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uf_interfaces::action::Herd_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uf_interfaces::action::Herd_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uf_interfaces::action::Herd_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uf_interfaces::action::Herd_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uf_interfaces::action::Herd_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uf_interfaces::action::Herd_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uf_interfaces__action__Herd_GetResult_Request
    std::shared_ptr<uf_interfaces::action::Herd_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uf_interfaces__action__Herd_GetResult_Request
    std::shared_ptr<uf_interfaces::action::Herd_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Herd_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Herd_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Herd_GetResult_Request_

// alias to use template instance with default allocator
using Herd_GetResult_Request =
  uf_interfaces::action::Herd_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace uf_interfaces


// Include directives for member types
// Member 'result'
// already included above
// #include "uf_interfaces/action/detail/herd__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__uf_interfaces__action__Herd_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__uf_interfaces__action__Herd_GetResult_Response __declspec(deprecated)
#endif

namespace uf_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Herd_GetResult_Response_
{
  using Type = Herd_GetResult_Response_<ContainerAllocator>;

  explicit Herd_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit Herd_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    uf_interfaces::action::Herd_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const uf_interfaces::action::Herd_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uf_interfaces::action::Herd_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const uf_interfaces::action::Herd_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uf_interfaces::action::Herd_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uf_interfaces::action::Herd_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uf_interfaces::action::Herd_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uf_interfaces::action::Herd_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uf_interfaces::action::Herd_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uf_interfaces::action::Herd_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uf_interfaces::action::Herd_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uf_interfaces::action::Herd_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uf_interfaces__action__Herd_GetResult_Response
    std::shared_ptr<uf_interfaces::action::Herd_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uf_interfaces__action__Herd_GetResult_Response
    std::shared_ptr<uf_interfaces::action::Herd_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Herd_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const Herd_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Herd_GetResult_Response_

// alias to use template instance with default allocator
using Herd_GetResult_Response =
  uf_interfaces::action::Herd_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace uf_interfaces

namespace uf_interfaces
{

namespace action
{

struct Herd_GetResult
{
  using Request = uf_interfaces::action::Herd_GetResult_Request;
  using Response = uf_interfaces::action::Herd_GetResult_Response;
};

}  // namespace action

}  // namespace uf_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "uf_interfaces/action/detail/herd__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__uf_interfaces__action__Herd_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__uf_interfaces__action__Herd_FeedbackMessage __declspec(deprecated)
#endif

namespace uf_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Herd_FeedbackMessage_
{
  using Type = Herd_FeedbackMessage_<ContainerAllocator>;

  explicit Herd_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit Herd_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    uf_interfaces::action::Herd_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const uf_interfaces::action::Herd_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uf_interfaces::action::Herd_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const uf_interfaces::action::Herd_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uf_interfaces::action::Herd_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uf_interfaces::action::Herd_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uf_interfaces::action::Herd_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uf_interfaces::action::Herd_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uf_interfaces::action::Herd_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uf_interfaces::action::Herd_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uf_interfaces::action::Herd_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uf_interfaces::action::Herd_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uf_interfaces__action__Herd_FeedbackMessage
    std::shared_ptr<uf_interfaces::action::Herd_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uf_interfaces__action__Herd_FeedbackMessage
    std::shared_ptr<uf_interfaces::action::Herd_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Herd_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const Herd_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Herd_FeedbackMessage_

// alias to use template instance with default allocator
using Herd_FeedbackMessage =
  uf_interfaces::action::Herd_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace uf_interfaces

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace uf_interfaces
{

namespace action
{

struct Herd
{
  /// The goal message defined in the action definition.
  using Goal = uf_interfaces::action::Herd_Goal;
  /// The result message defined in the action definition.
  using Result = uf_interfaces::action::Herd_Result;
  /// The feedback message defined in the action definition.
  using Feedback = uf_interfaces::action::Herd_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = uf_interfaces::action::Herd_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = uf_interfaces::action::Herd_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = uf_interfaces::action::Herd_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct Herd Herd;

}  // namespace action

}  // namespace uf_interfaces

#endif  // UF_INTERFACES__ACTION__DETAIL__HERD__STRUCT_HPP_
