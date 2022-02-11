#pragma once
// MESSAGE BMS_DATA PACKING

#define MAVLINK_MSG_ID_BMS_DATA 11073


typedef struct __mavlink_bms_data_t {
 uint16_t main_voltage; /*< [V] main_battery_voltage*/
 uint8_t total_current; /*< [mA] total_current*/
 uint8_t esc1_current; /*< [mA] esc1 current*/
 uint8_t esc2_current; /*< [mA] esc2 current*/
 uint8_t uC_buck_voltage_5V; /*< [V] microcontroller voltage*/
 uint8_t bat1_temperature; /*< [C] battery1 temperature*/
 uint8_t bat2_temperature; /*< [C] battery2 temperature*/
 uint8_t esc1_temperature; /*< [C] esc1 temperature*/
 uint8_t esc2_temperature; /*< [C] esc2 temperature*/
 uint8_t motor1_temperature; /*< [C] motor1 temperature*/
 uint8_t motor2_temperature; /*< [C] motor2 temperature*/
 uint8_t mosfet1_temperature; /*< [C] mosfet1 temperature*/
 uint8_t mosfet2_temperature; /*< [C] mosfet2 temperature*/
 uint8_t errorcode_cout; /*<  fault detection data:cout*/
 uint8_t errorcode_dout; /*<  fault detection data:dout*/
 uint8_t extra1; /*<  extra 1*/
 uint8_t extra2; /*<  extra 2*/
} mavlink_bms_data_t;

#define MAVLINK_MSG_ID_BMS_DATA_LEN 18
#define MAVLINK_MSG_ID_BMS_DATA_MIN_LEN 18
#define MAVLINK_MSG_ID_11073_LEN 18
#define MAVLINK_MSG_ID_11073_MIN_LEN 18

#define MAVLINK_MSG_ID_BMS_DATA_CRC 193
#define MAVLINK_MSG_ID_11073_CRC 193



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_BMS_DATA { \
    11073, \
    "BMS_DATA", \
    17, \
    {  { "total_current", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_bms_data_t, total_current) }, \
         { "esc1_current", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_bms_data_t, esc1_current) }, \
         { "esc2_current", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_bms_data_t, esc2_current) }, \
         { "main_voltage", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_bms_data_t, main_voltage) }, \
         { "uC_buck_voltage_5V", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_bms_data_t, uC_buck_voltage_5V) }, \
         { "bat1_temperature", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_bms_data_t, bat1_temperature) }, \
         { "bat2_temperature", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_bms_data_t, bat2_temperature) }, \
         { "esc1_temperature", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_bms_data_t, esc1_temperature) }, \
         { "esc2_temperature", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_bms_data_t, esc2_temperature) }, \
         { "motor1_temperature", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_bms_data_t, motor1_temperature) }, \
         { "motor2_temperature", NULL, MAVLINK_TYPE_UINT8_T, 0, 11, offsetof(mavlink_bms_data_t, motor2_temperature) }, \
         { "mosfet1_temperature", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_bms_data_t, mosfet1_temperature) }, \
         { "mosfet2_temperature", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_bms_data_t, mosfet2_temperature) }, \
         { "errorcode_cout", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_bms_data_t, errorcode_cout) }, \
         { "errorcode_dout", NULL, MAVLINK_TYPE_UINT8_T, 0, 15, offsetof(mavlink_bms_data_t, errorcode_dout) }, \
         { "extra1", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_bms_data_t, extra1) }, \
         { "extra2", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_bms_data_t, extra2) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_BMS_DATA { \
    "BMS_DATA", \
    17, \
    {  { "total_current", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_bms_data_t, total_current) }, \
         { "esc1_current", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_bms_data_t, esc1_current) }, \
         { "esc2_current", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_bms_data_t, esc2_current) }, \
         { "main_voltage", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_bms_data_t, main_voltage) }, \
         { "uC_buck_voltage_5V", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_bms_data_t, uC_buck_voltage_5V) }, \
         { "bat1_temperature", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_bms_data_t, bat1_temperature) }, \
         { "bat2_temperature", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_bms_data_t, bat2_temperature) }, \
         { "esc1_temperature", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_bms_data_t, esc1_temperature) }, \
         { "esc2_temperature", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_bms_data_t, esc2_temperature) }, \
         { "motor1_temperature", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_bms_data_t, motor1_temperature) }, \
         { "motor2_temperature", NULL, MAVLINK_TYPE_UINT8_T, 0, 11, offsetof(mavlink_bms_data_t, motor2_temperature) }, \
         { "mosfet1_temperature", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_bms_data_t, mosfet1_temperature) }, \
         { "mosfet2_temperature", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_bms_data_t, mosfet2_temperature) }, \
         { "errorcode_cout", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_bms_data_t, errorcode_cout) }, \
         { "errorcode_dout", NULL, MAVLINK_TYPE_UINT8_T, 0, 15, offsetof(mavlink_bms_data_t, errorcode_dout) }, \
         { "extra1", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_bms_data_t, extra1) }, \
         { "extra2", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_bms_data_t, extra2) }, \
         } \
}
#endif

