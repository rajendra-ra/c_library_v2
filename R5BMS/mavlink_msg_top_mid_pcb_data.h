#pragma once
// MESSAGE TOP_MID_PCB_DATA PACKING

#define MAVLINK_MSG_ID_TOP_MID_PCB_DATA 11071


typedef struct __mavlink_top_mid_pcb_data_t {
 uint16_t battery_voltage; /*<  Top_battery_voltage*/
 uint16_t servo1_current; /*<  Top_servo1_current*/
 uint16_t servo2_current; /*<  Top_servo2_current*/
 uint16_t servo3_current; /*<  Top_servo3_current*/
 uint16_t temp_servo1; /*<  Top_servo1_temperature*/
 uint16_t temp_servo2; /*<  Top_servo2_temperature*/
 uint16_t temp_servo3; /*<  Top_servo3_temperature*/
 uint16_t temp_ambient1; /*<  ambient temperature 1*/
 uint16_t temp_ambient2; /*<  ambient temperature 2*/
 uint16_t mid_servo1_current; /*<  mid_servo1_current*/
 uint16_t mid_servo2_current; /*<  mid_servo2_current*/
 uint16_t mid_servo3_current; /*<  mid_servo3_current*/
 uint16_t mid_temp_servo1; /*<  mid_temp_servo1*/
 uint16_t mid_temp_servo2; /*<  mid_temp_servo2*/
 uint16_t voltage_bec1; /*<  voltage_bec1*/
 uint16_t voltage_bec2; /*<  voltage_bec2*/
 uint16_t voltage_buck; /*<  voltage_buck*/
 uint16_t Temp_servo3; /*<  Temp_servo3*/
} mavlink_top_mid_pcb_data_t;

#define MAVLINK_MSG_ID_TOP_MID_PCB_DATA_LEN 36
#define MAVLINK_MSG_ID_TOP_MID_PCB_DATA_MIN_LEN 36
#define MAVLINK_MSG_ID_11071_LEN 36
#define MAVLINK_MSG_ID_11071_MIN_LEN 36

