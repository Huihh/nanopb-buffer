// nanopbTest.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include "pb_encode.h"
#include "pb_decode.h"
#include "simple.pb.h"



#define VERSION_MAJOR	2
#define VERSION_MINOR   9
#define VERSION_PATCH   1






int main()
{
	uint8_t buffer[12*1024];
	size_t message_length;
	bool status;

	char storage_uuid_str[25] = "0x1122334455";


	{
		printf("\n+-------------------------- Start Encode --------------------------+ \n");


		Features message = Features_init_zero;

		pb_ostream_t stream = pb_ostream_from_buffer(buffer, sizeof(buffer));
	
		message.has_vendor = true;						strncpy_s(message.vendor, "bitcointrezor.com", sizeof(message.vendor));
		message.has_major_version = true;				message.major_version = VERSION_MAJOR;
		message.has_minor_version = true;				message.minor_version = VERSION_MINOR;
		message.has_patch_version = true;				message.patch_version = VERSION_PATCH;
		message.has_device_id = true;					strncpy_s(message.device_id, storage_uuid_str, sizeof(message.device_id));
		message.has_pin_protection = true;				message.pin_protection = true;
		message.has_passphrase_protection = true;		message.passphrase_protection = true;
		message.has_bootloader_hash = true;				message.bootloader_hash.size = 0x20;
		message.has_language = true;					strncpy_s(message.language, "English", sizeof(message.language));
		message.has_label = true;						strncpy_s(message.label, "Hardware Wallet", sizeof(message.label));
		message.has_initialized = true;					message.initialized = false;
		message.has_imported = true;					message.imported = true;
		message.has_pin_cached = true;					message.pin_cached = false;
		message.has_passphrase_cached = true;			message.passphrase_cached = true;
		message.has_needs_backup = true;				message.needs_backup = false;
		message.has_unfinished_backup = true;			message.unfinished_backup = true;
		message.has_flags = true;						message.flags = false;
		message.has_model = true;						strncpy_s(message.model, "Email: huihang0826@126.com", sizeof(message.model));


		printf("Before Encode MessageLen: %d \n", sizeof(message));

		status = pb_encode(&stream, Features_fields, &message);
		if (!status)
		{
			printf("Encoding failed: \"%s\" \n", PB_GET_ERROR(&stream));
			return 1;
		}


		message_length = stream.bytes_written; 

		printf("Encode Stream : ");
		for (int i = 0; i < message_length; i++)
			printf("%02x", buffer[i]);



		printf("\nAfter Encode MessageLen: %d \n", message_length);

		printf("\n+--------------------------- End Encode ---------------------------+ \n");

	}



	{

		printf("\n+-------------------------- Start Decode --------------------------+ \n");

		Features message = Features_init_zero;

		pb_istream_t stream = pb_istream_from_buffer(buffer, message_length);

		status = pb_decode(&stream, Features_fields, &message);
		if (!status)
		{
			printf("Decoding failed: \"%s\" \n", PB_GET_ERROR(&stream));
			return 1;
		}


		if (message.has_vendor)
			printf("vendor: \"%s\" \n", message.vendor);

		if (message.has_major_version)
			printf("major_version: %d \n", message.major_version);
		
		if (message.has_minor_version)
			printf("minor_version: %d \n", message.minor_version);

		if (message.has_patch_version)
			printf("patch_version: %d \n", message.patch_version);

		if (message.has_bootloader_mode)
			printf("bootloader_mode: %d \n", message.bootloader_mode);

		if (message.has_device_id)
			printf("device_id: \"%s\" \n", message.device_id);

		if (message.has_pin_protection)
			printf("pin_protection: %d \n", message.pin_protection);
		
		if (message.has_passphrase_protection)
			printf("passphrase_protection: %d \n", message.passphrase_protection);

		if (message.has_language)
			printf("language: \"%s\" \n", message.language);

		if (message.has_label)
			printf("label: \"%s\" \n", message.label);

		if (message.has_initialized)
			printf("initialized: %d \n", message.initialized);

		if (message.has_revision)
		{
			if (message.revision.size)
			{
				printf("revision_size: %d, revision: 0x", message.revision.size);

				for (int i = 0; i < message.revision.size; i++)
					printf("%02x", message.revision.bytes[i]);
			}

			printf("\n");
		}

		if (message.has_bootloader_hash)
		{
			if (message.bootloader_hash.size)
			{
				printf("bootloader_hash_size: %d, bootloader_hash: 0x", message.bootloader_hash.size);

				for (int i = 0; i < message.bootloader_hash.size; i++)
					printf("%02x", message.bootloader_hash.bytes[i]);
			}

			printf("\n");
		}


		if (message.has_imported)
			printf("imported: %d \n", message.imported);

		if (message.has_pin_cached)
			printf("pin_cached: %d \n", message.pin_cached);

		if (message.has_passphrase_cached)
			printf("passphrase_cached: %d \n", message.passphrase_cached);

		if (message.has_firmware_present)
			printf("firmware_present: %d \n", message.firmware_present);

		if (message.has_needs_backup)
			printf("needs_backup: %d \n", message.needs_backup);

		if (message.has_flags)
			printf("flags: %d \n", message.flags);

		if (message.has_model)
			printf("model: \"%s\" \n", message.model);

		if (message.has_fw_major)
			printf("fw_major: %d \n", message.fw_major);

		if (message.has_fw_minor)
			printf("fw_minor: %d \n", message.fw_minor);

		if (message.has_fw_patch)
			printf("fw_patch: %d \n", message.fw_patch);

		if (message.has_fw_vendor)
			printf("fw_vendor: \"%s\" \n", message.fw_vendor);


		if (message.has_fw_vendor_keys)
		{
			if (message.fw_vendor_keys.size)
			{
				printf("* fw_vendor_keys_size: %d, fw_vendor_keys: 0x", message.fw_vendor_keys.size);

				for (int i = 0; i < message.fw_vendor_keys.size; i++)
					printf("%02x", message.fw_vendor_keys.bytes[i]);
			}

			printf("\n");
		}

		if (message.has_unfinished_backup)
			printf("unfinished_backup: %d \n", message.unfinished_backup);

		printf("\n+--------------------------- End Decode ---------------------------+ \n");
	}












	while (1);


    return 0;
}

