#pragma once
// MESSAGE TOP_DATA PACKING

#define MAVLINK_MSG_ID_TOP_DATA 11069


typedef struct __mavlink_top_data_t {
 uint16_t main_voltage; /*< [V] main voltage*/
 uint16_t servo1_current; /*< [mA] servo1 current*/
 uint16_t servo2_current; /*< [mA] servo2 current*/
 uint16_t servo3_current; /*< [mA] servo3 current*/
 uint8_t uC_buck_voltage_5V; /*< [V] microcontroller 5v buck*/
 uint8_t converter1_voltage_7V; /*< [V] converter 1 voltage*/
 uint8_t converter2_voltage_7V; /*< [V] converter 2 voltage*/
 uint8_t converter3_voltage_7V; /*< [V] converter 3 voltage*/
 uint8_t converter4_voltage_7V; /*< [V] converter 4 voltage*/
 uint8_t servo1_temperature; /*< [C] servo1 temperature*/
 uint8_t servo2_temperature; /*< [C] servo2 temperature*/
 uint8_t servo3_temperature; /*< [C] servo3_temperature*/
 uint8_t extra; /*<  mid_servo3_current*/
} mavlink_top_data_t;

#define MAVLINK_MSG_ID_TOP_DATA_LEN 17
#define MAVLINK_MSG_ID_TOP_DATA_MIN_LEN 17
#define MAVLINK_MSG_ID_11069_LEN 17
#define MAVLINK_MSG_ID_11069_MIN_LEN 17

#define MAVLINK_MSG_ID_TOP_DATA_CRC 59
#define MAVLINK_MSG_ID_11069_CRC 59



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_TOP_DATA { \
    11069, \
    "TOP_DATA", \
    13, \
    {  { "main_voltage", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_top_data_t, main_voltage) }, \
         { "uC_buck_voltage_5V", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_top_data_t, uC_buck_voltage_5V) }, \
         { "converter1_voltage_7V", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_top_data_t, converter1_voltage_7V) }, \
         { "converter2_voltage_7V", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_top_data_t, converter2_voltage_7V) }, \
         { "converter3_voltage_7V", NULL, MAVLINK_TYPE_UINT8_T, 0, 11, offsetof(mavlink_top_data_t, converter3_voltage_7V) }, \
         { "converter4_voltage_7V", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_top_data_t, converter4_voltage_7V) }, \
         { "servo1_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_top_data_t, servo1_current) }, \
         { "servo2_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_top_data_t, servo2_current) }, \
         { "servo3_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_top_data_t, servo3_current) }, \
         { "servo1_temperature", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_top_data_t, servo1_temperature) }, \
         { "servo2_temperature", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_top_data_t, servo2_temperature) }, \
         { "servo3_temperature", NULL, MAVLINK_TYPE_UINT8_T, 0, 15, offsetof(mavlink_top_data_t, servo3_temperature) }, \
         { "extra", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_top_data_t, extra) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_TOP_DATA { \
    "TOP_DATA", \
    13, \
    {  { "main_voltage", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_top_data_t, main_voltage) }, \
         { "uC_buck_voltage_5V", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_top_data_t, uC_buck_voltage_5V) }, \
         { "converter1_voltage_7V", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_top_data_t, converter1_voltage_7V) }, \
         { "converter2_voltage_7V", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_top_data_t, converter2_voltage_7V) }, \
         { "converter3_voltage_7V", NULL, MAVLINK_TYPE_UINT8_T, 0, 11, offsetof(mavlink_top_data_t, converter3_voltage_7V) }, \
         { "converter4_voltage_7V", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_top_data_t, converter4_voltage_7V) }, \
         { "servo1_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_top_data_t, servo1_current) }, \
         { "servo2_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_top_data_t, servo2_current) }, \
         { "servo3_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_top_data_t, servo3_current) }, \
         { "servo1_temperature", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_top_data_t, servo1_temperature) }, \
         { "servo2_temperature", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_top_data_t, servo2_temperature) }, \
         { "servo3_temperature", NULL, MAVLINK_TYPE_UINT8_T, 0, 15, offsetof(mavlink_top_data_t, servo3_temperature) }, \
         { "extra", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_top_data_t, extra) }, \
         } \
}
#endif

