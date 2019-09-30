/*
 *  This file is auto generated by oeedger8r. DO NOT EDIT.
 */
#ifndef EDGER8R_FILE_ARGS_H
#define EDGER8R_FILE_ARGS_H

#include <stdint.h>
#include <stdlib.h> /* for wchar_t */

/* #include <errno.h> - Errno propagation not enabled so not included. */

#include <openenclave/bits/result.h>

/**** User includes. ****/
#include "../types.h"

/**** User defined types in EDL. ****/
/* There were no user defined types. */

/**** ECALL marshalling structs. ****/
typedef struct _TestReadFile_args_t
{
    oe_result_t _result;
    int _retval;
    char* path;
    size_t path_len;
    uint32_t* checksum;
} TestReadFile_args_t;

/**** OCALL marshalling structs. ****/
typedef struct _Fopen_args_t
{
    oe_result_t _result;
    MY_FILE* _retval;
    char* filename;
    size_t filename_len;
    char* modes;
    size_t modes_len;
} Fopen_args_t;

typedef struct _Fread_args_t
{
    oe_result_t _result;
    size_t _retval;
    void_ptr ptr;
    size_t size;
    MY_FILE* stream;
} Fread_args_t;

typedef struct _Fclose_args_t
{
    oe_result_t _result;
    int _retval;
    MY_FILE* stream;
} Fclose_args_t;

/**** Trusted function IDs ****/
enum
{
    file_fcn_id_TestReadFile = 0,
    file_fcn_id_trusted_call_id_max = OE_ENUM_MAX
};

/**** Untrusted function IDs. ****/
enum
{
    file_fcn_id_Fopen = 0,
    file_fcn_id_Fread = 1,
    file_fcn_id_Fclose = 2,
    file_fcn_id_untrusted_call_max = OE_ENUM_MAX
};

#endif // EDGER8R_FILE_ARGS_H