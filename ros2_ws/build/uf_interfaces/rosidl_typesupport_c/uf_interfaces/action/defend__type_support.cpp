// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from uf_interfaces:action/Defend.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "uf_interfaces/action/detail/defend__struct.h"
#include "uf_interfaces/action/detail/defend__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace uf_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Defend_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Defend_Goal_type_support_ids_t;

static const _Defend_Goal_type_support_ids_t _Defend_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Defend_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Defend_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Defend_Goal_type_support_symbol_names_t _Defend_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uf_interfaces, action, Defend_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uf_interfaces, action, Defend_Goal)),
  }
};

typedef struct _Defend_Goal_type_support_data_t
{
  void * data[2];
} _Defend_Goal_type_support_data_t;

static _Defend_Goal_type_support_data_t _Defend_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Defend_Goal_message_typesupport_map = {
  2,
  "uf_interfaces",
  &_Defend_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_Defend_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_Defend_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Defend_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Defend_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace uf_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, uf_interfaces, action, Defend_Goal)() {
  return &::uf_interfaces::action::rosidl_typesupport_c::Defend_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "uf_interfaces/action/detail/defend__struct.h"
// already included above
// #include "uf_interfaces/action/detail/defend__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace uf_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Defend_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Defend_Result_type_support_ids_t;

static const _Defend_Result_type_support_ids_t _Defend_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Defend_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Defend_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Defend_Result_type_support_symbol_names_t _Defend_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uf_interfaces, action, Defend_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uf_interfaces, action, Defend_Result)),
  }
};

typedef struct _Defend_Result_type_support_data_t
{
  void * data[2];
} _Defend_Result_type_support_data_t;

static _Defend_Result_type_support_data_t _Defend_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Defend_Result_message_typesupport_map = {
  2,
  "uf_interfaces",
  &_Defend_Result_message_typesupport_ids.typesupport_identifier[0],
  &_Defend_Result_message_typesupport_symbol_names.symbol_name[0],
  &_Defend_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Defend_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Defend_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace uf_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, uf_interfaces, action, Defend_Result)() {
  return &::uf_interfaces::action::rosidl_typesupport_c::Defend_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "uf_interfaces/action/detail/defend__struct.h"
// already included above
// #include "uf_interfaces/action/detail/defend__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace uf_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Defend_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Defend_Feedback_type_support_ids_t;

static const _Defend_Feedback_type_support_ids_t _Defend_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Defend_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Defend_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Defend_Feedback_type_support_symbol_names_t _Defend_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uf_interfaces, action, Defend_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uf_interfaces, action, Defend_Feedback)),
  }
};

typedef struct _Defend_Feedback_type_support_data_t
{
  void * data[2];
} _Defend_Feedback_type_support_data_t;

static _Defend_Feedback_type_support_data_t _Defend_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Defend_Feedback_message_typesupport_map = {
  2,
  "uf_interfaces",
  &_Defend_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_Defend_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_Defend_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Defend_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Defend_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace uf_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, uf_interfaces, action, Defend_Feedback)() {
  return &::uf_interfaces::action::rosidl_typesupport_c::Defend_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "uf_interfaces/action/detail/defend__struct.h"
// already included above
// #include "uf_interfaces/action/detail/defend__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace uf_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Defend_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Defend_SendGoal_Request_type_support_ids_t;

static const _Defend_SendGoal_Request_type_support_ids_t _Defend_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Defend_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Defend_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Defend_SendGoal_Request_type_support_symbol_names_t _Defend_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uf_interfaces, action, Defend_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uf_interfaces, action, Defend_SendGoal_Request)),
  }
};

typedef struct _Defend_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _Defend_SendGoal_Request_type_support_data_t;

static _Defend_SendGoal_Request_type_support_data_t _Defend_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Defend_SendGoal_Request_message_typesupport_map = {
  2,
  "uf_interfaces",
  &_Defend_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Defend_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Defend_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Defend_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Defend_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace uf_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, uf_interfaces, action, Defend_SendGoal_Request)() {
  return &::uf_interfaces::action::rosidl_typesupport_c::Defend_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "uf_interfaces/action/detail/defend__struct.h"
// already included above
// #include "uf_interfaces/action/detail/defend__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace uf_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Defend_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Defend_SendGoal_Response_type_support_ids_t;

static const _Defend_SendGoal_Response_type_support_ids_t _Defend_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Defend_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Defend_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Defend_SendGoal_Response_type_support_symbol_names_t _Defend_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uf_interfaces, action, Defend_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uf_interfaces, action, Defend_SendGoal_Response)),
  }
};

typedef struct _Defend_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _Defend_SendGoal_Response_type_support_data_t;

static _Defend_SendGoal_Response_type_support_data_t _Defend_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Defend_SendGoal_Response_message_typesupport_map = {
  2,
  "uf_interfaces",
  &_Defend_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Defend_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Defend_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Defend_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Defend_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace uf_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, uf_interfaces, action, Defend_SendGoal_Response)() {
  return &::uf_interfaces::action::rosidl_typesupport_c::Defend_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "uf_interfaces/action/detail/defend__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace uf_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Defend_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Defend_SendGoal_type_support_ids_t;

static const _Defend_SendGoal_type_support_ids_t _Defend_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Defend_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Defend_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Defend_SendGoal_type_support_symbol_names_t _Defend_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uf_interfaces, action, Defend_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uf_interfaces, action, Defend_SendGoal)),
  }
};

