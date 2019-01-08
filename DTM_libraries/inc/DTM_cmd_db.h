/**
  ******************************************************************************
  * @file    DTM_cmd_db.h
  * @author  AMG - RF Application team
  * @version V1.0.0
  * @date    31 May 2018
  * @brief   Autogenerated files, do not edit!!
  ******************************************************************************
  * @attention
  *
  * THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
  * WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE
  * TIME. AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY
  * DIRECT, INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING
  * FROM THE CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE
  * CODING INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
  *
  * <h2><center>&copy; COPYRIGHT STMicroelectronics</center></h2>
  ******************************************************************************
  */
#ifndef _DTM_CMD_DB_H_
#define _DTM_CMD_DB_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include "bluenrg1_api.h"

#define HCI_MAX_PAYLOAD_SIZE 256
#define MIN(a, b) ((a <= b) ? (a) : (b))

typedef uint16_t (*hci_command_process_and_response_type)(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length) ;
typedef struct hci_command_table_type_s {
  uint16_t opcode;
  hci_command_process_and_response_type execute;
} hci_command_table_type;

uint16_t hci_disconnect_process(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length);
uint16_t hci_read_remote_version_information_process(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length);
uint16_t hci_set_event_mask_process(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length);
uint16_t hci_reset_process(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length);
uint16_t hci_read_transmit_power_level_process(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length);
uint16_t hci_read_local_version_information_process(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length);
uint16_t hci_read_local_supported_commands_process(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length);
uint16_t hci_read_local_supported_features_process(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length);
uint16_t hci_read_bd_addr_process(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length);
uint16_t hci_read_rssi_process(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length);
uint16_t hci_le_set_event_mask_process(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length);
uint16_t hci_le_read_buffer_size_process(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length);
uint16_t hci_le_read_local_supported_features_process(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length);
uint16_t hci_le_set_random_address_process(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length);
uint16_t hci_le_set_advertising_parameters_process(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length);
uint16_t hci_le_read_advertising_channel_tx_power_process(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length);
uint16_t hci_le_set_advertising_data_process(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length);
uint16_t hci_le_set_scan_response_data_process(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length);
uint16_t hci_le_set_advertise_enable_process(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length);
uint16_t hci_le_set_scan_parameters_process(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length);
uint16_t hci_le_set_scan_enable_process(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length);
uint16_t hci_le_create_connection_process(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length);
uint16_t hci_le_create_connection_cancel_process(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length);
uint16_t hci_le_read_white_list_size_process(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length);
uint16_t hci_le_clear_white_list_process(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length);
uint16_t hci_le_add_device_to_white_list_process(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length);
uint16_t hci_le_remove_device_from_white_list_process(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length);
uint16_t hci_le_connection_update_process(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length);
uint16_t hci_le_set_host_channel_classification_process(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length);
uint16_t hci_le_read_channel_map_process(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length);
uint16_t hci_le_read_remote_used_features_process(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length);
uint16_t hci_le_encrypt_process(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length);
uint16_t hci_le_rand_process(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length);
uint16_t hci_le_start_encryption_process(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length);
uint16_t hci_le_long_term_key_request_reply_process(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length);
uint16_t hci_le_long_term_key_requested_negative_reply_process(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length);
uint16_t hci_le_read_supported_states_process(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length);
uint16_t hci_le_receiver_test_process(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length);
uint16_t hci_le_transmitter_test_process(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length);
uint16_t hci_le_test_end_process(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length);
uint16_t hci_le_set_data_length_process(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length);
uint16_t hci_le_read_suggested_default_data_length_process(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length);
uint16_t hci_le_write_suggested_default_data_length_process(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length);
uint16_t hci_le_read_local_p256_public_key_process(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length);
uint16_t hci_le_generate_dhkey_process(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length);
uint16_t hci_le_add_device_to_resolving_list_process(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length);
uint16_t hci_le_remove_device_from_resolving_list_process(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length);
uint16_t hci_le_clear_resolving_list_process(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length);
uint16_t hci_le_read_resolving_list_size_process(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length);
uint16_t hci_le_read_peer_resolvable_address_process(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length);
uint16_t hci_le_read_local_resolvable_address_process(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length);
uint16_t hci_le_set_address_resolution_enable_process(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length);
uint16_t hci_le_set_resolvable_private_address_timeout_process(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length);
uint16_t aci_hal_write_config_data_process(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length);
uint16_t aci_hal_read_config_data_process(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length);
uint16_t hci_le_read_maximum_data_length_process(uint8_t *buffer_in, uint16_t buffer_in_length, uint8_t *buffer_out, uint16_t buffer_out_max_length);