#define MAVLINK_MSG_ID_TOP_MID_PCB_DATA_CRC 32
#define MAVLINK_MSG_ID_11071_CRC 32



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_TOP_MID_PCB_DATA { \
    11071, \
    "TOP_MID_PCB_DATA", \
    18, \
    {  { "battery_voltage", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_top_mid_pcb_data_t, battery_voltage) }, \
         { "servo1_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_top_mid_pcb_data_t, servo1_current) }, \
         { "servo2_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_top_mid_pcb_data_t, servo2_current) }, \
         { "servo3_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_top_mid_pcb_data_t, servo3_current) }, \
         { "temp_servo1", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_top_mid_pcb_data_t, temp_servo1) }, \
         { "temp_servo2", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_top_mid_pcb_data_t, temp_servo2) }, \
         { "temp_servo3", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_top_mid_pcb_data_t, temp_servo3) }, \
         { "temp_ambient1", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_top_mid_pcb_data_t, temp_ambient1) }, \
         { "temp_ambient2", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_top_mid_pcb_data_t, temp_ambient2) }, \
         { "mid_servo1_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 18, offsetof(mavlink_top_mid_pcb_data_t, mid_servo1_current) }, \
         { "mid_servo2_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 20, offsetof(mavlink_top_mid_pcb_data_t, mid_servo2_current) }, \
         { "mid_servo3_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 22, offsetof(mavlink_top_mid_pcb_data_t, mid_servo3_current) }, \
         { "mid_temp_servo1", NULL, MAVLINK_TYPE_UINT16_T, 0, 24, offsetof(mavlink_top_mid_pcb_data_t, mid_temp_servo1) }, \
         { "mid_temp_servo2", NULL, MAVLINK_TYPE_UINT16_T, 0, 26, offsetof(mavlink_top_mid_pcb_data_t, mid_temp_servo2) }, \
         { "voltage_bec1", NULL, MAVLINK_TYPE_UINT16_T, 0, 28, offsetof(mavlink_top_mid_pcb_data_t, voltage_bec1) }, \
         { "voltage_bec2", NULL, MAVLINK_TYPE_UINT16_T, 0, 30, offsetof(mavlink_top_mid_pcb_data_t, voltage_bec2) }, \
         { "voltage_buck", NULL, MAVLINK_TYPE_UINT16_T, 0, 32, offsetof(mavlink_top_mid_pcb_data_t, voltage_buck) }, \
         { "Temp_servo3", NULL, MAVLINK_TYPE_UINT16_T, 0, 34, offsetof(mavlink_top_mid_pcb_data_t, Temp_servo3) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_TOP_MID_PCB_DATA { \
    "TOP_MID_PCB_DATA", \
    18, \
    {  { "battery_voltage", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_top_mid_pcb_data_t, battery_voltage) }, \
         { "servo1_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_top_mid_pcb_data_t, servo1_current) }, \
         { "servo2_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_top_mid_pcb_data_t, servo2_current) }, \
         { "servo3_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_top_mid_pcb_data_t, servo3_current) }, \
         { "temp_servo1", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_top_mid_pcb_data_t, temp_servo1) }, \
         { "temp_servo2", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_top_mid_pcb_data_t, temp_servo2) }, \
         { "temp_servo3", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_top_mid_pcb_data_t, temp_servo3) }, \
         { "temp_ambient1", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_top_mid_pcb_data_t, temp_ambient1) }, \
         { "temp_ambient2", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_top_mid_pcb_data_t, temp_ambient2) }, \
         { "mid_servo1_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 18, offsetof(mavlink_top_mid_pcb_data_t, mid_servo1_current) }, \
         { "mid_servo2_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 20, offsetof(mavlink_top_mid_pcb_data_t, mid_servo2_current) }, \
         { "mid_servo3_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 22, offsetof(mavlink_top_mid_pcb_data_t, mid_servo3_current) }, \
         { "mid_temp_servo1", NULL, MAVLINK_TYPE_UINT16_T, 0, 24, offsetof(mavlink_top_mid_pcb_data_t, mid_temp_servo1) }, \
         { "mid_temp_servo2", NULL, MAVLINK_TYPE_UINT16_T, 0, 26, offsetof(mavlink_top_mid_pcb_data_t, mid_temp_servo2) }, \
         { "voltage_bec1", NULL, MAVLINK_TYPE_UINT16_T, 0, 28, offsetof(mavlink_top_mid_pcb_data_t, voltage_bec1) }, \
         { "voltage_bec2", NULL, MAVLINK_TYPE_UINT16_T, 0, 30, offsetof(mavlink_top_mid_pcb_data_t, voltage_bec2) }, \
         { "voltage_buck", NULL, MAVLINK_TYPE_UINT16_T, 0, 32, offsetof(mavlink_top_mid_pcb_data_t, voltage_buck) }, \
         { "Temp_servo3", NULL, MAVLINK_TYPE_UINT16_T, 0, 34, offsetof(mavlink_top_mid_pcb_data_t, Temp_servo3) }, \
         } \
}
#endif

