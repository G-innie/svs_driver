// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from svs_interfaces:msg/SVS.idl
// generated code does not contain a copyright notice

#ifndef SVS_INTERFACES__MSG__DETAIL__SVS__STRUCT_HPP_
#define SVS_INTERFACES__MSG__DETAIL__SVS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__svs_interfaces__msg__SVS __attribute__((deprecated))
#else
# define DEPRECATED__svs_interfaces__msg__SVS __declspec(deprecated)
#endif

namespace svs_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SVS_
{
  using Type = SVS_<ContainerAllocator>;

  explicit SVS_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->svs = 0.0f;
    }
  }

  explicit SVS_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->svs = 0.0f;
    }
  }

  // field types and members
  using _time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _time_type time;
  using _svs_type =
    float;
  _svs_type svs;

  // setters for named parameter idiom
  Type & set__time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->time = _arg;
    return *this;
  }
  Type & set__svs(
    const float & _arg)
  {
    this->svs = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    svs_interfaces::msg::SVS_<ContainerAllocator> *;
  using ConstRawPtr =
    const svs_interfaces::msg::SVS_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<svs_interfaces::msg::SVS_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<svs_interfaces::msg::SVS_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      svs_interfaces::msg::SVS_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<svs_interfaces::msg::SVS_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      svs_interfaces::msg::SVS_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<svs_interfaces::msg::SVS_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<svs_interfaces::msg::SVS_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<svs_interfaces::msg::SVS_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__svs_interfaces__msg__SVS
    std::shared_ptr<svs_interfaces::msg::SVS_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__svs_interfaces__msg__SVS
    std::shared_ptr<svs_interfaces::msg::SVS_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SVS_ & other) const
  {
    if (this->time != other.time) {
      return false;
    }
    if (this->svs != other.svs) {
      return false;
    }
    return true;
  }
  bool operator!=(const SVS_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SVS_

// alias to use template instance with default allocator
using SVS =
  svs_interfaces::msg::SVS_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace svs_interfaces

#endif  // SVS_INTERFACES__MSG__DETAIL__SVS__STRUCT_HPP_
