/*
 *  This file is auto generated by oeedger8r. DO NOT EDIT.
 */
#ifndef EDGER8R_TLS_ARGS_H
#define EDGER8R_TLS_ARGS_H

#include <stdint.h>
#include <stdlib.h> /* for wchar_t */

/* #include <errno.h> - Errno propagation not enabled so not included. */

#include <openenclave/bits/result.h>

/**** User includes. ****/
/* There were no user includes. */

/**** User defined types in EDL. ****/
/* There were no user defined types. */

/**** ECALL marshalling structs. ****/
typedef struct _get_tls_cert_signed_with_ec_key_args_t
{
    oe_result_t _result;
    oe_result_t _retval;
    unsigned char** data;
    size_t* data_size;
} get_tls_cert_signed_with_ec_key_args_t;

typedef struct _get_tls_cert_signed_with_rsa_key_args_t
{
    oe_result_t _result;
    oe_result_t _retval;
    unsigned char** data;
    size_t* data_size;
} get_tls_cert_signed_with_rsa_key_args_t;

/**** OCALL marshalling structs. ****/
/* There were no ocalls. */

/**** Trusted function IDs ****/
enum
{
    tls_fcn_id_get_tls_cert_signed_with_ec_key = 0,
    tls_fcn_id_get_tls_cert_signed_with_rsa_key = 1,
    tls_fcn_id_trusted_call_id_max = OE_ENUM_MAX
};

/**** Untrusted function IDs. ****/
enum
{

    tls_fcn_id_untrusted_call_max = OE_ENUM_MAX
};

#endif // EDGER8R_TLS_ARGS_H