/* Copyright (c) 2013, Linaro Limited
 * All rights reserved.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 */

/**
 * @file
 *
 * Standard C language types and definitions for ODP.
 */

#ifndef ODP_PLAT_STD_TYPES_H_
#define ODP_PLAT_STD_TYPES_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>
#include <inttypes.h>
#include <limits.h>

/** @addtogroup odp_system ODP SYSTEM
 *  @{
 */

typedef int odp_bool_t;

/**
 * @}
 */
enum odp_boolean
{
    ODP_FALSE = false,  /**< False value */
    ODP_TRUE  = true    /**< True value  */
};

#include <odp/api/std_types.h>

#ifdef __cplusplus
}
#endif

#endif
