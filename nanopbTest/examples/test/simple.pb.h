/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9.1 at Mon Jul 23 11:53:46 2018. */

#ifndef PB_SIMPLE_PB_H_INCLUDED
#define PB_SIMPLE_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
typedef enum _FailureType {
    FailureType_Failure_UnexpectedMessage = 1,
    FailureType_Failure_ButtonExpected = 2,
    FailureType_Failure_DataError = 3,
    FailureType_Failure_PinMisMatch = 12,
    FailureType_Failure_FirmwareError = 99
} FailureType;
#define _FailureType_MIN FailureType_Failure_UnexpectedMessage
#define _FailureType_MAX FailureType_Failure_FirmwareError
#define _FailureType_ARRAYSIZE ((FailureType)(FailureType_Failure_FirmwareError+1))

/* Struct definitions */
typedef PB_BYTES_ARRAY_T(22) HDNodeType_chain_code_t;
typedef PB_BYTES_ARRAY_T(33) HDNodeType_private_key_t;
typedef PB_BYTES_ARRAY_T(44) HDNodeType_public_key_t;
typedef struct _HDNodeType {
    uint32_t depth;
    uint32_t fingerprint;
    uint32_t child_num;
    HDNodeType_chain_code_t chain_code;
    bool has_private_key;
    HDNodeType_private_key_t private_key;
    bool has_public_key;
    HDNodeType_public_key_t public_key;
    bool has_skip_passphrase;
    bool skip_passphrase;
/* @@protoc_insertion_point(struct:HDNodeType) */
} HDNodeType;

/* Default values for struct fields */

/* Initializer values for message structs */
#define HDNodeType_init_default                  {0, 0, 0, {0, {0}}, false, {0, {0}}, false, {0, {0}}, false, 0}
#define HDNodeType_init_zero                     {0, 0, 0, {0, {0}}, false, {0, {0}}, false, {0, {0}}, false, 0}

/* Field tags (for use in manual encoding/decoding) */
#define HDNodeType_depth_tag                     1
#define HDNodeType_fingerprint_tag               2
#define HDNodeType_child_num_tag                 3
#define HDNodeType_chain_code_tag                4
#define HDNodeType_private_key_tag               5
#define HDNodeType_public_key_tag                6
#define HDNodeType_skip_passphrase_tag           7

/* Struct field encoding specification for nanopb */
extern const pb_field_t HDNodeType_fields[8];

/* Maximum encoded size of messages (where known) */
#define HDNodeType_size                          125

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define SIMPLE_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
