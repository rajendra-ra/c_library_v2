#pragma once
// MESSAGE R10_SERVO_DATA PACKING

#define MAVLINK_MSG_ID_R10_SERVO_DATA 11072


typedef struct __mavlink_r10_servo_data_t {
 uint64_t TIME_US; /*<  Timestamp in micro seconds*/
 uint16_t VSEN_BUCK1; /*<  Servo1 converter voltage sensor reading*/
 uint16_t VSEN_BUCK2; /*<  Servo2 converter voltage sensor reading*/
 uint16_t VSEN_BUCK3; /*<  Servo3 converter voltage sensor reading*/
 uint16_t VSEN_BUCK4; /*<  Servo4 converter voltage sensor reading*/
 uint16_t VSEN_BUCK6; /*<  Servo6 converter voltage sensor reading*/
 uint16_t VSEN_BUCK_S_AUX; /*<  S-Aux converter voltage sensor reading*/
 uint16_t ISEN_S1; /*<  Servo1 current sensor reading*/
 uint16_t ISEN_S2; /*<  Servo2 current sensor reading*/
 uint16_t ISEN_S3; /*<  Servo3 current sensor reading*/
 uint16_t ISEN_S4; /*<  Servo4 current sensor reading*/
 uint16_t ISEN_S6; /*<  Servo6 current sensor reading*/
 uint16_t ISEN_S_AUX; /*<  S-Aux current sensor reading*/
 uint8_t S1_TEMP; /*<  Servo1 Temperature sensor reading*/
 uint8_t S2_TEMP; /*<  Servo2 Temperature sensor reading*/
 uint8_t S3_TEMP; /*<  Servo3 Temperature sensor reading*/
 uint8_t S4_TEMP; /*<  Servo4 Temperature sensor reading*/
 uint8_t S5_TEMP; /*<  Servo5 Temperature sensor reading*/
 uint8_t S6_TEMP; /*<  Servo6 Temperature sensor reading*/
} mavlink_r10_servo_data_t;

#define MAVLINK_MSG_ID_R10_SERVO_DATA_LEN 38
#define MAVLINK_MSG_ID_R10_SERVO_DATA_MIN_LEN 38
#define MAVLINK_MSG_ID_11072_LEN 38
#define MAVLINK_MSG_ID_11072_MIN_LEN 38

