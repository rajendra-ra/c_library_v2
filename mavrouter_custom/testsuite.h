/** @file
 *    @brief MAVLink comm protocol testsuite generated from mavrouter_custom.xml
 *    @see http://qgroundcontrol.org/mavlink/
 */
#pragma once
#ifndef MAVROUTER_CUSTOM_TESTSUITE_H
#define MAVROUTER_CUSTOM_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL

static void mavlink_test_mavrouter_custom(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{

    mavlink_test_mavrouter_custom(system_id, component_id, last_msg);
}
#endif




static void mavlink_test_router_channel_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ROUTER_CHANNEL_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_router_channel_status_t packet_in = {
        5,72,139
    };
    mavlink_router_channel_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.Channel_id = packet_in.Channel_id;
        packet1.channel_active = packet_in.channel_active;
        packet1.total_channels = packet_in.total_channels;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ROUTER_CHANNEL_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ROUTER_CHANNEL_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_router_channel_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_router_channel_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_router_channel_status_pack(system_id, component_id, &msg , packet1.Channel_id , packet1.channel_active , packet1.total_channels );
    mavlink_msg_router_channel_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_router_channel_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.Channel_id , packet1.channel_active , packet1.total_channels );
    mavlink_msg_router_channel_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_router_channel_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_router_channel_status_send(MAVLINK_COMM_1 , packet1.Channel_id , packet1.channel_active , packet1.total_channels );
    mavlink_msg_router_channel_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_mavrouter_custom(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_router_channel_status(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVROUTER_CUSTOM_TESTSUITE_H
