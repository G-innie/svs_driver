// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from svs_interfaces:msg/SVS.idl
// generated code does not contain a copyright notice

#ifndef SVS_INTERFACES__MSG__DETAIL__SVS__TRAITS_HPP_
#define SVS_INTERFACES__MSG__DETAIL__SVS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "svs_interfaces/msg/detail/svs__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace svs_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const SVS & msg,
  std::ostream & out)
{
  out << "{";
  // member: time
  {
    out << "time: ";
    to_flow_style_yaml(msg.time, out);
    out << ", ";
  }

  // member: svs
  {
    out << "svs: ";
    rosidl_generator_traits::value_to_yaml(msg.svs, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SVS & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time:\n";
    to_block_style_yaml(msg.time, out, indentation + 2);
  }

  // member: svs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "svs: ";
    rosidl_generator_traits::value_to_yaml(msg.svs, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SVS & msg, bool use_flow_style = false)
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

}  // namespace svs_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use svs_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const svs_interfaces::msg::SVS & msg,
  std::ostream & out, size_t indentation = 0)
{
  svs_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use svs_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const svs_interfaces::msg::SVS & msg)
{
  return svs_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<svs_interfaces::msg::SVS>()
{
  return "svs_interfaces::msg::SVS";
}

template<>
inline const char * name<svs_interfaces::msg::SVS>()
{
  return "svs_interfaces/msg/SVS";
}

template<>
struct has_fixed_size<svs_interfaces::msg::SVS>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<svs_interfaces::msg::SVS>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<svs_interfaces::msg::SVS>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SVS_INTERFACES__MSG__DETAIL__SVS__TRAITS_HPP_
