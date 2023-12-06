// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gps_nav_interfaces:srv/GetRoutePoses.idl
// generated code does not contain a copyright notice

#ifndef GPS_NAV_INTERFACES__SRV__DETAIL__GET_ROUTE_POSES__TRAITS_HPP_
#define GPS_NAV_INTERFACES__SRV__DETAIL__GET_ROUTE_POSES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gps_nav_interfaces/srv/detail/get_route_poses__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace gps_nav_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetRoutePoses_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetRoutePoses_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetRoutePoses_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace gps_nav_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use gps_nav_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const gps_nav_interfaces::srv::GetRoutePoses_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  gps_nav_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gps_nav_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const gps_nav_interfaces::srv::GetRoutePoses_Request & msg)
{
  return gps_nav_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gps_nav_interfaces::srv::GetRoutePoses_Request>()
{
  return "gps_nav_interfaces::srv::GetRoutePoses_Request";
}

template<>
inline const char * name<gps_nav_interfaces::srv::GetRoutePoses_Request>()
{
  return "gps_nav_interfaces/srv/GetRoutePoses_Request";
}

template<>
struct has_fixed_size<gps_nav_interfaces::srv::GetRoutePoses_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<gps_nav_interfaces::srv::GetRoutePoses_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<gps_nav_interfaces::srv::GetRoutePoses_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'mypose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace gps_nav_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetRoutePoses_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: num_route_poses
  {
    out << "num_route_poses: ";
    rosidl_generator_traits::value_to_yaml(msg.num_route_poses, out);
    out << ", ";
  }

  // member: mypose
  {
    if (msg.mypose.size() == 0) {
      out << "mypose: []";
    } else {
      out << "mypose: [";
      size_t pending_items = msg.mypose.size();
      for (auto item : msg.mypose) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: offset_x
  {
    out << "offset_x: ";
    rosidl_generator_traits::value_to_yaml(msg.offset_x, out);
    out << ", ";
  }

  // member: offset_y
  {
    out << "offset_y: ";
    rosidl_generator_traits::value_to_yaml(msg.offset_y, out);
    out << ", ";
  }

  // member: state
  {
    if (msg.state.size() == 0) {
      out << "state: []";
    } else {
      out << "state: [";
      size_t pending_items = msg.state.size();
      for (auto item : msg.state) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: want_loop
  {
    out << "want_loop: ";
    rosidl_generator_traits::value_to_yaml(msg.want_loop, out);
    out << ", ";
  }

  // member: state_dictionary
  {
    out << "state_dictionary: ";
    rosidl_generator_traits::value_to_yaml(msg.state_dictionary, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetRoutePoses_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: num_route_poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_route_poses: ";
    rosidl_generator_traits::value_to_yaml(msg.num_route_poses, out);
    out << "\n";
  }

  // member: mypose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.mypose.size() == 0) {
      out << "mypose: []\n";
    } else {
      out << "mypose:\n";
      for (auto item : msg.mypose) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: offset_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offset_x: ";
    rosidl_generator_traits::value_to_yaml(msg.offset_x, out);
    out << "\n";
  }

  // member: offset_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offset_y: ";
    rosidl_generator_traits::value_to_yaml(msg.offset_y, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.state.size() == 0) {
      out << "state: []\n";
    } else {
      out << "state:\n";
      for (auto item : msg.state) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: want_loop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "want_loop: ";
    rosidl_generator_traits::value_to_yaml(msg.want_loop, out);
    out << "\n";
  }

  // member: state_dictionary
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state_dictionary: ";
    rosidl_generator_traits::value_to_yaml(msg.state_dictionary, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetRoutePoses_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace gps_nav_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use gps_nav_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const gps_nav_interfaces::srv::GetRoutePoses_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  gps_nav_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gps_nav_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const gps_nav_interfaces::srv::GetRoutePoses_Response & msg)
{
  return gps_nav_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gps_nav_interfaces::srv::GetRoutePoses_Response>()
{
  return "gps_nav_interfaces::srv::GetRoutePoses_Response";
}

template<>
inline const char * name<gps_nav_interfaces::srv::GetRoutePoses_Response>()
{
  return "gps_nav_interfaces/srv/GetRoutePoses_Response";
}

template<>
struct has_fixed_size<gps_nav_interfaces::srv::GetRoutePoses_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gps_nav_interfaces::srv::GetRoutePoses_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gps_nav_interfaces::srv::GetRoutePoses_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gps_nav_interfaces::srv::GetRoutePoses>()
{
  return "gps_nav_interfaces::srv::GetRoutePoses";
}

template<>
inline const char * name<gps_nav_interfaces::srv::GetRoutePoses>()
{
  return "gps_nav_interfaces/srv/GetRoutePoses";
}

template<>
struct has_fixed_size<gps_nav_interfaces::srv::GetRoutePoses>
  : std::integral_constant<
    bool,
    has_fixed_size<gps_nav_interfaces::srv::GetRoutePoses_Request>::value &&
    has_fixed_size<gps_nav_interfaces::srv::GetRoutePoses_Response>::value
  >
{
};

template<>
struct has_bounded_size<gps_nav_interfaces::srv::GetRoutePoses>
  : std::integral_constant<
    bool,
    has_bounded_size<gps_nav_interfaces::srv::GetRoutePoses_Request>::value &&
    has_bounded_size<gps_nav_interfaces::srv::GetRoutePoses_Response>::value
  >
{
};

template<>
struct is_service<gps_nav_interfaces::srv::GetRoutePoses>
  : std::true_type
{
};

template<>
struct is_service_request<gps_nav_interfaces::srv::GetRoutePoses_Request>
  : std::true_type
{
};

template<>
struct is_service_response<gps_nav_interfaces::srv::GetRoutePoses_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // GPS_NAV_INTERFACES__SRV__DETAIL__GET_ROUTE_POSES__TRAITS_HPP_