#define MAVLINK_MSG_ID_R10_SERVO_DATA_CRC 154
#define MAVLINK_MSG_ID_11072_CRC 154



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_R10_SERVO_DATA { \
    11072, \
    "R10_SERVO_DATA", \
    19, \
    {  { "TIME_US", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_r10_servo_data_t, TIME_US) }, \
         { "VSEN_BUCK1", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_r10_servo_data_t, VSEN_BUCK1) }, \
         { "VSEN_BUCK2", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_r10_servo_data_t, VSEN_BUCK2) }, \
         { "VSEN_BUCK3", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_r10_servo_data_t, VSEN_BUCK3) }, \
         { "VSEN_BUCK4", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_r10_servo_data_t, VSEN_BUCK4) }, \
         { "VSEN_BUCK6", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_r10_servo_data_t, VSEN_BUCK6) }, \
         { "VSEN_BUCK_S_AUX", NULL, MAVLINK_TYPE_UINT16_T, 0, 18, offsetof(mavlink_r10_servo_data_t, VSEN_BUCK_S_AUX) }, \
         { "ISEN_S1", NULL, MAVLINK_TYPE_UINT16_T, 0, 20, offsetof(mavlink_r10_servo_data_t, ISEN_S1) }, \
         { "ISEN_S2", NULL, MAVLINK_TYPE_UINT16_T, 0, 22, offsetof(mavlink_r10_servo_data_t, ISEN_S2) }, \
         { "ISEN_S3", NULL, MAVLINK_TYPE_UINT16_T, 0, 24, offsetof(mavlink_r10_servo_data_t, ISEN_S3) }, \
         { "ISEN_S4", NULL, MAVLINK_TYPE_UINT16_T, 0, 26, offsetof(mavlink_r10_servo_data_t, ISEN_S4) }, \
         { "ISEN_S6", NULL, MAVLINK_TYPE_UINT16_T, 0, 28, offsetof(mavlink_r10_servo_data_t, ISEN_S6) }, \
         { "ISEN_S_AUX", NULL, MAVLINK_TYPE_UINT16_T, 0, 30, offsetof(mavlink_r10_servo_data_t, ISEN_S_AUX) }, \
         { "S1_TEMP", NULL, MAVLINK_TYPE_UINT8_T, 0, 32, offsetof(mavlink_r10_servo_data_t, S1_TEMP) }, \
         { "S2_TEMP", NULL, MAVLINK_TYPE_UINT8_T, 0, 33, offsetof(mavlink_r10_servo_data_t, S2_TEMP) }, \
         { "S3_TEMP", NULL, MAVLINK_TYPE_UINT8_T, 0, 34, offsetof(mavlink_r10_servo_data_t, S3_TEMP) }, \
         { "S4_TEMP", NULL, MAVLINK_TYPE_UINT8_T, 0, 35, offsetof(mavlink_r10_servo_data_t, S4_TEMP) }, \
         { "S5_TEMP", NULL, MAVLINK_TYPE_UINT8_T, 0, 36, offsetof(mavlink_r10_servo_data_t, S5_TEMP) }, \
         { "S6_TEMP", NULL, MAVLINK_TYPE_UINT8_T, 0, 37, offsetof(mavlink_r10_servo_data_t, S6_TEMP) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_R10_SERVO_DATA { \
    "R10_SERVO_DATA", \
    19, \
    {  { "TIME_US", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_r10_servo_data_t, TIME_US) }, \
         { "VSEN_BUCK1", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_r10_servo_data_t, VSEN_BUCK1) }, \
         { "VSEN_BUCK2", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_r10_servo_data_t, VSEN_BUCK2) }, \
         { "VSEN_BUCK3", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_r10_servo_data_t, VSEN_BUCK3) }, \
         { "VSEN_BUCK4", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_r10_servo_data_t, VSEN_BUCK4) }, \
         { "VSEN_BUCK6", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_r10_servo_data_t, VSEN_BUCK6) }, \
         { "VSEN_BUCK_S_AUX", NULL, MAVLINK_TYPE_UINT16_T, 0, 18, offsetof(mavlink_r10_servo_data_t, VSEN_BUCK_S_AUX) }, \
         { "ISEN_S1", NULL, MAVLINK_TYPE_UINT16_T, 0, 20, offsetof(mavlink_r10_servo_data_t, ISEN_S1) }, \
         { "ISEN_S2", NULL, MAVLINK_TYPE_UINT16_T, 0, 22, offsetof(mavlink_r10_servo_data_t, ISEN_S2) }, \
         { "ISEN_S3", NULL, MAVLINK_TYPE_UINT16_T, 0, 24, offsetof(mavlink_r10_servo_data_t, ISEN_S3) }, \
         { "ISEN_S4", NULL, MAVLINK_TYPE_UINT16_T, 0, 26, offsetof(mavlink_r10_servo_data_t, ISEN_S4) }, \
         { "ISEN_S6", NULL, MAVLINK_TYPE_UINT16_T, 0, 28, offsetof(mavlink_r10_servo_data_t, ISEN_S6) }, \
         { "ISEN_S_AUX", NULL, MAVLINK_TYPE_UINT16_T, 0, 30, offsetof(mavlink_r10_servo_data_t, ISEN_S_AUX) }, \
         { "S1_TEMP", NULL, MAVLINK_TYPE_UINT8_T, 0, 32, offsetof(mavlink_r10_servo_data_t, S1_TEMP) }, \
         { "S2_TEMP", NULL, MAVLINK_TYPE_UINT8_T, 0, 33, offsetof(mavlink_r10_servo_data_t, S2_TEMP) }, \
         { "S3_TEMP", NULL, MAVLINK_TYPE_UINT8_T, 0, 34, offsetof(mavlink_r10_servo_data_t, S3_TEMP) }, \
         { "S4_TEMP", NULL, MAVLINK_TYPE_UINT8_T, 0, 35, offsetof(mavlink_r10_servo_data_t, S4_TEMP) }, \
         { "S5_TEMP", NULL, MAVLINK_TYPE_UINT8_T, 0, 36, offsetof(mavlink_r10_servo_data_t, S5_TEMP) }, \
         { "S6_TEMP", NULL, MAVLINK_TYPE_UINT8_T, 0, 37, offsetof(mavlink_r10_servo_data_t, S6_TEMP) }, \
         } \
}
#endif

