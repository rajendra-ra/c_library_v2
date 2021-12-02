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




static void mavlink_test_bms_aux_data(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_BMS_AUX_DATA >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_bms_aux_data_t packet_in = {
        17235,17339,17443,17547,17651,17755,17859,17963,18067,18171,18275,18379,18483,18587
    };
    mavlink_bms_aux_data_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.aux_current = packet_in.aux_current;
        packet1.aux_voltage = packet_in.aux_voltage;
        packet1.BMS_current1 = packet_in.BMS_current1;
        packet1.BMS_current2 = packet_in.BMS_current2;
        packet1.BMS_current3 = packet_in.BMS_current3;
        packet1.BMS_voltage = packet_in.BMS_voltage;
        packet1.BMS_temperature1 = packet_in.BMS_temperature1;
        packet1.BMS_temperature2 = packet_in.BMS_temperature2;
        packet1.BMS_temperature3 = packet_in.BMS_temperature3;
        packet1.BMS_temperature4 = packet_in.BMS_temperature4;
        packet1.BMS_cout = packet_in.BMS_cout;
        packet1.BMS_dout = packet_in.BMS_dout;
        packet1.Motor2_temp = packet_in.Motor2_temp;
        packet1.Motor1_temp = packet_in.Motor1_temp;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_BMS_AUX_DATA_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_BMS_AUX_DATA_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_bms_aux_data_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_bms_aux_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_bms_aux_data_pack(system_id, component_id, &msg , packet1.aux_current , packet1.aux_voltage , packet1.BMS_current1 , packet1.BMS_current2 , packet1.BMS_current3 , packet1.BMS_voltage , packet1.BMS_temperature1 , packet1.BMS_temperature2 , packet1.BMS_temperature3 , packet1.BMS_temperature4 , packet1.BMS_cout , packet1.BMS_dout , packet1.Motor2_temp , packet1.Motor1_temp );
    mavlink_msg_bms_aux_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_bms_aux_data_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.aux_current , packet1.aux_voltage , packet1.BMS_current1 , packet1.BMS_current2 , packet1.BMS_current3 , packet1.BMS_voltage , packet1.BMS_temperature1 , packet1.BMS_temperature2 , packet1.BMS_temperature3 , packet1.BMS_temperature4 , packet1.BMS_cout , packet1.BMS_dout , packet1.Motor2_temp , packet1.Motor1_temp );
    mavlink_msg_bms_aux_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_bms_aux_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_bms_aux_data_send(MAVLINK_COMM_1 , packet1.aux_current , packet1.aux_voltage , packet1.BMS_current1 , packet1.BMS_current2 , packet1.BMS_current3 , packet1.BMS_voltage , packet1.BMS_temperature1 , packet1.BMS_temperature2 , packet1.BMS_temperature3 , packet1.BMS_temperature4 , packet1.BMS_cout , packet1.BMS_dout , packet1.Motor2_temp , packet1.Motor1_temp );
    mavlink_msg_bms_aux_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_top_mid_pcb_data(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_TOP_MID_PCB_DATA >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_top_mid_pcb_data_t packet_in = {
        17235,17339,17443,17547,17651,17755,17859,17963,18067,18171,18275,18379,18483,18587,18691,18795,18899,19003
    };
    mavlink_top_mid_pcb_data_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.battery_voltage = packet_in.battery_voltage;
        packet1.servo1_current = packet_in.servo1_current;
        packet1.servo2_current = packet_in.servo2_current;
        packet1.servo3_current = packet_in.servo3_current;
        packet1.temp_servo1 = packet_in.temp_servo1;
        packet1.temp_servo2 = packet_in.temp_servo2;
        packet1.temp_servo3 = packet_in.temp_servo3;
        packet1.temp_ambient1 = packet_in.temp_ambient1;
        packet1.temp_ambient2 = packet_in.temp_ambient2;
        packet1.mid_servo1_current = packet_in.mid_servo1_current;
        packet1.mid_servo2_current = packet_in.mid_servo2_current;
        packet1.mid_servo3_current = packet_in.mid_servo3_current;
        packet1.mid_temp_servo1 = packet_in.mid_temp_servo1;
        packet1.mid_temp_servo2 = packet_in.mid_temp_servo2;
        packet1.voltage_bec1 = packet_in.voltage_bec1;
        packet1.voltage_bec2 = packet_in.voltage_bec2;
        packet1.voltage_buck = packet_in.voltage_buck;
        packet1.Temp_servo3 = packet_in.Temp_servo3;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_TOP_MID_PCB_DATA_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_TOP_MID_PCB_DATA_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_top_mid_pcb_data_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_top_mid_pcb_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_top_mid_pcb_data_pack(system_id, component_id, &msg , packet1.battery_voltage , packet1.servo1_current , packet1.servo2_current , packet1.servo3_current , packet1.temp_servo1 , packet1.temp_servo2 , packet1.temp_servo3 , packet1.temp_ambient1 , packet1.temp_ambient2 , packet1.mid_servo1_current , packet1.mid_servo2_current , packet1.mid_servo3_current , packet1.mid_temp_servo1 , packet1.mid_temp_servo2 , packet1.voltage_bec1 , packet1.voltage_bec2 , packet1.voltage_buck , packet1.Temp_servo3 );
    mavlink_msg_top_mid_pcb_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_top_mid_pcb_data_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.battery_voltage , packet1.servo1_current , packet1.servo2_current , packet1.servo3_current , packet1.temp_servo1 , packet1.temp_servo2 , packet1.temp_servo3 , packet1.temp_ambient1 , packet1.temp_ambient2 , packet1.mid_servo1_current , packet1.mid_servo2_current , packet1.mid_servo3_current , packet1.mid_temp_servo1 , packet1.mid_temp_servo2 , packet1.voltage_bec1 , packet1.voltage_bec2 , packet1.voltage_buck , packet1.Temp_servo3 );
    mavlink_msg_top_mid_pcb_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_top_mid_pcb_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_top_mid_pcb_data_send(MAVLINK_COMM_1 , packet1.battery_voltage , packet1.servo1_current , packet1.servo2_current , packet1.servo3_current , packet1.temp_servo1 , packet1.temp_servo2 , packet1.temp_servo3 , packet1.temp_ambient1 , packet1.temp_ambient2 , packet1.mid_servo1_current , packet1.mid_servo2_current , packet1.mid_servo3_current , packet1.mid_temp_servo1 , packet1.mid_temp_servo2 , packet1.voltage_bec1 , packet1.voltage_bec2 , packet1.voltage_buck , packet1.Temp_servo3 );
    mavlink_msg_top_mid_pcb_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_R5BMS(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_bms_aux_data(system_id, component_id, last_msg);
    mavlink_test_top_mid_pcb_data(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // R5BMS_TESTSUITE_H
