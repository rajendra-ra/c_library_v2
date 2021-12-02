#pragma once
// MESSAGE BMS_AUX_DATA PACKING

#define MAVLINK_MSG_ID_BMS_AUX_DATA 11069


typedef struct __mavlink_bms_aux_data_t {
 uint16_t aux_current; /*<  aux_battery_current*/
 uint16_t aux_voltage; /*<  aux_battery_voltage*/
 uint16_t BMS_current1; /*<  BMS_mux_current1*/
 uint16_t BMS_current2; /*<  BMS_mux_current2*/
 uint16_t BMS_current3; /*<  BMS_mux_current3*/
 uint16_t BMS_voltage; /*<  BMS_mux_voltage*/
 uint16_t BMS_temperature1; /*<  BMS_mux_temperature1*/
 uint16_t BMS_temperature2; /*<  BMS_mux_temperature2*/
 uint16_t BMS_temperature3; /*<  BMS_mux_temperature3*/
 uint16_t BMS_temperature4; /*<  BMS_mux_temperature4*/
 uint16_t BMS_cout; /*<  BMS_ic_cout*/
 uint16_t BMS_dout; /*<  BMS_ic_dout*/
 uint16_t Motor2_temp; /*<  Temperature of Motor 2*/
 uint16_t Motor1_temp; /*<  Temperature of Motor 1*/
} mavlink_bms_aux_data_t;

#define MAVLINK_MSG_ID_BMS_AUX_DATA_LEN 28
#define MAVLINK_MSG_ID_BMS_AUX_DATA_MIN_LEN 28
#define MAVLINK_MSG_ID_11069_LEN 28
#define MAVLINK_MSG_ID_11069_MIN_LEN 28

#define MAVLINK_MSG_ID_BMS_AUX_DATA_CRC 79
#define MAVLINK_MSG_ID_11069_CRC 79



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_BMS_AUX_DATA { \
    11069, \
    "BMS_AUX_DATA", \
    14, \
    {  { "aux_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_bms_aux_data_t, aux_current) }, \
         { "aux_voltage", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_bms_aux_data_t, aux_voltage) }, \
         { "BMS_current1", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_bms_aux_data_t, BMS_current1) }, \
         { "BMS_current2", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_bms_aux_data_t, BMS_current2) }, \
         { "BMS_current3", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_bms_aux_data_t, BMS_current3) }, \
         { "BMS_voltage", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_bms_aux_data_t, BMS_voltage) }, \
         { "BMS_temperature1", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_bms_aux_data_t, BMS_temperature1) }, \
         { "BMS_temperature2", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_bms_aux_data_t, BMS_temperature2) }, \
         { "BMS_temperature3", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_bms_aux_data_t, BMS_temperature3) }, \
         { "BMS_temperature4", NULL, MAVLINK_TYPE_UINT16_T, 0, 18, offsetof(mavlink_bms_aux_data_t, BMS_temperature4) }, \
         { "BMS_cout", NULL, MAVLINK_TYPE_UINT16_T, 0, 20, offsetof(mavlink_bms_aux_data_t, BMS_cout) }, \
         { "BMS_dout", NULL, MAVLINK_TYPE_UINT16_T, 0, 22, offsetof(mavlink_bms_aux_data_t, BMS_dout) }, \
         { "Motor2_temp", NULL, MAVLINK_TYPE_UINT16_T, 0, 24, offsetof(mavlink_bms_aux_data_t, Motor2_temp) }, \
         { "Motor1_temp", NULL, MAVLINK_TYPE_UINT16_T, 0, 26, offsetof(mavlink_bms_aux_data_t, Motor1_temp) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_BMS_AUX_DATA { \
    "BMS_AUX_DATA", \
    14, \
    {  { "aux_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_bms_aux_data_t, aux_current) }, \
         { "aux_voltage", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_bms_aux_data_t, aux_voltage) }, \
         { "BMS_current1", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_bms_aux_data_t, BMS_current1) }, \
         { "BMS_current2", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_bms_aux_data_t, BMS_current2) }, \
         { "BMS_current3", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_bms_aux_data_t, BMS_current3) }, \
         { "BMS_voltage", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_bms_aux_data_t, BMS_voltage) }, \
         { "BMS_temperature1", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_bms_aux_data_t, BMS_temperature1) }, \
         { "BMS_temperature2", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_bms_aux_data_t, BMS_temperature2) }, \
         { "BMS_temperature3", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_bms_aux_data_t, BMS_temperature3) }, \
         { "BMS_temperature4", NULL, MAVLINK_TYPE_UINT16_T, 0, 18, offsetof(mavlink_bms_aux_data_t, BMS_temperature4) }, \
         { "BMS_cout", NULL, MAVLINK_TYPE_UINT16_T, 0, 20, offsetof(mavlink_bms_aux_data_t, BMS_cout) }, \
         { "BMS_dout", NULL, MAVLINK_TYPE_UINT16_T, 0, 22, offsetof(mavlink_bms_aux_data_t, BMS_dout) }, \
         { "Motor2_temp", NULL, MAVLINK_TYPE_UINT16_T, 0, 24, offsetof(mavlink_bms_aux_data_t, Motor2_temp) }, \
         { "Motor1_temp", NULL, MAVLINK_TYPE_UINT16_T, 0, 26, offsetof(mavlink_bms_aux_data_t, Motor1_temp) }, \
         } \
}
#endif

