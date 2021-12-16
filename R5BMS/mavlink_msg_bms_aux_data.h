#pragma once
// MESSAGE BMS_AUX_DATA PACKING

#define MAVLINK_MSG_ID_BMS_AUX_DATA 11069


typedef struct __mavlink_bms_aux_data_t {
 uint16_t aux_current; /*<  aux_battery_current*/
 uint16_t aux_voltage; /*<  aux_battery_voltage*/
 uint16_t total_current; /*<  total current*/
 uint16_t total_voltage; /*<  total voltage*/
 uint16_t esc1_current; /*<  esc1 current*/
 uint16_t esc2_current; /*<  esc2 current*/
 uint16_t bat1_temperature; /*<  battery1 temperature*/
 uint16_t bat2_temperature; /*<  battery2 temperature*/
 uint16_t esc1_temperature; /*<  esc1 temperature*/
 uint16_t esc2_temperature; /*<  esc2 temperature*/
 uint16_t motor1_temperature; /*<  motor1 temperature*/
 uint16_t motor2_temperature; /*<  motor2 temperature*/
 uint16_t errorcode_cout; /*<  fault detection data:cout*/
 uint16_t errorcode_dout; /*<  fault detection data:dout*/
} mavlink_bms_aux_data_t;

#define MAVLINK_MSG_ID_BMS_AUX_DATA_LEN 28
#define MAVLINK_MSG_ID_BMS_AUX_DATA_MIN_LEN 28
#define MAVLINK_MSG_ID_11069_LEN 28
#define MAVLINK_MSG_ID_11069_MIN_LEN 28

#define MAVLINK_MSG_ID_BMS_AUX_DATA_CRC 207
#define MAVLINK_MSG_ID_11069_CRC 207



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_BMS_AUX_DATA { \
    11069, \
    "BMS_AUX_DATA", \
    14, \
    {  { "aux_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_bms_aux_data_t, aux_current) }, \
         { "aux_voltage", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_bms_aux_data_t, aux_voltage) }, \
         { "total_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_bms_aux_data_t, total_current) }, \
         { "total_voltage", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_bms_aux_data_t, total_voltage) }, \
         { "esc1_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_bms_aux_data_t, esc1_current) }, \
         { "esc2_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_bms_aux_data_t, esc2_current) }, \
         { "bat1_temperature", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_bms_aux_data_t, bat1_temperature) }, \
         { "bat2_temperature", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_bms_aux_data_t, bat2_temperature) }, \
         { "esc1_temperature", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_bms_aux_data_t, esc1_temperature) }, \
         { "esc2_temperature", NULL, MAVLINK_TYPE_UINT16_T, 0, 18, offsetof(mavlink_bms_aux_data_t, esc2_temperature) }, \
         { "motor1_temperature", NULL, MAVLINK_TYPE_UINT16_T, 0, 20, offsetof(mavlink_bms_aux_data_t, motor1_temperature) }, \
         { "motor2_temperature", NULL, MAVLINK_TYPE_UINT16_T, 0, 22, offsetof(mavlink_bms_aux_data_t, motor2_temperature) }, \
         { "errorcode_cout", NULL, MAVLINK_TYPE_UINT16_T, 0, 24, offsetof(mavlink_bms_aux_data_t, errorcode_cout) }, \
         { "errorcode_dout", NULL, MAVLINK_TYPE_UINT16_T, 0, 26, offsetof(mavlink_bms_aux_data_t, errorcode_dout) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_BMS_AUX_DATA { \
    "BMS_AUX_DATA", \
    14, \
    {  { "aux_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_bms_aux_data_t, aux_current) }, \
         { "aux_voltage", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_bms_aux_data_t, aux_voltage) }, \
         { "total_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_bms_aux_data_t, total_current) }, \
         { "total_voltage", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_bms_aux_data_t, total_voltage) }, \
         { "esc1_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_bms_aux_data_t, esc1_current) }, \
         { "esc2_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_bms_aux_data_t, esc2_current) }, \
         { "bat1_temperature", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_bms_aux_data_t, bat1_temperature) }, \
         { "bat2_temperature", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_bms_aux_data_t, bat2_temperature) }, \
         { "esc1_temperature", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_bms_aux_data_t, esc1_temperature) }, \
         { "esc2_temperature", NULL, MAVLINK_TYPE_UINT16_T, 0, 18, offsetof(mavlink_bms_aux_data_t, esc2_temperature) }, \
         { "motor1_temperature", NULL, MAVLINK_TYPE_UINT16_T, 0, 20, offsetof(mavlink_bms_aux_data_t, motor1_temperature) }, \
         { "motor2_temperature", NULL, MAVLINK_TYPE_UINT16_T, 0, 22, offsetof(mavlink_bms_aux_data_t, motor2_temperature) }, \
         { "errorcode_cout", NULL, MAVLINK_TYPE_UINT16_T, 0, 24, offsetof(mavlink_bms_aux_data_t, errorcode_cout) }, \
         { "errorcode_dout", NULL, MAVLINK_TYPE_UINT16_T, 0, 26, offsetof(mavlink_bms_aux_data_t, errorcode_dout) }, \
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
 * @param total_current  total current
 * @param total_voltage  total voltage
 * @param esc1_current  esc1 current
 * @param esc2_current  esc2 current
 * @param bat1_temperature  battery1 temperature
 * @param bat2_temperature  battery2 temperature
 * @param esc1_temperature  esc1 temperature
 * @param esc2_temperature  esc2 temperature
 * @param motor1_temperature  motor1 temperature
 * @param motor2_temperature  motor2 temperature
 * @param errorcode_cout  fault detection data:cout
 * @param errorcode_dout  fault detection data:dout
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_bms_aux_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t aux_current, uint16_t aux_voltage, uint16_t total_current, uint16_t total_voltage, uint16_t esc1_current, uint16_t esc2_current, uint16_t bat1_temperature, uint16_t bat2_temperature, uint16_t esc1_temperature, uint16_t esc2_temperature, uint16_t motor1_temperature, uint16_t motor2_temperature, uint16_t errorcode_cout, uint16_t errorcode_dout)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BMS_AUX_DATA_LEN];
    _mav_put_uint16_t(buf, 0, aux_current);
    _mav_put_uint16_t(buf, 2, aux_voltage);
    _mav_put_uint16_t(buf, 4, total_current);
    _mav_put_uint16_t(buf, 6, total_voltage);
    _mav_put_uint16_t(buf, 8, esc1_current);
    _mav_put_uint16_t(buf, 10, esc2_current);
    _mav_put_uint16_t(buf, 12, bat1_temperature);
    _mav_put_uint16_t(buf, 14, bat2_temperature);
    _mav_put_uint16_t(buf, 16, esc1_temperature);
    _mav_put_uint16_t(buf, 18, esc2_temperature);
    _mav_put_uint16_t(buf, 20, motor1_temperature);
    _mav_put_uint16_t(buf, 22, motor2_temperature);
    _mav_put_uint16_t(buf, 24, errorcode_cout);
    _mav_put_uint16_t(buf, 26, errorcode_dout);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BMS_AUX_DATA_LEN);