/**
 * @brief Pack a r10_servo_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param TIME_US  Timestamp in micro seconds
 * @param VSEN_BUCK1  Servo1 converter voltage sensor reading
 * @param VSEN_BUCK2  Servo2 converter voltage sensor reading
 * @param VSEN_BUCK3  Servo3 converter voltage sensor reading
 * @param VSEN_BUCK4  Servo4 converter voltage sensor reading
 * @param VSEN_BUCK6  Servo6 converter voltage sensor reading
 * @param VSEN_BUCK_S_AUX  S-Aux converter voltage sensor reading
 * @param ISEN_S1  Servo1 current sensor reading
 * @param ISEN_S2  Servo2 current sensor reading
 * @param ISEN_S3  Servo3 current sensor reading
 * @param ISEN_S4  Servo4 current sensor reading
 * @param ISEN_S6  Servo6 current sensor reading
 * @param ISEN_S_AUX  S-Aux current sensor reading
 * @param S1_TEMP  Servo1 Temperature sensor reading
 * @param S2_TEMP  Servo2 Temperature sensor reading
 * @param S3_TEMP  Servo3 Temperature sensor reading
 * @param S4_TEMP  Servo4 Temperature sensor reading
 * @param S5_TEMP  Servo5 Temperature sensor reading
 * @param S6_TEMP  Servo6 Temperature sensor reading
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_r10_servo_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t TIME_US, uint16_t VSEN_BUCK1, uint16_t VSEN_BUCK2, uint16_t VSEN_BUCK3, uint16_t VSEN_BUCK4, uint16_t VSEN_BUCK6, uint16_t VSEN_BUCK_S_AUX, uint16_t ISEN_S1, uint16_t ISEN_S2, uint16_t ISEN_S3, uint16_t ISEN_S4, uint16_t ISEN_S6, uint16_t ISEN_S_AUX, uint8_t S1_TEMP, uint8_t S2_TEMP, uint8_t S3_TEMP, uint8_t S4_TEMP, uint8_t S5_TEMP, uint8_t S6_TEMP)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_R10_SERVO_DATA_LEN];
    _mav_put_uint64_t(buf, 0, TIME_US);
    _mav_put_uint16_t(buf, 8, VSEN_BUCK1);
    _mav_put_uint16_t(buf, 10, VSEN_BUCK2);
    _mav_put_uint16_t(buf, 12, VSEN_BUCK3);
    _mav_put_uint16_t(buf, 14, VSEN_BUCK4);
    _mav_put_uint16_t(buf, 16, VSEN_BUCK6);
    _mav_put_uint16_t(buf, 18, VSEN_BUCK_S_AUX);
    _mav_put_uint16_t(buf, 20, ISEN_S1);
    _mav_put_uint16_t(buf, 22, ISEN_S2);
    _mav_put_uint16_t(buf, 24, ISEN_S3);
    _mav_put_uint16_t(buf, 26, ISEN_S4);
    _mav_put_uint16_t(buf, 28, ISEN_S6);
    _mav_put_uint16_t(buf, 30, ISEN_S_AUX);
    _mav_put_uint8_t(buf, 32, S1_TEMP);
    _mav_put_uint8_t(buf, 33, S2_TEMP);
    _mav_put_uint8_t(buf, 34, S3_TEMP);
    _mav_put_uint8_t(buf, 35, S4_TEMP);
    _mav_put_uint8_t(buf, 36, S5_TEMP);
    _mav_put_uint8_t(buf, 37, S6_TEMP);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_R10_SERVO_DATA_LEN);
#else
    mavlink_r10_servo_data_t packet;
    packet.TIME_US = TIME_US;
    packet.VSEN_BUCK1 = VSEN_BUCK1;
    packet.VSEN_BUCK2 = VSEN_BUCK2;
    packet.VSEN_BUCK3 = VSEN_BUCK3;
    packet.VSEN_BUCK4 = VSEN_BUCK4;
    packet.VSEN_BUCK6 = VSEN_BUCK6;
    packet.VSEN_BUCK_S_AUX = VSEN_BUCK_S_AUX;
    packet.ISEN_S1 = ISEN_S1;
    packet.ISEN_S2 = ISEN_S2;
    packet.ISEN_S3 = ISEN_S3;
    packet.ISEN_S4 = ISEN_S4;
    packet.ISEN_S6 = ISEN_S6;
    packet.ISEN_S_AUX = ISEN_S_AUX;
    packet.S1_TEMP = S1_TEMP;
    packet.S2_TEMP = S2_TEMP;
    packet.S3_TEMP = S3_TEMP;
    packet.S4_TEMP = S4_TEMP;
    packet.S5_TEMP = S5_TEMP;
    packet.S6_TEMP = S6_TEMP;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_R10_SERVO_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_R10_SERVO_DATA;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_R10_SERVO_DATA_MIN_LEN, MAVLINK_MSG_ID_R10_SERVO_DATA_LEN, MAVLINK_MSG_ID_R10_SERVO_DATA_CRC);
}

/**
 * @brief Pack a r10_servo_data message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param TIME_US  Timestamp in micro seconds
 * @param VSEN_BUCK1  Servo1 converter voltage sensor reading
 * @param VSEN_BUCK2  Servo2 converter voltage sensor reading
 * @param VSEN_BUCK3  Servo3 converter voltage sensor reading
 * @param VSEN_BUCK4  Servo4 converter voltage sensor reading
 * @param VSEN_BUCK6  Servo6 converter voltage sensor reading
 * @param VSEN_BUCK_S_AUX  S-Aux converter voltage sensor reading
 * @param ISEN_S1  Servo1 current sensor reading
 * @param ISEN_S2  Servo2 current sensor reading
 * @param ISEN_S3  Servo3 current sensor reading
 * @param ISEN_S4  Servo4 current sensor reading
 * @param ISEN_S6  Servo6 current sensor reading
 * @param ISEN_S_AUX  S-Aux current sensor reading
 * @param S1_TEMP  Servo1 Temperature sensor reading
 * @param S2_TEMP  Servo2 Temperature sensor reading
 * @param S3_TEMP  Servo3 Temperature sensor reading
 * @param S4_TEMP  Servo4 Temperature sensor reading
 * @param S5_TEMP  Servo5 Temperature sensor reading
 * @param S6_TEMP  Servo6 Temperature sensor reading
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_r10_servo_data_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t TIME_US,uint16_t VSEN_BUCK1,uint16_t VSEN_BUCK2,uint16_t VSEN_BUCK3,uint16_t VSEN_BUCK4,uint16_t VSEN_BUCK6,uint16_t VSEN_BUCK_S_AUX,uint16_t ISEN_S1,uint16_t ISEN_S2,uint16_t ISEN_S3,uint16_t ISEN_S4,uint16_t ISEN_S6,uint16_t ISEN_S_AUX,uint8_t S1_TEMP,uint8_t S2_TEMP,uint8_t S3_TEMP,uint8_t S4_TEMP,uint8_t S5_TEMP,uint8_t S6_TEMP)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_R10_SERVO_DATA_LEN];
    _mav_put_uint64_t(buf, 0, TIME_US);
    _mav_put_uint16_t(buf, 8, VSEN_BUCK1);
    _mav_put_uint16_t(buf, 10, VSEN_BUCK2);
    _mav_put_uint16_t(buf, 12, VSEN_BUCK3);
    _mav_put_uint16_t(buf, 14, VSEN_BUCK4);
    _mav_put_uint16_t(buf, 16, VSEN_BUCK6);
    _mav_put_uint16_t(buf, 18, VSEN_BUCK_S_AUX);
    _mav_put_uint16_t(buf, 20, ISEN_S1);
    _mav_put_uint16_t(buf, 22, ISEN_S2);
    _mav_put_uint16_t(buf, 24, ISEN_S3);
    _mav_put_uint16_t(buf, 26, ISEN_S4);
    _mav_put_uint16_t(buf, 28, ISEN_S6);
    _mav_put_uint16_t(buf, 30, ISEN_S_AUX);
    _mav_put_uint8_t(buf, 32, S1_TEMP);
    _mav_put_uint8_t(buf, 33, S2_TEMP);
    _mav_put_uint8_t(buf, 34, S3_TEMP);
    _mav_put_uint8_t(buf, 35, S4_TEMP);
    _mav_put_uint8_t(buf, 36, S5_TEMP);
    _mav_put_uint8_t(buf, 37, S6_TEMP);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_R10_SERVO_DATA_LEN);
#else
    mavlink_r10_servo_data_t packet;
    packet.TIME_US = TIME_US;
    packet.VSEN_BUCK1 = VSEN_BUCK1;
    packet.VSEN_BUCK2 = VSEN_BUCK2;
    packet.VSEN_BUCK3 = VSEN_BUCK3;
    packet.VSEN_BUCK4 = VSEN_BUCK4;
    packet.VSEN_BUCK6 = VSEN_BUCK6;
    packet.VSEN_BUCK_S_AUX = VSEN_BUCK_S_AUX;
    packet.ISEN_S1 = ISEN_S1;
    packet.ISEN_S2 = ISEN_S2;
    packet.ISEN_S3 = ISEN_S3;
    packet.ISEN_S4 = ISEN_S4;
    packet.ISEN_S6 = ISEN_S6;
    packet.ISEN_S_AUX = ISEN_S_AUX;
    packet.S1_TEMP = S1_TEMP;
    packet.S2_TEMP = S2_TEMP;
    packet.S3_TEMP = S3_TEMP;
    packet.S4_TEMP = S4_TEMP;
    packet.S5_TEMP = S5_TEMP;
    packet.S6_TEMP = S6_TEMP;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_R10_SERVO_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_R10_SERVO_DATA;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_R10_SERVO_DATA_MIN_LEN, MAVLINK_MSG_ID_R10_SERVO_DATA_LEN, MAVLINK_MSG_ID_R10_SERVO_DATA_CRC);
}

/**
 * @brief Encode a r10_servo_data struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param r10_servo_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_r10_servo_data_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_r10_servo_data_t* r10_servo_data)
{
    return mavlink_msg_r10_servo_data_pack(system_id, component_id, msg, r10_servo_data->TIME_US, r10_servo_data->VSEN_BUCK1, r10_servo_data->VSEN_BUCK2, r10_servo_data->VSEN_BUCK3, r10_servo_data->VSEN_BUCK4, r10_servo_data->VSEN_BUCK6, r10_servo_data->VSEN_BUCK_S_AUX, r10_servo_data->ISEN_S1, r10_servo_data->ISEN_S2, r10_servo_data->ISEN_S3, r10_servo_data->ISEN_S4, r10_servo_data->ISEN_S6, r10_servo_data->ISEN_S_AUX, r10_servo_data->S1_TEMP, r10_servo_data->S2_TEMP, r10_servo_data->S3_TEMP, r10_servo_data->S4_TEMP, r10_servo_data->S5_TEMP, r10_servo_data->S6_TEMP);
}

/**
 * @brief Encode a r10_servo_data struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param r10_servo_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_r10_servo_data_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_r10_servo_data_t* r10_servo_data)
{
    return mavlink_msg_r10_servo_data_pack_chan(system_id, component_id, chan, msg, r10_servo_data->TIME_US, r10_servo_data->VSEN_BUCK1, r10_servo_data->VSEN_BUCK2, r10_servo_data->VSEN_BUCK3, r10_servo_data->VSEN_BUCK4, r10_servo_data->VSEN_BUCK6, r10_servo_data->VSEN_BUCK_S_AUX, r10_servo_data->ISEN_S1, r10_servo_data->ISEN_S2, r10_servo_data->ISEN_S3, r10_servo_data->ISEN_S4, r10_servo_data->ISEN_S6, r10_servo_data->ISEN_S_AUX, r10_servo_data->S1_TEMP, r10_servo_data->S2_TEMP, r10_servo_data->S3_TEMP, r10_servo_data->S4_TEMP, r10_servo_data->S5_TEMP, r10_servo_data->S6_TEMP);
}

/**
 * @brief Send a r10_servo_data message
 * @param chan MAVLink channel to send the message
 *
 * @param TIME_US  Timestamp in micro seconds
 * @param VSEN_BUCK1  Servo1 converter voltage sensor reading
 * @param VSEN_BUCK2  Servo2 converter voltage sensor reading
 * @param VSEN_BUCK3  Servo3 converter voltage sensor reading
 * @param VSEN_BUCK4  Servo4 converter voltage sensor reading
 * @param VSEN_BUCK6  Servo6 converter voltage sensor reading
 * @param VSEN_BUCK_S_AUX  S-Aux converter voltage sensor reading
 * @param ISEN_S1  Servo1 current sensor reading
 * @param ISEN_S2  Servo2 current sensor reading
 * @param ISEN_S3  Servo3 current sensor reading
 * @param ISEN_S4  Servo4 current sensor reading
 * @param ISEN_S6  Servo6 current sensor reading
 * @param ISEN_S_AUX  S-Aux current sensor reading
 * @param S1_TEMP  Servo1 Temperature sensor reading
 * @param S2_TEMP  Servo2 Temperature sensor reading
 * @param S3_TEMP  Servo3 Temperature sensor reading
 * @param S4_TEMP  Servo4 Temperature sensor reading
 * @param S5_TEMP  Servo5 Temperature sensor reading
 * @param S6_TEMP  Servo6 Temperature sensor reading
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_r10_servo_data_send(mavlink_channel_t chan, uint64_t TIME_US, uint16_t VSEN_BUCK1, uint16_t VSEN_BUCK2, uint16_t VSEN_BUCK3, uint16_t VSEN_BUCK4, uint16_t VSEN_BUCK6, uint16_t VSEN_BUCK_S_AUX, uint16_t ISEN_S1, uint16_t ISEN_S2, uint16_t ISEN_S3, uint16_t ISEN_S4, uint16_t ISEN_S6, uint16_t ISEN_S_AUX, uint8_t S1_TEMP, uint8_t S2_TEMP, uint8_t S3_TEMP, uint8_t S4_TEMP, uint8_t S5_TEMP, uint8_t S6_TEMP)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_R10_SERVO_DATA_LEN];
    _mav_put_uint64_t(buf, 0, TIME_US);
    _mav_put_uint16_t(buf, 8, VSEN_BUCK1);
    _mav_put_uint16_t(buf, 10, VSEN_BUCK2);
    _mav_put_uint16_t(buf, 12, VSEN_BUCK3);
    _mav_put_uint16_t(buf, 14, VSEN_BUCK4);
    _mav_put_uint16_t(buf, 16, VSEN_BUCK6);
    _mav_put_uint16_t(buf, 18, VSEN_BUCK_S_AUX);
    _mav_put_uint16_t(buf, 20, ISEN_S1);
    _mav_put_uint16_t(buf, 22, ISEN_S2);
    _mav_put_uint16_t(buf, 24, ISEN_S3);
    _mav_put_uint16_t(buf, 26, ISEN_S4);
    _mav_put_uint16_t(buf, 28, ISEN_S6);
    _mav_put_uint16_t(buf, 30, ISEN_S_AUX);
    _mav_put_uint8_t(buf, 32, S1_TEMP);
    _mav_put_uint8_t(buf, 33, S2_TEMP);
    _mav_put_uint8_t(buf, 34, S3_TEMP);
    _mav_put_uint8_t(buf, 35, S4_TEMP);
    _mav_put_uint8_t(buf, 36, S5_TEMP);
    _mav_put_uint8_t(buf, 37, S6_TEMP);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_R10_SERVO_DATA, buf, MAVLINK_MSG_ID_R10_SERVO_DATA_MIN_LEN, MAVLINK_MSG_ID_R10_SERVO_DATA_LEN, MAVLINK_MSG_ID_R10_SERVO_DATA_CRC);
#else
    mavlink_r10_servo_data_t packet;
    packet.TIME_US = TIME_US;
    packet.VSEN_BUCK1 = VSEN_BUCK1;
    packet.VSEN_BUCK2 = VSEN_BUCK2;
    packet.VSEN_BUCK3 = VSEN_BUCK3;
    packet.VSEN_BUCK4 = VSEN_BUCK4;
    packet.VSEN_BUCK6 = VSEN_BUCK6;
    packet.VSEN_BUCK_S_AUX = VSEN_BUCK_S_AUX;
    packet.ISEN_S1 = ISEN_S1;
    packet.ISEN_S2 = ISEN_S2;
    packet.ISEN_S3 = ISEN_S3;
    packet.ISEN_S4 = ISEN_S4;
    packet.ISEN_S6 = ISEN_S6;
    packet.ISEN_S_AUX = ISEN_S_AUX;
    packet.S1_TEMP = S1_TEMP;
    packet.S2_TEMP = S2_TEMP;
    packet.S3_TEMP = S3_TEMP;
    packet.S4_TEMP = S4_TEMP;
    packet.S5_TEMP = S5_TEMP;
    packet.S6_TEMP = S6_TEMP;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_R10_SERVO_DATA, (const char *)&packet, MAVLINK_MSG_ID_R10_SERVO_DATA_MIN_LEN, MAVLINK_MSG_ID_R10_SERVO_DATA_LEN, MAVLINK_MSG_ID_R10_SERVO_DATA_CRC);
#endif
}

/**
 * @brief Send a r10_servo_data message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_r10_servo_data_send_struct(mavlink_channel_t chan, const mavlink_r10_servo_data_t* r10_servo_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_r10_servo_data_send(chan, r10_servo_data->TIME_US, r10_servo_data->VSEN_BUCK1, r10_servo_data->VSEN_BUCK2, r10_servo_data->VSEN_BUCK3, r10_servo_data->VSEN_BUCK4, r10_servo_data->VSEN_BUCK6, r10_servo_data->VSEN_BUCK_S_AUX, r10_servo_data->ISEN_S1, r10_servo_data->ISEN_S2, r10_servo_data->ISEN_S3, r10_servo_data->ISEN_S4, r10_servo_data->ISEN_S6, r10_servo_data->ISEN_S_AUX, r10_servo_data->S1_TEMP, r10_servo_data->S2_TEMP, r10_servo_data->S3_TEMP, r10_servo_data->S4_TEMP, r10_servo_data->S5_TEMP, r10_servo_data->S6_TEMP);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_R10_SERVO_DATA, (const char *)r10_servo_data, MAVLINK_MSG_ID_R10_SERVO_DATA_MIN_LEN, MAVLINK_MSG_ID_R10_SERVO_DATA_LEN, MAVLINK_MSG_ID_R10_SERVO_DATA_CRC);
#endif
}

#if MAVLINK_MSG_ID_R10_SERVO_DATA_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_r10_servo_data_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t TIME_US, uint16_t VSEN_BUCK1, uint16_t VSEN_BUCK2, uint16_t VSEN_BUCK3, uint16_t VSEN_BUCK4, uint16_t VSEN_BUCK6, uint16_t VSEN_BUCK_S_AUX, uint16_t ISEN_S1, uint16_t ISEN_S2, uint16_t ISEN_S3, uint16_t ISEN_S4, uint16_t ISEN_S6, uint16_t ISEN_S_AUX, uint8_t S1_TEMP, uint8_t S2_TEMP, uint8_t S3_TEMP, uint8_t S4_TEMP, uint8_t S5_TEMP, uint8_t S6_TEMP)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, TIME_US);
    _mav_put_uint16_t(buf, 8, VSEN_BUCK1);
    _mav_put_uint16_t(buf, 10, VSEN_BUCK2);
    _mav_put_uint16_t(buf, 12, VSEN_BUCK3);
    _mav_put_uint16_t(buf, 14, VSEN_BUCK4);
    _mav_put_uint16_t(buf, 16, VSEN_BUCK6);
    _mav_put_uint16_t(buf, 18, VSEN_BUCK_S_AUX);
    _mav_put_uint16_t(buf, 20, ISEN_S1);
    _mav_put_uint16_t(buf, 22, ISEN_S2);
    _mav_put_uint16_t(buf, 24, ISEN_S3);
    _mav_put_uint16_t(buf, 26, ISEN_S4);
    _mav_put_uint16_t(buf, 28, ISEN_S6);
    _mav_put_uint16_t(buf, 30, ISEN_S_AUX);
    _mav_put_uint8_t(buf, 32, S1_TEMP);
    _mav_put_uint8_t(buf, 33, S2_TEMP);
    _mav_put_uint8_t(buf, 34, S3_TEMP);
    _mav_put_uint8_t(buf, 35, S4_TEMP);
    _mav_put_uint8_t(buf, 36, S5_TEMP);
    _mav_put_uint8_t(buf, 37, S6_TEMP);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_R10_SERVO_DATA, buf, MAVLINK_MSG_ID_R10_SERVO_DATA_MIN_LEN, MAVLINK_MSG_ID_R10_SERVO_DATA_LEN, MAVLINK_MSG_ID_R10_SERVO_DATA_CRC);
#else
    mavlink_r10_servo_data_t *packet = (mavlink_r10_servo_data_t *)msgbuf;
    packet->TIME_US = TIME_US;
    packet->VSEN_BUCK1 = VSEN_BUCK1;
    packet->VSEN_BUCK2 = VSEN_BUCK2;
    packet->VSEN_BUCK3 = VSEN_BUCK3;
    packet->VSEN_BUCK4 = VSEN_BUCK4;
    packet->VSEN_BUCK6 = VSEN_BUCK6;
    packet->VSEN_BUCK_S_AUX = VSEN_BUCK_S_AUX;
    packet->ISEN_S1 = ISEN_S1;
    packet->ISEN_S2 = ISEN_S2;
    packet->ISEN_S3 = ISEN_S3;
    packet->ISEN_S4 = ISEN_S4;
    packet->ISEN_S6 = ISEN_S6;
    packet->ISEN_S_AUX = ISEN_S_AUX;
    packet->S1_TEMP = S1_TEMP;
    packet->S2_TEMP = S2_TEMP;
    packet->S3_TEMP = S3_TEMP;
    packet->S4_TEMP = S4_TEMP;
    packet->S5_TEMP = S5_TEMP;
    packet->S6_TEMP = S6_TEMP;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_R10_SERVO_DATA, (const char *)packet, MAVLINK_MSG_ID_R10_SERVO_DATA_MIN_LEN, MAVLINK_MSG_ID_R10_SERVO_DATA_LEN, MAVLINK_MSG_ID_R10_SERVO_DATA_CRC);
#endif
}
#endif

#endif

// MESSAGE R10_SERVO_DATA UNPACKING


/**
 * @brief Get field TIME_US from r10_servo_data message
 *
 * @return  Timestamp in micro seconds
 */
