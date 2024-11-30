// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from test_2_interfaces:msg/ThreeNumbers.idl
// generated code does not contain a copyright notice

#ifndef TEST_2_INTERFACES__MSG__DETAIL__THREE_NUMBERS__STRUCT_HPP_
#define TEST_2_INTERFACES__MSG__DETAIL__THREE_NUMBERS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__test_2_interfaces__msg__ThreeNumbers __attribute__((deprecated))
#else
# define DEPRECATED__test_2_interfaces__msg__ThreeNumbers __declspec(deprecated)
#endif

namespace test_2_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ThreeNumbers_
{
  using Type = ThreeNumbers_<ContainerAllocator>;

  explicit ThreeNumbers_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num1 = 0.0f;
      this->num2 = 0.0f;
      this->num3 = 0.0f;
    }
  }

  explicit ThreeNumbers_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num1 = 0.0f;
      this->num2 = 0.0f;
      this->num3 = 0.0f;
    }
  }

  // field types and members
  using _num1_type =
    float;
  _num1_type num1;
  using _num2_type =
    float;
  _num2_type num2;
  using _num3_type =
    float;
  _num3_type num3;

  // setters for named parameter idiom
  Type & set__num1(
    const float & _arg)
  {
    this->num1 = _arg;
    return *this;
  }
  Type & set__num2(
    const float & _arg)
  {
    this->num2 = _arg;
    return *this;
  }
  Type & set__num3(
    const float & _arg)
  {
    this->num3 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    test_2_interfaces::msg::ThreeNumbers_<ContainerAllocator> *;
  using ConstRawPtr =
    const test_2_interfaces::msg::ThreeNumbers_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<test_2_interfaces::msg::ThreeNumbers_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<test_2_interfaces::msg::ThreeNumbers_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      test_2_interfaces::msg::ThreeNumbers_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<test_2_interfaces::msg::ThreeNumbers_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      test_2_interfaces::msg::ThreeNumbers_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<test_2_interfaces::msg::ThreeNumbers_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<test_2_interfaces::msg::ThreeNumbers_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<test_2_interfaces::msg::ThreeNumbers_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__test_2_interfaces__msg__ThreeNumbers
    std::shared_ptr<test_2_interfaces::msg::ThreeNumbers_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__test_2_interfaces__msg__ThreeNumbers
    std::shared_ptr<test_2_interfaces::msg::ThreeNumbers_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ThreeNumbers_ & other) const
  {
    if (this->num1 != other.num1) {
      return false;
    }
    if (this->num2 != other.num2) {
      return false;
    }
    if (this->num3 != other.num3) {
      return false;
    }
    return true;
  }
  bool operator!=(const ThreeNumbers_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ThreeNumbers_

// alias to use template instance with default allocator
using ThreeNumbers =
  test_2_interfaces::msg::ThreeNumbers_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace test_2_interfaces

#endif  // TEST_2_INTERFACES__MSG__DETAIL__THREE_NUMBERS__STRUCT_HPP_