/**
 * @brief Pack a bms_aux_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param aux_current  aux_battery_current
 * @param aux_voltage  aux_battery_voltage
 * @param BMS_current1  BMS_mux_current1
 * @param BMS_current2  BMS_mux_current2
 * @param BMS_current3  BMS_mux_current3
 * @param BMS_voltage  BMS_mux_voltage
 * @param BMS_temperature1  BMS_mux_temperature1
 * @param BMS_temperature2  BMS_mux_temperature2
 * @param BMS_temperature3  BMS_mux_temperature3
 * @param BMS_temperature4  BMS_mux_temperature4
 * @param BMS_cout  BMS_ic_cout
 * @param BMS_dout  BMS_ic_dout
 * @param Motor2_temp  Temperature of Motor 2
 * @param Motor1_temp  Temperature of Motor 1
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_bms_aux_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t aux_current, uint16_t aux_voltage, uint16_t BMS_current1, uint16_t BMS_current2, uint16_t BMS_current3, uint16_t BMS_voltage, uint16_t BMS_temperature1, uint16_t BMS_temperature2, uint16_t BMS_temperature3, uint16_t BMS_temperature4, uint16_t BMS_cout, uint16_t BMS_dout, uint16_t Motor2_temp, uint16_t Motor1_temp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BMS_AUX_DATA_LEN];
    _mav_put_uint16_t(buf, 0, aux_current);
    _mav_put_uint16_t(buf, 2, aux_voltage);
    _mav_put_uint16_t(buf, 4, BMS_current1);
    _mav_put_uint16_t(buf, 6, BMS_current2);
    _mav_put_uint16_t(buf, 8, BMS_current3);
    _mav_put_uint16_t(buf, 10, BMS_voltage);
    _mav_put_uint16_t(buf, 12, BMS_temperature1);
    _mav_put_uint16_t(buf, 14, BMS_temperature2);
    _mav_put_uint16_t(buf, 16, BMS_temperature3);
    _mav_put_uint16_t(buf, 18, BMS_temperature4);
    _mav_put_uint16_t(buf, 20, BMS_cout);
    _mav_put_uint16_t(buf, 22, BMS_dout);
    _mav_put_uint16_t(buf, 24, Motor2_temp);
    _mav_put_uint16_t(buf, 26, Motor1_temp);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BMS_AUX_DATA_LEN);
#else
    mavlink_bms_aux_data_t packet;
    packet.aux_current = aux_current;
    packet.aux_voltage = aux_voltage;
    packet.BMS_current1 = BMS_current1;
    packet.BMS_current2 = BMS_current2;
    packet.BMS_current3 = BMS_current3;
    packet.BMS_voltage = BMS_voltage;
    packet.BMS_temperature1 = BMS_temperature1;
    packet.BMS_temperature2 = BMS_temperature2;
    packet.BMS_temperature3 = BMS_temperature3;
    packet.BMS_temperature4 = BMS_temperature4;
    packet.BMS_cout = BMS_cout;
    packet.BMS_dout = BMS_dout;
    packet.Motor2_temp = Motor2_temp;
    packet.Motor1_temp = Motor1_temp;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_BMS_AUX_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_BMS_AUX_DATA;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_BMS_AUX_DATA_MIN_LEN, MAVLINK_MSG_ID_BMS_AUX_DATA_LEN, MAVLINK_MSG_ID_BMS_AUX_DATA_CRC);
}

/**
 * @brief Pack a bms_aux_data message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param aux_current  aux_battery_current
 * @param aux_voltage  aux_battery_voltage
 * @param BMS_current1  BMS_mux_current1
 * @param BMS_current2  BMS_mux_current2
 * @param BMS_current3  BMS_mux_current3
 * @param BMS_voltage  BMS_mux_voltage
 * @param BMS_temperature1  BMS_mux_temperature1
 * @param BMS_temperature2  BMS_mux_temperature2
 * @param BMS_temperature3  BMS_mux_temperature3
 * @param BMS_temperature4  BMS_mux_temperature4
 * @param BMS_cout  BMS_ic_cout
 * @param BMS_dout  BMS_ic_dout
 * @param Motor2_temp  Temperature of Motor 2
 * @param Motor1_temp  Temperature of Motor 1
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_bms_aux_data_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t aux_current,uint16_t aux_voltage,uint16_t BMS_current1,uint16_t BMS_current2,uint16_t BMS_current3,uint16_t BMS_voltage,uint16_t BMS_temperature1,uint16_t BMS_temperature2,uint16_t BMS_temperature3,uint16_t BMS_temperature4,uint16_t BMS_cout,uint16_t BMS_dout,uint16_t Motor2_temp,uint16_t Motor1_temp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BMS_AUX_DATA_LEN];
    _mav_put_uint16_t(buf, 0, aux_current);
    _mav_put_uint16_t(buf, 2, aux_voltage);
    _mav_put_uint16_t(buf, 4, BMS_current1);
    _mav_put_uint16_t(buf, 6, BMS_current2);
    _mav_put_uint16_t(buf, 8, BMS_current3);
    _mav_put_uint16_t(buf, 10, BMS_voltage);
    _mav_put_uint16_t(buf, 12, BMS_temperature1);
    _mav_put_uint16_t(buf, 14, BMS_temperature2);
    _mav_put_uint16_t(buf, 16, BMS_temperature3);
    _mav_put_uint16_t(buf, 18, BMS_temperature4);
    _mav_put_uint16_t(buf, 20, BMS_cout);
    _mav_put_uint16_t(buf, 22, BMS_dout);
    _mav_put_uint16_t(buf, 24, Motor2_temp);
    _mav_put_uint16_t(buf, 26, Motor1_temp);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BMS_AUX_DATA_LEN);
#else
    mavlink_bms_aux_data_t packet;
    packet.aux_current = aux_current;
    packet.aux_voltage = aux_voltage;
    packet.BMS_current1 = BMS_current1;
    packet.BMS_current2 = BMS_current2;
    packet.BMS_current3 = BMS_current3;
    packet.BMS_voltage = BMS_voltage;
    packet.BMS_temperature1 = BMS_temperature1;
    packet.BMS_temperature2 = BMS_temperature2;
    packet.BMS_temperature3 = BMS_temperature3;
    packet.BMS_temperature4 = BMS_temperature4;
    packet.BMS_cout = BMS_cout;
    packet.BMS_dout = BMS_dout;
    packet.Motor2_temp = Motor2_temp;
    packet.Motor1_temp = Motor1_temp;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_BMS_AUX_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_BMS_AUX_DATA;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_BMS_AUX_DATA_MIN_LEN, MAVLINK_MSG_ID_BMS_AUX_DATA_LEN, MAVLINK_MSG_ID_BMS_AUX_DATA_CRC);
}

/**
 * @brief Encode a bms_aux_data struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param bms_aux_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_bms_aux_data_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_bms_aux_data_t* bms_aux_data)
{
    return mavlink_msg_bms_aux_data_pack(system_id, component_id, msg, bms_aux_data->aux_current, bms_aux_data->aux_voltage, bms_aux_data->BMS_current1, bms_aux_data->BMS_current2, bms_aux_data->BMS_current3, bms_aux_data->BMS_voltage, bms_aux_data->BMS_temperature1, bms_aux_data->BMS_temperature2, bms_aux_data->BMS_temperature3, bms_aux_data->BMS_temperature4, bms_aux_data->BMS_cout, bms_aux_data->BMS_dout, bms_aux_data->Motor2_temp, bms_aux_data->Motor1_temp);
}

/**
 * @brief Encode a bms_aux_data struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param bms_aux_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_bms_aux_data_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_bms_aux_data_t* bms_aux_data)
{
    return mavlink_msg_bms_aux_data_pack_chan(system_id, component_id, chan, msg, bms_aux_data->aux_current, bms_aux_data->aux_voltage, bms_aux_data->BMS_current1, bms_aux_data->BMS_current2, bms_aux_data->BMS_current3, bms_aux_data->BMS_voltage, bms_aux_data->BMS_temperature1, bms_aux_data->BMS_temperature2, bms_aux_data->BMS_temperature3, bms_aux_data->BMS_temperature4, bms_aux_data->BMS_cout, bms_aux_data->BMS_dout, bms_aux_data->Motor2_temp, bms_aux_data->Motor1_temp);
}

/**
 * @brief Send a bms_aux_data message
 * @param chan MAVLink channel to send the message
 *
 * @param aux_current  aux_battery_current
 * @param aux_voltage  aux_battery_voltage
 * @param BMS_current1  BMS_mux_current1
 * @param BMS_current2  BMS_mux_current2
 * @param BMS_current3  BMS_mux_current3
 * @param BMS_voltage  BMS_mux_voltage
 * @param BMS_temperature1  BMS_mux_temperature1
 * @param BMS_temperature2  BMS_mux_temperature2
 * @param BMS_temperature3  BMS_mux_temperature3
 * @param BMS_temperature4  BMS_mux_temperature4
 * @param BMS_cout  BMS_ic_cout
 * @param BMS_dout  BMS_ic_dout
 * @param Motor2_temp  Temperature of Motor 2
 * @param Motor1_temp  Temperature of Motor 1
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_bms_aux_data_send(mavlink_channel_t chan, uint16_t aux_current, uint16_t aux_voltage, uint16_t BMS_current1, uint16_t BMS_current2, uint16_t BMS_current3, uint16_t BMS_voltage, uint16_t BMS_temperature1, uint16_t BMS_temperature2, uint16_t BMS_temperature3, uint16_t BMS_temperature4, uint16_t BMS_cout, uint16_t BMS_dout, uint16_t Motor2_temp, uint16_t Motor1_temp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BMS_AUX_DATA_LEN];
    _mav_put_uint16_t(buf, 0, aux_current);
    _mav_put_uint16_t(buf, 2, aux_voltage);
    _mav_put_uint16_t(buf, 4, BMS_current1);
    _mav_put_uint16_t(buf, 6, BMS_current2);
    _mav_put_uint16_t(buf, 8, BMS_current3);
    _mav_put_uint16_t(buf, 10, BMS_voltage);
    _mav_put_uint16_t(buf, 12, BMS_temperature1);
    _mav_put_uint16_t(buf, 14, BMS_temperature2);
    _mav_put_uint16_t(buf, 16, BMS_temperature3);
    _mav_put_uint16_t(buf, 18, BMS_temperature4);
    _mav_put_uint16_t(buf, 20, BMS_cout);
    _mav_put_uint16_t(buf, 22, BMS_dout);
    _mav_put_uint16_t(buf, 24, Motor2_temp);
    _mav_put_uint16_t(buf, 26, Motor1_temp);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BMS_AUX_DATA, buf, MAVLINK_MSG_ID_BMS_AUX_DATA_MIN_LEN, MAVLINK_MSG_ID_BMS_AUX_DATA_LEN, MAVLINK_MSG_ID_BMS_AUX_DATA_CRC);
#else
    mavlink_bms_aux_data_t packet;
    packet.aux_current = aux_current;
    packet.aux_voltage = aux_voltage;
    packet.BMS_current1 = BMS_current1;
    packet.BMS_current2 = BMS_current2;
    packet.BMS_current3 = BMS_current3;
    packet.BMS_voltage = BMS_voltage;
    packet.BMS_temperature1 = BMS_temperature1;
    packet.BMS_temperature2 = BMS_temperature2;
    packet.BMS_temperature3 = BMS_temperature3;
    packet.BMS_temperature4 = BMS_temperature4;
    packet.BMS_cout = BMS_cout;
    packet.BMS_dout = BMS_dout;
    packet.Motor2_temp = Motor2_temp;
    packet.Motor1_temp = Motor1_temp;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BMS_AUX_DATA, (const char *)&packet, MAVLINK_MSG_ID_BMS_AUX_DATA_MIN_LEN, MAVLINK_MSG_ID_BMS_AUX_DATA_LEN, MAVLINK_MSG_ID_BMS_AUX_DATA_CRC);
#endif
}

/**
 * @brief Send a bms_aux_data message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_bms_aux_data_send_struct(mavlink_channel_t chan, const mavlink_bms_aux_data_t* bms_aux_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_bms_aux_data_send(chan, bms_aux_data->aux_current, bms_aux_data->aux_voltage, bms_aux_data->BMS_current1, bms_aux_data->BMS_current2, bms_aux_data->BMS_current3, bms_aux_data->BMS_voltage, bms_aux_data->BMS_temperature1, bms_aux_data->BMS_temperature2, bms_aux_data->BMS_temperature3, bms_aux_data->BMS_temperature4, bms_aux_data->BMS_cout, bms_aux_data->BMS_dout, bms_aux_data->Motor2_temp, bms_aux_data->Motor1_temp);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BMS_AUX_DATA, (const char *)bms_aux_data, MAVLINK_MSG_ID_BMS_AUX_DATA_MIN_LEN, MAVLINK_MSG_ID_BMS_AUX_DATA_LEN, MAVLINK_MSG_ID_BMS_AUX_DATA_CRC);
#endif
}

#if MAVLINK_MSG_ID_BMS_AUX_DATA_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_bms_aux_data_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t aux_current, uint16_t aux_voltage, uint16_t BMS_current1, uint16_t BMS_current2, uint16_t BMS_current3, uint16_t BMS_voltage, uint16_t BMS_temperature1, uint16_t BMS_temperature2, uint16_t BMS_temperature3, uint16_t BMS_temperature4, uint16_t BMS_cout, uint16_t BMS_dout, uint16_t Motor2_temp, uint16_t Motor1_temp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, aux_current);
    _mav_put_uint16_t(buf, 2, aux_voltage);
    _mav_put_uint16_t(buf, 4, BMS_current1);
    _mav_put_uint16_t(buf, 6, BMS_current2);
    _mav_put_uint16_t(buf, 8, BMS_current3);
    _mav_put_uint16_t(buf, 10, BMS_voltage);
    _mav_put_uint16_t(buf, 12, BMS_temperature1);
    _mav_put_uint16_t(buf, 14, BMS_temperature2);
    _mav_put_uint16_t(buf, 16, BMS_temperature3);
    _mav_put_uint16_t(buf, 18, BMS_temperature4);
    _mav_put_uint16_t(buf, 20, BMS_cout);
    _mav_put_uint16_t(buf, 22, BMS_dout);
    _mav_put_uint16_t(buf, 24, Motor2_temp);
    _mav_put_uint16_t(buf, 26, Motor1_temp);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BMS_AUX_DATA, buf, MAVLINK_MSG_ID_BMS_AUX_DATA_MIN_LEN, MAVLINK_MSG_ID_BMS_AUX_DATA_LEN, MAVLINK_MSG_ID_BMS_AUX_DATA_CRC);
#else
    mavlink_bms_aux_data_t *packet = (mavlink_bms_aux_data_t *)msgbuf;
    packet->aux_current = aux_current;
    packet->aux_voltage = aux_voltage;
    packet->BMS_current1 = BMS_current1;
    packet->BMS_current2 = BMS_current2;
    packet->BMS_current3 = BMS_current3;
    packet->BMS_voltage = BMS_voltage;
    packet->BMS_temperature1 = BMS_temperature1;
    packet->BMS_temperature2 = BMS_temperature2;
    packet->BMS_temperature3 = BMS_temperature3;
    packet->BMS_temperature4 = BMS_temperature4;
    packet->BMS_cout = BMS_cout;
    packet->BMS_dout = BMS_dout;
    packet->Motor2_temp = Motor2_temp;
    packet->Motor1_temp = Motor1_temp;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BMS_AUX_DATA, (const char *)packet, MAVLINK_MSG_ID_BMS_AUX_DATA_MIN_LEN, MAVLINK_MSG_ID_BMS_AUX_DATA_LEN, MAVLINK_MSG_ID_BMS_AUX_DATA_CRC);
#endif
}
#endif

#endif

// MESSAGE BMS_AUX_DATA UNPACKING


/**
 * @brief Get field aux_current from bms_aux_data message
 *
 * @return  aux_battery_current
 */