/**
 * @brief Pack a bms_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param total_current [mA] total_current
 * @param esc1_current [mA] esc1 current
 * @param esc2_current [mA] esc2 current
 * @param main_voltage [V] main_battery_voltage
 * @param uC_buck_voltage_5V [V] microcontroller voltage
 * @param bat1_temperature [C] battery1 temperature
 * @param bat2_temperature [C] battery2 temperature
 * @param esc1_temperature [C] esc1 temperature
 * @param esc2_temperature [C] esc2 temperature
 * @param motor1_temperature [C] motor1 temperature
 * @param motor2_temperature [C] motor2 temperature
 * @param mosfet1_temperature [C] mosfet1 temperature
 * @param mosfet2_temperature [C] mosfet2 temperature
 * @param errorcode_cout  fault detection data:cout
 * @param errorcode_dout  fault detection data:dout
 * @param extra1  extra 1
 * @param extra2  extra 2
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_bms_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t total_current, uint8_t esc1_current, uint8_t esc2_current, uint16_t main_voltage, uint8_t uC_buck_voltage_5V, uint8_t bat1_temperature, uint8_t bat2_temperature, uint8_t esc1_temperature, uint8_t esc2_temperature, uint8_t motor1_temperature, uint8_t motor2_temperature, uint8_t mosfet1_temperature, uint8_t mosfet2_temperature, uint8_t errorcode_cout, uint8_t errorcode_dout, uint8_t extra1, uint8_t extra2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BMS_DATA_LEN];
    _mav_put_uint16_t(buf, 0, main_voltage);
    _mav_put_uint8_t(buf, 2, total_current);
    _mav_put_uint8_t(buf, 3, esc1_current);
    _mav_put_uint8_t(buf, 4, esc2_current);
    _mav_put_uint8_t(buf, 5, uC_buck_voltage_5V);
    _mav_put_uint8_t(buf, 6, bat1_temperature);
    _mav_put_uint8_t(buf, 7, bat2_temperature);
    _mav_put_uint8_t(buf, 8, esc1_temperature);
    _mav_put_uint8_t(buf, 9, esc2_temperature);
    _mav_put_uint8_t(buf, 10, motor1_temperature);
    _mav_put_uint8_t(buf, 11, motor2_temperature);
    _mav_put_uint8_t(buf, 12, mosfet1_temperature);
    _mav_put_uint8_t(buf, 13, mosfet2_temperature);
    _mav_put_uint8_t(buf, 14, errorcode_cout);
    _mav_put_uint8_t(buf, 15, errorcode_dout);
    _mav_put_uint8_t(buf, 16, extra1);
    _mav_put_uint8_t(buf, 17, extra2);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BMS_DATA_LEN);
#else
    mavlink_bms_data_t packet;
    packet.main_voltage = main_voltage;
    packet.total_current = total_current;
    packet.esc1_current = esc1_current;
    packet.esc2_current = esc2_current;
    packet.uC_buck_voltage_5V = uC_buck_voltage_5V;
    packet.bat1_temperature = bat1_temperature;
    packet.bat2_temperature = bat2_temperature;
    packet.esc1_temperature = esc1_temperature;
    packet.esc2_temperature = esc2_temperature;
    packet.motor1_temperature = motor1_temperature;
    packet.motor2_temperature = motor2_temperature;
    packet.mosfet1_temperature = mosfet1_temperature;
    packet.mosfet2_temperature = mosfet2_temperature;
    packet.errorcode_cout = errorcode_cout;
    packet.errorcode_dout = errorcode_dout;
    packet.extra1 = extra1;
    packet.extra2 = extra2;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_BMS_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_BMS_DATA;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_BMS_DATA_MIN_LEN, MAVLINK_MSG_ID_BMS_DATA_LEN, MAVLINK_MSG_ID_BMS_DATA_CRC);
}

/**
 * @brief Pack a bms_data message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param total_current [mA] total_current
 * @param esc1_current [mA] esc1 current
 * @param esc2_current [mA] esc2 current
 * @param main_voltage [V] main_battery_voltage
 * @param uC_buck_voltage_5V [V] microcontroller voltage
 * @param bat1_temperature [C] battery1 temperature
 * @param bat2_temperature [C] battery2 temperature
 * @param esc1_temperature [C] esc1 temperature
 * @param esc2_temperature [C] esc2 temperature
 * @param motor1_temperature [C] motor1 temperature
 * @param motor2_temperature [C] motor2 temperature
 * @param mosfet1_temperature [C] mosfet1 temperature
 * @param mosfet2_temperature [C] mosfet2 temperature
 * @param errorcode_cout  fault detection data:cout
 * @param errorcode_dout  fault detection data:dout
 * @param extra1  extra 1
 * @param extra2  extra 2
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_bms_data_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t total_current,uint8_t esc1_current,uint8_t esc2_current,uint16_t main_voltage,uint8_t uC_buck_voltage_5V,uint8_t bat1_temperature,uint8_t bat2_temperature,uint8_t esc1_temperature,uint8_t esc2_temperature,uint8_t motor1_temperature,uint8_t motor2_temperature,uint8_t mosfet1_temperature,uint8_t mosfet2_temperature,uint8_t errorcode_cout,uint8_t errorcode_dout,uint8_t extra1,uint8_t extra2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BMS_DATA_LEN];
    _mav_put_uint16_t(buf, 0, main_voltage);
    _mav_put_uint8_t(buf, 2, total_current);
    _mav_put_uint8_t(buf, 3, esc1_current);
    _mav_put_uint8_t(buf, 4, esc2_current);
    _mav_put_uint8_t(buf, 5, uC_buck_voltage_5V);
    _mav_put_uint8_t(buf, 6, bat1_temperature);
    _mav_put_uint8_t(buf, 7, bat2_temperature);
    _mav_put_uint8_t(buf, 8, esc1_temperature);
    _mav_put_uint8_t(buf, 9, esc2_temperature);
    _mav_put_uint8_t(buf, 10, motor1_temperature);
    _mav_put_uint8_t(buf, 11, motor2_temperature);
    _mav_put_uint8_t(buf, 12, mosfet1_temperature);
    _mav_put_uint8_t(buf, 13, mosfet2_temperature);
    _mav_put_uint8_t(buf, 14, errorcode_cout);
    _mav_put_uint8_t(buf, 15, errorcode_dout);
    _mav_put_uint8_t(buf, 16, extra1);
    _mav_put_uint8_t(buf, 17, extra2);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BMS_DATA_LEN);
#else
    mavlink_bms_data_t packet;
    packet.main_voltage = main_voltage;
    packet.total_current = total_current;
    packet.esc1_current = esc1_current;
    packet.esc2_current = esc2_current;
    packet.uC_buck_voltage_5V = uC_buck_voltage_5V;
    packet.bat1_temperature = bat1_temperature;
    packet.bat2_temperature = bat2_temperature;
    packet.esc1_temperature = esc1_temperature;
    packet.esc2_temperature = esc2_temperature;
    packet.motor1_temperature = motor1_temperature;
    packet.motor2_temperature = motor2_temperature;
    packet.mosfet1_temperature = mosfet1_temperature;
    packet.mosfet2_temperature = mosfet2_temperature;
    packet.errorcode_cout = errorcode_cout;
    packet.errorcode_dout = errorcode_dout;
    packet.extra1 = extra1;
    packet.extra2 = extra2;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_BMS_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_BMS_DATA;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_BMS_DATA_MIN_LEN, MAVLINK_MSG_ID_BMS_DATA_LEN, MAVLINK_MSG_ID_BMS_DATA_CRC);
}

/**
 * @brief Encode a bms_data struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param bms_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_bms_data_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_bms_data_t* bms_data)
{
    return mavlink_msg_bms_data_pack(system_id, component_id, msg, bms_data->total_current, bms_data->esc1_current, bms_data->esc2_current, bms_data->main_voltage, bms_data->uC_buck_voltage_5V, bms_data->bat1_temperature, bms_data->bat2_temperature, bms_data->esc1_temperature, bms_data->esc2_temperature, bms_data->motor1_temperature, bms_data->motor2_temperature, bms_data->mosfet1_temperature, bms_data->mosfet2_temperature, bms_data->errorcode_cout, bms_data->errorcode_dout, bms_data->extra1, bms_data->extra2);
}

/**
 * @brief Encode a bms_data struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param bms_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_bms_data_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_bms_data_t* bms_data)
{
    return mavlink_msg_bms_data_pack_chan(system_id, component_id, chan, msg, bms_data->total_current, bms_data->esc1_current, bms_data->esc2_current, bms_data->main_voltage, bms_data->uC_buck_voltage_5V, bms_data->bat1_temperature, bms_data->bat2_temperature, bms_data->esc1_temperature, bms_data->esc2_temperature, bms_data->motor1_temperature, bms_data->motor2_temperature, bms_data->mosfet1_temperature, bms_data->mosfet2_temperature, bms_data->errorcode_cout, bms_data->errorcode_dout, bms_data->extra1, bms_data->extra2);
}

/**
 * @brief Send a bms_data message
 * @param chan MAVLink channel to send the message
 *
 * @param total_current [mA] total_current
 * @param esc1_current [mA] esc1 current
 * @param esc2_current [mA] esc2 current
 * @param main_voltage [V] main_battery_voltage
 * @param uC_buck_voltage_5V [V] microcontroller voltage
 * @param bat1_temperature [C] battery1 temperature
 * @param bat2_temperature [C] battery2 temperature
 * @param esc1_temperature [C] esc1 temperature
 * @param esc2_temperature [C] esc2 temperature
 * @param motor1_temperature [C] motor1 temperature
 * @param motor2_temperature [C] motor2 temperature
 * @param mosfet1_temperature [C] mosfet1 temperature
 * @param mosfet2_temperature [C] mosfet2 temperature
 * @param errorcode_cout  fault detection data:cout
 * @param errorcode_dout  fault detection data:dout
 * @param extra1  extra 1
 * @param extra2  extra 2
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_bms_data_send(mavlink_channel_t chan, uint8_t total_current, uint8_t esc1_current, uint8_t esc2_current, uint16_t main_voltage, uint8_t uC_buck_voltage_5V, uint8_t bat1_temperature, uint8_t bat2_temperature, uint8_t esc1_temperature, uint8_t esc2_temperature, uint8_t motor1_temperature, uint8_t motor2_temperature, uint8_t mosfet1_temperature, uint8_t mosfet2_temperature, uint8_t errorcode_cout, uint8_t errorcode_dout, uint8_t extra1, uint8_t extra2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BMS_DATA_LEN];
    _mav_put_uint16_t(buf, 0, main_voltage);
    _mav_put_uint8_t(buf, 2, total_current);
    _mav_put_uint8_t(buf, 3, esc1_current);
    _mav_put_uint8_t(buf, 4, esc2_current);
    _mav_put_uint8_t(buf, 5, uC_buck_voltage_5V);
    _mav_put_uint8_t(buf, 6, bat1_temperature);
    _mav_put_uint8_t(buf, 7, bat2_temperature);
    _mav_put_uint8_t(buf, 8, esc1_temperature);
    _mav_put_uint8_t(buf, 9, esc2_temperature);
    _mav_put_uint8_t(buf, 10, motor1_temperature);
    _mav_put_uint8_t(buf, 11, motor2_temperature);
    _mav_put_uint8_t(buf, 12, mosfet1_temperature);
    _mav_put_uint8_t(buf, 13, mosfet2_temperature);
    _mav_put_uint8_t(buf, 14, errorcode_cout);
    _mav_put_uint8_t(buf, 15, errorcode_dout);
    _mav_put_uint8_t(buf, 16, extra1);
    _mav_put_uint8_t(buf, 17, extra2);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BMS_DATA, buf, MAVLINK_MSG_ID_BMS_DATA_MIN_LEN, MAVLINK_MSG_ID_BMS_DATA_LEN, MAVLINK_MSG_ID_BMS_DATA_CRC);
#else
    mavlink_bms_data_t packet;
    packet.main_voltage = main_voltage;
    packet.total_current = total_current;
    packet.esc1_current = esc1_current;
    packet.esc2_current = esc2_current;
    packet.uC_buck_voltage_5V = uC_buck_voltage_5V;
    packet.bat1_temperature = bat1_temperature;
    packet.bat2_temperature = bat2_temperature;
    packet.esc1_temperature = esc1_temperature;
    packet.esc2_temperature = esc2_temperature;
    packet.motor1_temperature = motor1_temperature;
    packet.motor2_temperature = motor2_temperature;
    packet.mosfet1_temperature = mosfet1_temperature;
    packet.mosfet2_temperature = mosfet2_temperature;
    packet.errorcode_cout = errorcode_cout;
    packet.errorcode_dout = errorcode_dout;
    packet.extra1 = extra1;
    packet.extra2 = extra2;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BMS_DATA, (const char *)&packet, MAVLINK_MSG_ID_BMS_DATA_MIN_LEN, MAVLINK_MSG_ID_BMS_DATA_LEN, MAVLINK_MSG_ID_BMS_DATA_CRC);
#endif
}

/**
 * @brief Send a bms_data message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_bms_data_send_struct(mavlink_channel_t chan, const mavlink_bms_data_t* bms_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_bms_data_send(chan, bms_data->total_current, bms_data->esc1_current, bms_data->esc2_current, bms_data->main_voltage, bms_data->uC_buck_voltage_5V, bms_data->bat1_temperature, bms_data->bat2_temperature, bms_data->esc1_temperature, bms_data->esc2_temperature, bms_data->motor1_temperature, bms_data->motor2_temperature, bms_data->mosfet1_temperature, bms_data->mosfet2_temperature, bms_data->errorcode_cout, bms_data->errorcode_dout, bms_data->extra1, bms_data->extra2);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BMS_DATA, (const char *)bms_data, MAVLINK_MSG_ID_BMS_DATA_MIN_LEN, MAVLINK_MSG_ID_BMS_DATA_LEN, MAVLINK_MSG_ID_BMS_DATA_CRC);
#endif
}

#if MAVLINK_MSG_ID_BMS_DATA_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_bms_data_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t total_current, uint8_t esc1_current, uint8_t esc2_current, uint16_t main_voltage, uint8_t uC_buck_voltage_5V, uint8_t bat1_temperature, uint8_t bat2_temperature, uint8_t esc1_temperature, uint8_t esc2_temperature, uint8_t motor1_temperature, uint8_t motor2_temperature, uint8_t mosfet1_temperature, uint8_t mosfet2_temperature, uint8_t errorcode_cout, uint8_t errorcode_dout, uint8_t extra1, uint8_t extra2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, main_voltage);
    _mav_put_uint8_t(buf, 2, total_current);
    _mav_put_uint8_t(buf, 3, esc1_current);
    _mav_put_uint8_t(buf, 4, esc2_current);
    _mav_put_uint8_t(buf, 5, uC_buck_voltage_5V);
    _mav_put_uint8_t(buf, 6, bat1_temperature);
    _mav_put_uint8_t(buf, 7, bat2_temperature);
    _mav_put_uint8_t(buf, 8, esc1_temperature);
    _mav_put_uint8_t(buf, 9, esc2_temperature);
    _mav_put_uint8_t(buf, 10, motor1_temperature);
    _mav_put_uint8_t(buf, 11, motor2_temperature);
    _mav_put_uint8_t(buf, 12, mosfet1_temperature);
    _mav_put_uint8_t(buf, 13, mosfet2_temperature);
    _mav_put_uint8_t(buf, 14, errorcode_cout);
    _mav_put_uint8_t(buf, 15, errorcode_dout);
    _mav_put_uint8_t(buf, 16, extra1);
    _mav_put_uint8_t(buf, 17, extra2);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BMS_DATA, buf, MAVLINK_MSG_ID_BMS_DATA_MIN_LEN, MAVLINK_MSG_ID_BMS_DATA_LEN, MAVLINK_MSG_ID_BMS_DATA_CRC);
#else
    mavlink_bms_data_t *packet = (mavlink_bms_data_t *)msgbuf;
    packet->main_voltage = main_voltage;
    packet->total_current = total_current;
    packet->esc1_current = esc1_current;
    packet->esc2_current = esc2_current;
    packet->uC_buck_voltage_5V = uC_buck_voltage_5V;
    packet->bat1_temperature = bat1_temperature;
    packet->bat2_temperature = bat2_temperature;
    packet->esc1_temperature = esc1_temperature;
    packet->esc2_temperature = esc2_temperature;
    packet->motor1_temperature = motor1_temperature;
    packet->motor2_temperature = motor2_temperature;
    packet->mosfet1_temperature = mosfet1_temperature;
    packet->mosfet2_temperature = mosfet2_temperature;
    packet->errorcode_cout = errorcode_cout;
    packet->errorcode_dout = errorcode_dout;
    packet->extra1 = extra1;
    packet->extra2 = extra2;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BMS_DATA, (const char *)packet, MAVLINK_MSG_ID_BMS_DATA_MIN_LEN, MAVLINK_MSG_ID_BMS_DATA_LEN, MAVLINK_MSG_ID_BMS_DATA_CRC);
#endif
}
#endif

#endif

// MESSAGE BMS_DATA UNPACKING


/**
 * @brief Get field total_current from bms_data message
 *
 * @return [mA] total_current
 */
