/*
 *  This file is auto generated by oeedger8r. DO NOT EDIT.
 */
#include "other_u.h"

#include <openenclave/edger8r/host.h>

#include <stdlib.h>
#include <string.h>
#include <wchar.h>

OE_EXTERNC_BEGIN

/**** ECALL function wrappers. ****/

oe_result_t ecall_other(
    oe_enclave_t* enclave,
    MyOther* _retval,
    MyOther o)
{
    oe_result_t _result = OE_FAILURE;

    /* Marshalling struct. */
    ecall_other_args_t _args, *_pargs_in = NULL, *_pargs_out = NULL;

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
    _args.o = o;

    /* Compute input buffer size. Include in and in-out parameters. */
    OE_ADD_SIZE(_input_buffer_size, sizeof(ecall_other_args_t));
    /* There were no corresponding parameters. */
    
    /* Compute output buffer size. Include out and in-out parameters. */
    OE_ADD_SIZE(_output_buffer_size, sizeof(ecall_other_args_t));
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
    _pargs_in = (ecall_other_args_t*)_input_buffer;
    OE_ADD_SIZE(_input_buffer_offset, sizeof(*_pargs_in));
    /* There were no in nor in-out parameters. */
    
    /* Copy args structure (now filled) to input buffer. */
    memcpy(_pargs_in, &_args, sizeof(*_pargs_in));

    /* Call enclave function. */
    if ((_result = oe_call_enclave_function(
             enclave,
             other_fcn_id_ecall_other,
             _input_buffer,
             _input_buffer_size,
             _output_buffer,
             _output_buffer_size,
             &_output_bytes_written)) != OE_OK)
        goto done;

    /* Setup output arg struct pointer. */
    _pargs_out = (ecall_other_args_t*)_output_buffer;
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

oe_result_t test_other_edl_ocalls(oe_enclave_t* enclave)
{
    oe_result_t _result = OE_FAILURE;

    /* Marshalling struct. */
    test_other_edl_ocalls_args_t _args, *_pargs_in = NULL, *_pargs_out = NULL;

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
    

    /* Compute input buffer size. Include in and in-out parameters. */
    OE_ADD_SIZE(_input_buffer_size, sizeof(test_other_edl_ocalls_args_t));
    /* There were no corresponding parameters. */
    
    /* Compute output buffer size. Include out and in-out parameters. */
    OE_ADD_SIZE(_output_buffer_size, sizeof(test_other_edl_ocalls_args_t));
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
    _pargs_in = (test_other_edl_ocalls_args_t*)_input_buffer;
    OE_ADD_SIZE(_input_buffer_offset, sizeof(*_pargs_in));
    /* There were no in nor in-out parameters. */
    
    /* Copy args structure (now filled) to input buffer. */
    memcpy(_pargs_in, &_args, sizeof(*_pargs_in));

    /* Call enclave function. */
    if ((_result = oe_call_enclave_function(
             enclave,
             other_fcn_id_test_other_edl_ocalls,
             _input_buffer,
             _input_buffer_size,
             _output_buffer,
             _output_buffer_size,
             &_output_bytes_written)) != OE_OK)
        goto done;

    /* Setup output arg struct pointer. */
    _pargs_out = (test_other_edl_ocalls_args_t*)_output_buffer;
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

/**** OCALL functions. ****/

void ocall_ocall_other(
    uint8_t* input_buffer,
    size_t input_buffer_size,
    uint8_t* output_buffer,
    size_t output_buffer_size,
    size_t* output_bytes_written)
{
    oe_result_t _result = OE_FAILURE;
    OE_UNUSED(input_buffer_size);

    /* Prepare parameters. */
    ocall_other_args_t* pargs_in = (ocall_other_args_t*)input_buffer;
    ocall_other_args_t* pargs_out = (ocall_other_args_t*)output_buffer;

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
    pargs_out->_retval = ocall_other(
        pargs_in->o);

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

static oe_ocall_func_t __other_ocall_function_table[] = {
    (oe_ocall_func_t) ocall_ocall_other,
    NULL
};

oe_result_t oe_create_other_enclave(
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
               __other_ocall_function_table,
               1,
               enclave);
}

OE_EXTERNC_END
