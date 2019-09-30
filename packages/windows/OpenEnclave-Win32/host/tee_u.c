/*
 *  This file is auto generated by oeedger8r. DO NOT EDIT.
 */
#include "tee_u.h"

#include <openenclave/edger8r/host.h>

#include <stdlib.h>
#include <string.h>
#include <wchar.h>

OE_EXTERNC_BEGIN

/**** ECALL function wrappers. ****/

oe_result_t oe_log_init_ecall(
    oe_enclave_t* enclave,
    const char* enclave_path,
    uint32_t log_level)
{
    oe_result_t _result = OE_FAILURE;

    /* Marshalling struct. */
    oe_log_init_ecall_args_t _args, *_pargs_in = NULL, *_pargs_out = NULL;

    /* Marshalling buffer and sizes. */
    size_t _input_buffer_size = 0;
    size_t _output_buffer_size = 0;
    size_t _total_buffer_size = 0;
    uint8_t* _buffer = NULL;
    uint8_t* _input_buffer = NULL;
    uint8_t* _output_buffer = NULL;
    size_t _input_buffer_offset = 0;
    size_t _output_buffer_offset = 0;
    size_t _output_bytes_written = 0;

    /* Deep copy buffer. */
    /* No pointers to save for deep copy. */

    /* Fill marshalling struct. */
    memset(&_args, 0, sizeof(_args));
    _args.enclave_path = (char*)enclave_path;
    _args.enclave_path_len = (enclave_path) ? (strlen(enclave_path) + 1) : 0;
    _args.log_level = log_level;

    /* Compute input buffer size. Include in and in-out parameters. */
    OE_ADD_SIZE(_input_buffer_size, sizeof(oe_log_init_ecall_args_t));
    if (enclave_path)
        OE_ADD_SIZE(_input_buffer_size, _args.enclave_path_len * sizeof(char));
    
    /* Compute output buffer size. Include out and in-out parameters. */
    OE_ADD_SIZE(_output_buffer_size, sizeof(oe_log_init_ecall_args_t));
    /* There were no corresponding parameters. */
    
    /* Allocate marshalling buffer. */
    _total_buffer_size = _input_buffer_size;
    OE_ADD_SIZE(_total_buffer_size, _output_buffer_size);
    _buffer = (uint8_t*)malloc(_total_buffer_size);
    _input_buffer = _buffer;
    _output_buffer = _buffer + _input_buffer_size;
    if (_buffer == NULL)
    {
        _result = OE_OUT_OF_MEMORY;
        goto done;
    }
    
    /* Serialize buffer inputs (in and in-out parameters). */
    _pargs_in = (oe_log_init_ecall_args_t*)_input_buffer;
    OE_ADD_SIZE(_input_buffer_offset, sizeof(*_pargs_in));
    if (enclave_path)
        OE_WRITE_IN_PARAM(enclave_path, _args.enclave_path_len * sizeof(char), char*);
    
    /* Copy args structure (now filled) to input buffer. */
    memcpy(_pargs_in, &_args, sizeof(*_pargs_in));

    /* Call enclave function. */
    if ((_result = oe_call_enclave_function(
             enclave,
             tee_fcn_id_oe_log_init_ecall,
             _input_buffer,
             _input_buffer_size,
             _output_buffer,
             _output_buffer_size,
             &_output_bytes_written)) != OE_OK)
        goto done;

    /* Setup output arg struct pointer. */
    _pargs_out = (oe_log_init_ecall_args_t*)_output_buffer;
    OE_ADD_SIZE(_output_buffer_offset, sizeof(*_pargs_out));
    
    /* Check if the call succeeded. */
    if ((_result = _pargs_out->_result) != OE_OK)
        goto done;
    
    /* Currently exactly _output_buffer_size bytes must be written. */
    if (_output_bytes_written != _output_buffer_size)
    {
        _result = OE_FAILURE;
        goto done;
    }
    
    /* Unmarshal return value and out, in-out parameters. */
    /* No return value. */
    /* No pointers to restore for deep copy. */
    /* There were no out nor in-out parameters. */

    _result = OE_OK;

done:
    if (_buffer)
        free(_buffer);

    /* No `_ptrs` to free for deep copy. */

    return _result;
}

