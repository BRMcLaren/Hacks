/*
 *  This file is auto generated by oeedger8r. DO NOT EDIT.
 */
#ifndef EDGER8R_GETENCLAVE_U_H
#define EDGER8R_GETENCLAVE_U_H

#include <openenclave/host.h>

#include "getenclave_args.h"

OE_EXTERNC_BEGIN

oe_result_t oe_create_getenclave_enclave(
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
oe_result_t test_get_enclave_ecall(
    oe_enclave_t* enclave,
    oe_result_t* _retval,
    oe_enclave_t* enclaveParam);

/**** OCALL prototypes. ****/
void test_get_enclave_ocall(oe_enclave_t* enclaveParam);

OE_EXTERNC_END

#endif // EDGER8R_GETENCLAVE_U_H