/**
 * @brief Pack a top_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param main_voltage [V] main voltage
 * @param uC_buck_voltage_5V [V] microcontroller 5v buck
 * @param converter1_voltage_7V [V] converter 1 voltage
 * @param converter2_voltage_7V [V] converter 2 voltage
 * @param converter3_voltage_7V [V] converter 3 voltage
 * @param converter4_voltage_7V [V] converter 4 voltage
 * @param servo1_current [mA] servo1 current
 * @param servo2_current [mA] servo2 current
 * @param servo3_current [mA] servo3 current
 * @param servo1_temperature [C] servo1 temperature
 * @param servo2_temperature [C] servo2 temperature
 * @param servo3_temperature [C] servo3_temperature
 * @param extra  mid_servo3_current
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_top_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t main_voltage, uint8_t uC_buck_voltage_5V, uint8_t converter1_voltage_7V, uint8_t converter2_voltage_7V, uint8_t converter3_voltage_7V, uint8_t converter4_voltage_7V, uint16_t servo1_current, uint16_t servo2_current, uint16_t servo3_current, uint8_t servo1_temperature, uint8_t servo2_temperature, uint8_t servo3_temperature, uint8_t extra)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TOP_DATA_LEN];
    _mav_put_uint16_t(buf, 0, main_voltage);
    _mav_put_uint16_t(buf, 2, servo1_current);
    _mav_put_uint16_t(buf, 4, servo2_current);
    _mav_put_uint16_t(buf, 6, servo3_current);
    _mav_put_uint8_t(buf, 8, uC_buck_voltage_5V);
    _mav_put_uint8_t(buf, 9, converter1_voltage_7V);
    _mav_put_uint8_t(buf, 10, converter2_voltage_7V);
    _mav_put_uint8_t(buf, 11, converter3_voltage_7V);
    _mav_put_uint8_t(buf, 12, converter4_voltage_7V);
    _mav_put_uint8_t(buf, 13, servo1_temperature);
    _mav_put_uint8_t(buf, 14, servo2_temperature);
    _mav_put_uint8_t(buf, 15, servo3_temperature);
    _mav_put_uint8_t(buf, 16, extra);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TOP_DATA_LEN);
#else
    mavlink_top_data_t packet;
    packet.main_voltage = main_voltage;
    packet.servo1_current = servo1_current;
    packet.servo2_current = servo2_current;
    packet.servo3_current = servo3_current;
    packet.uC_buck_voltage_5V = uC_buck_voltage_5V;
    packet.converter1_voltage_7V = converter1_voltage_7V;
    packet.converter2_voltage_7V = converter2_voltage_7V;
    packet.converter3_voltage_7V = converter3_voltage_7V;
    packet.converter4_voltage_7V = converter4_voltage_7V;
    packet.servo1_temperature = servo1_temperature;
    packet.servo2_temperature = servo2_temperature;
    packet.servo3_temperature = servo3_temperature;
    packet.extra = extra;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TOP_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TOP_DATA;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TOP_DATA_MIN_LEN, MAVLINK_MSG_ID_TOP_DATA_LEN, MAVLINK_MSG_ID_TOP_DATA_CRC);
}

/**
 * @brief Pack a top_data message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param main_voltage [V] main voltage
 * @param uC_buck_voltage_5V [V] microcontroller 5v buck
 * @param converter1_voltage_7V [V] converter 1 voltage
 * @param converter2_voltage_7V [V] converter 2 voltage
 * @param converter3_voltage_7V [V] converter 3 voltage
 * @param converter4_voltage_7V [V] converter 4 voltage
 * @param servo1_current [mA] servo1 current
 * @param servo2_current [mA] servo2 current
 * @param servo3_current [mA] servo3 current
 * @param servo1_temperature [C] servo1 temperature
 * @param servo2_temperature [C] servo2 temperature
 * @param servo3_temperature [C] servo3_temperature
 * @param extra  mid_servo3_current
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_top_data_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t main_voltage,uint8_t uC_buck_voltage_5V,uint8_t converter1_voltage_7V,uint8_t converter2_voltage_7V,uint8_t converter3_voltage_7V,uint8_t converter4_voltage_7V,uint16_t servo1_current,uint16_t servo2_current,uint16_t servo3_current,uint8_t servo1_temperature,uint8_t servo2_temperature,uint8_t servo3_temperature,uint8_t extra)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TOP_DATA_LEN];
    _mav_put_uint16_t(buf, 0, main_voltage);
    _mav_put_uint16_t(buf, 2, servo1_current);
    _mav_put_uint16_t(buf, 4, servo2_current);
    _mav_put_uint16_t(buf, 6, servo3_current);
    _mav_put_uint8_t(buf, 8, uC_buck_voltage_5V);
    _mav_put_uint8_t(buf, 9, converter1_voltage_7V);
    _mav_put_uint8_t(buf, 10, converter2_voltage_7V);
    _mav_put_uint8_t(buf, 11, converter3_voltage_7V);
    _mav_put_uint8_t(buf, 12, converter4_voltage_7V);
    _mav_put_uint8_t(buf, 13, servo1_temperature);
    _mav_put_uint8_t(buf, 14, servo2_temperature);
    _mav_put_uint8_t(buf, 15, servo3_temperature);
    _mav_put_uint8_t(buf, 16, extra);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TOP_DATA_LEN);
#else
    mavlink_top_data_t packet;
    packet.main_voltage = main_voltage;
    packet.servo1_current = servo1_current;
    packet.servo2_current = servo2_current;
    packet.servo3_current = servo3_current;
    packet.uC_buck_voltage_5V = uC_buck_voltage_5V;
    packet.converter1_voltage_7V = converter1_voltage_7V;
    packet.converter2_voltage_7V = converter2_voltage_7V;
    packet.converter3_voltage_7V = converter3_voltage_7V;
    packet.converter4_voltage_7V = converter4_voltage_7V;
    packet.servo1_temperature = servo1_temperature;
    packet.servo2_temperature = servo2_temperature;
    packet.servo3_temperature = servo3_temperature;
    packet.extra = extra;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TOP_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TOP_DATA;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_TOP_DATA_MIN_LEN, MAVLINK_MSG_ID_TOP_DATA_LEN, MAVLINK_MSG_ID_TOP_DATA_CRC);
}

/**
 * @brief Encode a top_data struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param top_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_top_data_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_top_data_t* top_data)
{
    return mavlink_msg_top_data_pack(system_id, component_id, msg, top_data->main_voltage, top_data->uC_buck_voltage_5V, top_data->converter1_voltage_7V, top_data->converter2_voltage_7V, top_data->converter3_voltage_7V, top_data->converter4_voltage_7V, top_data->servo1_current, top_data->servo2_current, top_data->servo3_current, top_data->servo1_temperature, top_data->servo2_temperature, top_data->servo3_temperature, top_data->extra);
}

/**
 * @brief Encode a top_data struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param top_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_top_data_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_top_data_t* top_data)
{
    return mavlink_msg_top_data_pack_chan(system_id, component_id, chan, msg, top_data->main_voltage, top_data->uC_buck_voltage_5V, top_data->converter1_voltage_7V, top_data->converter2_voltage_7V, top_data->converter3_voltage_7V, top_data->converter4_voltage_7V, top_data->servo1_current, top_data->servo2_current, top_data->servo3_current, top_data->servo1_temperature, top_data->servo2_temperature, top_data->servo3_temperature, top_data->extra);
}

/**
 * @brief Send a top_data message
 * @param chan MAVLink channel to send the message
 *
 * @param main_voltage [V] main voltage
 * @param uC_buck_voltage_5V [V] microcontroller 5v buck
 * @param converter1_voltage_7V [V] converter 1 voltage
 * @param converter2_voltage_7V [V] converter 2 voltage
 * @param converter3_voltage_7V [V] converter 3 voltage
 * @param converter4_voltage_7V [V] converter 4 voltage
 * @param servo1_current [mA] servo1 current
 * @param servo2_current [mA] servo2 current
 * @param servo3_current [mA] servo3 current
 * @param servo1_temperature [C] servo1 temperature
 * @param servo2_temperature [C] servo2 temperature
 * @param servo3_temperature [C] servo3_temperature
 * @param extra  mid_servo3_current
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_top_data_send(mavlink_channel_t chan, uint16_t main_voltage, uint8_t uC_buck_voltage_5V, uint8_t converter1_voltage_7V, uint8_t converter2_voltage_7V, uint8_t converter3_voltage_7V, uint8_t converter4_voltage_7V, uint16_t servo1_current, uint16_t servo2_current, uint16_t servo3_current, uint8_t servo1_temperature, uint8_t servo2_temperature, uint8_t servo3_temperature, uint8_t extra)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TOP_DATA_LEN];
    _mav_put_uint16_t(buf, 0, main_voltage);
    _mav_put_uint16_t(buf, 2, servo1_current);
    _mav_put_uint16_t(buf, 4, servo2_current);
    _mav_put_uint16_t(buf, 6, servo3_current);
    _mav_put_uint8_t(buf, 8, uC_buck_voltage_5V);
    _mav_put_uint8_t(buf, 9, converter1_voltage_7V);
    _mav_put_uint8_t(buf, 10, converter2_voltage_7V);
    _mav_put_uint8_t(buf, 11, converter3_voltage_7V);
    _mav_put_uint8_t(buf, 12, converter4_voltage_7V);
    _mav_put_uint8_t(buf, 13, servo1_temperature);
    _mav_put_uint8_t(buf, 14, servo2_temperature);
    _mav_put_uint8_t(buf, 15, servo3_temperature);
    _mav_put_uint8_t(buf, 16, extra);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TOP_DATA, buf, MAVLINK_MSG_ID_TOP_DATA_MIN_LEN, MAVLINK_MSG_ID_TOP_DATA_LEN, MAVLINK_MSG_ID_TOP_DATA_CRC);
#else
    mavlink_top_data_t packet;
    packet.main_voltage = main_voltage;
    packet.servo1_current = servo1_current;
    packet.servo2_current = servo2_current;
    packet.servo3_current = servo3_current;
    packet.uC_buck_voltage_5V = uC_buck_voltage_5V;
    packet.converter1_voltage_7V = converter1_voltage_7V;
    packet.converter2_voltage_7V = converter2_voltage_7V;
    packet.converter3_voltage_7V = converter3_voltage_7V;
    packet.converter4_voltage_7V = converter4_voltage_7V;
    packet.servo1_temperature = servo1_temperature;
    packet.servo2_temperature = servo2_temperature;
    packet.servo3_temperature = servo3_temperature;
    packet.extra = extra;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TOP_DATA, (const char *)&packet, MAVLINK_MSG_ID_TOP_DATA_MIN_LEN, MAVLINK_MSG_ID_TOP_DATA_LEN, MAVLINK_MSG_ID_TOP_DATA_CRC);
#endif
}

/**
 * @brief Send a top_data message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_top_data_send_struct(mavlink_channel_t chan, const mavlink_top_data_t* top_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_top_data_send(chan, top_data->main_voltage, top_data->uC_buck_voltage_5V, top_data->converter1_voltage_7V, top_data->converter2_voltage_7V, top_data->converter3_voltage_7V, top_data->converter4_voltage_7V, top_data->servo1_current, top_data->servo2_current, top_data->servo3_current, top_data->servo1_temperature, top_data->servo2_temperature, top_data->servo3_temperature, top_data->extra);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TOP_DATA, (const char *)top_data, MAVLINK_MSG_ID_TOP_DATA_MIN_LEN, MAVLINK_MSG_ID_TOP_DATA_LEN, MAVLINK_MSG_ID_TOP_DATA_CRC);
#endif
}

#if MAVLINK_MSG_ID_TOP_DATA_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_top_data_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t main_voltage, uint8_t uC_buck_voltage_5V, uint8_t converter1_voltage_7V, uint8_t converter2_voltage_7V, uint8_t converter3_voltage_7V, uint8_t converter4_voltage_7V, uint16_t servo1_current, uint16_t servo2_current, uint16_t servo3_current, uint8_t servo1_temperature, uint8_t servo2_temperature, uint8_t servo3_temperature, uint8_t extra)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, main_voltage);
    _mav_put_uint16_t(buf, 2, servo1_current);
    _mav_put_uint16_t(buf, 4, servo2_current);
    _mav_put_uint16_t(buf, 6, servo3_current);
    _mav_put_uint8_t(buf, 8, uC_buck_voltage_5V);
    _mav_put_uint8_t(buf, 9, converter1_voltage_7V);
    _mav_put_uint8_t(buf, 10, converter2_voltage_7V);
    _mav_put_uint8_t(buf, 11, converter3_voltage_7V);
    _mav_put_uint8_t(buf, 12, converter4_voltage_7V);
    _mav_put_uint8_t(buf, 13, servo1_temperature);
    _mav_put_uint8_t(buf, 14, servo2_temperature);
    _mav_put_uint8_t(buf, 15, servo3_temperature);
    _mav_put_uint8_t(buf, 16, extra);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TOP_DATA, buf, MAVLINK_MSG_ID_TOP_DATA_MIN_LEN, MAVLINK_MSG_ID_TOP_DATA_LEN, MAVLINK_MSG_ID_TOP_DATA_CRC);
#else
    mavlink_top_data_t *packet = (mavlink_top_data_t *)msgbuf;
    packet->main_voltage = main_voltage;
    packet->servo1_current = servo1_current;
    packet->servo2_current = servo2_current;
    packet->servo3_current = servo3_current;
    packet->uC_buck_voltage_5V = uC_buck_voltage_5V;
    packet->converter1_voltage_7V = converter1_voltage_7V;
    packet->converter2_voltage_7V = converter2_voltage_7V;
    packet->converter3_voltage_7V = converter3_voltage_7V;
    packet->converter4_voltage_7V = converter4_voltage_7V;
    packet->servo1_temperature = servo1_temperature;
    packet->servo2_temperature = servo2_temperature;
    packet->servo3_temperature = servo3_temperature;
    packet->extra = extra;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TOP_DATA, (const char *)packet, MAVLINK_MSG_ID_TOP_DATA_MIN_LEN, MAVLINK_MSG_ID_TOP_DATA_LEN, MAVLINK_MSG_ID_TOP_DATA_CRC);
#endif
}
#endif

#endif

// MESSAGE TOP_DATA UNPACKING


/**
 * @brief Get field main_voltage from top_data message
 *
 * @return [V] main voltage
 */
