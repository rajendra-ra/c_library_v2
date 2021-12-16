#pragma once
// MESSAGE TOP_MID_PCB_DATA PACKING

#define MAVLINK_MSG_ID_TOP_MID_PCB_DATA 11071


typedef struct __mavlink_top_mid_pcb_data_t {
 uint16_t total_voltage; /*<  top battery voltage*/
 uint16_t servo1_current; /*<  top servo1 current*/
 uint16_t servo2_current; /*<  top servo2 current*/
 uint16_t servo3_current; /*<  top servo3 current*/
 uint16_t servo1_temperature; /*<  top servo1 temperature*/
 uint16_t servo2_temperature; /*<  top servo2 temperature*/
 uint16_t servo3_temperature; /*<  top servo3 temperature*/
 uint16_t extra1; /*<  ambient temperature 1*/
 uint16_t extra2; /*<  ambient temperature 2*/
 uint16_t mid_servo1_current; /*<  mid_servo1_current*/
 uint16_t mid_servo2_current; /*<  mid_servo2_current*/
 uint16_t mid_servo3_current; /*<  mid_servo3_current*/
 uint16_t mid_servo1_temperature; /*<  mid servo1 temperature*/
 uint16_t mid_servo2_temperature; /*<  mid servo2 temperature*/
 uint16_t mid_servo3_temperature; /*<  mid servo3 temperature*/
 uint16_t bec1_voltage; /*<  bec1 voltage*/
 uint16_t bec2_voltage; /*<  bec2 voltage*/
 uint16_t buck_voltage; /*<  buck voltage*/
} mavlink_top_mid_pcb_data_t;

#define MAVLINK_MSG_ID_TOP_MID_PCB_DATA_LEN 36
#define MAVLINK_MSG_ID_TOP_MID_PCB_DATA_MIN_LEN 36
#define MAVLINK_MSG_ID_11071_LEN 36
#define MAVLINK_MSG_ID_11071_MIN_LEN 36