/**
 * @brief Pack a top_mid_pcb_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param battery_voltage  Top_battery_voltage
 * @param servo1_current  Top_servo1_current
 * @param servo2_current  Top_servo2_current
 * @param servo3_current  Top_servo3_current
 * @param temp_servo1  Top_servo1_temperature
 * @param temp_servo2  Top_servo2_temperature
 * @param temp_servo3  Top_servo3_temperature
 * @param temp_ambient1  ambient temperature 1
 * @param temp_ambient2  ambient temperature 2
 * @param mid_servo1_current  mid_servo1_current
 * @param mid_servo2_current  mid_servo2_current
 * @param mid_servo3_current  mid_servo3_current
 * @param mid_temp_servo1  mid_temp_servo1
 * @param mid_temp_servo2  mid_temp_servo2
 * @param voltage_bec1  voltage_bec1
 * @param voltage_bec2  voltage_bec2
 * @param voltage_buck  voltage_buck
 * @param Temp_servo3  Temp_servo3
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_top_mid_pcb_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t battery_voltage, uint16_t servo1_current, uint16_t servo2_current, uint16_t servo3_current, uint16_t temp_servo1, uint16_t temp_servo2, uint16_t temp_servo3, uint16_t temp_ambient1, uint16_t temp_ambient2, uint16_t mid_servo1_current, uint16_t mid_servo2_current, uint16_t mid_servo3_current, uint16_t mid_temp_servo1, uint16_t mid_temp_servo2, uint16_t voltage_bec1, uint16_t voltage_bec2, uint16_t voltage_buck, uint16_t Temp_servo3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TOP_MID_PCB_DATA_LEN];
    _mav_put_uint16_t(buf, 0, battery_voltage);
    _mav_put_uint16_t(buf, 2, servo1_current);
    _mav_put_uint16_t(buf, 4, servo2_current);
    _mav_put_uint16_t(buf, 6, servo3_current);
    _mav_put_uint16_t(buf, 8, temp_servo1);
    _mav_put_uint16_t(buf, 10, temp_servo2);
    _mav_put_uint16_t(buf, 12, temp_servo3);
    _mav_put_uint16_t(buf, 14, temp_ambient1);
    _mav_put_uint16_t(buf, 16, temp_ambient2);
    _mav_put_uint16_t(buf, 18, mid_servo1_current);
    _mav_put_uint16_t(buf, 20, mid_servo2_current);
    _mav_put_uint16_t(buf, 22, mid_servo3_current);
    _mav_put_uint16_t(buf, 24, mid_temp_servo1);
    _mav_put_uint16_t(buf, 26, mid_temp_servo2);
    _mav_put_uint16_t(buf, 28, voltage_bec1);
    _mav_put_uint16_t(buf, 30, voltage_bec2);
    _mav_put_uint16_t(buf, 32, voltage_buck);
    _mav_put_uint16_t(buf, 34, Temp_servo3);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TOP_MID_PCB_DATA_LEN);
#else
    mavlink_top_mid_pcb_data_t packet;
    packet.battery_voltage = battery_voltage;
    packet.servo1_current = servo1_current;
    packet.servo2_current = servo2_current;
    packet.servo3_current = servo3_current;
    packet.temp_servo1 = temp_servo1;
    packet.temp_servo2 = temp_servo2;
    packet.temp_servo3 = temp_servo3;
    packet.temp_ambient1 = temp_ambient1;
    packet.temp_ambient2 = temp_ambient2;
    packet.mid_servo1_current = mid_servo1_current;
    packet.mid_servo2_current = mid_servo2_current;
    packet.mid_servo3_current = mid_servo3_current;
    packet.mid_temp_servo1 = mid_temp_servo1;
    packet.mid_temp_servo2 = mid_temp_servo2;
    packet.voltage_bec1 = voltage_bec1;
    packet.voltage_bec2 = voltage_bec2;
    packet.voltage_buck = voltage_buck;
    packet.Temp_servo3 = Temp_servo3;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TOP_MID_PCB_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TOP_MID_PCB_DATA;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TOP_MID_PCB_DATA_MIN_LEN, MAVLINK_MSG_ID_TOP_MID_PCB_DATA_LEN, MAVLINK_MSG_ID_TOP_MID_PCB_DATA_CRC);
}

/**
 * @brief Pack a top_mid_pcb_data message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param battery_voltage  Top_battery_voltage
 * @param servo1_current  Top_servo1_current
 * @param servo2_current  Top_servo2_current
 * @param servo3_current  Top_servo3_current
 * @param temp_servo1  Top_servo1_temperature
 * @param temp_servo2  Top_servo2_temperature
 * @param temp_servo3  Top_servo3_temperature
 * @param temp_ambient1  ambient temperature 1
 * @param temp_ambient2  ambient temperature 2
 * @param mid_servo1_current  mid_servo1_current
 * @param mid_servo2_current  mid_servo2_current
 * @param mid_servo3_current  mid_servo3_current
 * @param mid_temp_servo1  mid_temp_servo1
 * @param mid_temp_servo2  mid_temp_servo2
 * @param voltage_bec1  voltage_bec1
 * @param voltage_bec2  voltage_bec2
 * @param voltage_buck  voltage_buck
 * @param Temp_servo3  Temp_servo3
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_top_mid_pcb_data_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t battery_voltage,uint16_t servo1_current,uint16_t servo2_current,uint16_t servo3_current,uint16_t temp_servo1,uint16_t temp_servo2,uint16_t temp_servo3,uint16_t temp_ambient1,uint16_t temp_ambient2,uint16_t mid_servo1_current,uint16_t mid_servo2_current,uint16_t mid_servo3_current,uint16_t mid_temp_servo1,uint16_t mid_temp_servo2,uint16_t voltage_bec1,uint16_t voltage_bec2,uint16_t voltage_buck,uint16_t Temp_servo3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TOP_MID_PCB_DATA_LEN];
    _mav_put_uint16_t(buf, 0, battery_voltage);
    _mav_put_uint16_t(buf, 2, servo1_current);
    _mav_put_uint16_t(buf, 4, servo2_current);
    _mav_put_uint16_t(buf, 6, servo3_current);
    _mav_put_uint16_t(buf, 8, temp_servo1);
    _mav_put_uint16_t(buf, 10, temp_servo2);
    _mav_put_uint16_t(buf, 12, temp_servo3);
    _mav_put_uint16_t(buf, 14, temp_ambient1);
    _mav_put_uint16_t(buf, 16, temp_ambient2);
    _mav_put_uint16_t(buf, 18, mid_servo1_current);
    _mav_put_uint16_t(buf, 20, mid_servo2_current);
    _mav_put_uint16_t(buf, 22, mid_servo3_current);
    _mav_put_uint16_t(buf, 24, mid_temp_servo1);
    _mav_put_uint16_t(buf, 26, mid_temp_servo2);
    _mav_put_uint16_t(buf, 28, voltage_bec1);
    _mav_put_uint16_t(buf, 30, voltage_bec2);
    _mav_put_uint16_t(buf, 32, voltage_buck);
    _mav_put_uint16_t(buf, 34, Temp_servo3);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TOP_MID_PCB_DATA_LEN);
#else
    mavlink_top_mid_pcb_data_t packet;
    packet.battery_voltage = battery_voltage;
    packet.servo1_current = servo1_current;
    packet.servo2_current = servo2_current;
    packet.servo3_current = servo3_current;
    packet.temp_servo1 = temp_servo1;
    packet.temp_servo2 = temp_servo2;
    packet.temp_servo3 = temp_servo3;
    packet.temp_ambient1 = temp_ambient1;
    packet.temp_ambient2 = temp_ambient2;
    packet.mid_servo1_current = mid_servo1_current;
    packet.mid_servo2_current = mid_servo2_current;
    packet.mid_servo3_current = mid_servo3_current;
    packet.mid_temp_servo1 = mid_temp_servo1;
    packet.mid_temp_servo2 = mid_temp_servo2;
    packet.voltage_bec1 = voltage_bec1;
    packet.voltage_bec2 = voltage_bec2;
    packet.voltage_buck = voltage_buck;
    packet.Temp_servo3 = Temp_servo3;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TOP_MID_PCB_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TOP_MID_PCB_DATA;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_TOP_MID_PCB_DATA_MIN_LEN, MAVLINK_MSG_ID_TOP_MID_PCB_DATA_LEN, MAVLINK_MSG_ID_TOP_MID_PCB_DATA_CRC);
}

/**
 * @brief Encode a top_mid_pcb_data struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param top_mid_pcb_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_top_mid_pcb_data_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_top_mid_pcb_data_t* top_mid_pcb_data)
{
    return mavlink_msg_top_mid_pcb_data_pack(system_id, component_id, msg, top_mid_pcb_data->battery_voltage, top_mid_pcb_data->servo1_current, top_mid_pcb_data->servo2_current, top_mid_pcb_data->servo3_current, top_mid_pcb_data->temp_servo1, top_mid_pcb_data->temp_servo2, top_mid_pcb_data->temp_servo3, top_mid_pcb_data->temp_ambient1, top_mid_pcb_data->temp_ambient2, top_mid_pcb_data->mid_servo1_current, top_mid_pcb_data->mid_servo2_current, top_mid_pcb_data->mid_servo3_current, top_mid_pcb_data->mid_temp_servo1, top_mid_pcb_data->mid_temp_servo2, top_mid_pcb_data->voltage_bec1, top_mid_pcb_data->voltage_bec2, top_mid_pcb_data->voltage_buck, top_mid_pcb_data->Temp_servo3);
}

/**
 * @brief Encode a top_mid_pcb_data struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param top_mid_pcb_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_top_mid_pcb_data_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_top_mid_pcb_data_t* top_mid_pcb_data)
{
    return mavlink_msg_top_mid_pcb_data_pack_chan(system_id, component_id, chan, msg, top_mid_pcb_data->battery_voltage, top_mid_pcb_data->servo1_current, top_mid_pcb_data->servo2_current, top_mid_pcb_data->servo3_current, top_mid_pcb_data->temp_servo1, top_mid_pcb_data->temp_servo2, top_mid_pcb_data->temp_servo3, top_mid_pcb_data->temp_ambient1, top_mid_pcb_data->temp_ambient2, top_mid_pcb_data->mid_servo1_current, top_mid_pcb_data->mid_servo2_current, top_mid_pcb_data->mid_servo3_current, top_mid_pcb_data->mid_temp_servo1, top_mid_pcb_data->mid_temp_servo2, top_mid_pcb_data->voltage_bec1, top_mid_pcb_data->voltage_bec2, top_mid_pcb_data->voltage_buck, top_mid_pcb_data->Temp_servo3);
}

/**
 * @brief Send a top_mid_pcb_data message
 * @param chan MAVLink channel to send the message
 *
 * @param battery_voltage  Top_battery_voltage
 * @param servo1_current  Top_servo1_current
 * @param servo2_current  Top_servo2_current
 * @param servo3_current  Top_servo3_current
 * @param temp_servo1  Top_servo1_temperature
 * @param temp_servo2  Top_servo2_temperature
 * @param temp_servo3  Top_servo3_temperature
 * @param temp_ambient1  ambient temperature 1
 * @param temp_ambient2  ambient temperature 2
 * @param mid_servo1_current  mid_servo1_current
 * @param mid_servo2_current  mid_servo2_current
 * @param mid_servo3_current  mid_servo3_current
 * @param mid_temp_servo1  mid_temp_servo1
 * @param mid_temp_servo2  mid_temp_servo2
 * @param voltage_bec1  voltage_bec1
 * @param voltage_bec2  voltage_bec2
 * @param voltage_buck  voltage_buck
 * @param Temp_servo3  Temp_servo3
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_top_mid_pcb_data_send(mavlink_channel_t chan, uint16_t battery_voltage, uint16_t servo1_current, uint16_t servo2_current, uint16_t servo3_current, uint16_t temp_servo1, uint16_t temp_servo2, uint16_t temp_servo3, uint16_t temp_ambient1, uint16_t temp_ambient2, uint16_t mid_servo1_current, uint16_t mid_servo2_current, uint16_t mid_servo3_current, uint16_t mid_temp_servo1, uint16_t mid_temp_servo2, uint16_t voltage_bec1, uint16_t voltage_bec2, uint16_t voltage_buck, uint16_t Temp_servo3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TOP_MID_PCB_DATA_LEN];
    _mav_put_uint16_t(buf, 0, battery_voltage);
    _mav_put_uint16_t(buf, 2, servo1_current);
    _mav_put_uint16_t(buf, 4, servo2_current);
    _mav_put_uint16_t(buf, 6, servo3_current);
    _mav_put_uint16_t(buf, 8, temp_servo1);
    _mav_put_uint16_t(buf, 10, temp_servo2);
    _mav_put_uint16_t(buf, 12, temp_servo3);
    _mav_put_uint16_t(buf, 14, temp_ambient1);
    _mav_put_uint16_t(buf, 16, temp_ambient2);
    _mav_put_uint16_t(buf, 18, mid_servo1_current);
    _mav_put_uint16_t(buf, 20, mid_servo2_current);
    _mav_put_uint16_t(buf, 22, mid_servo3_current);
    _mav_put_uint16_t(buf, 24, mid_temp_servo1);
    _mav_put_uint16_t(buf, 26, mid_temp_servo2);
    _mav_put_uint16_t(buf, 28, voltage_bec1);
    _mav_put_uint16_t(buf, 30, voltage_bec2);
    _mav_put_uint16_t(buf, 32, voltage_buck);
    _mav_put_uint16_t(buf, 34, Temp_servo3);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TOP_MID_PCB_DATA, buf, MAVLINK_MSG_ID_TOP_MID_PCB_DATA_MIN_LEN, MAVLINK_MSG_ID_TOP_MID_PCB_DATA_LEN, MAVLINK_MSG_ID_TOP_MID_PCB_DATA_CRC);
#else
    mavlink_top_mid_pcb_data_t packet;
    packet.battery_voltage = battery_voltage;
    packet.servo1_current = servo1_current;
    packet.servo2_current = servo2_current;
    packet.servo3_current = servo3_current;
    packet.temp_servo1 = temp_servo1;
    packet.temp_servo2 = temp_servo2;
    packet.temp_servo3 = temp_servo3;
    packet.temp_ambient1 = temp_ambient1;
    packet.temp_ambient2 = temp_ambient2;
    packet.mid_servo1_current = mid_servo1_current;
    packet.mid_servo2_current = mid_servo2_current;
    packet.mid_servo3_current = mid_servo3_current;
    packet.mid_temp_servo1 = mid_temp_servo1;
    packet.mid_temp_servo2 = mid_temp_servo2;
    packet.voltage_bec1 = voltage_bec1;
    packet.voltage_bec2 = voltage_bec2;
    packet.voltage_buck = voltage_buck;
    packet.Temp_servo3 = Temp_servo3;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TOP_MID_PCB_DATA, (const char *)&packet, MAVLINK_MSG_ID_TOP_MID_PCB_DATA_MIN_LEN, MAVLINK_MSG_ID_TOP_MID_PCB_DATA_LEN, MAVLINK_MSG_ID_TOP_MID_PCB_DATA_CRC);
#endif
}

/**
 * @brief Send a top_mid_pcb_data message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_top_mid_pcb_data_send_struct(mavlink_channel_t chan, const mavlink_top_mid_pcb_data_t* top_mid_pcb_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_top_mid_pcb_data_send(chan, top_mid_pcb_data->battery_voltage, top_mid_pcb_data->servo1_current, top_mid_pcb_data->servo2_current, top_mid_pcb_data->servo3_current, top_mid_pcb_data->temp_servo1, top_mid_pcb_data->temp_servo2, top_mid_pcb_data->temp_servo3, top_mid_pcb_data->temp_ambient1, top_mid_pcb_data->temp_ambient2, top_mid_pcb_data->mid_servo1_current, top_mid_pcb_data->mid_servo2_current, top_mid_pcb_data->mid_servo3_current, top_mid_pcb_data->mid_temp_servo1, top_mid_pcb_data->mid_temp_servo2, top_mid_pcb_data->voltage_bec1, top_mid_pcb_data->voltage_bec2, top_mid_pcb_data->voltage_buck, top_mid_pcb_data->Temp_servo3);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TOP_MID_PCB_DATA, (const char *)top_mid_pcb_data, MAVLINK_MSG_ID_TOP_MID_PCB_DATA_MIN_LEN, MAVLINK_MSG_ID_TOP_MID_PCB_DATA_LEN, MAVLINK_MSG_ID_TOP_MID_PCB_DATA_CRC);
#endif
}

#if MAVLINK_MSG_ID_TOP_MID_PCB_DATA_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_top_mid_pcb_data_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t battery_voltage, uint16_t servo1_current, uint16_t servo2_current, uint16_t servo3_current, uint16_t temp_servo1, uint16_t temp_servo2, uint16_t temp_servo3, uint16_t temp_ambient1, uint16_t temp_ambient2, uint16_t mid_servo1_current, uint16_t mid_servo2_current, uint16_t mid_servo3_current, uint16_t mid_temp_servo1, uint16_t mid_temp_servo2, uint16_t voltage_bec1, uint16_t voltage_bec2, uint16_t voltage_buck, uint16_t Temp_servo3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, battery_voltage);
    _mav_put_uint16_t(buf, 2, servo1_current);
    _mav_put_uint16_t(buf, 4, servo2_current);
    _mav_put_uint16_t(buf, 6, servo3_current);
    _mav_put_uint16_t(buf, 8, temp_servo1);
    _mav_put_uint16_t(buf, 10, temp_servo2);
    _mav_put_uint16_t(buf, 12, temp_servo3);
    _mav_put_uint16_t(buf, 14, temp_ambient1);
    _mav_put_uint16_t(buf, 16, temp_ambient2);
    _mav_put_uint16_t(buf, 18, mid_servo1_current);
    _mav_put_uint16_t(buf, 20, mid_servo2_current);
    _mav_put_uint16_t(buf, 22, mid_servo3_current);
    _mav_put_uint16_t(buf, 24, mid_temp_servo1);
    _mav_put_uint16_t(buf, 26, mid_temp_servo2);
    _mav_put_uint16_t(buf, 28, voltage_bec1);
    _mav_put_uint16_t(buf, 30, voltage_bec2);
    _mav_put_uint16_t(buf, 32, voltage_buck);
    _mav_put_uint16_t(buf, 34, Temp_servo3);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TOP_MID_PCB_DATA, buf, MAVLINK_MSG_ID_TOP_MID_PCB_DATA_MIN_LEN, MAVLINK_MSG_ID_TOP_MID_PCB_DATA_LEN, MAVLINK_MSG_ID_TOP_MID_PCB_DATA_CRC);
#else
    mavlink_top_mid_pcb_data_t *packet = (mavlink_top_mid_pcb_data_t *)msgbuf;
    packet->battery_voltage = battery_voltage;
    packet->servo1_current = servo1_current;
    packet->servo2_current = servo2_current;
    packet->servo3_current = servo3_current;
    packet->temp_servo1 = temp_servo1;
    packet->temp_servo2 = temp_servo2;
    packet->temp_servo3 = temp_servo3;
    packet->temp_ambient1 = temp_ambient1;
    packet->temp_ambient2 = temp_ambient2;
    packet->mid_servo1_current = mid_servo1_current;
    packet->mid_servo2_current = mid_servo2_current;
    packet->mid_servo3_current = mid_servo3_current;
    packet->mid_temp_servo1 = mid_temp_servo1;
    packet->mid_temp_servo2 = mid_temp_servo2;
    packet->voltage_bec1 = voltage_bec1;
    packet->voltage_bec2 = voltage_bec2;
    packet->voltage_buck = voltage_buck;
    packet->Temp_servo3 = Temp_servo3;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TOP_MID_PCB_DATA, (const char *)packet, MAVLINK_MSG_ID_TOP_MID_PCB_DATA_MIN_LEN, MAVLINK_MSG_ID_TOP_MID_PCB_DATA_LEN, MAVLINK_MSG_ID_TOP_MID_PCB_DATA_CRC);
#endif
}
#endif

#endif

// MESSAGE TOP_MID_PCB_DATA UNPACKING


/**
 * @brief Get field battery_voltage from top_mid_pcb_data message
 *
 * @return  Top_battery_voltage
 */
