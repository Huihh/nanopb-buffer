/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9.1 at Fri Jul 27 14:49:45 2018. */

#ifndef PB_SIMPLE_PB_H_INCLUDED
#define PB_SIMPLE_PB_H_INCLUDED
#include "pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Struct definitions */
typedef PB_BYTES_ARRAY_T(20) Features_revision_t;
typedef PB_BYTES_ARRAY_T(32) Features_bootloader_hash_t;
typedef PB_BYTES_ARRAY_T(32) Features_fw_vendor_keys_t;
typedef struct _Features {
    bool has_vendor;
    char vendor[33];
    bool has_major_version;
    uint32_t major_version;
    bool has_minor_version;
    uint32_t minor_version;
    bool has_patch_version;
    uint32_t patch_version;
    bool has_bootloader_mode;
    bool bootloader_mode;
    bool has_device_id;
    char device_id[25];
    bool has_pin_protection;
    bool pin_protection;
    bool has_passphrase_protection;
    bool passphrase_protection;
    bool has_language;
    char language[17];
    bool has_label;
    char label[33];
    bool has_initialized;
    bool initialized;
    bool has_revision;
    Features_revision_t revision;
    bool has_bootloader_hash;
    Features_bootloader_hash_t bootloader_hash;
    bool has_imported;
    bool imported;
    bool has_pin_cached;
    bool pin_cached;
    bool has_passphrase_cached;
    bool passphrase_cached;
    bool has_firmware_present;
    bool firmware_present;
    bool has_needs_backup;
    bool needs_backup;
    bool has_flags;
    uint32_t flags;
    bool has_model;
    char model[50];
    bool has_fw_major;
    uint32_t fw_major;
    bool has_fw_minor;
    uint32_t fw_minor;
    bool has_fw_patch;
    uint32_t fw_patch;
    bool has_fw_vendor;
    char fw_vendor[256];
    bool has_fw_vendor_keys;
    Features_fw_vendor_keys_t fw_vendor_keys;
    bool has_unfinished_backup;
    bool unfinished_backup;
/* @@protoc_insertion_point(struct:Features) */
} Features;

/* Default values for struct fields */

/* Initializer values for message structs */
#define Features_init_default                    {false, "", false, 0, false, 0, false, 0, false, 0, false, "", false, 0, false, 0, false, "", false, "", false, 0, false, {0, {0}}, false, {0, {0}}, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, "", false, 0, false, 0, false, 0, false, "", false, {0, {0}}, false, 0}
#define Features_init_zero                       {false, "", false, 0, false, 0, false, 0, false, 0, false, "", false, 0, false, 0, false, "", false, "", false, 0, false, {0, {0}}, false, {0, {0}}, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, "", false, 0, false, 0, false, 0, false, "", false, {0, {0}}, false, 0}

/* Field tags (for use in manual encoding/decoding) */
#define Features_vendor_tag                      1
#define Features_major_version_tag               2
#define Features_minor_version_tag               3
#define Features_patch_version_tag               4
#define Features_bootloader_mode_tag             5
#define Features_device_id_tag                   6
#define Features_pin_protection_tag              7
#define Features_passphrase_protection_tag       8
#define Features_language_tag                    9
#define Features_label_tag                       10
#define Features_initialized_tag                 12
#define Features_revision_tag                    13
#define Features_bootloader_hash_tag             14
#define Features_imported_tag                    15
#define Features_pin_cached_tag                  16
#define Features_passphrase_cached_tag           17
#define Features_firmware_present_tag            18
#define Features_needs_backup_tag                19
#define Features_flags_tag                       20
#define Features_model_tag                       21
#define Features_fw_major_tag                    22
#define Features_fw_minor_tag                    23
#define Features_fw_patch_tag                    24
#define Features_fw_vendor_tag                   25
#define Features_fw_vendor_keys_tag              26
#define Features_unfinished_backup_tag           27

/* Struct field encoding specification for nanopb */
extern const pb_field_t Features_fields[27];

/* Maximum encoded size of messages (where known) */
#define Features_size                            591

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define SIMPLE_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif