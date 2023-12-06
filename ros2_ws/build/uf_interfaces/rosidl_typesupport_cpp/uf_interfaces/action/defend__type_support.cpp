// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from uf_interfaces:action/Defend.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "uf_interfaces/action/detail/defend__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace uf_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Defend_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Defend_Goal_type_support_ids_t;

static const _Defend_Goal_type_support_ids_t _Defend_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, uf_interfaces, action, Defend_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, uf_interfaces, action, Defend_Goal)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Defend_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace uf_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<uf_interfaces::action::Defend_Goal>()
{
  return &::uf_interfaces::action::rosidl_typesupport_cpp::Defend_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, uf_interfaces, action, Defend_Goal)() {
  return get_message_type_support_handle<uf_interfaces::action::Defend_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "uf_interfaces/action/detail/defend__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace uf_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Defend_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Defend_Result_type_support_ids_t;

static const _Defend_Result_type_support_ids_t _Defend_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, uf_interfaces, action, Defend_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, uf_interfaces, action, Defend_Result)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Defend_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace uf_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<uf_interfaces::action::Defend_Result>()
{
  return &::uf_interfaces::action::rosidl_typesupport_cpp::Defend_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, uf_interfaces, action, Defend_Result)() {
  return get_message_type_support_handle<uf_interfaces::action::Defend_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "uf_interfaces/action/detail/defend__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace uf_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Defend_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Defend_Feedback_type_support_ids_t;

static const _Defend_Feedback_type_support_ids_t _Defend_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, uf_interfaces, action, Defend_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, uf_interfaces, action, Defend_Feedback)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Defend_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace uf_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<uf_interfaces::action::Defend_Feedback>()
{
  return &::uf_interfaces::action::rosidl_typesupport_cpp::Defend_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, uf_interfaces, action, Defend_Feedback)() {
  return get_message_type_support_handle<uf_interfaces::action::Defend_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "uf_interfaces/action/detail/defend__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace uf_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Defend_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Defend_SendGoal_Request_type_support_ids_t;

static const _Defend_SendGoal_Request_type_support_ids_t _Defend_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, uf_interfaces, action, Defend_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, uf_interfaces, action, Defend_SendGoal_Request)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Defend_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace uf_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<uf_interfaces::action::Defend_SendGoal_Request>()
{
  return &::uf_interfaces::action::rosidl_typesupport_cpp::Defend_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, uf_interfaces, action, Defend_SendGoal_Request)() {
  return get_message_type_support_handle<uf_interfaces::action::Defend_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "uf_interfaces/action/detail/defend__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace uf_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Defend_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Defend_SendGoal_Response_type_support_ids_t;

static const _Defend_SendGoal_Response_type_support_ids_t _Defend_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, uf_interfaces, action, Defend_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, uf_interfaces, action, Defend_SendGoal_Response)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Defend_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace uf_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<uf_interfaces::action::Defend_SendGoal_Response>()
{
  return &::uf_interfaces::action::rosidl_typesupport_cpp::Defend_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, uf_interfaces, action, Defend_SendGoal_Response)() {
  return get_message_type_support_handle<uf_interfaces::action::Defend_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "uf_interfaces/action/detail/defend__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace uf_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Defend_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Defend_SendGoal_type_support_ids_t;

static const _Defend_SendGoal_type_support_ids_t _Defend_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, uf_interfaces, action, Defend_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, uf_interfaces, action, Defend_SendGoal)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Defend_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace uf_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<uf_interfaces::action::Defend_SendGoal>()
{
  return &::uf_interfaces::action::rosidl_typesupport_cpp::Defend_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "uf_interfaces/action/detail/defend__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace uf_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Defend_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Defend_GetResult_Request_type_support_ids_t;

static const _Defend_GetResult_Request_type_support_ids_t _Defend_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, uf_interfaces, action, Defend_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, uf_interfaces, action, Defend_GetResult_Request)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Defend_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace uf_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<uf_interfaces::action::Defend_GetResult_Request>()
{
  return &::uf_interfaces::action::rosidl_typesupport_cpp::Defend_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, uf_interfaces, action, Defend_GetResult_Request)() {
  return get_message_type_support_handle<uf_interfaces::action::Defend_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "uf_interfaces/action/detail/defend__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace uf_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Defend_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Defend_GetResult_Response_type_support_ids_t;

static const _Defend_GetResult_Response_type_support_ids_t _Defend_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, uf_interfaces, action, Defend_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, uf_interfaces, action, Defend_GetResult_Response)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Defend_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace uf_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<uf_interfaces::action::Defend_GetResult_Response>()
{
  return &::uf_interfaces::action::rosidl_typesupport_cpp::Defend_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, uf_interfaces, action, Defend_GetResult_Response)() {
  return get_message_type_support_handle<uf_interfaces::action::Defend_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "uf_interfaces/action/detail/defend__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace uf_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Defend_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Defend_GetResult_type_support_ids_t;

static const _Defend_GetResult_type_support_ids_t _Defend_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, uf_interfaces, action, Defend_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, uf_interfaces, action, Defend_GetResult)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Defend_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace uf_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<uf_interfaces::action::Defend_GetResult>()
{
  return &::uf_interfaces::action::rosidl_typesupport_cpp::Defend_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "uf_interfaces/action/detail/defend__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace uf_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Defend_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Defend_FeedbackMessage_type_support_ids_t;

static const _Defend_FeedbackMessage_type_support_ids_t _Defend_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, uf_interfaces, action, Defend_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, uf_interfaces, action, Defend_FeedbackMessage)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Defend_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace uf_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<uf_interfaces::action::Defend_FeedbackMessage>()
{
  return &::uf_interfaces::action::rosidl_typesupport_cpp::Defend_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, uf_interfaces, action, Defend_FeedbackMessage)() {
  return get_message_type_support_handle<uf_interfaces::action::Defend_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "uf_interfaces/action/detail/defend__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace uf_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t Defend_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace uf_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<uf_interfaces::action::Defend>()
{
  using ::uf_interfaces::action::rosidl_typesupport_cpp::Defend_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  Defend_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::uf_interfaces::action::Defend::Impl::SendGoalService>();
  Defend_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::uf_interfaces::action::Defend::Impl::GetResultService>();
  Defend_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::uf_interfaces::action::Defend::Impl::CancelGoalService>();
  Defend_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::uf_interfaces::action::Defend::Impl::FeedbackMessage>();
  Defend_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::uf_interfaces::action::Defend::Impl::GoalStatusMessage>();
  return &Defend_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