#define MAVLINK_MSG_ID_TOP_MID_PCB_DATA_CRC 232
#define MAVLINK_MSG_ID_11071_CRC 232



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_TOP_MID_PCB_DATA { \
    11071, \
    "TOP_MID_PCB_DATA", \
    18, \
    {  { "total_voltage", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_top_mid_pcb_data_t, total_voltage) }, \
         { "servo1_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_top_mid_pcb_data_t, servo1_current) }, \
         { "servo2_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_top_mid_pcb_data_t, servo2_current) }, \
         { "servo3_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_top_mid_pcb_data_t, servo3_current) }, \
         { "servo1_temperature", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_top_mid_pcb_data_t, servo1_temperature) }, \
         { "servo2_temperature", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_top_mid_pcb_data_t, servo2_temperature) }, \
         { "servo3_temperature", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_top_mid_pcb_data_t, servo3_temperature) }, \
         { "extra1", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_top_mid_pcb_data_t, extra1) }, \
         { "extra2", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_top_mid_pcb_data_t, extra2) }, \
         { "mid_servo1_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 18, offsetof(mavlink_top_mid_pcb_data_t, mid_servo1_current) }, \
         { "mid_servo2_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 20, offsetof(mavlink_top_mid_pcb_data_t, mid_servo2_current) }, \
         { "mid_servo3_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 22, offsetof(mavlink_top_mid_pcb_data_t, mid_servo3_current) }, \
         { "mid_servo1_temperature", NULL, MAVLINK_TYPE_UINT16_T, 0, 24, offsetof(mavlink_top_mid_pcb_data_t, mid_servo1_temperature) }, \
         { "mid_servo2_temperature", NULL, MAVLINK_TYPE_UINT16_T, 0, 26, offsetof(mavlink_top_mid_pcb_data_t, mid_servo2_temperature) }, \
         { "mid_servo3_temperature", NULL, MAVLINK_TYPE_UINT16_T, 0, 28, offsetof(mavlink_top_mid_pcb_data_t, mid_servo3_temperature) }, \
         { "bec1_voltage", NULL, MAVLINK_TYPE_UINT16_T, 0, 30, offsetof(mavlink_top_mid_pcb_data_t, bec1_voltage) }, \
         { "bec2_voltage", NULL, MAVLINK_TYPE_UINT16_T, 0, 32, offsetof(mavlink_top_mid_pcb_data_t, bec2_voltage) }, \
         { "buck_voltage", NULL, MAVLINK_TYPE_UINT16_T, 0, 34, offsetof(mavlink_top_mid_pcb_data_t, buck_voltage) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_TOP_MID_PCB_DATA { \
    "TOP_MID_PCB_DATA", \
    18, \
    {  { "total_voltage", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_top_mid_pcb_data_t, total_voltage) }, \
         { "servo1_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_top_mid_pcb_data_t, servo1_current) }, \
         { "servo2_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_top_mid_pcb_data_t, servo2_current) }, \
         { "servo3_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_top_mid_pcb_data_t, servo3_current) }, \
         { "servo1_temperature", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_top_mid_pcb_data_t, servo1_temperature) }, \
         { "servo2_temperature", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_top_mid_pcb_data_t, servo2_temperature) }, \
         { "servo3_temperature", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_top_mid_pcb_data_t, servo3_temperature) }, \
         { "extra1", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_top_mid_pcb_data_t, extra1) }, \
         { "extra2", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_top_mid_pcb_data_t, extra2) }, \
         { "mid_servo1_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 18, offsetof(mavlink_top_mid_pcb_data_t, mid_servo1_current) }, \
         { "mid_servo2_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 20, offsetof(mavlink_top_mid_pcb_data_t, mid_servo2_current) }, \
         { "mid_servo3_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 22, offsetof(mavlink_top_mid_pcb_data_t, mid_servo3_current) }, \
         { "mid_servo1_temperature", NULL, MAVLINK_TYPE_UINT16_T, 0, 24, offsetof(mavlink_top_mid_pcb_data_t, mid_servo1_temperature) }, \
         { "mid_servo2_temperature", NULL, MAVLINK_TYPE_UINT16_T, 0, 26, offsetof(mavlink_top_mid_pcb_data_t, mid_servo2_temperature) }, \
         { "mid_servo3_temperature", NULL, MAVLINK_TYPE_UINT16_T, 0, 28, offsetof(mavlink_top_mid_pcb_data_t, mid_servo3_temperature) }, \
         { "bec1_voltage", NULL, MAVLINK_TYPE_UINT16_T, 0, 30, offsetof(mavlink_top_mid_pcb_data_t, bec1_voltage) }, \
         { "bec2_voltage", NULL, MAVLINK_TYPE_UINT16_T, 0, 32, offsetof(mavlink_top_mid_pcb_data_t, bec2_voltage) }, \
         { "buck_voltage", NULL, MAVLINK_TYPE_UINT16_T, 0, 34, offsetof(mavlink_top_mid_pcb_data_t, buck_voltage) }, \
         } \
}
#endif