#else
    mavlink_bms_aux_data_t packet;
    packet.aux_current = aux_current;
    packet.aux_voltage = aux_voltage;
    packet.total_current = total_current;
    packet.total_voltage = total_voltage;
    packet.esc1_current = esc1_current;
    packet.esc2_current = esc2_current;
    packet.bat1_temperature = bat1_temperature;
    packet.bat2_temperature = bat2_temperature;
    packet.esc1_temperature = esc1_temperature;
    packet.esc2_temperature = esc2_temperature;
    packet.motor1_temperature = motor1_temperature;
    packet.motor2_temperature = motor2_temperature;
    packet.errorcode_cout = errorcode_cout;
    packet.errorcode_dout = errorcode_dout;

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
 * @param total_current  total current
 * @param total_voltage  total voltage
 * @param esc1_current  esc1 current
 * @param esc2_current  esc2 current
 * @param bat1_temperature  battery1 temperature
 * @param bat2_temperature  battery2 temperature
 * @param esc1_temperature  esc1 temperature
 * @param esc2_temperature  esc2 temperature
 * @param motor1_temperature  motor1 temperature
 * @param motor2_temperature  motor2 temperature
 * @param errorcode_cout  fault detection data:cout
 * @param errorcode_dout  fault detection data:dout
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_bms_aux_data_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t aux_current,uint16_t aux_voltage,uint16_t total_current,uint16_t total_voltage,uint16_t esc1_current,uint16_t esc2_current,uint16_t bat1_temperature,uint16_t bat2_temperature,uint16_t esc1_temperature,uint16_t esc2_temperature,uint16_t motor1_temperature,uint16_t motor2_temperature,uint16_t errorcode_cout,uint16_t errorcode_dout)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BMS_AUX_DATA_LEN];
    _mav_put_uint16_t(buf, 0, aux_current);
    _mav_put_uint16_t(buf, 2, aux_voltage);
    _mav_put_uint16_t(buf, 4, total_current);
    _mav_put_uint16_t(buf, 6, total_voltage);
    _mav_put_uint16_t(buf, 8, esc1_current);
    _mav_put_uint16_t(buf, 10, esc2_current);
    _mav_put_uint16_t(buf, 12, bat1_temperature);
    _mav_put_uint16_t(buf, 14, bat2_temperature);
    _mav_put_uint16_t(buf, 16, esc1_temperature);
    _mav_put_uint16_t(buf, 18, esc2_temperature);
    _mav_put_uint16_t(buf, 20, motor1_temperature);
    _mav_put_uint16_t(buf, 22, motor2_temperature);
    _mav_put_uint16_t(buf, 24, errorcode_cout);
    _mav_put_uint16_t(buf, 26, errorcode_dout);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BMS_AUX_DATA_LEN);
