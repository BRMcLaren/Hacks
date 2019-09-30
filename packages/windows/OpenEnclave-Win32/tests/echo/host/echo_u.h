/*
 *  This file is auto generated by oeedger8r. DO NOT EDIT.
 */
#ifndef EDGER8R_ECHO_U_H
#define EDGER8R_ECHO_U_H

#include <openenclave/host.h>

#include "echo_args.h"

OE_EXTERNC_BEGIN

oe_result_t oe_create_echo_enclave(
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
oe_result_t enc_echo(
    oe_enclave_t* enclave,
    int* _retval,
    char* in,
    char out[100]);

/**** OCALL prototypes. ****/
int host_echo(
    char* in,
    char out[100],
    char* str1,
    char* str2,
    char str3[100]);

OE_EXTERNC_END

#endif // EDGER8R_ECHO_U_H