static inline uint16_t mavlink_msg_top_mid_pcb_data_get_battery_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field servo1_current from top_mid_pcb_data message
 *
 * @return  Top_servo1_current
 */
static inline uint16_t mavlink_msg_top_mid_pcb_data_get_servo1_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Get field servo2_current from top_mid_pcb_data message
 *
 * @return  Top_servo2_current
 */
static inline uint16_t mavlink_msg_top_mid_pcb_data_get_servo2_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field servo3_current from top_mid_pcb_data message
 *
 * @return  Top_servo3_current
 */
static inline uint16_t mavlink_msg_top_mid_pcb_data_get_servo3_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  6);
}

/**
 * @brief Get field temp_servo1 from top_mid_pcb_data message
 *
 * @return  Top_servo1_temperature
 */
static inline uint16_t mavlink_msg_top_mid_pcb_data_get_temp_servo1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Get field temp_servo2 from top_mid_pcb_data message
 *
 * @return  Top_servo2_temperature
 */
static inline uint16_t mavlink_msg_top_mid_pcb_data_get_temp_servo2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  10);
}

/**
 * @brief Get field temp_servo3 from top_mid_pcb_data message
 *
 * @return  Top_servo3_temperature
 */
static inline uint16_t mavlink_msg_top_mid_pcb_data_get_temp_servo3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  12);
}