oe_result_t oe_verify_report_ecall(
    oe_enclave_t* enclave,
    oe_result_t* _retval,
    const void* report,
    size_t report_size)
{
    oe_result_t _result = OE_FAILURE;

    /* Marshalling struct. */
    oe_verify_report_ecall_args_t _args, *_pargs_in = NULL, *_pargs_out = NULL;

    /* Marshalling buffer and sizes. */
    size_t _input_buffer_size = 0;
    size_t _output_buffer_size = 0;
    size_t _total_buffer_size = 0;
    uint8_t* _buffer = NULL;
    uint8_t* _input_buffer = NULL;
    uint8_t* _output_buffer = NULL;
    size_t _input_buffer_offset = 0;
    size_t _output_buffer_offset = 0;
    size_t _output_bytes_written = 0;

    /* Deep copy buffer. */
    /* No pointers to save for deep copy. */

    /* Fill marshalling struct. */
    memset(&_args, 0, sizeof(_args));
    _args.report = (void*)report;
    _args.report_size = report_size;

    /* Compute input buffer size. Include in and in-out parameters. */
    OE_ADD_SIZE(_input_buffer_size, sizeof(oe_verify_report_ecall_args_t));
    if (report)
        OE_ADD_SIZE(_input_buffer_size, _args.report_size);
    
    /* Compute output buffer size. Include out and in-out parameters. */
    OE_ADD_SIZE(_output_buffer_size, sizeof(oe_verify_report_ecall_args_t));
    /* There were no corresponding parameters. */
    
    /* Allocate marshalling buffer. */
    _total_buffer_size = _input_buffer_size;
    OE_ADD_SIZE(_total_buffer_size, _output_buffer_size);
    _buffer = (uint8_t*)malloc(_total_buffer_size);
    _input_buffer = _buffer;
    _output_buffer = _buffer + _input_buffer_size;
    if (_buffer == NULL)
    {
        _result = OE_OUT_OF_MEMORY;
        goto done;
    }
    
    /* Serialize buffer inputs (in and in-out parameters). */
    _pargs_in = (oe_verify_report_ecall_args_t*)_input_buffer;
    OE_ADD_SIZE(_input_buffer_offset, sizeof(*_pargs_in));
    if (report)
        OE_WRITE_IN_PARAM(report, _args.report_size, void*);
    
    /* Copy args structure (now filled) to input buffer. */
    memcpy(_pargs_in, &_args, sizeof(*_pargs_in));

    /* Call enclave function. */
    if ((_result = oe_call_enclave_function(
             enclave,
             tee_fcn_id_oe_verify_report_ecall,
             _input_buffer,
             _input_buffer_size,
             _output_buffer,
             _output_buffer_size,
             &_output_bytes_written)) != OE_OK)
        goto done;

    /* Setup output arg struct pointer. */
    _pargs_out = (oe_verify_report_ecall_args_t*)_output_buffer;
    OE_ADD_SIZE(_output_buffer_offset, sizeof(*_pargs_out));
    
    /* Check if the call succeeded. */
    if ((_result = _pargs_out->_result) != OE_OK)
        goto done;
    
    /* Currently exactly _output_buffer_size bytes must be written. */
    if (_output_bytes_written != _output_buffer_size)
    {
        _result = OE_FAILURE;
        goto done;
    }
    
    /* Unmarshal return value and out, in-out parameters. */
    *_retval = _pargs_out->_retval;
    /* No pointers to restore for deep copy. */
    /* There were no out nor in-out parameters. */

    _result = OE_OK;

done:
    if (_buffer)
        free(_buffer);

    /* No `_ptrs` to free for deep copy. */

    return _result;
}