static inline uint16_t mavlink_msg_bms_aux_data_get_aux_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field aux_voltage from bms_aux_data message
 *
 * @return  aux_battery_voltage
 */
static inline uint16_t mavlink_msg_bms_aux_data_get_aux_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Get field BMS_current1 from bms_aux_data message
 *
 * @return  BMS_mux_current1
 */
static inline uint16_t mavlink_msg_bms_aux_data_get_BMS_current1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field BMS_current2 from bms_aux_data message
 *
 * @return  BMS_mux_current2
 */
static inline uint16_t mavlink_msg_bms_aux_data_get_BMS_current2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  6);
}

/**
 * @brief Get field BMS_current3 from bms_aux_data message
 *
 * @return  BMS_mux_current3
 */
static inline uint16_t mavlink_msg_bms_aux_data_get_BMS_current3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Get field BMS_voltage from bms_aux_data message
 *
 * @return  BMS_mux_voltage
 */
static inline uint16_t mavlink_msg_bms_aux_data_get_BMS_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  10);
}

/**
 * @brief Get field BMS_temperature1 from bms_aux_data message
 *
 * @return  BMS_mux_temperature1
 */
static inline uint16_t mavlink_msg_bms_aux_data_get_BMS_temperature1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  12);
}

/**
 * @brief Get field BMS_temperature2 from bms_aux_data message
 *
 * @return  BMS_mux_temperature2
 */