/**
 * @brief Get field temp_ambient1 from top_mid_pcb_data message
 *
 * @return  ambient temperature 1
 */
static inline uint16_t mavlink_msg_top_mid_pcb_data_get_temp_ambient1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  14);
}

/**
 * @brief Get field temp_ambient2 from top_mid_pcb_data message
 *
 * @return  ambient temperature 2
 */
static inline uint16_t mavlink_msg_top_mid_pcb_data_get_temp_ambient2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  16);
}

/**
 * @brief Get field mid_servo1_current from top_mid_pcb_data message
 *
 * @return  mid_servo1_current
 */
static inline uint16_t mavlink_msg_top_mid_pcb_data_get_mid_servo1_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  18);
}

/**
 * @brief Get field mid_servo2_current from top_mid_pcb_data message
 *
 * @return  mid_servo2_current
 */
static inline uint16_t mavlink_msg_top_mid_pcb_data_get_mid_servo2_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  20);
}

/**
 * @brief Get field mid_servo3_current from top_mid_pcb_data message
 *
 * @return  mid_servo3_current
 */
static inline uint16_t mavlink_msg_top_mid_pcb_data_get_mid_servo3_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  22);
}

/**
 * @brief Get field mid_temp_servo1 from top_mid_pcb_data message
 *
 * @return  mid_temp_servo1
 */