oe_result_t oe_get_public_key_ecall(
    oe_enclave_t* enclave,
    oe_result_t* _retval,
    const oe_asymmetric_key_params_t* key_params,
    const void* key_info,
    size_t key_info_size,
    void* key_buffer,
    size_t key_buffer_size,
    size_t* key_buffer_size_out)
{
    oe_result_t _result = OE_FAILURE;

    /* Marshalling struct. */
    oe_get_public_key_ecall_args_t _args, *_pargs_in = NULL, *_pargs_out = NULL;

    /* Marshalling buffer and sizes. */
    size_t _input_buffer_size = 0;
    size_t _output_buffer_size = 0;
    size_t _total_buffer_size = 0;
    uint8_t* _buffer = NULL;
    uint8_t* _input_buffer = NULL;
    uint8_t* _output_buffer = NULL;
    size_t _input_buffer_offset = 0;
    size_t _output_buffer_offset = 0;
    size_t _output_bytes_written = 0;

    /* Deep copy buffer. */
    /* No pointers to save for deep copy. */

    /* Fill marshalling struct. */
    memset(&_args, 0, sizeof(_args));
    _args.key_params = (oe_asymmetric_key_params_t*)key_params;
    _args.key_info = (void*)key_info;
    _args.key_info_size = key_info_size;
    _args.key_buffer = (void*)key_buffer;
    _args.key_buffer_size = key_buffer_size;
    _args.key_buffer_size_out = (size_t*)key_buffer_size_out;

    /* Compute input buffer size. Include in and in-out parameters. */
    OE_ADD_SIZE(_input_buffer_size, sizeof(oe_get_public_key_ecall_args_t));
    if (key_params)
        OE_ADD_SIZE(_input_buffer_size, sizeof(oe_asymmetric_key_params_t));
    if (key_info)
        OE_ADD_SIZE(_input_buffer_size, _args.key_info_size);
    
    /* Compute output buffer size. Include out and in-out parameters. */
    OE_ADD_SIZE(_output_buffer_size, sizeof(oe_get_public_key_ecall_args_t));
    if (key_buffer)
        OE_ADD_SIZE(_output_buffer_size, _args.key_buffer_size);
    if (key_buffer_size_out)
        OE_ADD_SIZE(_output_buffer_size, sizeof(size_t));
    
    /* Allocate marshalling buffer. */
    _total_buffer_size = _input_buffer_size;
    OE_ADD_SIZE(_total_buffer_size, _output_buffer_size);
    _buffer = (uint8_t*)malloc(_total_buffer_size);
    _input_buffer = _buffer;
    _output_buffer = _buffer + _input_buffer_size;
    if (_buffer == NULL)
    {
        _result = OE_OUT_OF_MEMORY;
        goto done;
    }
    
    /* Serialize buffer inputs (in and in-out parameters). */
    _pargs_in = (oe_get_public_key_ecall_args_t*)_input_buffer;
    OE_ADD_SIZE(_input_buffer_offset, sizeof(*_pargs_in));
    if (key_params)
        OE_WRITE_IN_PARAM(key_params, sizeof(oe_asymmetric_key_params_t), oe_asymmetric_key_params_t*);
    if (key_info)
        OE_WRITE_IN_PARAM(key_info, _args.key_info_size, void*);
    
    /* Copy args structure (now filled) to input buffer. */
    memcpy(_pargs_in, &_args, sizeof(*_pargs_in));

    /* Call enclave function. */
    if ((_result = oe_call_enclave_function(
             enclave,
             tee_fcn_id_oe_get_public_key_ecall,
             _input_buffer,
             _input_buffer_size,
             _output_buffer,
             _output_buffer_size,
             &_output_bytes_written)) != OE_OK)
        goto done;

    /* Setup output arg struct pointer. */
    _pargs_out = (oe_get_public_key_ecall_args_t*)_output_buffer;
    OE_ADD_SIZE(_output_buffer_offset, sizeof(*_pargs_out));
    
    /* Check if the call succeeded. */
    if ((_result = _pargs_out->_result) != OE_OK)
        goto done;
    
    /* Currently exactly _output_buffer_size bytes must be written. */
    if (_output_bytes_written != _output_buffer_size)
    {
        _result = OE_FAILURE;
        goto done;
    }
    
    /* Unmarshal return value and out, in-out parameters. */
    *_retval = _pargs_out->_retval;
    /* No pointers to restore for deep copy. */
    OE_READ_OUT_PARAM(key_buffer, (size_t)(_args.key_buffer_size));
    OE_READ_OUT_PARAM(key_buffer_size_out, (size_t)(sizeof(size_t)));

    _result = OE_OK;

done:
    if (_buffer)
        free(_buffer);

    /* No `_ptrs` to free for deep copy. */

    return _result;
}

