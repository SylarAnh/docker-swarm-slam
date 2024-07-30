// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from cslam_common_interfaces:msg/GlobalDescriptor.idl
// generated code does not contain a copyright notice

#ifndef CSLAM_COMMON_INTERFACES__MSG__DETAIL__GLOBAL_DESCRIPTOR__FUNCTIONS_H_
#define CSLAM_COMMON_INTERFACES__MSG__DETAIL__GLOBAL_DESCRIPTOR__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "cslam_common_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "cslam_common_interfaces/msg/detail/global_descriptor__struct.h"

/// Initialize msg/GlobalDescriptor message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cslam_common_interfaces__msg__GlobalDescriptor
 * )) before or use
 * cslam_common_interfaces__msg__GlobalDescriptor__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cslam_common_interfaces
bool
cslam_common_interfaces__msg__GlobalDescriptor__init(cslam_common_interfaces__msg__GlobalDescriptor * msg);

/// Finalize msg/GlobalDescriptor message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cslam_common_interfaces
void
cslam_common_interfaces__msg__GlobalDescriptor__fini(cslam_common_interfaces__msg__GlobalDescriptor * msg);

/// Create msg/GlobalDescriptor message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cslam_common_interfaces__msg__GlobalDescriptor__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cslam_common_interfaces
cslam_common_interfaces__msg__GlobalDescriptor *
cslam_common_interfaces__msg__GlobalDescriptor__create();

/// Destroy msg/GlobalDescriptor message.
/**
 * It calls
 * cslam_common_interfaces__msg__GlobalDescriptor__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cslam_common_interfaces
void
cslam_common_interfaces__msg__GlobalDescriptor__destroy(cslam_common_interfaces__msg__GlobalDescriptor * msg);

/// Check for msg/GlobalDescriptor message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cslam_common_interfaces
bool
cslam_common_interfaces__msg__GlobalDescriptor__are_equal(const cslam_common_interfaces__msg__GlobalDescriptor * lhs, const cslam_common_interfaces__msg__GlobalDescriptor * rhs);

/// Copy a msg/GlobalDescriptor message.
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
ROSIDL_GENERATOR_C_PUBLIC_cslam_common_interfaces
bool
cslam_common_interfaces__msg__GlobalDescriptor__copy(
  const cslam_common_interfaces__msg__GlobalDescriptor * input,
  cslam_common_interfaces__msg__GlobalDescriptor * output);

/// Initialize array of msg/GlobalDescriptor messages.
/**
 * It allocates the memory for the number of elements and calls
 * cslam_common_interfaces__msg__GlobalDescriptor__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cslam_common_interfaces
bool
cslam_common_interfaces__msg__GlobalDescriptor__Sequence__init(cslam_common_interfaces__msg__GlobalDescriptor__Sequence * array, size_t size);

/// Finalize array of msg/GlobalDescriptor messages.
/**
 * It calls
 * cslam_common_interfaces__msg__GlobalDescriptor__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cslam_common_interfaces
void
cslam_common_interfaces__msg__GlobalDescriptor__Sequence__fini(cslam_common_interfaces__msg__GlobalDescriptor__Sequence * array);

/// Create array of msg/GlobalDescriptor messages.
/**
 * It allocates the memory for the array and calls
 * cslam_common_interfaces__msg__GlobalDescriptor__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cslam_common_interfaces
cslam_common_interfaces__msg__GlobalDescriptor__Sequence *
cslam_common_interfaces__msg__GlobalDescriptor__Sequence__create(size_t size);

/// Destroy array of msg/GlobalDescriptor messages.
/**
 * It calls
 * cslam_common_interfaces__msg__GlobalDescriptor__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cslam_common_interfaces
void
cslam_common_interfaces__msg__GlobalDescriptor__Sequence__destroy(cslam_common_interfaces__msg__GlobalDescriptor__Sequence * array);

/// Check for msg/GlobalDescriptor message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cslam_common_interfaces
bool
cslam_common_interfaces__msg__GlobalDescriptor__Sequence__are_equal(const cslam_common_interfaces__msg__GlobalDescriptor__Sequence * lhs, const cslam_common_interfaces__msg__GlobalDescriptor__Sequence * rhs);

/// Copy an array of msg/GlobalDescriptor messages.
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
ROSIDL_GENERATOR_C_PUBLIC_cslam_common_interfaces
bool
cslam_common_interfaces__msg__GlobalDescriptor__Sequence__copy(
  const cslam_common_interfaces__msg__GlobalDescriptor__Sequence * input,
  cslam_common_interfaces__msg__GlobalDescriptor__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CSLAM_COMMON_INTERFACES__MSG__DETAIL__GLOBAL_DESCRIPTOR__FUNCTIONS_H_