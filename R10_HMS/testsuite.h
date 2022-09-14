/** @file
 *    @brief MAVLink comm protocol testsuite generated from R10_HMS.xml
 *    @see http://qgroundcontrol.org/mavlink/
 */
#pragma once
#ifndef R10_HMS_TESTSUITE_H
#define R10_HMS_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL

static void mavlink_test_R10_HMS(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{

    mavlink_test_R10_HMS(system_id, component_id, last_msg);
}
#endif




static void mavlink_test_r10_servo_data(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_R10_SERVO_DATA >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_r10_servo_data_t packet_in = {
        93372036854775807ULL,17651,17755,17859,17963,18067,18171,18275,18379,18483,18587,18691,18795,101,168,235,46,113,180
    };
    mavlink_r10_servo_data_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.TIME_US = packet_in.TIME_US;
        packet1.VSEN_BUCK1 = packet_in.VSEN_BUCK1;
        packet1.VSEN_BUCK2 = packet_in.VSEN_BUCK2;
        packet1.VSEN_BUCK3 = packet_in.VSEN_BUCK3;
        packet1.VSEN_BUCK4 = packet_in.VSEN_BUCK4;
        packet1.VSEN_BUCK6 = packet_in.VSEN_BUCK6;
        packet1.VSEN_BUCK_S_AUX = packet_in.VSEN_BUCK_S_AUX;
        packet1.ISEN_S1 = packet_in.ISEN_S1;
        packet1.ISEN_S2 = packet_in.ISEN_S2;
        packet1.ISEN_S3 = packet_in.ISEN_S3;
        packet1.ISEN_S4 = packet_in.ISEN_S4;
        packet1.ISEN_S6 = packet_in.ISEN_S6;
        packet1.ISEN_S_AUX = packet_in.ISEN_S_AUX;
        packet1.S1_TEMP = packet_in.S1_TEMP;
        packet1.S2_TEMP = packet_in.S2_TEMP;
        packet1.S3_TEMP = packet_in.S3_TEMP;
        packet1.S4_TEMP = packet_in.S4_TEMP;
        packet1.S5_TEMP = packet_in.S5_TEMP;
        packet1.S6_TEMP = packet_in.S6_TEMP;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_R10_SERVO_DATA_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_R10_SERVO_DATA_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_r10_servo_data_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_r10_servo_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_r10_servo_data_pack(system_id, component_id, &msg , packet1.TIME_US , packet1.VSEN_BUCK1 , packet1.VSEN_BUCK2 , packet1.VSEN_BUCK3 , packet1.VSEN_BUCK4 , packet1.VSEN_BUCK6 , packet1.VSEN_BUCK_S_AUX , packet1.ISEN_S1 , packet1.ISEN_S2 , packet1.ISEN_S3 , packet1.ISEN_S4 , packet1.ISEN_S6 , packet1.ISEN_S_AUX , packet1.S1_TEMP , packet1.S2_TEMP , packet1.S3_TEMP , packet1.S4_TEMP , packet1.S5_TEMP , packet1.S6_TEMP );
    mavlink_msg_r10_servo_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_r10_servo_data_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.TIME_US , packet1.VSEN_BUCK1 , packet1.VSEN_BUCK2 , packet1.VSEN_BUCK3 , packet1.VSEN_BUCK4 , packet1.VSEN_BUCK6 , packet1.VSEN_BUCK_S_AUX , packet1.ISEN_S1 , packet1.ISEN_S2 , packet1.ISEN_S3 , packet1.ISEN_S4 , packet1.ISEN_S6 , packet1.ISEN_S_AUX , packet1.S1_TEMP , packet1.S2_TEMP , packet1.S3_TEMP , packet1.S4_TEMP , packet1.S5_TEMP , packet1.S6_TEMP );
    mavlink_msg_r10_servo_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_r10_servo_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_r10_servo_data_send(MAVLINK_COMM_1 , packet1.TIME_US , packet1.VSEN_BUCK1 , packet1.VSEN_BUCK2 , packet1.VSEN_BUCK3 , packet1.VSEN_BUCK4 , packet1.VSEN_BUCK6 , packet1.VSEN_BUCK_S_AUX , packet1.ISEN_S1 , packet1.ISEN_S2 , packet1.ISEN_S3 , packet1.ISEN_S4 , packet1.ISEN_S6 , packet1.ISEN_S_AUX , packet1.S1_TEMP , packet1.S2_TEMP , packet1.S3_TEMP , packet1.S4_TEMP , packet1.S5_TEMP , packet1.S6_TEMP );
    mavlink_msg_r10_servo_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_r10_ips_data(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_R10_IPS_DATA >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_r10_ips_data_t packet_in = {
        93372036854775807ULL,17651,17755,17859,17963,18067,18171,18275,18379
    };
    mavlink_r10_ips_data_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.TIME_US = packet_in.TIME_US;
        packet1.VSEN_28IPS = packet_in.VSEN_28IPS;
        packet1.VSEN_12IPS = packet_in.VSEN_12IPS;
        packet1.VSEN_5IPS = packet_in.VSEN_5IPS;
        packet1.ISEN_28IPS = packet_in.ISEN_28IPS;
        packet1.ISEN_12IPS = packet_in.ISEN_12IPS;
        packet1.ISEN_5IPS = packet_in.ISEN_5IPS;
        packet1.PMU_TEMP = packet_in.PMU_TEMP;
        packet1.SG_TEMP = packet_in.SG_TEMP;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_R10_IPS_DATA_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_R10_IPS_DATA_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_r10_ips_data_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_r10_ips_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_r10_ips_data_pack(system_id, component_id, &msg , packet1.TIME_US , packet1.VSEN_28IPS , packet1.VSEN_12IPS , packet1.VSEN_5IPS , packet1.ISEN_28IPS , packet1.ISEN_12IPS , packet1.ISEN_5IPS , packet1.PMU_TEMP , packet1.SG_TEMP );
    mavlink_msg_r10_ips_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_r10_ips_data_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.TIME_US , packet1.VSEN_28IPS , packet1.VSEN_12IPS , packet1.VSEN_5IPS , packet1.ISEN_28IPS , packet1.ISEN_12IPS , packet1.ISEN_5IPS , packet1.PMU_TEMP , packet1.SG_TEMP );
    mavlink_msg_r10_ips_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_r10_ips_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_r10_ips_data_send(MAVLINK_COMM_1 , packet1.TIME_US , packet1.VSEN_28IPS , packet1.VSEN_12IPS , packet1.VSEN_5IPS , packet1.ISEN_28IPS , packet1.ISEN_12IPS , packet1.ISEN_5IPS , packet1.PMU_TEMP , packet1.SG_TEMP );
    mavlink_msg_r10_ips_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_r10_bat_data(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_R10_BAT_DATA >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_r10_bat_data_t packet_in = {
        93372036854775807ULL,17651,17755,17859,17963,53,120
    };
    mavlink_r10_bat_data_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.TIME_US = packet_in.TIME_US;
        packet1.VSEN_OSB = packet_in.VSEN_OSB;
        packet1.VSEN_OBB = packet_in.VSEN_OBB;
        packet1.ISENS_OSB = packet_in.ISENS_OSB;
        packet1.ISENS_OBB = packet_in.ISENS_OBB;
        packet1.OSB_TEMP = packet_in.OSB_TEMP;
        packet1.OBB_TEMP = packet_in.OBB_TEMP;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_R10_BAT_DATA_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_R10_BAT_DATA_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_r10_bat_data_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_r10_bat_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_r10_bat_data_pack(system_id, component_id, &msg , packet1.TIME_US , packet1.VSEN_OSB , packet1.VSEN_OBB , packet1.ISENS_OSB , packet1.ISENS_OBB , packet1.OSB_TEMP , packet1.OBB_TEMP );
    mavlink_msg_r10_bat_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_r10_bat_data_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.TIME_US , packet1.VSEN_OSB , packet1.VSEN_OBB , packet1.ISENS_OSB , packet1.ISENS_OBB , packet1.OSB_TEMP , packet1.OBB_TEMP );
    mavlink_msg_r10_bat_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_r10_bat_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_r10_bat_data_send(MAVLINK_COMM_1 , packet1.TIME_US , packet1.VSEN_OSB , packet1.VSEN_OBB , packet1.ISENS_OSB , packet1.ISENS_OBB , packet1.OSB_TEMP , packet1.OBB_TEMP );
    mavlink_msg_r10_bat_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_r10_oth_data(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_R10_OTH_DATA >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_r10_oth_data_t packet_in = {
        93372036854775807ULL,17651,17755,17859,17963,53,120
    };
    mavlink_r10_oth_data_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.TIME_US = packet_in.TIME_US;
        packet1.AUX_PIX_VOLT = packet_in.AUX_PIX_VOLT;
        packet1.STM_IN_VOLT = packet_in.STM_IN_VOLT;
        packet1.EX_MUX_PIN1 = packet_in.EX_MUX_PIN1;
        packet1.EX_MUX_PIN2 = packet_in.EX_MUX_PIN2;
        packet1.ENG_TEMP1 = packet_in.ENG_TEMP1;
        packet1.ENG_TEMP2 = packet_in.ENG_TEMP2;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_R10_OTH_DATA_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_R10_OTH_DATA_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_r10_oth_data_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_r10_oth_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_r10_oth_data_pack(system_id, component_id, &msg , packet1.TIME_US , packet1.AUX_PIX_VOLT , packet1.STM_IN_VOLT , packet1.ENG_TEMP1 , packet1.ENG_TEMP2 , packet1.EX_MUX_PIN1 , packet1.EX_MUX_PIN2 );
    mavlink_msg_r10_oth_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_r10_oth_data_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.TIME_US , packet1.AUX_PIX_VOLT , packet1.STM_IN_VOLT , packet1.ENG_TEMP1 , packet1.ENG_TEMP2 , packet1.EX_MUX_PIN1 , packet1.EX_MUX_PIN2 );
    mavlink_msg_r10_oth_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_r10_oth_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_r10_oth_data_send(MAVLINK_COMM_1 , packet1.TIME_US , packet1.AUX_PIX_VOLT , packet1.STM_IN_VOLT , packet1.ENG_TEMP1 , packet1.ENG_TEMP2 , packet1.EX_MUX_PIN1 , packet1.EX_MUX_PIN2 );
    mavlink_msg_r10_oth_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_r10_dlb_error(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_R10_DLB_ERROR >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_r10_dlb_error_t packet_in = {
        93372036854775807ULL,17651
    };
    mavlink_r10_dlb_error_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.TIME_US = packet_in.TIME_US;
        packet1.ERROR_CODE = packet_in.ERROR_CODE;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_R10_DLB_ERROR_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_R10_DLB_ERROR_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_r10_dlb_error_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_r10_dlb_error_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_r10_dlb_error_pack(system_id, component_id, &msg , packet1.TIME_US , packet1.ERROR_CODE );
    mavlink_msg_r10_dlb_error_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_r10_dlb_error_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.TIME_US , packet1.ERROR_CODE );
    mavlink_msg_r10_dlb_error_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_r10_dlb_error_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_r10_dlb_error_send(MAVLINK_COMM_1 , packet1.TIME_US , packet1.ERROR_CODE );
    mavlink_msg_r10_dlb_error_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_r10_psdata_error(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_R10_PSDATA_ERROR >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_r10_psdata_error_t packet_in = {
        93372036854775807ULL,17651,17755
    };
    mavlink_r10_psdata_error_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.TIME_US = packet_in.TIME_US;
        packet1.ERROR_CODE = packet_in.ERROR_CODE;
        packet1.SENSOR_VALUE = packet_in.SENSOR_VALUE;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_R10_PSDATA_ERROR_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_R10_PSDATA_ERROR_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_r10_psdata_error_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_r10_psdata_error_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_r10_psdata_error_pack(system_id, component_id, &msg , packet1.TIME_US , packet1.ERROR_CODE , packet1.SENSOR_VALUE );
    mavlink_msg_r10_psdata_error_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_r10_psdata_error_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.TIME_US , packet1.ERROR_CODE , packet1.SENSOR_VALUE );
    mavlink_msg_r10_psdata_error_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_r10_psdata_error_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_r10_psdata_error_send(MAVLINK_COMM_1 , packet1.TIME_US , packet1.ERROR_CODE , packet1.SENSOR_VALUE );
    mavlink_msg_r10_psdata_error_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_R10_HMS(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_r10_servo_data(system_id, component_id, last_msg);
    mavlink_test_r10_ips_data(system_id, component_id, last_msg);
    mavlink_test_r10_bat_data(system_id, component_id, last_msg);
    mavlink_test_r10_oth_data(system_id, component_id, last_msg);
    mavlink_test_r10_dlb_error(system_id, component_id, last_msg);
    mavlink_test_r10_psdata_error(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // R10_HMS_TESTSUITE_H