static inline uint16_t mavlink_msg_top_data_get_main_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field uC_buck_voltage_5V from top_data message
 *
 * @return [V] microcontroller 5v buck
 */
static inline uint8_t mavlink_msg_top_data_get_uC_buck_voltage_5V(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field converter1_voltage_7V from top_data message
 *
 * @return [V] converter 1 voltage
 */
static inline uint8_t mavlink_msg_top_data_get_converter1_voltage_7V(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  9);
}

/**
 * @brief Get field converter2_voltage_7V from top_data message
 *
 * @return [V] converter 2 voltage
 */
static inline uint8_t mavlink_msg_top_data_get_converter2_voltage_7V(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  10);
}

/**
 * @brief Get field converter3_voltage_7V from top_data message
 *
 * @return [V] converter 3 voltage
 */
static inline uint8_t mavlink_msg_top_data_get_converter3_voltage_7V(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  11);
}

/**
 * @brief Get field converter4_voltage_7V from top_data message
 *
 * @return [V] converter 4 voltage
 */
static inline uint8_t mavlink_msg_top_data_get_converter4_voltage_7V(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  12);
}

/**
 * @brief Get field servo1_current from top_data message
 *
 * @return [mA] servo1 current
 */
static inline uint16_t mavlink_msg_top_data_get_servo1_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Get field servo2_current from top_data message
 *
 * @return [mA] servo2 current
 */
