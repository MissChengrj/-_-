// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from test_2_interfaces:srv/Num.idl
// generated code does not contain a copyright notice

#ifndef TEST_2_INTERFACES__SRV__DETAIL__NUM__TRAITS_HPP_
#define TEST_2_INTERFACES__SRV__DETAIL__NUM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "test_2_interfaces/srv/detail/num__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace test_2_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Num_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << ", ";
  }

  // member: c
  {
    out << "c: ";
    rosidl_generator_traits::value_to_yaml(msg.c, out);
    out << ", ";
  }

  // member: operation
  {
    out << "operation: ";
    rosidl_generator_traits::value_to_yaml(msg.operation, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Num_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }

  // member: c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "c: ";
    rosidl_generator_traits::value_to_yaml(msg.c, out);
    out << "\n";
  }

  // member: operation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "operation: ";
    rosidl_generator_traits::value_to_yaml(msg.operation, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Num_Request & msg, bool use_flow_style = false)
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

}  // namespace test_2_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use test_2_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const test_2_interfaces::srv::Num_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  test_2_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use test_2_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const test_2_interfaces::srv::Num_Request & msg)
{
  return test_2_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<test_2_interfaces::srv::Num_Request>()
{
  return "test_2_interfaces::srv::Num_Request";
}

template<>
inline const char * name<test_2_interfaces::srv::Num_Request>()
{
  return "test_2_interfaces/srv/Num_Request";
}

template<>
struct has_fixed_size<test_2_interfaces::srv::Num_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<test_2_interfaces::srv::Num_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<test_2_interfaces::srv::Num_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace test_2_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Num_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Num_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Num_Response & msg, bool use_flow_style = false)
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

}  // namespace test_2_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use test_2_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const test_2_interfaces::srv::Num_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  test_2_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use test_2_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const test_2_interfaces::srv::Num_Response & msg)
{
  return test_2_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<test_2_interfaces::srv::Num_Response>()
{
  return "test_2_interfaces::srv::Num_Response";
}

template<>
inline const char * name<test_2_interfaces::srv::Num_Response>()
{
  return "test_2_interfaces/srv/Num_Response";
}

template<>
struct has_fixed_size<test_2_interfaces::srv::Num_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<test_2_interfaces::srv::Num_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<test_2_interfaces::srv::Num_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<test_2_interfaces::srv::Num>()
{
  return "test_2_interfaces::srv::Num";
}

template<>
inline const char * name<test_2_interfaces::srv::Num>()
{
  return "test_2_interfaces/srv/Num";
}

template<>
struct has_fixed_size<test_2_interfaces::srv::Num>
  : std::integral_constant<
    bool,
    has_fixed_size<test_2_interfaces::srv::Num_Request>::value &&
    has_fixed_size<test_2_interfaces::srv::Num_Response>::value
  >
{
};

template<>
struct has_bounded_size<test_2_interfaces::srv::Num>
  : std::integral_constant<
    bool,
    has_bounded_size<test_2_interfaces::srv::Num_Request>::value &&
    has_bounded_size<test_2_interfaces::srv::Num_Response>::value
  >
{
};

template<>
struct is_service<test_2_interfaces::srv::Num>
  : std::true_type
{
};

template<>
struct is_service_request<test_2_interfaces::srv::Num_Request>
  : std::true_type
{
};

template<>
struct is_service_response<test_2_interfaces::srv::Num_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TEST_2_INTERFACES__SRV__DETAIL__NUM__TRAITS_HPP_
