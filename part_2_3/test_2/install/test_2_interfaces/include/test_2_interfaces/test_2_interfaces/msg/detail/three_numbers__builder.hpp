// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from test_2_interfaces:msg/ThreeNumbers.idl
// generated code does not contain a copyright notice

#ifndef TEST_2_INTERFACES__MSG__DETAIL__THREE_NUMBERS__BUILDER_HPP_
#define TEST_2_INTERFACES__MSG__DETAIL__THREE_NUMBERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "test_2_interfaces/msg/detail/three_numbers__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace test_2_interfaces
{

namespace msg
{

namespace builder
{

class Init_ThreeNumbers_num3
{
public:
  explicit Init_ThreeNumbers_num3(::test_2_interfaces::msg::ThreeNumbers & msg)
  : msg_(msg)
  {}
  ::test_2_interfaces::msg::ThreeNumbers num3(::test_2_interfaces::msg::ThreeNumbers::_num3_type arg)
  {
    msg_.num3 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::test_2_interfaces::msg::ThreeNumbers msg_;
};

class Init_ThreeNumbers_num2
{
public:
  explicit Init_ThreeNumbers_num2(::test_2_interfaces::msg::ThreeNumbers & msg)
  : msg_(msg)
  {}
  Init_ThreeNumbers_num3 num2(::test_2_interfaces::msg::ThreeNumbers::_num2_type arg)
  {
    msg_.num2 = std::move(arg);
    return Init_ThreeNumbers_num3(msg_);
  }

private:
  ::test_2_interfaces::msg::ThreeNumbers msg_;
};

class Init_ThreeNumbers_num1
{
public:
  Init_ThreeNumbers_num1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ThreeNumbers_num2 num1(::test_2_interfaces::msg::ThreeNumbers::_num1_type arg)
  {
    msg_.num1 = std::move(arg);
    return Init_ThreeNumbers_num2(msg_);
  }

private:
  ::test_2_interfaces::msg::ThreeNumbers msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::test_2_interfaces::msg::ThreeNumbers>()
{
  return test_2_interfaces::msg::builder::Init_ThreeNumbers_num1();
}

}  // namespace test_2_interfaces

#endif  // TEST_2_INTERFACES__MSG__DETAIL__THREE_NUMBERS__BUILDER_HPP_