static inline uint16_t mavlink_msg_top_mid_pcb_data_get_mid_temp_servo1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  24);
}

/**
 * @brief Get field mid_temp_servo2 from top_mid_pcb_data message
 *
 * @return  mid_temp_servo2
 */
static inline uint16_t mavlink_msg_top_mid_pcb_data_get_mid_temp_servo2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  26);
}

/**
 * @brief Get field voltage_bec1 from top_mid_pcb_data message
 *
 * @return  voltage_bec1
 */
static inline uint16_t mavlink_msg_top_mid_pcb_data_get_voltage_bec1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  28);
}

/**
 * @brief Get field voltage_bec2 from top_mid_pcb_data message
 *
 * @return  voltage_bec2
 */
static inline uint16_t mavlink_msg_top_mid_pcb_data_get_voltage_bec2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  30);
}

/**
 * @brief Get field voltage_buck from top_mid_pcb_data message
 *
 * @return  voltage_buck
 */
static inline uint16_t mavlink_msg_top_mid_pcb_data_get_voltage_buck(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  32);
}

/**
 * @brief Get field Temp_servo3 from top_mid_pcb_data message
 *
 * @return  Temp_servo3
 */
static inline uint16_t mavlink_msg_top_mid_pcb_data_get_Temp_servo3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  34);
}