/**
 * @brief Pack a top_mid_pcb_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param total_voltage  top battery voltage
 * @param servo1_current  top servo1 current
 * @param servo2_current  top servo2 current
 * @param servo3_current  top servo3 current
 * @param servo1_temperature  top servo1 temperature
 * @param servo2_temperature  top servo2 temperature
 * @param servo3_temperature  top servo3 temperature
 * @param extra1  ambient temperature 1
 * @param extra2  ambient temperature 2
 * @param mid_servo1_current  mid_servo1_current
 * @param mid_servo2_current  mid_servo2_current
 * @param mid_servo3_current  mid_servo3_current
 * @param mid_servo1_temperature  mid servo1 temperature
 * @param mid_servo2_temperature  mid servo2 temperature
 * @param mid_servo3_temperature  mid servo3 temperature
 * @param bec1_voltage  bec1 voltage
 * @param bec2_voltage  bec2 voltage
 * @param buck_voltage  buck voltage
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_top_mid_pcb_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t total_voltage, uint16_t servo1_current, uint16_t servo2_current, uint16_t servo3_current, uint16_t servo1_temperature, uint16_t servo2_temperature, uint16_t servo3_temperature, uint16_t extra1, uint16_t extra2, uint16_t mid_servo1_current, uint16_t mid_servo2_current, uint16_t mid_servo3_current, uint16_t mid_servo1_temperature, uint16_t mid_servo2_temperature, uint16_t mid_servo3_temperature, uint16_t bec1_voltage, uint16_t bec2_voltage, uint16_t buck_voltage)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TOP_MID_PCB_DATA_LEN];
    _mav_put_uint16_t(buf, 0, total_voltage);
    _mav_put_uint16_t(buf, 2, servo1_current);
    _mav_put_uint16_t(buf, 4, servo2_current);
    _mav_put_uint16_t(buf, 6, servo3_current);
    _mav_put_uint16_t(buf, 8, servo1_temperature);
    _mav_put_uint16_t(buf, 10, servo2_temperature);
    _mav_put_uint16_t(buf, 12, servo3_temperature);
    _mav_put_uint16_t(buf, 14, extra1);
    _mav_put_uint16_t(buf, 16, extra2);
    _mav_put_uint16_t(buf, 18, mid_servo1_current);
    _mav_put_uint16_t(buf, 20, mid_servo2_current);
    _mav_put_uint16_t(buf, 22, mid_servo3_current);
    _mav_put_uint16_t(buf, 24, mid_servo1_temperature);
    _mav_put_uint16_t(buf, 26, mid_servo2_temperature);
    _mav_put_uint16_t(buf, 28, mid_servo3_temperature);
    _mav_put_uint16_t(buf, 30, bec1_voltage);
    _mav_put_uint16_t(buf, 32, bec2_voltage);
    _mav_put_uint16_t(buf, 34, buck_voltage);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TOP_MID_PCB_DATA_LEN);
#else
    mavlink_top_mid_pcb_data_t packet;
    packet.total_voltage = total_voltage;
    packet.servo1_current = servo1_current;
    packet.servo2_current = servo2_current;
    packet.servo3_current = servo3_current;
    packet.servo1_temperature = servo1_temperature;
    packet.servo2_temperature = servo2_temperature;
    packet.servo3_temperature = servo3_temperature;
    packet.extra1 = extra1;
    packet.extra2 = extra2;
    packet.mid_servo1_current = mid_servo1_current;
    packet.mid_servo2_current = mid_servo2_current;
    packet.mid_servo3_current = mid_servo3_current;
    packet.mid_servo1_temperature = mid_servo1_temperature;
    packet.mid_servo2_temperature = mid_servo2_temperature;
    packet.mid_servo3_temperature = mid_servo3_temperature;
    packet.bec1_voltage = bec1_voltage;
    packet.bec2_voltage = bec2_voltage;
    packet.buck_voltage = buck_voltage;

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
 * @param total_voltage  top battery voltage
 * @param servo1_current  top servo1 current
 * @param servo2_current  top servo2 current
 * @param servo3_current  top servo3 current
 * @param servo1_temperature  top servo1 temperature
 * @param servo2_temperature  top servo2 temperature
 * @param servo3_temperature  top servo3 temperature
 * @param extra1  ambient temperature 1
 * @param extra2  ambient temperature 2
 * @param mid_servo1_current  mid_servo1_current
 * @param mid_servo2_current  mid_servo2_current
 * @param mid_servo3_current  mid_servo3_current
 * @param mid_servo1_temperature  mid servo1 temperature
 * @param mid_servo2_temperature  mid servo2 temperature
 * @param mid_servo3_temperature  mid servo3 temperature
 * @param bec1_voltage  bec1 voltage
 * @param bec2_voltage  bec2 voltage
 * @param buck_voltage  buck voltage
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_top_mid_pcb_data_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t total_voltage,uint16_t servo1_current,uint16_t servo2_current,uint16_t servo3_current,uint16_t servo1_temperature,uint16_t servo2_temperature,uint16_t servo3_temperature,uint16_t extra1,uint16_t extra2,uint16_t mid_servo1_current,uint16_t mid_servo2_current,uint16_t mid_servo3_current,uint16_t mid_servo1_temperature,uint16_t mid_servo2_temperature,uint16_t mid_servo3_temperature,uint16_t bec1_voltage,uint16_t bec2_voltage,uint16_t buck_voltage)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TOP_MID_PCB_DATA_LEN];
    _mav_put_uint16_t(buf, 0, total_voltage);
    _mav_put_uint16_t(buf, 2, servo1_current);
    _mav_put_uint16_t(buf, 4, servo2_current);
    _mav_put_uint16_t(buf, 6, servo3_current);
    _mav_put_uint16_t(buf, 8, servo1_temperature);
    _mav_put_uint16_t(buf, 10, servo2_temperature);
    _mav_put_uint16_t(buf, 12, servo3_temperature);
    _mav_put_uint16_t(buf, 14, extra1);
    _mav_put_uint16_t(buf, 16, extra2);
    _mav_put_uint16_t(buf, 18, mid_servo1_current);
    _mav_put_uint16_t(buf, 20, mid_servo2_current);
    _mav_put_uint16_t(buf, 22, mid_servo3_current);
    _mav_put_uint16_t(buf, 24, mid_servo1_temperature);
    _mav_put_uint16_t(buf, 26, mid_servo2_temperature);
    _mav_put_uint16_t(buf, 28, mid_servo3_temperature);
    _mav_put_uint16_t(buf, 30, bec1_voltage);
    _mav_put_uint16_t(buf, 32, bec2_voltage);
    _mav_put_uint16_t(buf, 34, buck_voltage);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TOP_MID_PCB_DATA_LEN);
#else
    mavlink_top_mid_pcb_data_t packet;
    packet.total_voltage = total_voltage;
    packet.servo1_current = servo1_current;
    packet.servo2_current = servo2_current;
    packet.servo3_current = servo3_current;
    packet.servo1_temperature = servo1_temperature;
    packet.servo2_temperature = servo2_temperature;
    packet.servo3_temperature = servo3_temperature;
    packet.extra1 = extra1;
    packet.extra2 = extra2;
    packet.mid_servo1_current = mid_servo1_current;
    packet.mid_servo2_current = mid_servo2_current;
    packet.mid_servo3_current = mid_servo3_current;
    packet.mid_servo1_temperature = mid_servo1_temperature;
    packet.mid_servo2_temperature = mid_servo2_temperature;
    packet.mid_servo3_temperature = mid_servo3_temperature;
    packet.bec1_voltage = bec1_voltage;
    packet.bec2_voltage = bec2_voltage;
    packet.buck_voltage = buck_voltage;

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
    return mavlink_msg_top_mid_pcb_data_pack(system_id, component_id, msg, top_mid_pcb_data->total_voltage, top_mid_pcb_data->servo1_current, top_mid_pcb_data->servo2_current, top_mid_pcb_data->servo3_current, top_mid_pcb_data->servo1_temperature, top_mid_pcb_data->servo2_temperature, top_mid_pcb_data->servo3_temperature, top_mid_pcb_data->extra1, top_mid_pcb_data->extra2, top_mid_pcb_data->mid_servo1_current, top_mid_pcb_data->mid_servo2_current, top_mid_pcb_data->mid_servo3_current, top_mid_pcb_data->mid_servo1_temperature, top_mid_pcb_data->mid_servo2_temperature, top_mid_pcb_data->mid_servo3_temperature, top_mid_pcb_data->bec1_voltage, top_mid_pcb_data->bec2_voltage, top_mid_pcb_data->buck_voltage);
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
    return mavlink_msg_top_mid_pcb_data_pack_chan(system_id, component_id, chan, msg, top_mid_pcb_data->total_voltage, top_mid_pcb_data->servo1_current, top_mid_pcb_data->servo2_current, top_mid_pcb_data->servo3_current, top_mid_pcb_data->servo1_temperature, top_mid_pcb_data->servo2_temperature, top_mid_pcb_data->servo3_temperature, top_mid_pcb_data->extra1, top_mid_pcb_data->extra2, top_mid_pcb_data->mid_servo1_current, top_mid_pcb_data->mid_servo2_current, top_mid_pcb_data->mid_servo3_current, top_mid_pcb_data->mid_servo1_temperature, top_mid_pcb_data->mid_servo2_temperature, top_mid_pcb_data->mid_servo3_temperature, top_mid_pcb_data->bec1_voltage, top_mid_pcb_data->bec2_voltage, top_mid_pcb_data->buck_voltage);
}

/**
 * @brief Send a top_mid_pcb_data message
 * @param chan MAVLink channel to send the message
 *
 * @param total_voltage  top battery voltage
 * @param servo1_current  top servo1 current
 * @param servo2_current  top servo2 current
 * @param servo3_current  top servo3 current
 * @param servo1_temperature  top servo1 temperature
 * @param servo2_temperature  top servo2 temperature
 * @param servo3_temperature  top servo3 temperature
 * @param extra1  ambient temperature 1
 * @param extra2  ambient temperature 2
 * @param mid_servo1_current  mid_servo1_current
 * @param mid_servo2_current  mid_servo2_current
 * @param mid_servo3_current  mid_servo3_current
 * @param mid_servo1_temperature  mid servo1 temperature
 * @param mid_servo2_temperature  mid servo2 temperature
 * @param mid_servo3_temperature  mid servo3 temperature
 * @param bec1_voltage  bec1 voltage
 * @param bec2_voltage  bec2 voltage
 * @param buck_voltage  buck voltage
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_top_mid_pcb_data_send(mavlink_channel_t chan, uint16_t total_voltage, uint16_t servo1_current, uint16_t servo2_current, uint16_t servo3_current, uint16_t servo1_temperature, uint16_t servo2_temperature, uint16_t servo3_temperature, uint16_t extra1, uint16_t extra2, uint16_t mid_servo1_current, uint16_t mid_servo2_current, uint16_t mid_servo3_current, uint16_t mid_servo1_temperature, uint16_t mid_servo2_temperature, uint16_t mid_servo3_temperature, uint16_t bec1_voltage, uint16_t bec2_voltage, uint16_t buck_voltage)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TOP_MID_PCB_DATA_LEN];
    _mav_put_uint16_t(buf, 0, total_voltage);
    _mav_put_uint16_t(buf, 2, servo1_current);
    _mav_put_uint16_t(buf, 4, servo2_current);
    _mav_put_uint16_t(buf, 6, servo3_current);
    _mav_put_uint16_t(buf, 8, servo1_temperature);
    _mav_put_uint16_t(buf, 10, servo2_temperature);
    _mav_put_uint16_t(buf, 12, servo3_temperature);
    _mav_put_uint16_t(buf, 14, extra1);
    _mav_put_uint16_t(buf, 16, extra2);
    _mav_put_uint16_t(buf, 18, mid_servo1_current);
    _mav_put_uint16_t(buf, 20, mid_servo2_current);
    _mav_put_uint16_t(buf, 22, mid_servo3_current);
    _mav_put_uint16_t(buf, 24, mid_servo1_temperature);
    _mav_put_uint16_t(buf, 26, mid_servo2_temperature);
    _mav_put_uint16_t(buf, 28, mid_servo3_temperature);
    _mav_put_uint16_t(buf, 30, bec1_voltage);
    _mav_put_uint16_t(buf, 32, bec2_voltage);
    _mav_put_uint16_t(buf, 34, buck_voltage);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TOP_MID_PCB_DATA, buf, MAVLINK_MSG_ID_TOP_MID_PCB_DATA_MIN_LEN, MAVLINK_MSG_ID_TOP_MID_PCB_DATA_LEN, MAVLINK_MSG_ID_TOP_MID_PCB_DATA_CRC);
#else
    mavlink_top_mid_pcb_data_t packet;
    packet.total_voltage = total_voltage;
    packet.servo1_current = servo1_current;
    packet.servo2_current = servo2_current;
    packet.servo3_current = servo3_current;
    packet.servo1_temperature = servo1_temperature;
    packet.servo2_temperature = servo2_temperature;
    packet.servo3_temperature = servo3_temperature;
    packet.extra1 = extra1;
    packet.extra2 = extra2;
    packet.mid_servo1_current = mid_servo1_current;
    packet.mid_servo2_current = mid_servo2_current;
    packet.mid_servo3_current = mid_servo3_current;
    packet.mid_servo1_temperature = mid_servo1_temperature;
    packet.mid_servo2_temperature = mid_servo2_temperature;
    packet.mid_servo3_temperature = mid_servo3_temperature;
    packet.bec1_voltage = bec1_voltage;
    packet.bec2_voltage = bec2_voltage;
    packet.buck_voltage = buck_voltage;

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
    mavlink_msg_top_mid_pcb_data_send(chan, top_mid_pcb_data->total_voltage, top_mid_pcb_data->servo1_current, top_mid_pcb_data->servo2_current, top_mid_pcb_data->servo3_current, top_mid_pcb_data->servo1_temperature, top_mid_pcb_data->servo2_temperature, top_mid_pcb_data->servo3_temperature, top_mid_pcb_data->extra1, top_mid_pcb_data->extra2, top_mid_pcb_data->mid_servo1_current, top_mid_pcb_data->mid_servo2_current, top_mid_pcb_data->mid_servo3_current, top_mid_pcb_data->mid_servo1_temperature, top_mid_pcb_data->mid_servo2_temperature, top_mid_pcb_data->mid_servo3_temperature, top_mid_pcb_data->bec1_voltage, top_mid_pcb_data->bec2_voltage, top_mid_pcb_data->buck_voltage);
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
static inline void mavlink_msg_top_mid_pcb_data_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t total_voltage, uint16_t servo1_current, uint16_t servo2_current, uint16_t servo3_current, uint16_t servo1_temperature, uint16_t servo2_temperature, uint16_t servo3_temperature, uint16_t extra1, uint16_t extra2, uint16_t mid_servo1_current, uint16_t mid_servo2_current, uint16_t mid_servo3_current, uint16_t mid_servo1_temperature, uint16_t mid_servo2_temperature, uint16_t mid_servo3_temperature, uint16_t bec1_voltage, uint16_t bec2_voltage, uint16_t buck_voltage)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, total_voltage);
    _mav_put_uint16_t(buf, 2, servo1_current);
    _mav_put_uint16_t(buf, 4, servo2_current);
    _mav_put_uint16_t(buf, 6, servo3_current);
    _mav_put_uint16_t(buf, 8, servo1_temperature);
    _mav_put_uint16_t(buf, 10, servo2_temperature);
    _mav_put_uint16_t(buf, 12, servo3_temperature);
    _mav_put_uint16_t(buf, 14, extra1);
    _mav_put_uint16_t(buf, 16, extra2);
    _mav_put_uint16_t(buf, 18, mid_servo1_current);
    _mav_put_uint16_t(buf, 20, mid_servo2_current);
    _mav_put_uint16_t(buf, 22, mid_servo3_current);
    _mav_put_uint16_t(buf, 24, mid_servo1_temperature);
    _mav_put_uint16_t(buf, 26, mid_servo2_temperature);
    _mav_put_uint16_t(buf, 28, mid_servo3_temperature);
    _mav_put_uint16_t(buf, 30, bec1_voltage);
    _mav_put_uint16_t(buf, 32, bec2_voltage);
    _mav_put_uint16_t(buf, 34, buck_voltage);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TOP_MID_PCB_DATA, buf, MAVLINK_MSG_ID_TOP_MID_PCB_DATA_MIN_LEN, MAVLINK_MSG_ID_TOP_MID_PCB_DATA_LEN, MAVLINK_MSG_ID_TOP_MID_PCB_DATA_CRC);
#else
    mavlink_top_mid_pcb_data_t *packet = (mavlink_top_mid_pcb_data_t *)msgbuf;
    packet->total_voltage = total_voltage;
    packet->servo1_current = servo1_current;
    packet->servo2_current = servo2_current;
    packet->servo3_current = servo3_current;
    packet->servo1_temperature = servo1_temperature;
    packet->servo2_temperature = servo2_temperature;
    packet->servo3_temperature = servo3_temperature;
    packet->extra1 = extra1;
    packet->extra2 = extra2;
    packet->mid_servo1_current = mid_servo1_current;
    packet->mid_servo2_current = mid_servo2_current;
    packet->mid_servo3_current = mid_servo3_current;
    packet->mid_servo1_temperature = mid_servo1_temperature;
    packet->mid_servo2_temperature = mid_servo2_temperature;
    packet->mid_servo3_temperature = mid_servo3_temperature;
    packet->bec1_voltage = bec1_voltage;
    packet->bec2_voltage = bec2_voltage;
    packet->buck_voltage = buck_voltage;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TOP_MID_PCB_DATA, (const char *)packet, MAVLINK_MSG_ID_TOP_MID_PCB_DATA_MIN_LEN, MAVLINK_MSG_ID_TOP_MID_PCB_DATA_LEN, MAVLINK_MSG_ID_TOP_MID_PCB_DATA_CRC);
#endif
}
#endif

#endif

// MESSAGE TOP_MID_PCB_DATA UNPACKING


/**
 * @brief Get field total_voltage from top_mid_pcb_data message
 *
 * @return  top battery voltage
 */
