// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from uf_interfaces:action/Defend.idl
// generated code does not contain a copyright notice

#ifndef UF_INTERFACES__ACTION__DETAIL__DEFEND__STRUCT_H_
#define UF_INTERFACES__ACTION__DETAIL__DEFEND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/Defend in the package uf_interfaces.
typedef struct uf_interfaces__action__Defend_Goal
{
  rosidl_runtime_c__String target;
} uf_interfaces__action__Defend_Goal;

// Struct for a sequence of uf_interfaces__action__Defend_Goal.
typedef struct uf_interfaces__action__Defend_Goal__Sequence
{
  uf_interfaces__action__Defend_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uf_interfaces__action__Defend_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'success'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/Defend in the package uf_interfaces.
typedef struct uf_interfaces__action__Defend_Result
{
  rosidl_runtime_c__String success;
} uf_interfaces__action__Defend_Result;

// Struct for a sequence of uf_interfaces__action__Defend_Result.
typedef struct uf_interfaces__action__Defend_Result__Sequence
{
  uf_interfaces__action__Defend_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uf_interfaces__action__Defend_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/Defend in the package uf_interfaces.
typedef struct uf_interfaces__action__Defend_Feedback
{
  double distance;
} uf_interfaces__action__Defend_Feedback;

// Struct for a sequence of uf_interfaces__action__Defend_Feedback.
typedef struct uf_interfaces__action__Defend_Feedback__Sequence
{
  uf_interfaces__action__Defend_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uf_interfaces__action__Defend_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "uf_interfaces/action/detail/defend__struct.h"

/// Struct defined in action/Defend in the package uf_interfaces.
typedef struct uf_interfaces__action__Defend_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  uf_interfaces__action__Defend_Goal goal;
} uf_interfaces__action__Defend_SendGoal_Request;

// Struct for a sequence of uf_interfaces__action__Defend_SendGoal_Request.
typedef struct uf_interfaces__action__Defend_SendGoal_Request__Sequence
{
  uf_interfaces__action__Defend_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uf_interfaces__action__Defend_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Defend in the package uf_interfaces.
typedef struct uf_interfaces__action__Defend_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} uf_interfaces__action__Defend_SendGoal_Response;

// Struct for a sequence of uf_interfaces__action__Defend_SendGoal_Response.
typedef struct uf_interfaces__action__Defend_SendGoal_Response__Sequence
{
  uf_interfaces__action__Defend_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uf_interfaces__action__Defend_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Defend in the package uf_interfaces.
typedef struct uf_interfaces__action__Defend_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} uf_interfaces__action__Defend_GetResult_Request;

// Struct for a sequence of uf_interfaces__action__Defend_GetResult_Request.
typedef struct uf_interfaces__action__Defend_GetResult_Request__Sequence
{
  uf_interfaces__action__Defend_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uf_interfaces__action__Defend_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "uf_interfaces/action/detail/defend__struct.h"

/// Struct defined in action/Defend in the package uf_interfaces.
typedef struct uf_interfaces__action__Defend_GetResult_Response
{
  int8_t status;
  uf_interfaces__action__Defend_Result result;
} uf_interfaces__action__Defend_GetResult_Response;

// Struct for a sequence of uf_interfaces__action__Defend_GetResult_Response.
typedef struct uf_interfaces__action__Defend_GetResult_Response__Sequence
{
  uf_interfaces__action__Defend_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uf_interfaces__action__Defend_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "uf_interfaces/action/detail/defend__struct.h"

/// Struct defined in action/Defend in the package uf_interfaces.
typedef struct uf_interfaces__action__Defend_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  uf_interfaces__action__Defend_Feedback feedback;
} uf_interfaces__action__Defend_FeedbackMessage;

// Struct for a sequence of uf_interfaces__action__Defend_FeedbackMessage.
typedef struct uf_interfaces__action__Defend_FeedbackMessage__Sequence
{
  uf_interfaces__action__Defend_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uf_interfaces__action__Defend_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UF_INTERFACES__ACTION__DETAIL__DEFEND__STRUCT_H_