static inline uint8_t mavlink_msg_bms_data_get_total_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field esc1_current from bms_data message
 *
 * @return [mA] esc1 current
 */
static inline uint8_t mavlink_msg_bms_data_get_esc1_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  3);
}

/**
 * @brief Get field esc2_current from bms_data message
 *
 * @return [mA] esc2 current
 */
static inline uint8_t mavlink_msg_bms_data_get_esc2_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field main_voltage from bms_data message
 *
 * @return [V] main_battery_voltage
 */
static inline uint16_t mavlink_msg_bms_data_get_main_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field uC_buck_voltage_5V from bms_data message
 *
 * @return [V] microcontroller voltage
 */
static inline uint8_t mavlink_msg_bms_data_get_uC_buck_voltage_5V(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Get field bat1_temperature from bms_data message
 *
 * @return [C] battery1 temperature
 */
static inline uint8_t mavlink_msg_bms_data_get_bat1_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  6);
}

/**
 * @brief Get field bat2_temperature from bms_data message
 *
 * @return [C] battery2 temperature
 */
static inline uint8_t mavlink_msg_bms_data_get_bat2_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  7);
}

/**
 * @brief Get field esc1_temperature from bms_data message
 *
 * @return [C] esc1 temperature
 */
static inline uint8_t mavlink_msg_bms_data_get_esc1_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field esc2_temperature from bms_data message
 *
 * @return [C] esc2 temperature
 */