static inline uint16_t mavlink_msg_top_mid_pcb_data_get_total_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field servo1_current from top_mid_pcb_data message
 *
 * @return  top servo1 current
 */
static inline uint16_t mavlink_msg_top_mid_pcb_data_get_servo1_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Get field servo2_current from top_mid_pcb_data message
 *
 * @return  top servo2 current
 */
static inline uint16_t mavlink_msg_top_mid_pcb_data_get_servo2_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field servo3_current from top_mid_pcb_data message
 *
 * @return  top servo3 current
 */
static inline uint16_t mavlink_msg_top_mid_pcb_data_get_servo3_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  6);
}

/**
 * @brief Get field servo1_temperature from top_mid_pcb_data message
 *
 * @return  top servo1 temperature
 */
static inline uint16_t mavlink_msg_top_mid_pcb_data_get_servo1_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Get field servo2_temperature from top_mid_pcb_data message
 *
 * @return  top servo2 temperature
 */
static inline uint16_t mavlink_msg_top_mid_pcb_data_get_servo2_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  10);
}

/**
 * @brief Get field servo3_temperature from top_mid_pcb_data message
 *
 * @return  top servo3 temperature
 */
static inline uint16_t mavlink_msg_top_mid_pcb_data_get_servo3_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  12);
}