static inline uint64_t mavlink_msg_r10_servo_data_get_TIME_US(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field VSEN_BUCK1 from r10_servo_data message
 *
 * @return  Servo1 converter voltage sensor reading
 */
static inline uint16_t mavlink_msg_r10_servo_data_get_VSEN_BUCK1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Get field VSEN_BUCK2 from r10_servo_data message
 *
 * @return  Servo2 converter voltage sensor reading
 */
static inline uint16_t mavlink_msg_r10_servo_data_get_VSEN_BUCK2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  10);
}

/**
 * @brief Get field VSEN_BUCK3 from r10_servo_data message
 *
 * @return  Servo3 converter voltage sensor reading
 */
static inline uint16_t mavlink_msg_r10_servo_data_get_VSEN_BUCK3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  12);
}

/**
 * @brief Get field VSEN_BUCK4 from r10_servo_data message
 *
 * @return  Servo4 converter voltage sensor reading
 */
static inline uint16_t mavlink_msg_r10_servo_data_get_VSEN_BUCK4(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  14);
}

/**
 * @brief Get field VSEN_BUCK6 from r10_servo_data message
 *
 * @return  Servo6 converter voltage sensor reading
 */
static inline uint16_t mavlink_msg_r10_servo_data_get_VSEN_BUCK6(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  16);
}

