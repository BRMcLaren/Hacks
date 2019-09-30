/*
 *  This file is auto generated by oeedger8r. DO NOT EDIT.
 */
#ifndef EDGER8R_TLS_U_H
#define EDGER8R_TLS_U_H

#include <openenclave/host.h>

#include "tls_args.h"

OE_EXTERNC_BEGIN

oe_result_t oe_create_tls_enclave(
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
oe_result_t get_tls_cert_signed_with_ec_key(
    oe_enclave_t* enclave,
    oe_result_t* _retval,
    unsigned char** data,
    size_t* data_size);

oe_result_t get_tls_cert_signed_with_rsa_key(
    oe_enclave_t* enclave,
    oe_result_t* _retval,
    unsigned char** data,
    size_t* data_size);

/**** OCALL prototypes. ****/
/* There were no ocalls. */

OE_EXTERNC_END

#endif // EDGER8R_TLS_U_H