static inline uint8_t mavlink_msg_bms_data_get_esc2_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  9);
}

/**
 * @brief Get field motor1_temperature from bms_data message
 *
 * @return [C] motor1 temperature
 */
static inline uint8_t mavlink_msg_bms_data_get_motor1_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  10);
}

/**
 * @brief Get field motor2_temperature from bms_data message
 *
 * @return [C] motor2 temperature
 */
static inline uint8_t mavlink_msg_bms_data_get_motor2_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  11);
}

/**
 * @brief Get field mosfet1_temperature from bms_data message
 *
 * @return [C] mosfet1 temperature
 */
static inline uint8_t mavlink_msg_bms_data_get_mosfet1_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  12);
}

/**
 * @brief Get field mosfet2_temperature from bms_data message
 *
 * @return [C] mosfet2 temperature
 */
static inline uint8_t mavlink_msg_bms_data_get_mosfet2_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  13);
}

/**
 * @brief Get field errorcode_cout from bms_data message
 *
 * @return  fault detection data:cout
 */
static inline uint8_t mavlink_msg_bms_data_get_errorcode_cout(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  14);
}

/**
 * @brief Get field errorcode_dout from bms_data message
 *
 * @return  fault detection data:dout
 */
static inline uint8_t mavlink_msg_bms_data_get_errorcode_dout(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  15);
}