/**
 * @brief Get field VSEN_BUCK_S_AUX from r10_servo_data message
 *
 * @return  S-Aux converter voltage sensor reading
 */
static inline uint16_t mavlink_msg_r10_servo_data_get_VSEN_BUCK_S_AUX(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  18);
}

/**
 * @brief Get field ISEN_S1 from r10_servo_data message
 *
 * @return  Servo1 current sensor reading
 */
static inline uint16_t mavlink_msg_r10_servo_data_get_ISEN_S1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  20);
}

/**
 * @brief Get field ISEN_S2 from r10_servo_data message
 *
 * @return  Servo2 current sensor reading
 */
static inline uint16_t mavlink_msg_r10_servo_data_get_ISEN_S2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  22);
}

/**
 * @brief Get field ISEN_S3 from r10_servo_data message
 *
 * @return  Servo3 current sensor reading
 */
static inline uint16_t mavlink_msg_r10_servo_data_get_ISEN_S3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  24);
}

/**
 * @brief Get field ISEN_S4 from r10_servo_data message
 *
 * @return  Servo4 current sensor reading
 */
static inline uint16_t mavlink_msg_r10_servo_data_get_ISEN_S4(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  26);
}

/**
 * @brief Get field ISEN_S6 from r10_servo_data message
 *
 * @return  Servo6 current sensor reading
 */