oe_result_t oe_get_public_key_by_policy_ecall(
    oe_enclave_t* enclave,
    oe_result_t* _retval,
    uint32_t seal_policy,
    const oe_asymmetric_key_params_t* key_params,
    void* key_buffer,
    size_t key_buffer_size,
    size_t* key_buffer_size_out,
    void* key_info,
    size_t key_info_size,
    size_t* key_info_size_out)
{
    oe_result_t _result = OE_FAILURE;

    /* Marshalling struct. */
    oe_get_public_key_by_policy_ecall_args_t _args, *_pargs_in = NULL, *_pargs_out = NULL;

    /* Marshalling buffer and sizes. */
    size_t _input_buffer_size = 0;
    size_t _output_buffer_size = 0;
    size_t _total_buffer_size = 0;
    uint8_t* _buffer = NULL;
    uint8_t* _input_buffer = NULL;
    uint8_t* _output_buffer = NULL;
    size_t _input_buffer_offset = 0;
    size_t _output_buffer_offset = 0;
    size_t _output_bytes_written = 0;

    /* Deep copy buffer. */
    /* No pointers to save for deep copy. */

    /* Fill marshalling struct. */
    memset(&_args, 0, sizeof(_args));
    _args.seal_policy = seal_policy;
    _args.key_params = (oe_asymmetric_key_params_t*)key_params;
    _args.key_buffer = (void*)key_buffer;
    _args.key_buffer_size = key_buffer_size;
    _args.key_buffer_size_out = (size_t*)key_buffer_size_out;
    _args.key_info = (void*)key_info;
    _args.key_info_size = key_info_size;
    _args.key_info_size_out = (size_t*)key_info_size_out;

    /* Compute input buffer size. Include in and in-out parameters. */
    OE_ADD_SIZE(_input_buffer_size, sizeof(oe_get_public_key_by_policy_ecall_args_t));
    if (key_params)
        OE_ADD_SIZE(_input_buffer_size, sizeof(oe_asymmetric_key_params_t));
    
    /* Compute output buffer size. Include out and in-out parameters. */
    OE_ADD_SIZE(_output_buffer_size, sizeof(oe_get_public_key_by_policy_ecall_args_t));
    if (key_buffer)
        OE_ADD_SIZE(_output_buffer_size, _args.key_buffer_size);
    if (key_buffer_size_out)
        OE_ADD_SIZE(_output_buffer_size, sizeof(size_t));
    if (key_info)
        OE_ADD_SIZE(_output_buffer_size, _args.key_info_size);
    if (key_info_size_out)
        OE_ADD_SIZE(_output_buffer_size, sizeof(size_t));
    
    /* Allocate marshalling buffer. */
    _total_buffer_size = _input_buffer_size;
    OE_ADD_SIZE(_total_buffer_size, _output_buffer_size);
    _buffer = (uint8_t*)malloc(_total_buffer_size);
    _input_buffer = _buffer;
    _output_buffer = _buffer + _input_buffer_size;
    if (_buffer == NULL)
    {
        _result = OE_OUT_OF_MEMORY;
        goto done;
    }
    
    /* Serialize buffer inputs (in and in-out parameters). */
    _pargs_in = (oe_get_public_key_by_policy_ecall_args_t*)_input_buffer;
    OE_ADD_SIZE(_input_buffer_offset, sizeof(*_pargs_in));
    if (key_params)
        OE_WRITE_IN_PARAM(key_params, sizeof(oe_asymmetric_key_params_t), oe_asymmetric_key_params_t*);
    
    /* Copy args structure (now filled) to input buffer. */
    memcpy(_pargs_in, &_args, sizeof(*_pargs_in));

    /* Call enclave function. */
    if ((_result = oe_call_enclave_function(
             enclave,
             tee_fcn_id_oe_get_public_key_by_policy_ecall,
             _input_buffer,
             _input_buffer_size,
             _output_buffer,
             _output_buffer_size,
             &_output_bytes_written)) != OE_OK)
        goto done;

    /* Setup output arg struct pointer. */
    _pargs_out = (oe_get_public_key_by_policy_ecall_args_t*)_output_buffer;
    OE_ADD_SIZE(_output_buffer_offset, sizeof(*_pargs_out));
    
    /* Check if the call succeeded. */
    if ((_result = _pargs_out->_result) != OE_OK)
        goto done;
    
    /* Currently exactly _output_buffer_size bytes must be written. */
    if (_output_bytes_written != _output_buffer_size)
    {
        _result = OE_FAILURE;
        goto done;
    }
    
    /* Unmarshal return value and out, in-out parameters. */
    *_retval = _pargs_out->_retval;
    /* No pointers to restore for deep copy. */
    OE_READ_OUT_PARAM(key_buffer, (size_t)(_args.key_buffer_size));
    OE_READ_OUT_PARAM(key_buffer_size_out, (size_t)(sizeof(size_t)));
    OE_READ_OUT_PARAM(key_info, (size_t)(_args.key_info_size));
    OE_READ_OUT_PARAM(key_info_size_out, (size_t)(sizeof(size_t)));

    _result = OE_OK;

done:
    if (_buffer)
        free(_buffer);

    /* No `_ptrs` to free for deep copy. */

    return _result;
}

/**** OCALL functions. ****/

void ocall_oe_log_ocall(
    uint8_t* input_buffer,
    size_t input_buffer_size,
    uint8_t* output_buffer,
    size_t output_buffer_size,
    size_t* output_bytes_written)
{
    oe_result_t _result = OE_FAILURE;
    OE_UNUSED(input_buffer_size);

    /* Prepare parameters. */
    oe_log_ocall_args_t* pargs_in = (oe_log_ocall_args_t*)input_buffer;
    oe_log_ocall_args_t* pargs_out = (oe_log_ocall_args_t*)output_buffer;

    size_t input_buffer_offset = 0;
    size_t output_buffer_offset = 0;
    OE_ADD_SIZE(input_buffer_offset, sizeof(*pargs_in));
    OE_ADD_SIZE(output_buffer_offset, sizeof(*pargs_out));

    /* Make sure input and output buffers are valid. */
    if (!input_buffer || !output_buffer) {
        _result = OE_INVALID_PARAMETER;
        goto done;
    }

    /* Set in and in-out pointers. */
    if (pargs_in->message)
        OE_SET_IN_POINTER(message, pargs_in->message_len * sizeof(char), char*);

    /* Set out and in-out pointers. */
    /* In-out parameters are copied to output buffer. */
    /* There were no out nor in-out parameters. */

    /* Call user function. */
    oe_log_ocall(
        pargs_in->log_level,
        (const char*)pargs_in->message);

    /* Propagate errno back to enclave. */
    /* Errno propagation not enabled. */

    /* Success. */
    _result = OE_OK;
    *output_bytes_written = output_buffer_offset;

done:
    if (pargs_out && output_buffer_size >= sizeof(*pargs_out))
        pargs_out->_result = _result;
}

