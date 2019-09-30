/*
 *  This file is auto generated by oeedger8r. DO NOT EDIT.
 */
#include "mbed_u.h"

#include <openenclave/edger8r/host.h>

#include <stdlib.h>
#include <string.h>
#include <wchar.h>

OE_EXTERNC_BEGIN

/**** ECALL function wrappers. ****/

oe_result_t test(
    oe_enclave_t* enclave,
    int* _retval,
    const char* in_testname,
    char* out_testname,
    mbed_args* args)
{
    oe_result_t _result = OE_FAILURE;

    /* Marshalling struct. */
    test_args_t _args, *_pargs_in = NULL, *_pargs_out = NULL;

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
    _args.in_testname = (char*)in_testname;
    _args.in_testname_len = (in_testname) ? (strlen(in_testname) + 1) : 0;
    _args.out_testname = (char*)out_testname;
    _args.args = (mbed_args*)args;

    /* Compute input buffer size. Include in and in-out parameters. */
    OE_ADD_SIZE(_input_buffer_size, sizeof(test_args_t));
    if (in_testname)
        OE_ADD_SIZE(_input_buffer_size, _args.in_testname_len * sizeof(char));
    
    /* Compute output buffer size. Include out and in-out parameters. */
    OE_ADD_SIZE(_output_buffer_size, sizeof(test_args_t));
    if (out_testname)
        OE_ADD_SIZE(_output_buffer_size, 1024);
    if (args)
        OE_ADD_SIZE(_output_buffer_size, sizeof(mbed_args));
    
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
    _pargs_in = (test_args_t*)_input_buffer;
    OE_ADD_SIZE(_input_buffer_offset, sizeof(*_pargs_in));
    if (in_testname)
        OE_WRITE_IN_PARAM(in_testname, _args.in_testname_len * sizeof(char), char*);
    
    /* Copy args structure (now filled) to input buffer. */
    memcpy(_pargs_in, &_args, sizeof(*_pargs_in));

    /* Call enclave function. */
    if ((_result = oe_call_enclave_function(
             enclave,
             mbed_fcn_id_test,
             _input_buffer,
             _input_buffer_size,
             _output_buffer,
             _output_buffer_size,
             &_output_bytes_written)) != OE_OK)
        goto done;

    /* Setup output arg struct pointer. */
    _pargs_out = (test_args_t*)_output_buffer;
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
    OE_READ_OUT_PARAM(out_testname, (size_t)(1024));
    OE_READ_OUT_PARAM(args, (size_t)(sizeof(mbed_args)));

    _result = OE_OK;

done:
    if (_buffer)
        free(_buffer);

    /* No `_ptrs` to free for deep copy. */

    return _result;
}

/**** OCALL functions. ****/

void ocall_mbed_test_open(
    uint8_t* input_buffer,
    size_t input_buffer_size,
    uint8_t* output_buffer,
    size_t output_buffer_size,
    size_t* output_bytes_written)
{
    oe_result_t _result = OE_FAILURE;
    OE_UNUSED(input_buffer_size);

    /* Prepare parameters. */
    mbed_test_open_args_t* pargs_in = (mbed_test_open_args_t*)input_buffer;
    mbed_test_open_args_t* pargs_out = (mbed_test_open_args_t*)output_buffer;

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
    if (pargs_in->path)
        OE_SET_IN_POINTER(path, pargs_in->path_len * sizeof(char), char*);

    /* Set out and in-out pointers. */
    /* In-out parameters are copied to output buffer. */
    /* There were no out nor in-out parameters. */

    /* Call user function. */
    pargs_out->_retval = mbed_test_open(
        (const char*)pargs_in->path,
        pargs_in->flags,
        pargs_in->mode);

    /* Propagate errno back to enclave. */
    /* Errno propagation not enabled. */

    /* Success. */
    _result = OE_OK;
    *output_bytes_written = output_buffer_offset;

done:
    if (pargs_out && output_buffer_size >= sizeof(*pargs_out))
        pargs_out->_result = _result;
}

void ocall_mbed_test_read(
    uint8_t* input_buffer,
    size_t input_buffer_size,
    uint8_t* output_buffer,
    size_t output_buffer_size,
    size_t* output_bytes_written)
{
    oe_result_t _result = OE_FAILURE;
    OE_UNUSED(input_buffer_size);

    /* Prepare parameters. */
    mbed_test_read_args_t* pargs_in = (mbed_test_read_args_t*)input_buffer;
    mbed_test_read_args_t* pargs_out = (mbed_test_read_args_t*)output_buffer;

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
    if (pargs_in->buf)
        OE_SET_OUT_POINTER(buf, pargs_in->buf_len, char*);

    /* Call user function. */
    pargs_out->_retval = mbed_test_read(
        pargs_in->fd,
        pargs_in->buf,
        pargs_in->buf_len);

    /* Propagate errno back to enclave. */
    /* Errno propagation not enabled. */

    /* Success. */
    _result = OE_OK;
    *output_bytes_written = output_buffer_offset;

done:
    if (pargs_out && output_buffer_size >= sizeof(*pargs_out))
        pargs_out->_result = _result;
}

void ocall_mbed_test_close(
    uint8_t* input_buffer,
    size_t input_buffer_size,
    uint8_t* output_buffer,
    size_t output_buffer_size,
    size_t* output_bytes_written)
{
    oe_result_t _result = OE_FAILURE;
    OE_UNUSED(input_buffer_size);

    /* Prepare parameters. */
    mbed_test_close_args_t* pargs_in = (mbed_test_close_args_t*)input_buffer;
    mbed_test_close_args_t* pargs_out = (mbed_test_close_args_t*)output_buffer;

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
    pargs_out->_retval = mbed_test_close(
        pargs_in->fd);

    /* Propagate errno back to enclave. */
    /* Errno propagation not enabled. */

    /* Success. */
    _result = OE_OK;
    *output_bytes_written = output_buffer_offset;

done:
    if (pargs_out && output_buffer_size >= sizeof(*pargs_out))
        pargs_out->_result = _result;
}

void ocall_ocall_exit(
    uint8_t* input_buffer,
    size_t input_buffer_size,
    uint8_t* output_buffer,
    size_t output_buffer_size,
    size_t* output_bytes_written)
{
    oe_result_t _result = OE_FAILURE;
    OE_UNUSED(input_buffer_size);

    /* Prepare parameters. */
    ocall_exit_args_t* pargs_in = (ocall_exit_args_t*)input_buffer;
    ocall_exit_args_t* pargs_out = (ocall_exit_args_t*)output_buffer;

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
    ocall_exit(
        pargs_in->arg);

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

static oe_ocall_func_t __mbed_ocall_function_table[] = {
    (oe_ocall_func_t) ocall_mbed_test_open,
    (oe_ocall_func_t) ocall_mbed_test_read,
    (oe_ocall_func_t) ocall_mbed_test_close,
    (oe_ocall_func_t) ocall_ocall_exit,
    NULL
};

oe_result_t oe_create_mbed_enclave(
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
               __mbed_ocall_function_table,
               4,
               enclave);
}

OE_EXTERNC_END