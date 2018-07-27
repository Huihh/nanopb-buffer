/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.9.1 at Fri Jul 27 14:49:45 2018. */

#include "simple.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t Features_fields[27] = {
    PB_FIELD(  1, STRING  , OPTIONAL, STATIC  , FIRST, Features, vendor, vendor, 0),
    PB_FIELD(  2, UINT32  , OPTIONAL, STATIC  , OTHER, Features, major_version, vendor, 0),
    PB_FIELD(  3, UINT32  , OPTIONAL, STATIC  , OTHER, Features, minor_version, major_version, 0),
    PB_FIELD(  4, UINT32  , OPTIONAL, STATIC  , OTHER, Features, patch_version, minor_version, 0),
    PB_FIELD(  5, BOOL    , OPTIONAL, STATIC  , OTHER, Features, bootloader_mode, patch_version, 0),
    PB_FIELD(  6, STRING  , OPTIONAL, STATIC  , OTHER, Features, device_id, bootloader_mode, 0),
    PB_FIELD(  7, BOOL    , OPTIONAL, STATIC  , OTHER, Features, pin_protection, device_id, 0),
    PB_FIELD(  8, BOOL    , OPTIONAL, STATIC  , OTHER, Features, passphrase_protection, pin_protection, 0),
    PB_FIELD(  9, STRING  , OPTIONAL, STATIC  , OTHER, Features, language, passphrase_protection, 0),
    PB_FIELD( 10, STRING  , OPTIONAL, STATIC  , OTHER, Features, label, language, 0),
    PB_FIELD( 12, BOOL    , OPTIONAL, STATIC  , OTHER, Features, initialized, label, 0),
    PB_FIELD( 13, BYTES   , OPTIONAL, STATIC  , OTHER, Features, revision, initialized, 0),
    PB_FIELD( 14, BYTES   , OPTIONAL, STATIC  , OTHER, Features, bootloader_hash, revision, 0),
    PB_FIELD( 15, BOOL    , OPTIONAL, STATIC  , OTHER, Features, imported, bootloader_hash, 0),
    PB_FIELD( 16, BOOL    , OPTIONAL, STATIC  , OTHER, Features, pin_cached, imported, 0),
    PB_FIELD( 17, BOOL    , OPTIONAL, STATIC  , OTHER, Features, passphrase_cached, pin_cached, 0),
    PB_FIELD( 18, BOOL    , OPTIONAL, STATIC  , OTHER, Features, firmware_present, passphrase_cached, 0),
    PB_FIELD( 19, BOOL    , OPTIONAL, STATIC  , OTHER, Features, needs_backup, firmware_present, 0),
    PB_FIELD( 20, UINT32  , OPTIONAL, STATIC  , OTHER, Features, flags, needs_backup, 0),
    PB_FIELD( 21, STRING  , OPTIONAL, STATIC  , OTHER, Features, model, flags, 0),
    PB_FIELD( 22, UINT32  , OPTIONAL, STATIC  , OTHER, Features, fw_major, model, 0),
    PB_FIELD( 23, UINT32  , OPTIONAL, STATIC  , OTHER, Features, fw_minor, fw_major, 0),
    PB_FIELD( 24, UINT32  , OPTIONAL, STATIC  , OTHER, Features, fw_patch, fw_minor, 0),
    PB_FIELD( 25, STRING  , OPTIONAL, STATIC  , OTHER, Features, fw_vendor, fw_patch, 0),
    PB_FIELD( 26, BYTES   , OPTIONAL, STATIC  , OTHER, Features, fw_vendor_keys, fw_vendor, 0),
    PB_FIELD( 27, BOOL    , OPTIONAL, STATIC  , OTHER, Features, unfinished_backup, fw_vendor_keys, 0),
    PB_LAST_FIELD
};


/* Check that field information fits in pb_field_t */
#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
#error Field descriptor for Features.fw_vendor is too large. Define PB_FIELD_16BIT to fix this.
#endif


/* @@protoc_insertion_point(eof) */