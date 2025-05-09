// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from svs_interfaces:msg/SVS.idl
// generated code does not contain a copyright notice

#ifndef SVS_INTERFACES__MSG__DETAIL__SVS__BUILDER_HPP_
#define SVS_INTERFACES__MSG__DETAIL__SVS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "svs_interfaces/msg/detail/svs__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace svs_interfaces
{

namespace msg
{

namespace builder
{

class Init_SVS_svs
{
public:
  explicit Init_SVS_svs(::svs_interfaces::msg::SVS & msg)
  : msg_(msg)
  {}
  ::svs_interfaces::msg::SVS svs(::svs_interfaces::msg::SVS::_svs_type arg)
  {
    msg_.svs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::svs_interfaces::msg::SVS msg_;
};

class Init_SVS_time
{
public:
  Init_SVS_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SVS_svs time(::svs_interfaces::msg::SVS::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_SVS_svs(msg_);
  }

private:
  ::svs_interfaces::msg::SVS msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::svs_interfaces::msg::SVS>()
{
  return svs_interfaces::msg::builder::Init_SVS_time();
}

}  // namespace svs_interfaces

#endif  // SVS_INTERFACES__MSG__DETAIL__SVS__BUILDER_HPP_