#else
    mavlink_bms_aux_data_t packet;
    packet.aux_current = aux_current;
    packet.aux_voltage = aux_voltage;
    packet.total_current = total_current;
    packet.total_voltage = total_voltage;
    packet.esc1_current = esc1_current;
    packet.esc2_current = esc2_current;
    packet.bat1_temperature = bat1_temperature;
    packet.bat2_temperature = bat2_temperature;
    packet.esc1_temperature = esc1_temperature;
    packet.esc2_temperature = esc2_temperature;
    packet.motor1_temperature = motor1_temperature;
    packet.motor2_temperature = motor2_temperature;
    packet.errorcode_cout = errorcode_cout;
    packet.errorcode_dout = errorcode_dout;

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
    return mavlink_msg_bms_aux_data_pack(system_id, component_id, msg, bms_aux_data->aux_current, bms_aux_data->aux_voltage, bms_aux_data->total_current, bms_aux_data->total_voltage, bms_aux_data->esc1_current, bms_aux_data->esc2_current, bms_aux_data->bat1_temperature, bms_aux_data->bat2_temperature, bms_aux_data->esc1_temperature, bms_aux_data->esc2_temperature, bms_aux_data->motor1_temperature, bms_aux_data->motor2_temperature, bms_aux_data->errorcode_cout, bms_aux_data->errorcode_dout);
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
    return mavlink_msg_bms_aux_data_pack_chan(system_id, component_id, chan, msg, bms_aux_data->aux_current, bms_aux_data->aux_voltage, bms_aux_data->total_current, bms_aux_data->total_voltage, bms_aux_data->esc1_current, bms_aux_data->esc2_current, bms_aux_data->bat1_temperature, bms_aux_data->bat2_temperature, bms_aux_data->esc1_temperature, bms_aux_data->esc2_temperature, bms_aux_data->motor1_temperature, bms_aux_data->motor2_temperature, bms_aux_data->errorcode_cout, bms_aux_data->errorcode_dout);
}

