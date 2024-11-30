// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from test_2_interfaces:srv/Num.idl
// generated code does not contain a copyright notice

#ifndef TEST_2_INTERFACES__SRV__DETAIL__NUM__STRUCT_HPP_
#define TEST_2_INTERFACES__SRV__DETAIL__NUM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__test_2_interfaces__srv__Num_Request __attribute__((deprecated))
#else
# define DEPRECATED__test_2_interfaces__srv__Num_Request __declspec(deprecated)
#endif

namespace test_2_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Num_Request_
{
  using Type = Num_Request_<ContainerAllocator>;

  explicit Num_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0.0f;
      this->b = 0.0f;
      this->c = 0.0f;
      this->operation = "";
    }
  }

  explicit Num_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : operation(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0.0f;
      this->b = 0.0f;
      this->c = 0.0f;
      this->operation = "";
    }
  }

  // field types and members
  using _a_type =
    float;
  _a_type a;
  using _b_type =
    float;
  _b_type b;
  using _c_type =
    float;
  _c_type c;
  using _operation_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _operation_type operation;

  // setters for named parameter idiom
  Type & set__a(
    const float & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__b(
    const float & _arg)
  {
    this->b = _arg;
    return *this;
  }
  Type & set__c(
    const float & _arg)
  {
    this->c = _arg;
    return *this;
  }
  Type & set__operation(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->operation = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    test_2_interfaces::srv::Num_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const test_2_interfaces::srv::Num_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<test_2_interfaces::srv::Num_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<test_2_interfaces::srv::Num_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      test_2_interfaces::srv::Num_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<test_2_interfaces::srv::Num_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      test_2_interfaces::srv::Num_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<test_2_interfaces::srv::Num_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<test_2_interfaces::srv::Num_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<test_2_interfaces::srv::Num_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__test_2_interfaces__srv__Num_Request
    std::shared_ptr<test_2_interfaces::srv::Num_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__test_2_interfaces__srv__Num_Request
    std::shared_ptr<test_2_interfaces::srv::Num_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Num_Request_ & other) const
  {
    if (this->a != other.a) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    if (this->c != other.c) {
      return false;
    }
    if (this->operation != other.operation) {
      return false;
    }
    return true;
  }
  bool operator!=(const Num_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Num_Request_

// alias to use template instance with default allocator
using Num_Request =
  test_2_interfaces::srv::Num_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace test_2_interfaces


#ifndef _WIN32
# define DEPRECATED__test_2_interfaces__srv__Num_Response __attribute__((deprecated))
#else
# define DEPRECATED__test_2_interfaces__srv__Num_Response __declspec(deprecated)
#endif

namespace test_2_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Num_Response_
{
  using Type = Num_Response_<ContainerAllocator>;

  explicit Num_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0.0f;
    }
  }

  explicit Num_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0.0f;
    }
  }

  // field types and members
  using _result_type =
    float;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const float & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    test_2_interfaces::srv::Num_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const test_2_interfaces::srv::Num_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<test_2_interfaces::srv::Num_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<test_2_interfaces::srv::Num_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      test_2_interfaces::srv::Num_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<test_2_interfaces::srv::Num_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      test_2_interfaces::srv::Num_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<test_2_interfaces::srv::Num_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<test_2_interfaces::srv::Num_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<test_2_interfaces::srv::Num_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__test_2_interfaces__srv__Num_Response
    std::shared_ptr<test_2_interfaces::srv::Num_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__test_2_interfaces__srv__Num_Response
    std::shared_ptr<test_2_interfaces::srv::Num_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Num_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const Num_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Num_Response_

// alias to use template instance with default allocator
using Num_Response =
  test_2_interfaces::srv::Num_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace test_2_interfaces

namespace test_2_interfaces
{

namespace srv
{

struct Num
{
  using Request = test_2_interfaces::srv::Num_Request;
  using Response = test_2_interfaces::srv::Num_Response;
};

}  // namespace srv

}  // namespace test_2_interfaces

#endif  // TEST_2_INTERFACES__SRV__DETAIL__NUM__STRUCT_HPP_
