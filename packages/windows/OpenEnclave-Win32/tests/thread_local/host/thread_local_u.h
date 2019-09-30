/*
 *  This file is auto generated by oeedger8r. DO NOT EDIT.
 */
#ifndef EDGER8R_THREAD_LOCAL_U_H
#define EDGER8R_THREAD_LOCAL_U_H

#include <openenclave/host.h>

#include "thread_local_args.h"

OE_EXTERNC_BEGIN

oe_result_t oe_create_thread_local_enclave(
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
oe_result_t prepare_for_test(
    oe_enclave_t* enclave,
    int total_num_threads);

oe_result_t enclave_thread(
    oe_enclave_t* enclave,
    int thread_num,
    int iters,
    int step);

/**** OCALL prototypes. ****/
void host_usleep(int microseconds);

OE_EXTERNC_END

#endif // EDGER8R_THREAD_LOCAL_U_H
