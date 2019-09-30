/*
 *  This file is auto generated by oeedger8r. DO NOT EDIT.
 */
#include "lockless_queue_u.h"

#include <openenclave/edger8r/host.h>

#include <stdlib.h>
#include <string.h>
#include <wchar.h>

OE_EXTERNC_BEGIN

/**** ECALL function wrappers. ****/

oe_result_t enc_push_nodes(
    oe_enclave_t* enclave,
    oe_lockless_queue* p_queue,
    test_node* p_nodes,
    size_t count)
{
    oe_result_t _result = OE_FAILURE;

    /* Marshalling struct. */
    enc_push_nodes_args_t _args, *_pargs_in = NULL, *_pargs_out = NULL;

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
    _args.p_queue = (oe_lockless_queue*)p_queue;
    _args.p_nodes = (test_node*)p_nodes;
    _args.count = count;

    /* Compute input buffer size. Include in and in-out parameters. */
    OE_ADD_SIZE(_input_buffer_size, sizeof(enc_push_nodes_args_t));
    /* There were no corresponding parameters. */
    
    /* Compute output buffer size. Include out and in-out parameters. */
    OE_ADD_SIZE(_output_buffer_size, sizeof(enc_push_nodes_args_t));
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
    _pargs_in = (enc_push_nodes_args_t*)_input_buffer;
    OE_ADD_SIZE(_input_buffer_offset, sizeof(*_pargs_in));
    /* There were no in nor in-out parameters. */
    
    /* Copy args structure (now filled) to input buffer. */
    memcpy(_pargs_in, &_args, sizeof(*_pargs_in));

    /* Call enclave function. */
    if ((_result = oe_call_enclave_function(
             enclave,
             lockless_queue_fcn_id_enc_push_nodes,
             _input_buffer,
             _input_buffer_size,
             _output_buffer,
             _output_buffer_size,
             &_output_bytes_written)) != OE_OK)
        goto done;

    /* Setup output arg struct pointer. */
    _pargs_out = (enc_push_nodes_args_t*)_output_buffer;
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

oe_result_t enc_writer_thread(
    oe_enclave_t* enclave,
    oe_lockless_queue* p_queue,
    test_node* p_nodes,
    size_t* p_barrier)
{
    oe_result_t _result = OE_FAILURE;

    /* Marshalling struct. */
    enc_writer_thread_args_t _args, *_pargs_in = NULL, *_pargs_out = NULL;

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
    _args.p_queue = (oe_lockless_queue*)p_queue;
    _args.p_nodes = (test_node*)p_nodes;
    _args.p_barrier = (size_t*)p_barrier;

    /* Compute input buffer size. Include in and in-out parameters. */
    OE_ADD_SIZE(_input_buffer_size, sizeof(enc_writer_thread_args_t));
    /* There were no corresponding parameters. */
    
    /* Compute output buffer size. Include out and in-out parameters. */
    OE_ADD_SIZE(_output_buffer_size, sizeof(enc_writer_thread_args_t));
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
    _pargs_in = (enc_writer_thread_args_t*)_input_buffer;
    OE_ADD_SIZE(_input_buffer_offset, sizeof(*_pargs_in));
    /* There were no in nor in-out parameters. */
    
    /* Copy args structure (now filled) to input buffer. */
    memcpy(_pargs_in, &_args, sizeof(*_pargs_in));

    /* Call enclave function. */
    if ((_result = oe_call_enclave_function(
             enclave,
             lockless_queue_fcn_id_enc_writer_thread,
             _input_buffer,
             _input_buffer_size,
             _output_buffer,
             _output_buffer_size,
             &_output_bytes_written)) != OE_OK)
        goto done;

    /* Setup output arg struct pointer. */
    _pargs_out = (enc_writer_thread_args_t*)_output_buffer;
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

oe_result_t enc_pop_nodes(
    oe_enclave_t* enclave,
    oe_lockless_queue* p_queue,
    size_t count)
{
    oe_result_t _result = OE_FAILURE;

    /* Marshalling struct. */
    enc_pop_nodes_args_t _args, *_pargs_in = NULL, *_pargs_out = NULL;

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
    _args.p_queue = (oe_lockless_queue*)p_queue;
    _args.count = count;

    /* Compute input buffer size. Include in and in-out parameters. */
    OE_ADD_SIZE(_input_buffer_size, sizeof(enc_pop_nodes_args_t));
    /* There were no corresponding parameters. */
    
    /* Compute output buffer size. Include out and in-out parameters. */
    OE_ADD_SIZE(_output_buffer_size, sizeof(enc_pop_nodes_args_t));
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
    _pargs_in = (enc_pop_nodes_args_t*)_input_buffer;
    OE_ADD_SIZE(_input_buffer_offset, sizeof(*_pargs_in));
    /* There were no in nor in-out parameters. */
    
    /* Copy args structure (now filled) to input buffer. */
    memcpy(_pargs_in, &_args, sizeof(*_pargs_in));

    /* Call enclave function. */
    if ((_result = oe_call_enclave_function(
             enclave,
             lockless_queue_fcn_id_enc_pop_nodes,
             _input_buffer,
             _input_buffer_size,
             _output_buffer,
             _output_buffer_size,
             &_output_bytes_written)) != OE_OK)
        goto done;

    /* Setup output arg struct pointer. */
    _pargs_out = (enc_pop_nodes_args_t*)_output_buffer;
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

oe_result_t enc_test_queue_single_threaded(oe_enclave_t* enclave)
{
    oe_result_t _result = OE_FAILURE;

    /* Marshalling struct. */
    enc_test_queue_single_threaded_args_t _args, *_pargs_in = NULL, *_pargs_out = NULL;

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
    OE_ADD_SIZE(_input_buffer_size, sizeof(enc_test_queue_single_threaded_args_t));
    /* There were no corresponding parameters. */
    
    /* Compute output buffer size. Include out and in-out parameters. */
    OE_ADD_SIZE(_output_buffer_size, sizeof(enc_test_queue_single_threaded_args_t));
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
    _pargs_in = (enc_test_queue_single_threaded_args_t*)_input_buffer;
    OE_ADD_SIZE(_input_buffer_offset, sizeof(*_pargs_in));
    /* There were no in nor in-out parameters. */
    
    /* Copy args structure (now filled) to input buffer. */
    memcpy(_pargs_in, &_args, sizeof(*_pargs_in));

    /* Call enclave function. */
    if ((_result = oe_call_enclave_function(
             enclave,
             lockless_queue_fcn_id_enc_test_queue_single_threaded,
             _input_buffer,
             _input_buffer_size,
             _output_buffer,
             _output_buffer_size,
             &_output_bytes_written)) != OE_OK)
        goto done;

    /* Setup output arg struct pointer. */
    _pargs_out = (enc_test_queue_single_threaded_args_t*)_output_buffer;
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

/* There were no ocalls. */
/**** OCALL function table. ****/

static oe_ocall_func_t __lockless_queue_ocall_function_table[] = {
    
    NULL
};

oe_result_t oe_create_lockless_queue_enclave(
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
               __lockless_queue_ocall_function_table,
               0,
               enclave);
}

OE_EXTERNC_END