/**
 * @brief Send a bms_aux_data message
 * @param chan MAVLink channel to send the message
 *
 * @param aux_current  aux_battery_current
 * @param aux_voltage  aux_battery_voltage
 * @param total_current  total current
 * @param total_voltage  total voltage
 * @param esc1_current  esc1 current
 * @param esc2_current  esc2 current
 * @param bat1_temperature  battery1 temperature
 * @param bat2_temperature  battery2 temperature
 * @param esc1_temperature  esc1 temperature
 * @param esc2_temperature  esc2 temperature
 * @param motor1_temperature  motor1 temperature
 * @param motor2_temperature  motor2 temperature
 * @param errorcode_cout  fault detection data:cout
 * @param errorcode_dout  fault detection data:dout
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_bms_aux_data_send(mavlink_channel_t chan, uint16_t aux_current, uint16_t aux_voltage, uint16_t total_current, uint16_t total_voltage, uint16_t esc1_current, uint16_t esc2_current, uint16_t bat1_temperature, uint16_t bat2_temperature, uint16_t esc1_temperature, uint16_t esc2_temperature, uint16_t motor1_temperature, uint16_t motor2_temperature, uint16_t errorcode_cout, uint16_t errorcode_dout)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BMS_AUX_DATA_LEN];
    _mav_put_uint16_t(buf, 0, aux_current);
    _mav_put_uint16_t(buf, 2, aux_voltage);
    _mav_put_uint16_t(buf, 4, total_current);
    _mav_put_uint16_t(buf, 6, total_voltage);
    _mav_put_uint16_t(buf, 8, esc1_current);
    _mav_put_uint16_t(buf, 10, esc2_current);
    _mav_put_uint16_t(buf, 12, bat1_temperature);
    _mav_put_uint16_t(buf, 14, bat2_temperature);
    _mav_put_uint16_t(buf, 16, esc1_temperature);
    _mav_put_uint16_t(buf, 18, esc2_temperature);
    _mav_put_uint16_t(buf, 20, motor1_temperature);
    _mav_put_uint16_t(buf, 22, motor2_temperature);
    _mav_put_uint16_t(buf, 24, errorcode_cout);
    _mav_put_uint16_t(buf, 26, errorcode_dout);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BMS_AUX_DATA, buf, MAVLINK_MSG_ID_BMS_AUX_DATA_MIN_LEN, MAVLINK_MSG_ID_BMS_AUX_DATA_LEN, MAVLINK_MSG_ID_BMS_AUX_DATA_CRC);
#else
    mavlink_bms_aux_data_t packet;
    packet.aux_current = aux_current;
    packet.aux_voltage = aux_voltage;
    packet.total_current = total_current;
    packet.total_voltage = total_voltage;
    packet.esc1_current = esc1_current;
    packet.esc2_current = esc2_current;
    packet.bat1_temperature = bat1_temperature;
    packet.bat2_temperature = bat2_temperature;
    packet.esc1_temperature = esc1_temperature;
    packet.esc2_temperature = esc2_temperature;
    packet.motor1_temperature = motor1_temperature;
    packet.motor2_temperature = motor2_temperature;
    packet.errorcode_cout = errorcode_cout;
    packet.errorcode_dout = errorcode_dout;

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
    mavlink_msg_bms_aux_data_send(chan, bms_aux_data->aux_current, bms_aux_data->aux_voltage, bms_aux_data->total_current, bms_aux_data->total_voltage, bms_aux_data->esc1_current, bms_aux_data->esc2_current, bms_aux_data->bat1_temperature, bms_aux_data->bat2_temperature, bms_aux_data->esc1_temperature, bms_aux_data->esc2_temperature, bms_aux_data->motor1_temperature, bms_aux_data->motor2_temperature, bms_aux_data->errorcode_cout, bms_aux_data->errorcode_dout);
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
static inline void mavlink_msg_bms_aux_data_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t aux_current, uint16_t aux_voltage, uint16_t total_current, uint16_t total_voltage, uint16_t esc1_current, uint16_t esc2_current, uint16_t bat1_temperature, uint16_t bat2_temperature, uint16_t esc1_temperature, uint16_t esc2_temperature, uint16_t motor1_temperature, uint16_t motor2_temperature, uint16_t errorcode_cout, uint16_t errorcode_dout)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, aux_current);
    _mav_put_uint16_t(buf, 2, aux_voltage);
    _mav_put_uint16_t(buf, 4, total_current);
    _mav_put_uint16_t(buf, 6, total_voltage);
    _mav_put_uint16_t(buf, 8, esc1_current);
    _mav_put_uint16_t(buf, 10, esc2_current);
    _mav_put_uint16_t(buf, 12, bat1_temperature);
    _mav_put_uint16_t(buf, 14, bat2_temperature);
    _mav_put_uint16_t(buf, 16, esc1_temperature);
    _mav_put_uint16_t(buf, 18, esc2_temperature);
    _mav_put_uint16_t(buf, 20, motor1_temperature);
    _mav_put_uint16_t(buf, 22, motor2_temperature);
    _mav_put_uint16_t(buf, 24, errorcode_cout);
    _mav_put_uint16_t(buf, 26, errorcode_dout);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BMS_AUX_DATA, buf, MAVLINK_MSG_ID_BMS_AUX_DATA_MIN_LEN, MAVLINK_MSG_ID_BMS_AUX_DATA_LEN, MAVLINK_MSG_ID_BMS_AUX_DATA_CRC);
#else
    mavlink_bms_aux_data_t *packet = (mavlink_bms_aux_data_t *)msgbuf;
    packet->aux_current = aux_current;
    packet->aux_voltage = aux_voltage;
    packet->total_current = total_current;
    packet->total_voltage = total_voltage;
    packet->esc1_current = esc1_current;
    packet->esc2_current = esc2_current;
    packet->bat1_temperature = bat1_temperature;
    packet->bat2_temperature = bat2_temperature;
    packet->esc1_temperature = esc1_temperature;
    packet->esc2_temperature = esc2_temperature;
    packet->motor1_temperature = motor1_temperature;
    packet->motor2_temperature = motor2_temperature;
    packet->errorcode_cout = errorcode_cout;
    packet->errorcode_dout = errorcode_dout;

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
 * @brief Get field total_current from bms_aux_data message
 *
 * @return  total current
 */