void rcv_callback(uint8_t *data, uint16_t len);

//extern const hci_command_table_type hci_command_table[156];
//extern void rcv_callback(uint8_t *buffer_out, uint16_t buffer_out_length, int8_t overflow_index);
//extern void send_event_isr(uint8_t *buffer_out, uint16_t buffer_out_length, int8_t overflow_index);
/* NOTE: aci_hal_updater_start() function prototype: to be implemented on DTM context */
//tBleStatus aci_hal_updater_start(void);
/* NOTE: aci_hal_get_firmware_details() function prototype: to be implemented on DTM context */
//tBleStatus aci_hal_get_firmware_details(uint8_t *DTM_version_major,uint8_t *DTM_version_minor,uint8_t *DTM_version_patch,uint8_t *DTM_variant,uint16_t *DTM_Build_Number,uint8_t *BTLE_Stack_version_major,uint8_t *BTLE_Stack_version_minor,uint8_t *BTLE_Stack_version_patch,uint8_t *BTLE_Stack_development,uint16_t *BTLE_Stack_variant,uint16_t *BTLE_Stack_Build_Number);

const hci_command_table_type hci_command_table[56] = {
  /* hci_disconnect */
  {0x0406, hci_disconnect_process},
  /* hci_read_remote_version_information */
  {0x041d, hci_read_remote_version_information_process},
  /* hci_set_event_mask */
  {0x0c01, hci_set_event_mask_process},
  /* hci_reset */
  {0x0c03, hci_reset_process},
  /* hci_read_transmit_power_level */
  {0x0c2d, hci_read_transmit_power_level_process},
  /* hci_read_local_version_information */
  {0x1001, hci_read_local_version_information_process},
  /* hci_read_local_supported_commands */
  {0x1002, hci_read_local_supported_commands_process},
  /* hci_read_local_supported_features */
  {0x1003, hci_read_local_supported_features_process},
  /* hci_read_bd_addr */
  {0x1009, hci_read_bd_addr_process},
  /* hci_read_rssi */
  {0x1405, hci_read_rssi_process},
  /* hci_le_set_event_mask */
  {0x2001, hci_le_set_event_mask_process},
  /* hci_le_read_buffer_size */
  {0x2002, hci_le_read_buffer_size_process},
  /* hci_le_read_local_supported_features */
  {0x2003, hci_le_read_local_supported_features_process},
  /* hci_le_set_random_address */
  {0x2005, hci_le_set_random_address_process},
  /* hci_le_set_advertising_parameters */
  {0x2006, hci_le_set_advertising_parameters_process},
  /* hci_le_read_advertising_channel_tx_power */
  {0x2007, hci_le_read_advertising_channel_tx_power_process},
  /* hci_le_set_advertising_data */
  {0x2008, hci_le_set_advertising_data_process},
  /* hci_le_set_scan_response_data */
  {0x2009, hci_le_set_scan_response_data_process},
  /* hci_le_set_advertise_enable */
  {0x200a, hci_le_set_advertise_enable_process},
  /* hci_le_set_scan_parameters */
  {0x200b, hci_le_set_scan_parameters_process},
  /* hci_le_set_scan_enable */
  {0x200c, hci_le_set_scan_enable_process},
  /* hci_le_create_connection */
  {0x200d, hci_le_create_connection_process},
  /* hci_le_create_connection_cancel */
  {0x200e, hci_le_create_connection_cancel_process},
  /* hci_le_read_white_list_size */
  {0x200f, hci_le_read_white_list_size_process},
  /* hci_le_clear_white_list */
  {0x2010, hci_le_clear_white_list_process},
  /* hci_le_add_device_to_white_list */
  {0x2011, hci_le_add_device_to_white_list_process},
  /* hci_le_remove_device_from_white_list */
  {0x2012, hci_le_remove_device_from_white_list_process},
  /* hci_le_connection_update */
  {0x2013, hci_le_connection_update_process},
  /* hci_le_set_host_channel_classification */
  {0x2014, hci_le_set_host_channel_classification_process},
  /* hci_le_read_channel_map */
  {0x2015, hci_le_read_channel_map_process},
  /* hci_le_read_remote_used_features */
  {0x2016, hci_le_read_remote_used_features_process},
  /* hci_le_encrypt */
  {0x2017, hci_le_encrypt_process},
  /* hci_le_rand */
  {0x2018, hci_le_rand_process},
  /* hci_le_start_encryption */
  {0x2019, hci_le_start_encryption_process},
  /* hci_le_long_term_key_request_reply */
  {0x201a, hci_le_long_term_key_request_reply_process},
  /* hci_le_long_term_key_requested_negative_reply */
  {0x201b, hci_le_long_term_key_requested_negative_reply_process},
  /* hci_le_read_supported_states */
  {0x201c, hci_le_read_supported_states_process},
  /* hci_le_receiver_test */
  {0x201d, hci_le_receiver_test_process},
  /* hci_le_transmitter_test */
  {0x201e, hci_le_transmitter_test_process},
  /* hci_le_test_end */
  {0x201f, hci_le_test_end_process},
  /* hci_le_set_data_length */
  {0x2022, hci_le_set_data_length_process},
  /* hci_le_read_suggested_default_data_length */
  {0x2023, hci_le_read_suggested_default_data_length_process},
  /* hci_le_write_suggested_default_data_length */
  {0x2024, hci_le_write_suggested_default_data_length_process},
  /* hci_le_read_local_p256_public_key */
  {0x2025, hci_le_read_local_p256_public_key_process},
  /* hci_le_generate_dhkey */
  {0x2026, hci_le_generate_dhkey_process},
  /* hci_le_add_device_to_resolving_list */
  {0x2027, hci_le_add_device_to_resolving_list_process},
  /* hci_le_remove_device_from_resolving_list */
  {0x2028, hci_le_remove_device_from_resolving_list_process},
  /* hci_le_clear_resolving_list */
  {0x2029, hci_le_clear_resolving_list_process},
  /* hci_le_read_resolving_list_size */
  {0x202a, hci_le_read_resolving_list_size_process},
  /* hci_le_read_peer_resolvable_address */
  {0x202b, hci_le_read_peer_resolvable_address_process},
  /* hci_le_read_local_resolvable_address */
  {0x202c, hci_le_read_local_resolvable_address_process},
  /* hci_le_set_address_resolution_enable */
  {0x202d, hci_le_set_address_resolution_enable_process},
  /* hci_le_set_resolvable_private_address_timeout */
  {0x202e, hci_le_set_resolvable_private_address_timeout_process},
  /* hci_le_read_maximum_data_length */
  {0x202f, hci_le_read_maximum_data_length_process},
  /* aci_hal_write_config_data */
  {0xfc0c, aci_hal_write_config_data_process},
  /* aci_hal_read_config_data */
  {0xfc0d, aci_hal_read_config_data_process}
};

#ifdef __cplusplus
}
#endif

#endif //_DTM_CMD_DB_H_
