// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from svs_interfaces:msg/SVS.idl
// generated code does not contain a copyright notice

#ifndef SVS_INTERFACES__MSG__DETAIL__SVS__STRUCT_H_
#define SVS_INTERFACES__MSG__DETAIL__SVS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'time'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/SVS in the package svs_interfaces.
typedef struct svs_interfaces__msg__SVS
{
  builtin_interfaces__msg__Time time;
  float svs;
} svs_interfaces__msg__SVS;

// Struct for a sequence of svs_interfaces__msg__SVS.
typedef struct svs_interfaces__msg__SVS__Sequence
{
  svs_interfaces__msg__SVS * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} svs_interfaces__msg__SVS__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SVS_INTERFACES__MSG__DETAIL__SVS__STRUCT_H_
