// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from svs_interfaces:msg/SVS.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "svs_interfaces/msg/detail/svs__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace svs_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SVS_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) svs_interfaces::msg::SVS(_init);
}

void SVS_fini_function(void * message_memory)
{
  auto typed_message = static_cast<svs_interfaces::msg::SVS *>(message_memory);
  typed_message->~SVS();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SVS_message_member_array[2] = {
  {
    "time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(svs_interfaces::msg::SVS, time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "svs",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(svs_interfaces::msg::SVS, svs),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SVS_message_members = {
  "svs_interfaces::msg",  // message namespace
  "SVS",  // message name
  2,  // number of fields
  sizeof(svs_interfaces::msg::SVS),
  SVS_message_member_array,  // message members
  SVS_init_function,  // function to initialize message memory (memory has to be allocated)
  SVS_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SVS_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SVS_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace svs_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<svs_interfaces::msg::SVS>()
{
  return &::svs_interfaces::msg::rosidl_typesupport_introspection_cpp::SVS_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, svs_interfaces, msg, SVS)() {
  return &::svs_interfaces::msg::rosidl_typesupport_introspection_cpp::SVS_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