/**
 * @brief Get field extra1 from top_mid_pcb_data message
 *
 * @return  ambient temperature 1
 */
static inline uint16_t mavlink_msg_top_mid_pcb_data_get_extra1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  14);
}

/**
 * @brief Get field extra2 from top_mid_pcb_data message
 *
 * @return  ambient temperature 2
 */
static inline uint16_t mavlink_msg_top_mid_pcb_data_get_extra2(const mavlink_message_t* msg)
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
 * @brief Get field mid_servo1_temperature from top_mid_pcb_data message
 *
 * @return  mid servo1 temperature
 */
static inline uint16_t mavlink_msg_top_mid_pcb_data_get_mid_servo1_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  24);
}

/**
 * @brief Get field mid_servo2_temperature from top_mid_pcb_data message
 *
 * @return  mid servo2 temperature
 */
static inline uint16_t mavlink_msg_top_mid_pcb_data_get_mid_servo2_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  26);
}

/**
 * @brief Get field mid_servo3_temperature from top_mid_pcb_data message
 *
 * @return  mid servo3 temperature
 */
static inline uint16_t mavlink_msg_top_mid_pcb_data_get_mid_servo3_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  28);
}

/**
 * @brief Get field bec1_voltage from top_mid_pcb_data message
 *
 * @return  bec1 voltage
 */
