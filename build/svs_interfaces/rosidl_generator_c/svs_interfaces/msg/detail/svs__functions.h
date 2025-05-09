// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from svs_interfaces:msg/SVS.idl
// generated code does not contain a copyright notice

#ifndef SVS_INTERFACES__MSG__DETAIL__SVS__FUNCTIONS_H_
#define SVS_INTERFACES__MSG__DETAIL__SVS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "svs_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "svs_interfaces/msg/detail/svs__struct.h"

/// Initialize msg/SVS message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * svs_interfaces__msg__SVS
 * )) before or use
 * svs_interfaces__msg__SVS__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_svs_interfaces
bool
svs_interfaces__msg__SVS__init(svs_interfaces__msg__SVS * msg);

/// Finalize msg/SVS message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_svs_interfaces
void
svs_interfaces__msg__SVS__fini(svs_interfaces__msg__SVS * msg);

/// Create msg/SVS message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * svs_interfaces__msg__SVS__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_svs_interfaces
svs_interfaces__msg__SVS *
svs_interfaces__msg__SVS__create();

/// Destroy msg/SVS message.
/**
 * It calls
 * svs_interfaces__msg__SVS__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_svs_interfaces
void
svs_interfaces__msg__SVS__destroy(svs_interfaces__msg__SVS * msg);

/// Check for msg/SVS message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_svs_interfaces
bool
svs_interfaces__msg__SVS__are_equal(const svs_interfaces__msg__SVS * lhs, const svs_interfaces__msg__SVS * rhs);

/// Copy a msg/SVS message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_svs_interfaces
bool
svs_interfaces__msg__SVS__copy(
  const svs_interfaces__msg__SVS * input,
  svs_interfaces__msg__SVS * output);

/// Initialize array of msg/SVS messages.
/**
 * It allocates the memory for the number of elements and calls
 * svs_interfaces__msg__SVS__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_svs_interfaces
bool
svs_interfaces__msg__SVS__Sequence__init(svs_interfaces__msg__SVS__Sequence * array, size_t size);

/// Finalize array of msg/SVS messages.
/**
 * It calls
 * svs_interfaces__msg__SVS__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_svs_interfaces
void
svs_interfaces__msg__SVS__Sequence__fini(svs_interfaces__msg__SVS__Sequence * array);

/// Create array of msg/SVS messages.
/**
 * It allocates the memory for the array and calls
 * svs_interfaces__msg__SVS__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_svs_interfaces
svs_interfaces__msg__SVS__Sequence *
svs_interfaces__msg__SVS__Sequence__create(size_t size);

/// Destroy array of msg/SVS messages.
/**
 * It calls
 * svs_interfaces__msg__SVS__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_svs_interfaces
void
svs_interfaces__msg__SVS__Sequence__destroy(svs_interfaces__msg__SVS__Sequence * array);

/// Check for msg/SVS message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_svs_interfaces
bool
svs_interfaces__msg__SVS__Sequence__are_equal(const svs_interfaces__msg__SVS__Sequence * lhs, const svs_interfaces__msg__SVS__Sequence * rhs);

/// Copy an array of msg/SVS messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_svs_interfaces
bool
svs_interfaces__msg__SVS__Sequence__copy(
  const svs_interfaces__msg__SVS__Sequence * input,
  svs_interfaces__msg__SVS__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SVS_INTERFACES__MSG__DETAIL__SVS__FUNCTIONS_H_
