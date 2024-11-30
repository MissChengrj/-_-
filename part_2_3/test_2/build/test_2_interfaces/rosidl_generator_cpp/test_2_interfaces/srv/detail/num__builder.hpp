// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from test_2_interfaces:srv/Num.idl
// generated code does not contain a copyright notice

#ifndef TEST_2_INTERFACES__SRV__DETAIL__NUM__BUILDER_HPP_
#define TEST_2_INTERFACES__SRV__DETAIL__NUM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "test_2_interfaces/srv/detail/num__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace test_2_interfaces
{

namespace srv
{

namespace builder
{

class Init_Num_Request_operation
{
public:
  explicit Init_Num_Request_operation(::test_2_interfaces::srv::Num_Request & msg)
  : msg_(msg)
  {}
  ::test_2_interfaces::srv::Num_Request operation(::test_2_interfaces::srv::Num_Request::_operation_type arg)
  {
    msg_.operation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::test_2_interfaces::srv::Num_Request msg_;
};

class Init_Num_Request_c
{
public:
  explicit Init_Num_Request_c(::test_2_interfaces::srv::Num_Request & msg)
  : msg_(msg)
  {}
  Init_Num_Request_operation c(::test_2_interfaces::srv::Num_Request::_c_type arg)
  {
    msg_.c = std::move(arg);
    return Init_Num_Request_operation(msg_);
  }

private:
  ::test_2_interfaces::srv::Num_Request msg_;
};

class Init_Num_Request_b
{
public:
  explicit Init_Num_Request_b(::test_2_interfaces::srv::Num_Request & msg)
  : msg_(msg)
  {}
  Init_Num_Request_c b(::test_2_interfaces::srv::Num_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_Num_Request_c(msg_);
  }

private:
  ::test_2_interfaces::srv::Num_Request msg_;
};

class Init_Num_Request_a
{
public:
  Init_Num_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Num_Request_b a(::test_2_interfaces::srv::Num_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_Num_Request_b(msg_);
  }

private:
  ::test_2_interfaces::srv::Num_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::test_2_interfaces::srv::Num_Request>()
{
  return test_2_interfaces::srv::builder::Init_Num_Request_a();
}

}  // namespace test_2_interfaces


namespace test_2_interfaces
{

namespace srv
{

namespace builder
{

class Init_Num_Response_result
{
public:
  Init_Num_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::test_2_interfaces::srv::Num_Response result(::test_2_interfaces::srv::Num_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::test_2_interfaces::srv::Num_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::test_2_interfaces::srv::Num_Response>()
{
  return test_2_interfaces::srv::builder::Init_Num_Response_result();
}

}  // namespace test_2_interfaces

#endif  // TEST_2_INTERFACES__SRV__DETAIL__NUM__BUILDER_HPP_
