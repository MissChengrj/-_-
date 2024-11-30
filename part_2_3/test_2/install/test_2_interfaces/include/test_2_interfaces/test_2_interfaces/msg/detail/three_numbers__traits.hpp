// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from test_2_interfaces:msg/ThreeNumbers.idl
// generated code does not contain a copyright notice

#ifndef TEST_2_INTERFACES__MSG__DETAIL__THREE_NUMBERS__TRAITS_HPP_
#define TEST_2_INTERFACES__MSG__DETAIL__THREE_NUMBERS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "test_2_interfaces/msg/detail/three_numbers__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace test_2_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ThreeNumbers & msg,
  std::ostream & out)
{
  out << "{";
  // member: num1
  {
    out << "num1: ";
    rosidl_generator_traits::value_to_yaml(msg.num1, out);
    out << ", ";
  }

  // member: num2
  {
    out << "num2: ";
    rosidl_generator_traits::value_to_yaml(msg.num2, out);
    out << ", ";
  }

  // member: num3
  {
    out << "num3: ";
    rosidl_generator_traits::value_to_yaml(msg.num3, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ThreeNumbers & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: num1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num1: ";
    rosidl_generator_traits::value_to_yaml(msg.num1, out);
    out << "\n";
  }

  // member: num2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num2: ";
    rosidl_generator_traits::value_to_yaml(msg.num2, out);
    out << "\n";
  }

  // member: num3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num3: ";
    rosidl_generator_traits::value_to_yaml(msg.num3, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ThreeNumbers & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace test_2_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use test_2_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const test_2_interfaces::msg::ThreeNumbers & msg,
  std::ostream & out, size_t indentation = 0)
{
  test_2_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use test_2_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const test_2_interfaces::msg::ThreeNumbers & msg)
{
  return test_2_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<test_2_interfaces::msg::ThreeNumbers>()
{
  return "test_2_interfaces::msg::ThreeNumbers";
}

template<>
inline const char * name<test_2_interfaces::msg::ThreeNumbers>()
{
  return "test_2_interfaces/msg/ThreeNumbers";
}

template<>
struct has_fixed_size<test_2_interfaces::msg::ThreeNumbers>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<test_2_interfaces::msg::ThreeNumbers>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<test_2_interfaces::msg::ThreeNumbers>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TEST_2_INTERFACES__MSG__DETAIL__THREE_NUMBERS__TRAITS_HPP_
