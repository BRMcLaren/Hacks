/*
 *  This file is auto generated by oeedger8r. DO NOT EDIT.
 */
#ifndef EDGER8R_HOSTCALLS_U_H
#define EDGER8R_HOSTCALLS_U_H

#include <openenclave/host.h>

#include "hostcalls_args.h"

OE_EXTERNC_BEGIN

oe_result_t oe_create_hostcalls_enclave(
    const char* path,
    oe_enclave_type_t type,
    uint32_t flags,
#ifdef OE_CONTEXT_SWITCHLESS_EXPERIMENTAL_FEATURE
    const oe_enclave_config_t* configs,
    uint32_t config_count,
#else
    const void* config,
    uint32_t config_size,
#endif
    oe_enclave_t** enclave);

/**** ECALL prototypes. ****/
oe_result_t test_host_malloc(
    oe_enclave_t* enclave,
    size_t in_size,
    void_ptr* out_ptr);

oe_result_t test_host_calloc(
    oe_enclave_t* enclave,
    size_t in_num,
    size_t in_size,
    void_ptr* out_ptr);

oe_result_t test_host_realloc(
    oe_enclave_t* enclave,
    void_ptr in_ptr,
    size_t old_size,
    size_t new_size,
    void_ptr* out_ptr);

oe_result_t test_host_strndup(
    oe_enclave_t* enclave,
    const char* in_str,
    size_t in_size,
    char** out_str);

oe_result_t test_host_free(
    oe_enclave_t* enclave,
    void_ptr in_ptr);

/**** OCALL prototypes. ****/
/* There were no ocalls. */

OE_EXTERNC_END

#endif // EDGER8R_HOSTCALLS_U_H