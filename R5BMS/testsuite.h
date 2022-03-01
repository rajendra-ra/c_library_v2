/** @file
 *    @brief MAVLink comm protocol testsuite generated from R5BMS.xml
 *    @see http://qgroundcontrol.org/mavlink/
 */
#pragma once
#ifndef R5BMS_TESTSUITE_H
#define R5BMS_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL

static void mavlink_test_R5BMS(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{

    mavlink_test_R5BMS(system_id, component_id, last_msg);
}
#endif




static void mavlink_test_top_data(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_TOP_DATA >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_top_data_t packet_in = {
        17235,17339,17443,17547,17651,17755,17859,17963,18067,187,254,65,132
    };
    mavlink_top_data_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.main_voltage = packet_in.main_voltage;
        packet1.uC_buck_voltage_5V = packet_in.uC_buck_voltage_5V;
        packet1.converter1_voltage_7V = packet_in.converter1_voltage_7V;
        packet1.converter2_voltage_7V = packet_in.converter2_voltage_7V;
        packet1.converter3_voltage_7V = packet_in.converter3_voltage_7V;
        packet1.converter4_voltage_7V = packet_in.converter4_voltage_7V;
        packet1.servo1_current = packet_in.servo1_current;
        packet1.servo2_current = packet_in.servo2_current;
        packet1.servo3_current = packet_in.servo3_current;
        packet1.servo1_temperature = packet_in.servo1_temperature;
        packet1.servo2_temperature = packet_in.servo2_temperature;
        packet1.servo3_temperature = packet_in.servo3_temperature;
        packet1.extra = packet_in.extra;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_TOP_DATA_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_TOP_DATA_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_top_data_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_top_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_top_data_pack(system_id, component_id, &msg , packet1.main_voltage , packet1.uC_buck_voltage_5V , packet1.converter1_voltage_7V , packet1.converter2_voltage_7V , packet1.converter3_voltage_7V , packet1.converter4_voltage_7V , packet1.servo1_current , packet1.servo2_current , packet1.servo3_current , packet1.servo1_temperature , packet1.servo2_temperature , packet1.servo3_temperature , packet1.extra );
    mavlink_msg_top_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_top_data_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.main_voltage , packet1.uC_buck_voltage_5V , packet1.converter1_voltage_7V , packet1.converter2_voltage_7V , packet1.converter3_voltage_7V , packet1.converter4_voltage_7V , packet1.servo1_current , packet1.servo2_current , packet1.servo3_current , packet1.servo1_temperature , packet1.servo2_temperature , packet1.servo3_temperature , packet1.extra );
    mavlink_msg_top_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_top_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_top_data_send(MAVLINK_COMM_1 , packet1.main_voltage , packet1.uC_buck_voltage_5V , packet1.converter1_voltage_7V , packet1.converter2_voltage_7V , packet1.converter3_voltage_7V , packet1.converter4_voltage_7V , packet1.servo1_current , packet1.servo2_current , packet1.servo3_current , packet1.servo1_temperature , packet1.servo2_temperature , packet1.servo3_temperature , packet1.extra );
    mavlink_msg_top_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_mid_data(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_MID_DATA >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_mid_data_t packet_in = {
        17235,17339,17443,17547,17651,17755,17859,17963,18067,18171,18275,18379,18483,18587,18691,18795,18899,19003,19107,19211,125,192,3,70
    };
    mavlink_mid_data_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.servo4_current = packet_in.servo4_current;
        packet1.servo5_current = packet_in.servo5_current;
        packet1.servo6_current = packet_in.servo6_current;
        packet1.aux_batt_current = packet_in.aux_batt_current;
        packet1.bec1_voltage = packet_in.bec1_voltage;
        packet1.bec2_voltage = packet_in.bec2_voltage;
        packet1.converter1_voltage_7V = packet_in.converter1_voltage_7V;
        packet1.converter2_voltage_7V = packet_in.converter2_voltage_7V;
        packet1.converter3_voltage_7V = packet_in.converter3_voltage_7V;
        packet1.converter4_voltage_7V = packet_in.converter4_voltage_7V;
        packet1.uC_buck_voltage_5V = packet_in.uC_buck_voltage_5V;
        packet1.pixhawk_cots_voltage_5V = packet_in.pixhawk_cots_voltage_5V;
        packet1.pixhawk_aux_voltage_5V = packet_in.pixhawk_aux_voltage_5V;
        packet1.pixhawk_buc_voltage = packet_in.pixhawk_buc_voltage;
        packet1.jetson_cots_voltage = packet_in.jetson_cots_voltage;
        packet1.jetson_buc_voltage = packet_in.jetson_buc_voltage;
        packet1.video_main_voltage_12V = packet_in.video_main_voltage_12V;
        packet1.video_aux_voltage_12V = packet_in.video_aux_voltage_12V;
        packet1.main_battery_voltage = packet_in.main_battery_voltage;
        packet1.aux_battery_voltage = packet_in.aux_battery_voltage;
        packet1.servo4_temperature = packet_in.servo4_temperature;
        packet1.servo5_temperature = packet_in.servo5_temperature;
        packet1.servo6_temperature = packet_in.servo6_temperature;
        packet1.extra = packet_in.extra;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_MID_DATA_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_MID_DATA_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_mid_data_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_mid_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_mid_data_pack(system_id, component_id, &msg , packet1.servo4_current , packet1.servo5_current , packet1.servo6_current , packet1.aux_batt_current , packet1.servo4_temperature , packet1.servo5_temperature , packet1.servo6_temperature , packet1.bec1_voltage , packet1.bec2_voltage , packet1.converter1_voltage_7V , packet1.converter2_voltage_7V , packet1.converter3_voltage_7V , packet1.converter4_voltage_7V , packet1.uC_buck_voltage_5V , packet1.pixhawk_cots_voltage_5V , packet1.pixhawk_aux_voltage_5V , packet1.pixhawk_buc_voltage , packet1.jetson_cots_voltage , packet1.jetson_buc_voltage , packet1.video_main_voltage_12V , packet1.video_aux_voltage_12V , packet1.main_battery_voltage , packet1.aux_battery_voltage , packet1.extra );
    mavlink_msg_mid_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_mid_data_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.servo4_current , packet1.servo5_current , packet1.servo6_current , packet1.aux_batt_current , packet1.servo4_temperature , packet1.servo5_temperature , packet1.servo6_temperature , packet1.bec1_voltage , packet1.bec2_voltage , packet1.converter1_voltage_7V , packet1.converter2_voltage_7V , packet1.converter3_voltage_7V , packet1.converter4_voltage_7V , packet1.uC_buck_voltage_5V , packet1.pixhawk_cots_voltage_5V , packet1.pixhawk_aux_voltage_5V , packet1.pixhawk_buc_voltage , packet1.jetson_cots_voltage , packet1.jetson_buc_voltage , packet1.video_main_voltage_12V , packet1.video_aux_voltage_12V , packet1.main_battery_voltage , packet1.aux_battery_voltage , packet1.extra );
    mavlink_msg_mid_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_mid_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_mid_data_send(MAVLINK_COMM_1 , packet1.servo4_current , packet1.servo5_current , packet1.servo6_current , packet1.aux_batt_current , packet1.servo4_temperature , packet1.servo5_temperature , packet1.servo6_temperature , packet1.bec1_voltage , packet1.bec2_voltage , packet1.converter1_voltage_7V , packet1.converter2_voltage_7V , packet1.converter3_voltage_7V , packet1.converter4_voltage_7V , packet1.uC_buck_voltage_5V , packet1.pixhawk_cots_voltage_5V , packet1.pixhawk_aux_voltage_5V , packet1.pixhawk_buc_voltage , packet1.jetson_cots_voltage , packet1.jetson_buc_voltage , packet1.video_main_voltage_12V , packet1.video_aux_voltage_12V , packet1.main_battery_voltage , packet1.aux_battery_voltage , packet1.extra );
    mavlink_msg_mid_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_bms_data(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_BMS_DATA >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_bms_data_t packet_in = {
        17235,17339,17443,17547,17651,163,230,41,108,175,242,53,120,187,254,65,132
    };
    mavlink_bms_data_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.total_current = packet_in.total_current;
        packet1.esc1_current = packet_in.esc1_current;
        packet1.esc2_current = packet_in.esc2_current;
        packet1.uC_buc_current = packet_in.uC_buc_current;
        packet1.main_voltage = packet_in.main_voltage;
        packet1.uC_buck_voltage_5V = packet_in.uC_buck_voltage_5V;
        packet1.bat1_temperature = packet_in.bat1_temperature;
        packet1.bat2_temperature = packet_in.bat2_temperature;
        packet1.esc1_temperature = packet_in.esc1_temperature;
        packet1.esc2_temperature = packet_in.esc2_temperature;
        packet1.motor1_temperature = packet_in.motor1_temperature;
        packet1.motor2_temperature = packet_in.motor2_temperature;
        packet1.mosfet1_temperature = packet_in.mosfet1_temperature;
        packet1.mosfet2_temperature = packet_in.mosfet2_temperature;
        packet1.errorcode_cout = packet_in.errorcode_cout;
        packet1.errorcode_dout = packet_in.errorcode_dout;
        packet1.extra1 = packet_in.extra1;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_BMS_DATA_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_BMS_DATA_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_bms_data_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_bms_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_bms_data_pack(system_id, component_id, &msg , packet1.total_current , packet1.esc1_current , packet1.esc2_current , packet1.uC_buc_current , packet1.main_voltage , packet1.uC_buck_voltage_5V , packet1.bat1_temperature , packet1.bat2_temperature , packet1.esc1_temperature , packet1.esc2_temperature , packet1.motor1_temperature , packet1.motor2_temperature , packet1.mosfet1_temperature , packet1.mosfet2_temperature , packet1.errorcode_cout , packet1.errorcode_dout , packet1.extra1 );
    mavlink_msg_bms_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_bms_data_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.total_current , packet1.esc1_current , packet1.esc2_current , packet1.uC_buc_current , packet1.main_voltage , packet1.uC_buck_voltage_5V , packet1.bat1_temperature , packet1.bat2_temperature , packet1.esc1_temperature , packet1.esc2_temperature , packet1.motor1_temperature , packet1.motor2_temperature , packet1.mosfet1_temperature , packet1.mosfet2_temperature , packet1.errorcode_cout , packet1.errorcode_dout , packet1.extra1 );
    mavlink_msg_bms_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_bms_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_bms_data_send(MAVLINK_COMM_1 , packet1.total_current , packet1.esc1_current , packet1.esc2_current , packet1.uC_buc_current , packet1.main_voltage , packet1.uC_buck_voltage_5V , packet1.bat1_temperature , packet1.bat2_temperature , packet1.esc1_temperature , packet1.esc2_temperature , packet1.motor1_temperature , packet1.motor2_temperature , packet1.mosfet1_temperature , packet1.mosfet2_temperature , packet1.errorcode_cout , packet1.errorcode_dout , packet1.extra1 );
    mavlink_msg_bms_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_R5BMS(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_top_data(system_id, component_id, last_msg);
    mavlink_test_mid_data(system_id, component_id, last_msg);
    mavlink_test_bms_data(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // R5BMS_TESTSUITE_H
