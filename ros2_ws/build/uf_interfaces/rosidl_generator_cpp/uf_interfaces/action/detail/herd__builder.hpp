// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from uf_interfaces:action/Herd.idl
// generated code does not contain a copyright notice

#ifndef UF_INTERFACES__ACTION__DETAIL__HERD__BUILDER_HPP_
#define UF_INTERFACES__ACTION__DETAIL__HERD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "uf_interfaces/action/detail/herd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace uf_interfaces
{

namespace action
{

namespace builder
{

class Init_Herd_Goal_target
{
public:
  Init_Herd_Goal_target()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::uf_interfaces::action::Herd_Goal target(::uf_interfaces::action::Herd_Goal::_target_type arg)
  {
    msg_.target = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uf_interfaces::action::Herd_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::uf_interfaces::action::Herd_Goal>()
{
  return uf_interfaces::action::builder::Init_Herd_Goal_target();
}

}  // namespace uf_interfaces


namespace uf_interfaces
{

namespace action
{

namespace builder
{

class Init_Herd_Result_success
{
public:
  Init_Herd_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::uf_interfaces::action::Herd_Result success(::uf_interfaces::action::Herd_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uf_interfaces::action::Herd_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::uf_interfaces::action::Herd_Result>()
{
  return uf_interfaces::action::builder::Init_Herd_Result_success();
}

}  // namespace uf_interfaces


namespace uf_interfaces
{

namespace action
{

namespace builder
{

class Init_Herd_Feedback_distance
{
public:
  Init_Herd_Feedback_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::uf_interfaces::action::Herd_Feedback distance(::uf_interfaces::action::Herd_Feedback::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uf_interfaces::action::Herd_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::uf_interfaces::action::Herd_Feedback>()
{
  return uf_interfaces::action::builder::Init_Herd_Feedback_distance();
}

}  // namespace uf_interfaces


namespace uf_interfaces
{

namespace action
{

namespace builder
{

class Init_Herd_SendGoal_Request_goal
{
public:
  explicit Init_Herd_SendGoal_Request_goal(::uf_interfaces::action::Herd_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::uf_interfaces::action::Herd_SendGoal_Request goal(::uf_interfaces::action::Herd_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uf_interfaces::action::Herd_SendGoal_Request msg_;
};

class Init_Herd_SendGoal_Request_goal_id
{
public:
  Init_Herd_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Herd_SendGoal_Request_goal goal_id(::uf_interfaces::action::Herd_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Herd_SendGoal_Request_goal(msg_);
  }

private:
  ::uf_interfaces::action::Herd_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::uf_interfaces::action::Herd_SendGoal_Request>()
{
  return uf_interfaces::action::builder::Init_Herd_SendGoal_Request_goal_id();
}

}  // namespace uf_interfaces


namespace uf_interfaces
{

namespace action
{

namespace builder
{

class Init_Herd_SendGoal_Response_stamp
{
public:
  explicit Init_Herd_SendGoal_Response_stamp(::uf_interfaces::action::Herd_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::uf_interfaces::action::Herd_SendGoal_Response stamp(::uf_interfaces::action::Herd_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uf_interfaces::action::Herd_SendGoal_Response msg_;
};

class Init_Herd_SendGoal_Response_accepted
{
public:
  Init_Herd_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Herd_SendGoal_Response_stamp accepted(::uf_interfaces::action::Herd_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Herd_SendGoal_Response_stamp(msg_);
  }

private:
  ::uf_interfaces::action::Herd_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::uf_interfaces::action::Herd_SendGoal_Response>()
{
  return uf_interfaces::action::builder::Init_Herd_SendGoal_Response_accepted();
}

}  // namespace uf_interfaces


namespace uf_interfaces
{

namespace action
{

namespace builder
{

class Init_Herd_GetResult_Request_goal_id
{
public:
  Init_Herd_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::uf_interfaces::action::Herd_GetResult_Request goal_id(::uf_interfaces::action::Herd_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uf_interfaces::action::Herd_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::uf_interfaces::action::Herd_GetResult_Request>()
{
  return uf_interfaces::action::builder::Init_Herd_GetResult_Request_goal_id();
}

}  // namespace uf_interfaces


namespace uf_interfaces
{

namespace action
{

namespace builder
{

class Init_Herd_GetResult_Response_result
{
public:
  explicit Init_Herd_GetResult_Response_result(::uf_interfaces::action::Herd_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::uf_interfaces::action::Herd_GetResult_Response result(::uf_interfaces::action::Herd_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uf_interfaces::action::Herd_GetResult_Response msg_;
};

class Init_Herd_GetResult_Response_status
{
public:
  Init_Herd_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Herd_GetResult_Response_result status(::uf_interfaces::action::Herd_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Herd_GetResult_Response_result(msg_);
  }

private:
  ::uf_interfaces::action::Herd_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::uf_interfaces::action::Herd_GetResult_Response>()
{
  return uf_interfaces::action::builder::Init_Herd_GetResult_Response_status();
}

}  // namespace uf_interfaces


namespace uf_interfaces
{

namespace action
{

namespace builder
{

class Init_Herd_FeedbackMessage_feedback
{
public:
  explicit Init_Herd_FeedbackMessage_feedback(::uf_interfaces::action::Herd_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::uf_interfaces::action::Herd_FeedbackMessage feedback(::uf_interfaces::action::Herd_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uf_interfaces::action::Herd_FeedbackMessage msg_;
};

class Init_Herd_FeedbackMessage_goal_id
{
public:
  Init_Herd_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Herd_FeedbackMessage_feedback goal_id(::uf_interfaces::action::Herd_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Herd_FeedbackMessage_feedback(msg_);
  }

private:
  ::uf_interfaces::action::Herd_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::uf_interfaces::action::Herd_FeedbackMessage>()
{
  return uf_interfaces::action::builder::Init_Herd_FeedbackMessage_goal_id();
}

}  // namespace uf_interfaces

#endif  // UF_INTERFACES__ACTION__DETAIL__HERD__BUILDER_HPP_