/**
 * @brief Decode a top_mid_pcb_data message into a struct
 *
 * @param msg The message to decode
 * @param top_mid_pcb_data C-struct to decode the message contents into
 */
static inline void mavlink_msg_top_mid_pcb_data_decode(const mavlink_message_t* msg, mavlink_top_mid_pcb_data_t* top_mid_pcb_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    top_mid_pcb_data->battery_voltage = mavlink_msg_top_mid_pcb_data_get_battery_voltage(msg);
    top_mid_pcb_data->servo1_current = mavlink_msg_top_mid_pcb_data_get_servo1_current(msg);
    top_mid_pcb_data->servo2_current = mavlink_msg_top_mid_pcb_data_get_servo2_current(msg);
    top_mid_pcb_data->servo3_current = mavlink_msg_top_mid_pcb_data_get_servo3_current(msg);
    top_mid_pcb_data->temp_servo1 = mavlink_msg_top_mid_pcb_data_get_temp_servo1(msg);
    top_mid_pcb_data->temp_servo2 = mavlink_msg_top_mid_pcb_data_get_temp_servo2(msg);
    top_mid_pcb_data->temp_servo3 = mavlink_msg_top_mid_pcb_data_get_temp_servo3(msg);
    top_mid_pcb_data->temp_ambient1 = mavlink_msg_top_mid_pcb_data_get_temp_ambient1(msg);
    top_mid_pcb_data->temp_ambient2 = mavlink_msg_top_mid_pcb_data_get_temp_ambient2(msg);
    top_mid_pcb_data->mid_servo1_current = mavlink_msg_top_mid_pcb_data_get_mid_servo1_current(msg);
    top_mid_pcb_data->mid_servo2_current = mavlink_msg_top_mid_pcb_data_get_mid_servo2_current(msg);
    top_mid_pcb_data->mid_servo3_current = mavlink_msg_top_mid_pcb_data_get_mid_servo3_current(msg);
    top_mid_pcb_data->mid_temp_servo1 = mavlink_msg_top_mid_pcb_data_get_mid_temp_servo1(msg);
    top_mid_pcb_data->mid_temp_servo2 = mavlink_msg_top_mid_pcb_data_get_mid_temp_servo2(msg);
    top_mid_pcb_data->voltage_bec1 = mavlink_msg_top_mid_pcb_data_get_voltage_bec1(msg);
    top_mid_pcb_data->voltage_bec2 = mavlink_msg_top_mid_pcb_data_get_voltage_bec2(msg);
    top_mid_pcb_data->voltage_buck = mavlink_msg_top_mid_pcb_data_get_voltage_buck(msg);
    top_mid_pcb_data->Temp_servo3 = mavlink_msg_top_mid_pcb_data_get_Temp_servo3(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_TOP_MID_PCB_DATA_LEN? msg->len : MAVLINK_MSG_ID_TOP_MID_PCB_DATA_LEN;
        memset(top_mid_pcb_data, 0, MAVLINK_MSG_ID_TOP_MID_PCB_DATA_LEN);
    memcpy(top_mid_pcb_data, _MAV_PAYLOAD(msg), len);
#endif
}