static inline uint16_t mavlink_msg_r10_servo_data_get_ISEN_S6(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  28);
}

/**
 * @brief Get field ISEN_S_AUX from r10_servo_data message
 *
 * @return  S-Aux current sensor reading
 */
static inline uint16_t mavlink_msg_r10_servo_data_get_ISEN_S_AUX(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  30);
}

/**
 * @brief Get field S1_TEMP from r10_servo_data message
 *
 * @return  Servo1 Temperature sensor reading
 */
static inline uint8_t mavlink_msg_r10_servo_data_get_S1_TEMP(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  32);
}

/**
 * @brief Get field S2_TEMP from r10_servo_data message
 *
 * @return  Servo2 Temperature sensor reading
 */
static inline uint8_t mavlink_msg_r10_servo_data_get_S2_TEMP(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  33);
}

/**
 * @brief Get field S3_TEMP from r10_servo_data message
 *
 * @return  Servo3 Temperature sensor reading
 */
static inline uint8_t mavlink_msg_r10_servo_data_get_S3_TEMP(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  34);
}

/**
 * @brief Get field S4_TEMP from r10_servo_data message
 *
 * @return  Servo4 Temperature sensor reading
 */
static inline uint8_t mavlink_msg_r10_servo_data_get_S4_TEMP(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  35);
}

