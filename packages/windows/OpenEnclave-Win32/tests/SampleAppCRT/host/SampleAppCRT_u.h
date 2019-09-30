/*
 *  This file is auto generated by oeedger8r. DO NOT EDIT.
 */
#ifndef EDGER8R_SAMPLEAPPCRT_U_H
#define EDGER8R_SAMPLEAPPCRT_U_H

#include <openenclave/host.h>

#include "SampleAppCRT_args.h"

OE_EXTERNC_BEGIN

oe_result_t oe_create_SampleAppCRT_enclave(
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
oe_result_t enc_test(
    oe_enclave_t* enclave,
    int* _retval);

/**** OCALL prototypes. ****/
/* There were no ocalls. */

OE_EXTERNC_END

#endif // EDGER8R_SAMPLEAPPCRT_U_H