static inline uint16_t mavlink_msg_bms_aux_data_get_BMS_temperature2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  14);
}

/**
 * @brief Get field BMS_temperature3 from bms_aux_data message
 *
 * @return  BMS_mux_temperature3
 */
static inline uint16_t mavlink_msg_bms_aux_data_get_BMS_temperature3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  16);
}

/**
 * @brief Get field BMS_temperature4 from bms_aux_data message
 *
 * @return  BMS_mux_temperature4
 */
static inline uint16_t mavlink_msg_bms_aux_data_get_BMS_temperature4(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  18);
}

/**
 * @brief Get field BMS_cout from bms_aux_data message
 *
 * @return  BMS_ic_cout
 */
static inline uint16_t mavlink_msg_bms_aux_data_get_BMS_cout(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  20);
}

/**
 * @brief Get field BMS_dout from bms_aux_data message
 *
 * @return  BMS_ic_dout
 */
static inline uint16_t mavlink_msg_bms_aux_data_get_BMS_dout(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  22);
}

/**
 * @brief Get field Motor2_temp from bms_aux_data message
 *
 * @return  Temperature of Motor 2
 */
static inline uint16_t mavlink_msg_bms_aux_data_get_Motor2_temp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  24);
}

/**
 * @brief Get field Motor1_temp from bms_aux_data message
 *
 * @return  Temperature of Motor 1
 */
