// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from svs_interfaces:msg/SVS.idl
// generated code does not contain a copyright notice
#include "svs_interfaces/msg/detail/svs__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `time`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
svs_interfaces__msg__SVS__init(svs_interfaces__msg__SVS * msg)
{
  if (!msg) {
    return false;
  }
  // time
  if (!builtin_interfaces__msg__Time__init(&msg->time)) {
    svs_interfaces__msg__SVS__fini(msg);
    return false;
  }
  // svs
  return true;
}

void
svs_interfaces__msg__SVS__fini(svs_interfaces__msg__SVS * msg)
{
  if (!msg) {
    return;
  }
  // time
  builtin_interfaces__msg__Time__fini(&msg->time);
  // svs
}

bool
svs_interfaces__msg__SVS__are_equal(const svs_interfaces__msg__SVS * lhs, const svs_interfaces__msg__SVS * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->time), &(rhs->time)))
  {
    return false;
  }
  // svs
  if (lhs->svs != rhs->svs) {
    return false;
  }
  return true;
}

bool
svs_interfaces__msg__SVS__copy(
  const svs_interfaces__msg__SVS * input,
  svs_interfaces__msg__SVS * output)
{
  if (!input || !output) {
    return false;
  }
  // time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->time), &(output->time)))
  {
    return false;
  }
  // svs
  output->svs = input->svs;
  return true;
}

svs_interfaces__msg__SVS *
svs_interfaces__msg__SVS__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  svs_interfaces__msg__SVS * msg = (svs_interfaces__msg__SVS *)allocator.allocate(sizeof(svs_interfaces__msg__SVS), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(svs_interfaces__msg__SVS));
  bool success = svs_interfaces__msg__SVS__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
svs_interfaces__msg__SVS__destroy(svs_interfaces__msg__SVS * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    svs_interfaces__msg__SVS__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
svs_interfaces__msg__SVS__Sequence__init(svs_interfaces__msg__SVS__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  svs_interfaces__msg__SVS * data = NULL;

  if (size) {
    data = (svs_interfaces__msg__SVS *)allocator.zero_allocate(size, sizeof(svs_interfaces__msg__SVS), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = svs_interfaces__msg__SVS__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        svs_interfaces__msg__SVS__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
svs_interfaces__msg__SVS__Sequence__fini(svs_interfaces__msg__SVS__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      svs_interfaces__msg__SVS__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

svs_interfaces__msg__SVS__Sequence *
svs_interfaces__msg__SVS__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  svs_interfaces__msg__SVS__Sequence * array = (svs_interfaces__msg__SVS__Sequence *)allocator.allocate(sizeof(svs_interfaces__msg__SVS__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = svs_interfaces__msg__SVS__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
svs_interfaces__msg__SVS__Sequence__destroy(svs_interfaces__msg__SVS__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    svs_interfaces__msg__SVS__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
svs_interfaces__msg__SVS__Sequence__are_equal(const svs_interfaces__msg__SVS__Sequence * lhs, const svs_interfaces__msg__SVS__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!svs_interfaces__msg__SVS__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
svs_interfaces__msg__SVS__Sequence__copy(
  const svs_interfaces__msg__SVS__Sequence * input,
  svs_interfaces__msg__SVS__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(svs_interfaces__msg__SVS);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    svs_interfaces__msg__SVS * data =
      (svs_interfaces__msg__SVS *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!svs_interfaces__msg__SVS__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          svs_interfaces__msg__SVS__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!svs_interfaces__msg__SVS__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