static inline uint16_t mavlink_msg_top_mid_pcb_data_get_bec1_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  30);
}

/**
 * @brief Get field bec2_voltage from top_mid_pcb_data message
 *
 * @return  bec2 voltage
 */
static inline uint16_t mavlink_msg_top_mid_pcb_data_get_bec2_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  32);
}

/**
 * @brief Get field buck_voltage from top_mid_pcb_data message
 *
 * @return  buck voltage
 */
static inline uint16_t mavlink_msg_top_mid_pcb_data_get_buck_voltage(const mavlink_message_t* msg)
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
    top_mid_pcb_data->total_voltage = mavlink_msg_top_mid_pcb_data_get_total_voltage(msg);
    top_mid_pcb_data->servo1_current = mavlink_msg_top_mid_pcb_data_get_servo1_current(msg);
    top_mid_pcb_data->servo2_current = mavlink_msg_top_mid_pcb_data_get_servo2_current(msg);
    top_mid_pcb_data->servo3_current = mavlink_msg_top_mid_pcb_data_get_servo3_current(msg);
    top_mid_pcb_data->servo1_temperature = mavlink_msg_top_mid_pcb_data_get_servo1_temperature(msg);
    top_mid_pcb_data->servo2_temperature = mavlink_msg_top_mid_pcb_data_get_servo2_temperature(msg);
    top_mid_pcb_data->servo3_temperature = mavlink_msg_top_mid_pcb_data_get_servo3_temperature(msg);
    top_mid_pcb_data->extra1 = mavlink_msg_top_mid_pcb_data_get_extra1(msg);
    top_mid_pcb_data->extra2 = mavlink_msg_top_mid_pcb_data_get_extra2(msg);
    top_mid_pcb_data->mid_servo1_current = mavlink_msg_top_mid_pcb_data_get_mid_servo1_current(msg);
    top_mid_pcb_data->mid_servo2_current = mavlink_msg_top_mid_pcb_data_get_mid_servo2_current(msg);
    top_mid_pcb_data->mid_servo3_current = mavlink_msg_top_mid_pcb_data_get_mid_servo3_current(msg);
    top_mid_pcb_data->mid_servo1_temperature = mavlink_msg_top_mid_pcb_data_get_mid_servo1_temperature(msg);
    top_mid_pcb_data->mid_servo2_temperature = mavlink_msg_top_mid_pcb_data_get_mid_servo2_temperature(msg);
    top_mid_pcb_data->mid_servo3_temperature = mavlink_msg_top_mid_pcb_data_get_mid_servo3_temperature(msg);
    top_mid_pcb_data->bec1_voltage = mavlink_msg_top_mid_pcb_data_get_bec1_voltage(msg);
    top_mid_pcb_data->bec2_voltage = mavlink_msg_top_mid_pcb_data_get_bec2_voltage(msg);
    top_mid_pcb_data->buck_voltage = mavlink_msg_top_mid_pcb_data_get_buck_voltage(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_TOP_MID_PCB_DATA_LEN? msg->len : MAVLINK_MSG_ID_TOP_MID_PCB_DATA_LEN;
        memset(top_mid_pcb_data, 0, MAVLINK_MSG_ID_TOP_MID_PCB_DATA_LEN);
    memcpy(top_mid_pcb_data, _MAV_PAYLOAD(msg), len);
#endif
}
