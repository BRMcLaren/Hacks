/*
 *  This file is auto generated by oeedger8r. DO NOT EDIT.
 */
#ifndef EDGER8R_OCALL_CREATE_U_H
#define EDGER8R_OCALL_CREATE_U_H

#include <openenclave/host.h>

#include "ocall_create_args.h"

OE_EXTERNC_BEGIN

oe_result_t oe_create_ocall_create_enclave(
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
oe_result_t enc_double(
    oe_enclave_t* enclave,
    int* _retval,
    int val);

oe_result_t enc_double_ocall(
    oe_enclave_t* enclave,
    int* _retval,
    int val);

oe_result_t enc_create_enclave(
    oe_enclave_t* enclave,
    oe_result_t* _retval,
    const char* path,
    oe_enclave_type_t type,
    uint32_t flags,
    oe_enclave_t** enclave_out);

oe_result_t enc_test_ocall_enclave(
    oe_enclave_t* enclave,
    int* _retval,
    const char* path,
    uint32_t flag);

/**** OCALL prototypes. ****/
int host_double(int val);

oe_result_t host_create_enclave(
    const char* path,
    oe_enclave_type_t type,
    uint32_t flags,
    oe_enclave_t** enclave_out);

oe_result_t host_call_enc_double(
    oe_enclave_t* _enclave,
    int* ret_val,
    int val);

oe_result_t host_call_enc_double_ocall(
    oe_enclave_t* _enclave,
    int* ret_val,
    int val);

oe_result_t host_terminate_enclave(oe_enclave_t* _enclave);

OE_EXTERNC_END

#endif // EDGER8R_OCALL_CREATE_U_H