typedef struct _Defend_SendGoal_type_support_data_t
{
  void * data[2];
} _Defend_SendGoal_type_support_data_t;

static _Defend_SendGoal_type_support_data_t _Defend_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Defend_SendGoal_service_typesupport_map = {
  2,
  "uf_interfaces",
  &_Defend_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_Defend_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_Defend_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Defend_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Defend_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace uf_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, uf_interfaces, action, Defend_SendGoal)() {
  return &::uf_interfaces::action::rosidl_typesupport_c::Defend_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "uf_interfaces/action/detail/defend__struct.h"
// already included above
// #include "uf_interfaces/action/detail/defend__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace uf_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Defend_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Defend_GetResult_Request_type_support_ids_t;

static const _Defend_GetResult_Request_type_support_ids_t _Defend_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Defend_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Defend_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Defend_GetResult_Request_type_support_symbol_names_t _Defend_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uf_interfaces, action, Defend_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uf_interfaces, action, Defend_GetResult_Request)),
  }
};

typedef struct _Defend_GetResult_Request_type_support_data_t
{
  void * data[2];
} _Defend_GetResult_Request_type_support_data_t;

static _Defend_GetResult_Request_type_support_data_t _Defend_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Defend_GetResult_Request_message_typesupport_map = {
  2,
  "uf_interfaces",
  &_Defend_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Defend_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Defend_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Defend_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Defend_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace uf_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, uf_interfaces, action, Defend_GetResult_Request)() {
  return &::uf_interfaces::action::rosidl_typesupport_c::Defend_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "uf_interfaces/action/detail/defend__struct.h"
// already included above
// #include "uf_interfaces/action/detail/defend__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace uf_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Defend_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Defend_GetResult_Response_type_support_ids_t;

static const _Defend_GetResult_Response_type_support_ids_t _Defend_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Defend_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Defend_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Defend_GetResult_Response_type_support_symbol_names_t _Defend_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uf_interfaces, action, Defend_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uf_interfaces, action, Defend_GetResult_Response)),
  }
};

typedef struct _Defend_GetResult_Response_type_support_data_t
{
  void * data[2];
} _Defend_GetResult_Response_type_support_data_t;

static _Defend_GetResult_Response_type_support_data_t _Defend_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Defend_GetResult_Response_message_typesupport_map = {
  2,
  "uf_interfaces",
  &_Defend_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Defend_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Defend_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Defend_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Defend_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace uf_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, uf_interfaces, action, Defend_GetResult_Response)() {
  return &::uf_interfaces::action::rosidl_typesupport_c::Defend_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "uf_interfaces/action/detail/defend__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace uf_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Defend_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Defend_GetResult_type_support_ids_t;

static const _Defend_GetResult_type_support_ids_t _Defend_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Defend_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Defend_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Defend_GetResult_type_support_symbol_names_t _Defend_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uf_interfaces, action, Defend_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uf_interfaces, action, Defend_GetResult)),
  }
};

typedef struct _Defend_GetResult_type_support_data_t
{
  void * data[2];
} _Defend_GetResult_type_support_data_t;

static _Defend_GetResult_type_support_data_t _Defend_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Defend_GetResult_service_typesupport_map = {
  2,
  "uf_interfaces",
  &_Defend_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_Defend_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_Defend_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Defend_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Defend_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace uf_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, uf_interfaces, action, Defend_GetResult)() {
  return &::uf_interfaces::action::rosidl_typesupport_c::Defend_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "uf_interfaces/action/detail/defend__struct.h"
// already included above
// #include "uf_interfaces/action/detail/defend__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace uf_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Defend_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Defend_FeedbackMessage_type_support_ids_t;

static const _Defend_FeedbackMessage_type_support_ids_t _Defend_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Defend_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Defend_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Defend_FeedbackMessage_type_support_symbol_names_t _Defend_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uf_interfaces, action, Defend_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uf_interfaces, action, Defend_FeedbackMessage)),
  }
};

typedef struct _Defend_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _Defend_FeedbackMessage_type_support_data_t;

static _Defend_FeedbackMessage_type_support_data_t _Defend_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Defend_FeedbackMessage_message_typesupport_map = {
  2,
  "uf_interfaces",
  &_Defend_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_Defend_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_Defend_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Defend_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Defend_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace uf_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, uf_interfaces, action, Defend_FeedbackMessage)() {
  return &::uf_interfaces::action::rosidl_typesupport_c::Defend_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "uf_interfaces/action/defend.h"
// already included above
// #include "uf_interfaces/action/detail/defend__type_support.h"

static rosidl_action_type_support_t _uf_interfaces__action__Defend__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, uf_interfaces, action, Defend)()
{
  // Thread-safe by always writing the same values to the static struct
  _uf_interfaces__action__Defend__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, uf_interfaces, action, Defend_SendGoal)();
  _uf_interfaces__action__Defend__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, uf_interfaces, action, Defend_GetResult)();
  _uf_interfaces__action__Defend__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _uf_interfaces__action__Defend__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, uf_interfaces, action, Defend_FeedbackMessage)();
  _uf_interfaces__action__Defend__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_uf_interfaces__action__Defend__typesupport_c;
}

#ifdef __cplusplus
}
#endif