static inline uint16_t mavlink_msg_bms_aux_data_get_Motor1_temp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  26);
}

/**
 * @brief Decode a bms_aux_data message into a struct
 *
 * @param msg The message to decode
 * @param bms_aux_data C-struct to decode the message contents into
 */
static inline void mavlink_msg_bms_aux_data_decode(const mavlink_message_t* msg, mavlink_bms_aux_data_t* bms_aux_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    bms_aux_data->aux_current = mavlink_msg_bms_aux_data_get_aux_current(msg);
    bms_aux_data->aux_voltage = mavlink_msg_bms_aux_data_get_aux_voltage(msg);
    bms_aux_data->BMS_current1 = mavlink_msg_bms_aux_data_get_BMS_current1(msg);
    bms_aux_data->BMS_current2 = mavlink_msg_bms_aux_data_get_BMS_current2(msg);
    bms_aux_data->BMS_current3 = mavlink_msg_bms_aux_data_get_BMS_current3(msg);
    bms_aux_data->BMS_voltage = mavlink_msg_bms_aux_data_get_BMS_voltage(msg);
    bms_aux_data->BMS_temperature1 = mavlink_msg_bms_aux_data_get_BMS_temperature1(msg);
    bms_aux_data->BMS_temperature2 = mavlink_msg_bms_aux_data_get_BMS_temperature2(msg);
    bms_aux_data->BMS_temperature3 = mavlink_msg_bms_aux_data_get_BMS_temperature3(msg);
    bms_aux_data->BMS_temperature4 = mavlink_msg_bms_aux_data_get_BMS_temperature4(msg);
    bms_aux_data->BMS_cout = mavlink_msg_bms_aux_data_get_BMS_cout(msg);
    bms_aux_data->BMS_dout = mavlink_msg_bms_aux_data_get_BMS_dout(msg);
    bms_aux_data->Motor2_temp = mavlink_msg_bms_aux_data_get_Motor2_temp(msg);
    bms_aux_data->Motor1_temp = mavlink_msg_bms_aux_data_get_Motor1_temp(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_BMS_AUX_DATA_LEN? msg->len : MAVLINK_MSG_ID_BMS_AUX_DATA_LEN;
        memset(bms_aux_data, 0, MAVLINK_MSG_ID_BMS_AUX_DATA_LEN);
    memcpy(bms_aux_data, _MAV_PAYLOAD(msg), len);
#endif
}