static inline uint16_t mavlink_msg_top_data_get_servo2_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field servo3_current from top_data message
 *
 * @return [mA] servo3 current
 */
static inline uint16_t mavlink_msg_top_data_get_servo3_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  6);
}

/**
 * @brief Get field servo1_temperature from top_data message
 *
 * @return [C] servo1 temperature
 */
static inline uint8_t mavlink_msg_top_data_get_servo1_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  13);
}

/**
 * @brief Get field servo2_temperature from top_data message
 *
 * @return [C] servo2 temperature
 */
static inline uint8_t mavlink_msg_top_data_get_servo2_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  14);
}

/**
 * @brief Get field servo3_temperature from top_data message
 *
 * @return [C] servo3_temperature
 */
static inline uint8_t mavlink_msg_top_data_get_servo3_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  15);
}

/**
 * @brief Get field extra from top_data message
 *
 * @return  mid_servo3_current
 */
static inline uint8_t mavlink_msg_top_data_get_extra(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  16);
}

/**
 * @brief Decode a top_data message into a struct
 *
 * @param msg The message to decode
 * @param top_data C-struct to decode the message contents into
 */
static inline void mavlink_msg_top_data_decode(const mavlink_message_t* msg, mavlink_top_data_t* top_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    top_data->main_voltage = mavlink_msg_top_data_get_main_voltage(msg);
    top_data->servo1_current = mavlink_msg_top_data_get_servo1_current(msg);
    top_data->servo2_current = mavlink_msg_top_data_get_servo2_current(msg);
    top_data->servo3_current = mavlink_msg_top_data_get_servo3_current(msg);
    top_data->uC_buck_voltage_5V = mavlink_msg_top_data_get_uC_buck_voltage_5V(msg);
    top_data->converter1_voltage_7V = mavlink_msg_top_data_get_converter1_voltage_7V(msg);
    top_data->converter2_voltage_7V = mavlink_msg_top_data_get_converter2_voltage_7V(msg);
    top_data->converter3_voltage_7V = mavlink_msg_top_data_get_converter3_voltage_7V(msg);
    top_data->converter4_voltage_7V = mavlink_msg_top_data_get_converter4_voltage_7V(msg);
    top_data->servo1_temperature = mavlink_msg_top_data_get_servo1_temperature(msg);
    top_data->servo2_temperature = mavlink_msg_top_data_get_servo2_temperature(msg);
    top_data->servo3_temperature = mavlink_msg_top_data_get_servo3_temperature(msg);
    top_data->extra = mavlink_msg_top_data_get_extra(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_TOP_DATA_LEN? msg->len : MAVLINK_MSG_ID_TOP_DATA_LEN;
        memset(top_data, 0, MAVLINK_MSG_ID_TOP_DATA_LEN);
    memcpy(top_data, _MAV_PAYLOAD(msg), len);
#endif
}