void ocall_oe_realloc_ocall(
    uint8_t* input_buffer,
    size_t input_buffer_size,
    uint8_t* output_buffer,
    size_t output_buffer_size,
    size_t* output_bytes_written)
{
    oe_result_t _result = OE_FAILURE;
    OE_UNUSED(input_buffer_size);

    /* Prepare parameters. */
    oe_realloc_ocall_args_t* pargs_in = (oe_realloc_ocall_args_t*)input_buffer;
    oe_realloc_ocall_args_t* pargs_out = (oe_realloc_ocall_args_t*)output_buffer;

    size_t input_buffer_offset = 0;
    size_t output_buffer_offset = 0;
    OE_ADD_SIZE(input_buffer_offset, sizeof(*pargs_in));
    OE_ADD_SIZE(output_buffer_offset, sizeof(*pargs_out));

    /* Make sure input and output buffers are valid. */
    if (!input_buffer || !output_buffer) {
        _result = OE_INVALID_PARAMETER;
        goto done;
    }

    /* Set in and in-out pointers. */
    /* There were no in nor in-out parameters. */

    /* Set out and in-out pointers. */
    /* In-out parameters are copied to output buffer. */
    /* There were no out nor in-out parameters. */

    /* Call user function. */
    pargs_out->_retval = oe_realloc_ocall(
        pargs_in->ptr,
        pargs_in->size);

    /* Propagate errno back to enclave. */
    /* Errno propagation not enabled. */

    /* Success. */
    _result = OE_OK;
    *output_bytes_written = output_buffer_offset;

done:
    if (pargs_out && output_buffer_size >= sizeof(*pargs_out))
        pargs_out->_result = _result;
}

void ocall_oe_write_ocall(
    uint8_t* input_buffer,
    size_t input_buffer_size,
    uint8_t* output_buffer,
    size_t output_buffer_size,
    size_t* output_bytes_written)
{
    oe_result_t _result = OE_FAILURE;
    OE_UNUSED(input_buffer_size);

    /* Prepare parameters. */
    oe_write_ocall_args_t* pargs_in = (oe_write_ocall_args_t*)input_buffer;
    oe_write_ocall_args_t* pargs_out = (oe_write_ocall_args_t*)output_buffer;

    size_t input_buffer_offset = 0;
    size_t output_buffer_offset = 0;
    OE_ADD_SIZE(input_buffer_offset, sizeof(*pargs_in));
    OE_ADD_SIZE(output_buffer_offset, sizeof(*pargs_out));

    /* Make sure input and output buffers are valid. */
    if (!input_buffer || !output_buffer) {
        _result = OE_INVALID_PARAMETER;
        goto done;
    }

    /* Set in and in-out pointers. */
    if (pargs_in->str)
        OE_SET_IN_POINTER(str, pargs_in->str_len * sizeof(char), char*);

    /* Set out and in-out pointers. */
    /* In-out parameters are copied to output buffer. */
    /* There were no out nor in-out parameters. */

    /* Call user function. */
    oe_write_ocall(
        pargs_in->device,
        (const char*)pargs_in->str,
        pargs_in->maxlen);

    /* Propagate errno back to enclave. */
    /* Errno propagation not enabled. */

    /* Success. */
    _result = OE_OK;
    *output_bytes_written = output_buffer_offset;

done:
    if (pargs_out && output_buffer_size >= sizeof(*pargs_out))
        pargs_out->_result = _result;
}

/**** OCALL function table. ****/

static oe_ocall_func_t __tee_ocall_function_table[] = {
    (oe_ocall_func_t) ocall_oe_log_ocall,
    (oe_ocall_func_t) ocall_oe_realloc_ocall,
    (oe_ocall_func_t) ocall_oe_write_ocall,
    NULL
};

oe_result_t oe_create_tee_enclave(
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
    oe_enclave_t** enclave)
{
    return oe_create_enclave(
               path,
               type,
               flags,
#ifdef OE_CONTEXT_SWITCHLESS_EXPERIMENTAL_FEATURE
               configs,
               config_count,
#else
               config,
               config_size,
#endif
               __tee_ocall_function_table,
               3,
               enclave);
}

OE_EXTERNC_END