static inline uint16_t mavlink_msg_bms_aux_data_get_total_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field total_voltage from bms_aux_data message
 *
 * @return  total voltage
 */
static inline uint16_t mavlink_msg_bms_aux_data_get_total_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  6);
}

/**
 * @brief Get field esc1_current from bms_aux_data message
 *
 * @return  esc1 current
 */
static inline uint16_t mavlink_msg_bms_aux_data_get_esc1_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Get field esc2_current from bms_aux_data message
 *
 * @return  esc2 current
 */
static inline uint16_t mavlink_msg_bms_aux_data_get_esc2_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  10);
}

/**
 * @brief Get field bat1_temperature from bms_aux_data message
 *
 * @return  battery1 temperature
 */
static inline uint16_t mavlink_msg_bms_aux_data_get_bat1_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  12);
}

/**
 * @brief Get field bat2_temperature from bms_aux_data message
 *
 * @return  battery2 temperature
 */
static inline uint16_t mavlink_msg_bms_aux_data_get_bat2_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  14);
}

/**
 * @brief Get field esc1_temperature from bms_aux_data message
 *
 * @return  esc1 temperature
 */
static inline uint16_t mavlink_msg_bms_aux_data_get_esc1_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  16);
}

/**
 * @brief Get field esc2_temperature from bms_aux_data message
 *
 * @return  esc2 temperature
 */
static inline uint16_t mavlink_msg_bms_aux_data_get_esc2_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  18);
}

/**
 * @brief Get field motor1_temperature from bms_aux_data message
 *
 * @return  motor1 temperature
 */
static inline uint16_t mavlink_msg_bms_aux_data_get_motor1_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  20);
}

/**
 * @brief Get field motor2_temperature from bms_aux_data message
 *
 * @return  motor2 temperature
 */
static inline uint16_t mavlink_msg_bms_aux_data_get_motor2_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  22);
}

/**
 * @brief Get field errorcode_cout from bms_aux_data message
 *
 * @return  fault detection data:cout
 */
static inline uint16_t mavlink_msg_bms_aux_data_get_errorcode_cout(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  24);
}

/**
 * @brief Get field errorcode_dout from bms_aux_data message
 *
 * @return  fault detection data:dout
 */
static inline uint16_t mavlink_msg_bms_aux_data_get_errorcode_dout(const mavlink_message_t* msg)
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
    bms_aux_data->total_current = mavlink_msg_bms_aux_data_get_total_current(msg);
    bms_aux_data->total_voltage = mavlink_msg_bms_aux_data_get_total_voltage(msg);
    bms_aux_data->esc1_current = mavlink_msg_bms_aux_data_get_esc1_current(msg);
    bms_aux_data->esc2_current = mavlink_msg_bms_aux_data_get_esc2_current(msg);
    bms_aux_data->bat1_temperature = mavlink_msg_bms_aux_data_get_bat1_temperature(msg);
    bms_aux_data->bat2_temperature = mavlink_msg_bms_aux_data_get_bat2_temperature(msg);
    bms_aux_data->esc1_temperature = mavlink_msg_bms_aux_data_get_esc1_temperature(msg);
    bms_aux_data->esc2_temperature = mavlink_msg_bms_aux_data_get_esc2_temperature(msg);
    bms_aux_data->motor1_temperature = mavlink_msg_bms_aux_data_get_motor1_temperature(msg);
    bms_aux_data->motor2_temperature = mavlink_msg_bms_aux_data_get_motor2_temperature(msg);
    bms_aux_data->errorcode_cout = mavlink_msg_bms_aux_data_get_errorcode_cout(msg);
    bms_aux_data->errorcode_dout = mavlink_msg_bms_aux_data_get_errorcode_dout(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_BMS_AUX_DATA_LEN? msg->len : MAVLINK_MSG_ID_BMS_AUX_DATA_LEN;
        memset(bms_aux_data, 0, MAVLINK_MSG_ID_BMS_AUX_DATA_LEN);
    memcpy(bms_aux_data, _MAV_PAYLOAD(msg), len);
#endif
}