/**
 * @brief Get field S5_TEMP from r10_servo_data message
 *
 * @return  Servo5 Temperature sensor reading
 */
static inline uint8_t mavlink_msg_r10_servo_data_get_S5_TEMP(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  36);
}

/**
 * @brief Get field S6_TEMP from r10_servo_data message
 *
 * @return  Servo6 Temperature sensor reading
 */
static inline uint8_t mavlink_msg_r10_servo_data_get_S6_TEMP(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  37);
}

/**
 * @brief Decode a r10_servo_data message into a struct
 *
 * @param msg The message to decode
 * @param r10_servo_data C-struct to decode the message contents into
 */
static inline void mavlink_msg_r10_servo_data_decode(const mavlink_message_t* msg, mavlink_r10_servo_data_t* r10_servo_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    r10_servo_data->TIME_US = mavlink_msg_r10_servo_data_get_TIME_US(msg);
    r10_servo_data->VSEN_BUCK1 = mavlink_msg_r10_servo_data_get_VSEN_BUCK1(msg);
    r10_servo_data->VSEN_BUCK2 = mavlink_msg_r10_servo_data_get_VSEN_BUCK2(msg);
    r10_servo_data->VSEN_BUCK3 = mavlink_msg_r10_servo_data_get_VSEN_BUCK3(msg);
    r10_servo_data->VSEN_BUCK4 = mavlink_msg_r10_servo_data_get_VSEN_BUCK4(msg);
    r10_servo_data->VSEN_BUCK6 = mavlink_msg_r10_servo_data_get_VSEN_BUCK6(msg);
    r10_servo_data->VSEN_BUCK_S_AUX = mavlink_msg_r10_servo_data_get_VSEN_BUCK_S_AUX(msg);
    r10_servo_data->ISEN_S1 = mavlink_msg_r10_servo_data_get_ISEN_S1(msg);
    r10_servo_data->ISEN_S2 = mavlink_msg_r10_servo_data_get_ISEN_S2(msg);
    r10_servo_data->ISEN_S3 = mavlink_msg_r10_servo_data_get_ISEN_S3(msg);
    r10_servo_data->ISEN_S4 = mavlink_msg_r10_servo_data_get_ISEN_S4(msg);
    r10_servo_data->ISEN_S6 = mavlink_msg_r10_servo_data_get_ISEN_S6(msg);
    r10_servo_data->ISEN_S_AUX = mavlink_msg_r10_servo_data_get_ISEN_S_AUX(msg);
    r10_servo_data->S1_TEMP = mavlink_msg_r10_servo_data_get_S1_TEMP(msg);
    r10_servo_data->S2_TEMP = mavlink_msg_r10_servo_data_get_S2_TEMP(msg);
    r10_servo_data->S3_TEMP = mavlink_msg_r10_servo_data_get_S3_TEMP(msg);
    r10_servo_data->S4_TEMP = mavlink_msg_r10_servo_data_get_S4_TEMP(msg);
    r10_servo_data->S5_TEMP = mavlink_msg_r10_servo_data_get_S5_TEMP(msg);
    r10_servo_data->S6_TEMP = mavlink_msg_r10_servo_data_get_S6_TEMP(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_R10_SERVO_DATA_LEN? msg->len : MAVLINK_MSG_ID_R10_SERVO_DATA_LEN;
        memset(r10_servo_data, 0, MAVLINK_MSG_ID_R10_SERVO_DATA_LEN);
    memcpy(r10_servo_data, _MAV_PAYLOAD(msg), len);
#endif
}
