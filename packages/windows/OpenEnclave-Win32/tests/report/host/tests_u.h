/*
 *  This file is auto generated by oeedger8r. DO NOT EDIT.
 */
#ifndef EDGER8R_TESTS_U_H
#define EDGER8R_TESTS_U_H

#include <openenclave/host.h>

#include "tests_args.h"

OE_EXTERNC_BEGIN

oe_result_t oe_create_tests_enclave(
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
oe_result_t test_iso8601_time(oe_enclave_t* enclave);

oe_result_t test_iso8601_time_negative(oe_enclave_t* enclave);

oe_result_t test_verify_tcb_info(
    oe_enclave_t* enclave,
    oe_result_t* _retval,
    const char* tcb_info,
    oe_tcb_level_t* platform_tcb_level,
    oe_parsed_tcb_info_t* parsed_tcb_info);

oe_result_t test_minimum_issue_date(
    oe_enclave_t* enclave,
    oe_datetime_t now);

oe_result_t enclave_test_local_report(
    oe_enclave_t* enclave,
    sgx_target_info_t* target_info);

oe_result_t enclave_test_remote_report(oe_enclave_t* enclave);

oe_result_t enclave_test_parse_report_negative(oe_enclave_t* enclave);

oe_result_t enclave_test_local_verify_report(oe_enclave_t* enclave);

oe_result_t enclave_test_remote_verify_report(oe_enclave_t* enclave);

/**** OCALL prototypes. ****/
/* There were no ocalls. */

OE_EXTERNC_END

#endif // EDGER8R_TESTS_U_H