/**
 * @brief Get field extra1 from bms_data message
 *
 * @return  extra 1
 */
static inline uint8_t mavlink_msg_bms_data_get_extra1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  16);
}

/**
 * @brief Get field extra2 from bms_data message
 *
 * @return  extra 2
 */
static inline uint8_t mavlink_msg_bms_data_get_extra2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  17);
}

/**
 * @brief Decode a bms_data message into a struct
 *
 * @param msg The message to decode
 * @param bms_data C-struct to decode the message contents into
 */
static inline void mavlink_msg_bms_data_decode(const mavlink_message_t* msg, mavlink_bms_data_t* bms_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    bms_data->main_voltage = mavlink_msg_bms_data_get_main_voltage(msg);
    bms_data->total_current = mavlink_msg_bms_data_get_total_current(msg);
    bms_data->esc1_current = mavlink_msg_bms_data_get_esc1_current(msg);
    bms_data->esc2_current = mavlink_msg_bms_data_get_esc2_current(msg);
    bms_data->uC_buck_voltage_5V = mavlink_msg_bms_data_get_uC_buck_voltage_5V(msg);
    bms_data->bat1_temperature = mavlink_msg_bms_data_get_bat1_temperature(msg);
    bms_data->bat2_temperature = mavlink_msg_bms_data_get_bat2_temperature(msg);
    bms_data->esc1_temperature = mavlink_msg_bms_data_get_esc1_temperature(msg);
    bms_data->esc2_temperature = mavlink_msg_bms_data_get_esc2_temperature(msg);
    bms_data->motor1_temperature = mavlink_msg_bms_data_get_motor1_temperature(msg);
    bms_data->motor2_temperature = mavlink_msg_bms_data_get_motor2_temperature(msg);
    bms_data->mosfet1_temperature = mavlink_msg_bms_data_get_mosfet1_temperature(msg);
    bms_data->mosfet2_temperature = mavlink_msg_bms_data_get_mosfet2_temperature(msg);
    bms_data->errorcode_cout = mavlink_msg_bms_data_get_errorcode_cout(msg);
    bms_data->errorcode_dout = mavlink_msg_bms_data_get_errorcode_dout(msg);
    bms_data->extra1 = mavlink_msg_bms_data_get_extra1(msg);
    bms_data->extra2 = mavlink_msg_bms_data_get_extra2(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_BMS_DATA_LEN? msg->len : MAVLINK_MSG_ID_BMS_DATA_LEN;
        memset(bms_data, 0, MAVLINK_MSG_ID_BMS_DATA_LEN);
    memcpy(bms_data, _MAV_PAYLOAD(msg), len);
#endif
}
