#pragma once
// MESSAGE R10_VSENS_ERR PACKING

#define MAVLINK_MSG_ID_R10_VSENS_ERR 11077


typedef struct __mavlink_r10_vsens_err_t {
 uint64_t TIME_US; /*<  Timestamp in microseconds*/
 uint16_t error_bitmask; /*<  Bitmask  for sensors crossing limits*/
 uint16_t VSEN_BUCK1; /*<  Servo1 converter voltage sensor reading*/
 uint16_t VSEN_BUCK2; /*<  Servo2 converter voltage sensor reading*/
 uint16_t VSEN_BUCK3; /*<  Servo3 converter voltage sensor reading*/
 uint16_t VSEN_BUCK4; /*<  Servo4 converter voltage sensor reading*/
 uint16_t VSEN_BUCK6; /*<  Servo6 converter voltage sensor reading*/
 uint16_t VSEN_BUCK_S_AUX; /*<  S-Aux converter voltage sensor reading*/
 uint16_t VSEN_28IPS; /*<  IPS 28V output voltage reading*/
 uint16_t VSEN_12IPS; /*<  IPS 12V output voltage reading*/
 uint16_t VSEN_5IPS; /*<  IPS 5V output voltage reading*/
 uint16_t VSEN_OSB; /*<  Onshore battery voltage*/
 uint16_t VSEN_OBB; /*<  Onboard battery voltage*/
 uint16_t AUX_PIX_VOLT; /*<  5V PMU voltage*/
 uint16_t STM_IN_VOLT; /*<  STM input voltage*/
} mavlink_r10_vsens_err_t;

#define MAVLINK_MSG_ID_R10_VSENS_ERR_LEN 36
#define MAVLINK_MSG_ID_R10_VSENS_ERR_MIN_LEN 36
#define MAVLINK_MSG_ID_11077_LEN 36
#define MAVLINK_MSG_ID_11077_MIN_LEN 36

#define MAVLINK_MSG_ID_R10_VSENS_ERR_CRC 146
#define MAVLINK_MSG_ID_11077_CRC 146



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_R10_VSENS_ERR { \
    11077, \
    "R10_VSENS_ERR", \
    15, \
    {  { "TIME_US", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_r10_vsens_err_t, TIME_US) }, \
         { "error_bitmask", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_r10_vsens_err_t, error_bitmask) }, \
         { "VSEN_BUCK1", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_r10_vsens_err_t, VSEN_BUCK1) }, \
         { "VSEN_BUCK2", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_r10_vsens_err_t, VSEN_BUCK2) }, \
         { "VSEN_BUCK3", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_r10_vsens_err_t, VSEN_BUCK3) }, \
         { "VSEN_BUCK4", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_r10_vsens_err_t, VSEN_BUCK4) }, \
         { "VSEN_BUCK6", NULL, MAVLINK_TYPE_UINT16_T, 0, 18, offsetof(mavlink_r10_vsens_err_t, VSEN_BUCK6) }, \
         { "VSEN_BUCK_S_AUX", NULL, MAVLINK_TYPE_UINT16_T, 0, 20, offsetof(mavlink_r10_vsens_err_t, VSEN_BUCK_S_AUX) }, \
         { "VSEN_28IPS", NULL, MAVLINK_TYPE_UINT16_T, 0, 22, offsetof(mavlink_r10_vsens_err_t, VSEN_28IPS) }, \
         { "VSEN_12IPS", NULL, MAVLINK_TYPE_UINT16_T, 0, 24, offsetof(mavlink_r10_vsens_err_t, VSEN_12IPS) }, \
         { "VSEN_5IPS", NULL, MAVLINK_TYPE_UINT16_T, 0, 26, offsetof(mavlink_r10_vsens_err_t, VSEN_5IPS) }, \
         { "VSEN_OSB", NULL, MAVLINK_TYPE_UINT16_T, 0, 28, offsetof(mavlink_r10_vsens_err_t, VSEN_OSB) }, \
         { "VSEN_OBB", NULL, MAVLINK_TYPE_UINT16_T, 0, 30, offsetof(mavlink_r10_vsens_err_t, VSEN_OBB) }, \
         { "AUX_PIX_VOLT", NULL, MAVLINK_TYPE_UINT16_T, 0, 32, offsetof(mavlink_r10_vsens_err_t, AUX_PIX_VOLT) }, \
         { "STM_IN_VOLT", NULL, MAVLINK_TYPE_UINT16_T, 0, 34, offsetof(mavlink_r10_vsens_err_t, STM_IN_VOLT) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_R10_VSENS_ERR { \
    "R10_VSENS_ERR", \
    15, \
    {  { "TIME_US", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_r10_vsens_err_t, TIME_US) }, \
         { "error_bitmask", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_r10_vsens_err_t, error_bitmask) }, \
         { "VSEN_BUCK1", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_r10_vsens_err_t, VSEN_BUCK1) }, \
         { "VSEN_BUCK2", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_r10_vsens_err_t, VSEN_BUCK2) }, \
         { "VSEN_BUCK3", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_r10_vsens_err_t, VSEN_BUCK3) }, \
         { "VSEN_BUCK4", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_r10_vsens_err_t, VSEN_BUCK4) }, \
         { "VSEN_BUCK6", NULL, MAVLINK_TYPE_UINT16_T, 0, 18, offsetof(mavlink_r10_vsens_err_t, VSEN_BUCK6) }, \
         { "VSEN_BUCK_S_AUX", NULL, MAVLINK_TYPE_UINT16_T, 0, 20, offsetof(mavlink_r10_vsens_err_t, VSEN_BUCK_S_AUX) }, \
         { "VSEN_28IPS", NULL, MAVLINK_TYPE_UINT16_T, 0, 22, offsetof(mavlink_r10_vsens_err_t, VSEN_28IPS) }, \
         { "VSEN_12IPS", NULL, MAVLINK_TYPE_UINT16_T, 0, 24, offsetof(mavlink_r10_vsens_err_t, VSEN_12IPS) }, \
         { "VSEN_5IPS", NULL, MAVLINK_TYPE_UINT16_T, 0, 26, offsetof(mavlink_r10_vsens_err_t, VSEN_5IPS) }, \
         { "VSEN_OSB", NULL, MAVLINK_TYPE_UINT16_T, 0, 28, offsetof(mavlink_r10_vsens_err_t, VSEN_OSB) }, \
         { "VSEN_OBB", NULL, MAVLINK_TYPE_UINT16_T, 0, 30, offsetof(mavlink_r10_vsens_err_t, VSEN_OBB) }, \
         { "AUX_PIX_VOLT", NULL, MAVLINK_TYPE_UINT16_T, 0, 32, offsetof(mavlink_r10_vsens_err_t, AUX_PIX_VOLT) }, \
         { "STM_IN_VOLT", NULL, MAVLINK_TYPE_UINT16_T, 0, 34, offsetof(mavlink_r10_vsens_err_t, STM_IN_VOLT) }, \
         } \
}
#endif

/**
 * @brief Pack a r10_vsens_err message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param TIME_US  Timestamp in microseconds
 * @param error_bitmask  Bitmask  for sensors crossing limits
 * @param VSEN_BUCK1  Servo1 converter voltage sensor reading
 * @param VSEN_BUCK2  Servo2 converter voltage sensor reading
 * @param VSEN_BUCK3  Servo3 converter voltage sensor reading
 * @param VSEN_BUCK4  Servo4 converter voltage sensor reading
 * @param VSEN_BUCK6  Servo6 converter voltage sensor reading
 * @param VSEN_BUCK_S_AUX  S-Aux converter voltage sensor reading
 * @param VSEN_28IPS  IPS 28V output voltage reading
 * @param VSEN_12IPS  IPS 12V output voltage reading
 * @param VSEN_5IPS  IPS 5V output voltage reading
 * @param VSEN_OSB  Onshore battery voltage
 * @param VSEN_OBB  Onboard battery voltage
 * @param AUX_PIX_VOLT  5V PMU voltage
 * @param STM_IN_VOLT  STM input voltage
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_r10_vsens_err_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t TIME_US, uint16_t error_bitmask, uint16_t VSEN_BUCK1, uint16_t VSEN_BUCK2, uint16_t VSEN_BUCK3, uint16_t VSEN_BUCK4, uint16_t VSEN_BUCK6, uint16_t VSEN_BUCK_S_AUX, uint16_t VSEN_28IPS, uint16_t VSEN_12IPS, uint16_t VSEN_5IPS, uint16_t VSEN_OSB, uint16_t VSEN_OBB, uint16_t AUX_PIX_VOLT, uint16_t STM_IN_VOLT)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_R10_VSENS_ERR_LEN];
    _mav_put_uint64_t(buf, 0, TIME_US);
    _mav_put_uint16_t(buf, 8, error_bitmask);
    _mav_put_uint16_t(buf, 10, VSEN_BUCK1);
    _mav_put_uint16_t(buf, 12, VSEN_BUCK2);
    _mav_put_uint16_t(buf, 14, VSEN_BUCK3);
    _mav_put_uint16_t(buf, 16, VSEN_BUCK4);
    _mav_put_uint16_t(buf, 18, VSEN_BUCK6);
    _mav_put_uint16_t(buf, 20, VSEN_BUCK_S_AUX);
    _mav_put_uint16_t(buf, 22, VSEN_28IPS);
    _mav_put_uint16_t(buf, 24, VSEN_12IPS);
    _mav_put_uint16_t(buf, 26, VSEN_5IPS);
    _mav_put_uint16_t(buf, 28, VSEN_OSB);
    _mav_put_uint16_t(buf, 30, VSEN_OBB);
    _mav_put_uint16_t(buf, 32, AUX_PIX_VOLT);
    _mav_put_uint16_t(buf, 34, STM_IN_VOLT);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_R10_VSENS_ERR_LEN);
#else
    mavlink_r10_vsens_err_t packet;
    packet.TIME_US = TIME_US;
    packet.error_bitmask = error_bitmask;
    packet.VSEN_BUCK1 = VSEN_BUCK1;
    packet.VSEN_BUCK2 = VSEN_BUCK2;
    packet.VSEN_BUCK3 = VSEN_BUCK3;
    packet.VSEN_BUCK4 = VSEN_BUCK4;
    packet.VSEN_BUCK6 = VSEN_BUCK6;
    packet.VSEN_BUCK_S_AUX = VSEN_BUCK_S_AUX;
    packet.VSEN_28IPS = VSEN_28IPS;
    packet.VSEN_12IPS = VSEN_12IPS;
    packet.VSEN_5IPS = VSEN_5IPS;
    packet.VSEN_OSB = VSEN_OSB;
    packet.VSEN_OBB = VSEN_OBB;
    packet.AUX_PIX_VOLT = AUX_PIX_VOLT;
    packet.STM_IN_VOLT = STM_IN_VOLT;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_R10_VSENS_ERR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_R10_VSENS_ERR;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_R10_VSENS_ERR_MIN_LEN, MAVLINK_MSG_ID_R10_VSENS_ERR_LEN, MAVLINK_MSG_ID_R10_VSENS_ERR_CRC);
}

/**
 * @brief Pack a r10_vsens_err message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param TIME_US  Timestamp in microseconds
 * @param error_bitmask  Bitmask  for sensors crossing limits
 * @param VSEN_BUCK1  Servo1 converter voltage sensor reading
 * @param VSEN_BUCK2  Servo2 converter voltage sensor reading
 * @param VSEN_BUCK3  Servo3 converter voltage sensor reading
 * @param VSEN_BUCK4  Servo4 converter voltage sensor reading
 * @param VSEN_BUCK6  Servo6 converter voltage sensor reading
 * @param VSEN_BUCK_S_AUX  S-Aux converter voltage sensor reading
 * @param VSEN_28IPS  IPS 28V output voltage reading
 * @param VSEN_12IPS  IPS 12V output voltage reading
 * @param VSEN_5IPS  IPS 5V output voltage reading
 * @param VSEN_OSB  Onshore battery voltage
 * @param VSEN_OBB  Onboard battery voltage
 * @param AUX_PIX_VOLT  5V PMU voltage
 * @param STM_IN_VOLT  STM input voltage
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_r10_vsens_err_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t TIME_US,uint16_t error_bitmask,uint16_t VSEN_BUCK1,uint16_t VSEN_BUCK2,uint16_t VSEN_BUCK3,uint16_t VSEN_BUCK4,uint16_t VSEN_BUCK6,uint16_t VSEN_BUCK_S_AUX,uint16_t VSEN_28IPS,uint16_t VSEN_12IPS,uint16_t VSEN_5IPS,uint16_t VSEN_OSB,uint16_t VSEN_OBB,uint16_t AUX_PIX_VOLT,uint16_t STM_IN_VOLT)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_R10_VSENS_ERR_LEN];
    _mav_put_uint64_t(buf, 0, TIME_US);
    _mav_put_uint16_t(buf, 8, error_bitmask);
    _mav_put_uint16_t(buf, 10, VSEN_BUCK1);
    _mav_put_uint16_t(buf, 12, VSEN_BUCK2);
    _mav_put_uint16_t(buf, 14, VSEN_BUCK3);
    _mav_put_uint16_t(buf, 16, VSEN_BUCK4);
    _mav_put_uint16_t(buf, 18, VSEN_BUCK6);
    _mav_put_uint16_t(buf, 20, VSEN_BUCK_S_AUX);
    _mav_put_uint16_t(buf, 22, VSEN_28IPS);
    _mav_put_uint16_t(buf, 24, VSEN_12IPS);
    _mav_put_uint16_t(buf, 26, VSEN_5IPS);
    _mav_put_uint16_t(buf, 28, VSEN_OSB);
    _mav_put_uint16_t(buf, 30, VSEN_OBB);
    _mav_put_uint16_t(buf, 32, AUX_PIX_VOLT);
    _mav_put_uint16_t(buf, 34, STM_IN_VOLT);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_R10_VSENS_ERR_LEN);
#else
    mavlink_r10_vsens_err_t packet;
    packet.TIME_US = TIME_US;
    packet.error_bitmask = error_bitmask;
    packet.VSEN_BUCK1 = VSEN_BUCK1;
    packet.VSEN_BUCK2 = VSEN_BUCK2;
    packet.VSEN_BUCK3 = VSEN_BUCK3;
    packet.VSEN_BUCK4 = VSEN_BUCK4;
    packet.VSEN_BUCK6 = VSEN_BUCK6;
    packet.VSEN_BUCK_S_AUX = VSEN_BUCK_S_AUX;
    packet.VSEN_28IPS = VSEN_28IPS;
    packet.VSEN_12IPS = VSEN_12IPS;
    packet.VSEN_5IPS = VSEN_5IPS;
    packet.VSEN_OSB = VSEN_OSB;
    packet.VSEN_OBB = VSEN_OBB;
    packet.AUX_PIX_VOLT = AUX_PIX_VOLT;
    packet.STM_IN_VOLT = STM_IN_VOLT;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_R10_VSENS_ERR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_R10_VSENS_ERR;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_R10_VSENS_ERR_MIN_LEN, MAVLINK_MSG_ID_R10_VSENS_ERR_LEN, MAVLINK_MSG_ID_R10_VSENS_ERR_CRC);
}

/**
 * @brief Encode a r10_vsens_err struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param r10_vsens_err C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_r10_vsens_err_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_r10_vsens_err_t* r10_vsens_err)
{
    return mavlink_msg_r10_vsens_err_pack(system_id, component_id, msg, r10_vsens_err->TIME_US, r10_vsens_err->error_bitmask, r10_vsens_err->VSEN_BUCK1, r10_vsens_err->VSEN_BUCK2, r10_vsens_err->VSEN_BUCK3, r10_vsens_err->VSEN_BUCK4, r10_vsens_err->VSEN_BUCK6, r10_vsens_err->VSEN_BUCK_S_AUX, r10_vsens_err->VSEN_28IPS, r10_vsens_err->VSEN_12IPS, r10_vsens_err->VSEN_5IPS, r10_vsens_err->VSEN_OSB, r10_vsens_err->VSEN_OBB, r10_vsens_err->AUX_PIX_VOLT, r10_vsens_err->STM_IN_VOLT);
}

/**
 * @brief Encode a r10_vsens_err struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param r10_vsens_err C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_r10_vsens_err_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_r10_vsens_err_t* r10_vsens_err)
{
    return mavlink_msg_r10_vsens_err_pack_chan(system_id, component_id, chan, msg, r10_vsens_err->TIME_US, r10_vsens_err->error_bitmask, r10_vsens_err->VSEN_BUCK1, r10_vsens_err->VSEN_BUCK2, r10_vsens_err->VSEN_BUCK3, r10_vsens_err->VSEN_BUCK4, r10_vsens_err->VSEN_BUCK6, r10_vsens_err->VSEN_BUCK_S_AUX, r10_vsens_err->VSEN_28IPS, r10_vsens_err->VSEN_12IPS, r10_vsens_err->VSEN_5IPS, r10_vsens_err->VSEN_OSB, r10_vsens_err->VSEN_OBB, r10_vsens_err->AUX_PIX_VOLT, r10_vsens_err->STM_IN_VOLT);
}

/**
 * @brief Send a r10_vsens_err message
 * @param chan MAVLink channel to send the message
 *
 * @param TIME_US  Timestamp in microseconds
 * @param error_bitmask  Bitmask  for sensors crossing limits
 * @param VSEN_BUCK1  Servo1 converter voltage sensor reading
 * @param VSEN_BUCK2  Servo2 converter voltage sensor reading
 * @param VSEN_BUCK3  Servo3 converter voltage sensor reading
 * @param VSEN_BUCK4  Servo4 converter voltage sensor reading
 * @param VSEN_BUCK6  Servo6 converter voltage sensor reading
 * @param VSEN_BUCK_S_AUX  S-Aux converter voltage sensor reading
 * @param VSEN_28IPS  IPS 28V output voltage reading
 * @param VSEN_12IPS  IPS 12V output voltage reading
 * @param VSEN_5IPS  IPS 5V output voltage reading
 * @param VSEN_OSB  Onshore battery voltage
 * @param VSEN_OBB  Onboard battery voltage
 * @param AUX_PIX_VOLT  5V PMU voltage
 * @param STM_IN_VOLT  STM input voltage
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_r10_vsens_err_send(mavlink_channel_t chan, uint64_t TIME_US, uint16_t error_bitmask, uint16_t VSEN_BUCK1, uint16_t VSEN_BUCK2, uint16_t VSEN_BUCK3, uint16_t VSEN_BUCK4, uint16_t VSEN_BUCK6, uint16_t VSEN_BUCK_S_AUX, uint16_t VSEN_28IPS, uint16_t VSEN_12IPS, uint16_t VSEN_5IPS, uint16_t VSEN_OSB, uint16_t VSEN_OBB, uint16_t AUX_PIX_VOLT, uint16_t STM_IN_VOLT)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_R10_VSENS_ERR_LEN];
    _mav_put_uint64_t(buf, 0, TIME_US);
    _mav_put_uint16_t(buf, 8, error_bitmask);
    _mav_put_uint16_t(buf, 10, VSEN_BUCK1);
    _mav_put_uint16_t(buf, 12, VSEN_BUCK2);
    _mav_put_uint16_t(buf, 14, VSEN_BUCK3);
    _mav_put_uint16_t(buf, 16, VSEN_BUCK4);
    _mav_put_uint16_t(buf, 18, VSEN_BUCK6);
    _mav_put_uint16_t(buf, 20, VSEN_BUCK_S_AUX);
    _mav_put_uint16_t(buf, 22, VSEN_28IPS);
    _mav_put_uint16_t(buf, 24, VSEN_12IPS);
    _mav_put_uint16_t(buf, 26, VSEN_5IPS);
    _mav_put_uint16_t(buf, 28, VSEN_OSB);
    _mav_put_uint16_t(buf, 30, VSEN_OBB);
    _mav_put_uint16_t(buf, 32, AUX_PIX_VOLT);
    _mav_put_uint16_t(buf, 34, STM_IN_VOLT);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_R10_VSENS_ERR, buf, MAVLINK_MSG_ID_R10_VSENS_ERR_MIN_LEN, MAVLINK_MSG_ID_R10_VSENS_ERR_LEN, MAVLINK_MSG_ID_R10_VSENS_ERR_CRC);
#else
    mavlink_r10_vsens_err_t packet;
    packet.TIME_US = TIME_US;
    packet.error_bitmask = error_bitmask;
    packet.VSEN_BUCK1 = VSEN_BUCK1;
    packet.VSEN_BUCK2 = VSEN_BUCK2;
    packet.VSEN_BUCK3 = VSEN_BUCK3;
    packet.VSEN_BUCK4 = VSEN_BUCK4;
    packet.VSEN_BUCK6 = VSEN_BUCK6;
    packet.VSEN_BUCK_S_AUX = VSEN_BUCK_S_AUX;
    packet.VSEN_28IPS = VSEN_28IPS;
    packet.VSEN_12IPS = VSEN_12IPS;
    packet.VSEN_5IPS = VSEN_5IPS;
    packet.VSEN_OSB = VSEN_OSB;
    packet.VSEN_OBB = VSEN_OBB;
    packet.AUX_PIX_VOLT = AUX_PIX_VOLT;
    packet.STM_IN_VOLT = STM_IN_VOLT;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_R10_VSENS_ERR, (const char *)&packet, MAVLINK_MSG_ID_R10_VSENS_ERR_MIN_LEN, MAVLINK_MSG_ID_R10_VSENS_ERR_LEN, MAVLINK_MSG_ID_R10_VSENS_ERR_CRC);
#endif
}

/**
 * @brief Send a r10_vsens_err message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_r10_vsens_err_send_struct(mavlink_channel_t chan, const mavlink_r10_vsens_err_t* r10_vsens_err)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_r10_vsens_err_send(chan, r10_vsens_err->TIME_US, r10_vsens_err->error_bitmask, r10_vsens_err->VSEN_BUCK1, r10_vsens_err->VSEN_BUCK2, r10_vsens_err->VSEN_BUCK3, r10_vsens_err->VSEN_BUCK4, r10_vsens_err->VSEN_BUCK6, r10_vsens_err->VSEN_BUCK_S_AUX, r10_vsens_err->VSEN_28IPS, r10_vsens_err->VSEN_12IPS, r10_vsens_err->VSEN_5IPS, r10_vsens_err->VSEN_OSB, r10_vsens_err->VSEN_OBB, r10_vsens_err->AUX_PIX_VOLT, r10_vsens_err->STM_IN_VOLT);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_R10_VSENS_ERR, (const char *)r10_vsens_err, MAVLINK_MSG_ID_R10_VSENS_ERR_MIN_LEN, MAVLINK_MSG_ID_R10_VSENS_ERR_LEN, MAVLINK_MSG_ID_R10_VSENS_ERR_CRC);
#endif
}

#if MAVLINK_MSG_ID_R10_VSENS_ERR_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_r10_vsens_err_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t TIME_US, uint16_t error_bitmask, uint16_t VSEN_BUCK1, uint16_t VSEN_BUCK2, uint16_t VSEN_BUCK3, uint16_t VSEN_BUCK4, uint16_t VSEN_BUCK6, uint16_t VSEN_BUCK_S_AUX, uint16_t VSEN_28IPS, uint16_t VSEN_12IPS, uint16_t VSEN_5IPS, uint16_t VSEN_OSB, uint16_t VSEN_OBB, uint16_t AUX_PIX_VOLT, uint16_t STM_IN_VOLT)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, TIME_US);
    _mav_put_uint16_t(buf, 8, error_bitmask);
    _mav_put_uint16_t(buf, 10, VSEN_BUCK1);
    _mav_put_uint16_t(buf, 12, VSEN_BUCK2);
    _mav_put_uint16_t(buf, 14, VSEN_BUCK3);
    _mav_put_uint16_t(buf, 16, VSEN_BUCK4);
    _mav_put_uint16_t(buf, 18, VSEN_BUCK6);
    _mav_put_uint16_t(buf, 20, VSEN_BUCK_S_AUX);
    _mav_put_uint16_t(buf, 22, VSEN_28IPS);
    _mav_put_uint16_t(buf, 24, VSEN_12IPS);
    _mav_put_uint16_t(buf, 26, VSEN_5IPS);
    _mav_put_uint16_t(buf, 28, VSEN_OSB);
    _mav_put_uint16_t(buf, 30, VSEN_OBB);
    _mav_put_uint16_t(buf, 32, AUX_PIX_VOLT);
    _mav_put_uint16_t(buf, 34, STM_IN_VOLT);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_R10_VSENS_ERR, buf, MAVLINK_MSG_ID_R10_VSENS_ERR_MIN_LEN, MAVLINK_MSG_ID_R10_VSENS_ERR_LEN, MAVLINK_MSG_ID_R10_VSENS_ERR_CRC);
#else
    mavlink_r10_vsens_err_t *packet = (mavlink_r10_vsens_err_t *)msgbuf;
    packet->TIME_US = TIME_US;
    packet->error_bitmask = error_bitmask;
    packet->VSEN_BUCK1 = VSEN_BUCK1;
    packet->VSEN_BUCK2 = VSEN_BUCK2;
    packet->VSEN_BUCK3 = VSEN_BUCK3;
    packet->VSEN_BUCK4 = VSEN_BUCK4;
    packet->VSEN_BUCK6 = VSEN_BUCK6;
    packet->VSEN_BUCK_S_AUX = VSEN_BUCK_S_AUX;
    packet->VSEN_28IPS = VSEN_28IPS;
    packet->VSEN_12IPS = VSEN_12IPS;
    packet->VSEN_5IPS = VSEN_5IPS;
    packet->VSEN_OSB = VSEN_OSB;
    packet->VSEN_OBB = VSEN_OBB;
    packet->AUX_PIX_VOLT = AUX_PIX_VOLT;
    packet->STM_IN_VOLT = STM_IN_VOLT;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_R10_VSENS_ERR, (const char *)packet, MAVLINK_MSG_ID_R10_VSENS_ERR_MIN_LEN, MAVLINK_MSG_ID_R10_VSENS_ERR_LEN, MAVLINK_MSG_ID_R10_VSENS_ERR_CRC);
#endif
}
#endif

#endif

// MESSAGE R10_VSENS_ERR UNPACKING


/**
 * @brief Get field TIME_US from r10_vsens_err message
 *
 * @return  Timestamp in microseconds
 */
static inline uint64_t mavlink_msg_r10_vsens_err_get_TIME_US(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field error_bitmask from r10_vsens_err message
 *
 * @return  Bitmask  for sensors crossing limits
 */
static inline uint16_t mavlink_msg_r10_vsens_err_get_error_bitmask(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Get field VSEN_BUCK1 from r10_vsens_err message
 *
 * @return  Servo1 converter voltage sensor reading
 */
static inline uint16_t mavlink_msg_r10_vsens_err_get_VSEN_BUCK1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  10);
}

/**
 * @brief Get field VSEN_BUCK2 from r10_vsens_err message
 *
 * @return  Servo2 converter voltage sensor reading
 */
static inline uint16_t mavlink_msg_r10_vsens_err_get_VSEN_BUCK2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  12);
}

/**
 * @brief Get field VSEN_BUCK3 from r10_vsens_err message
 *
 * @return  Servo3 converter voltage sensor reading
 */
static inline uint16_t mavlink_msg_r10_vsens_err_get_VSEN_BUCK3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  14);
}

/**
 * @brief Get field VSEN_BUCK4 from r10_vsens_err message
 *
 * @return  Servo4 converter voltage sensor reading
 */
static inline uint16_t mavlink_msg_r10_vsens_err_get_VSEN_BUCK4(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  16);
}

/**
 * @brief Get field VSEN_BUCK6 from r10_vsens_err message
 *
 * @return  Servo6 converter voltage sensor reading
 */
static inline uint16_t mavlink_msg_r10_vsens_err_get_VSEN_BUCK6(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  18);
}

/**
 * @brief Get field VSEN_BUCK_S_AUX from r10_vsens_err message
 *
 * @return  S-Aux converter voltage sensor reading
 */
static inline uint16_t mavlink_msg_r10_vsens_err_get_VSEN_BUCK_S_AUX(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  20);
}

/**
 * @brief Get field VSEN_28IPS from r10_vsens_err message
 *
 * @return  IPS 28V output voltage reading
 */
static inline uint16_t mavlink_msg_r10_vsens_err_get_VSEN_28IPS(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  22);
}

/**
 * @brief Get field VSEN_12IPS from r10_vsens_err message
 *
 * @return  IPS 12V output voltage reading
 */
static inline uint16_t mavlink_msg_r10_vsens_err_get_VSEN_12IPS(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  24);
}

/**
 * @brief Get field VSEN_5IPS from r10_vsens_err message
 *
 * @return  IPS 5V output voltage reading
 */
static inline uint16_t mavlink_msg_r10_vsens_err_get_VSEN_5IPS(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  26);
}

/**
 * @brief Get field VSEN_OSB from r10_vsens_err message
 *
 * @return  Onshore battery voltage
 */
static inline uint16_t mavlink_msg_r10_vsens_err_get_VSEN_OSB(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  28);
}

/**
 * @brief Get field VSEN_OBB from r10_vsens_err message
 *
 * @return  Onboard battery voltage
 */
static inline uint16_t mavlink_msg_r10_vsens_err_get_VSEN_OBB(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  30);
}

/**
 * @brief Get field AUX_PIX_VOLT from r10_vsens_err message
 *
 * @return  5V PMU voltage
 */
static inline uint16_t mavlink_msg_r10_vsens_err_get_AUX_PIX_VOLT(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  32);
}

/**
 * @brief Get field STM_IN_VOLT from r10_vsens_err message
 *
 * @return  STM input voltage
 */
static inline uint16_t mavlink_msg_r10_vsens_err_get_STM_IN_VOLT(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  34);
}

/**
 * @brief Decode a r10_vsens_err message into a struct
 *
 * @param msg The message to decode
 * @param r10_vsens_err C-struct to decode the message contents into
 */
static inline void mavlink_msg_r10_vsens_err_decode(const mavlink_message_t* msg, mavlink_r10_vsens_err_t* r10_vsens_err)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    r10_vsens_err->TIME_US = mavlink_msg_r10_vsens_err_get_TIME_US(msg);
    r10_vsens_err->error_bitmask = mavlink_msg_r10_vsens_err_get_error_bitmask(msg);
    r10_vsens_err->VSEN_BUCK1 = mavlink_msg_r10_vsens_err_get_VSEN_BUCK1(msg);
    r10_vsens_err->VSEN_BUCK2 = mavlink_msg_r10_vsens_err_get_VSEN_BUCK2(msg);
    r10_vsens_err->VSEN_BUCK3 = mavlink_msg_r10_vsens_err_get_VSEN_BUCK3(msg);
    r10_vsens_err->VSEN_BUCK4 = mavlink_msg_r10_vsens_err_get_VSEN_BUCK4(msg);
    r10_vsens_err->VSEN_BUCK6 = mavlink_msg_r10_vsens_err_get_VSEN_BUCK6(msg);
    r10_vsens_err->VSEN_BUCK_S_AUX = mavlink_msg_r10_vsens_err_get_VSEN_BUCK_S_AUX(msg);
    r10_vsens_err->VSEN_28IPS = mavlink_msg_r10_vsens_err_get_VSEN_28IPS(msg);
    r10_vsens_err->VSEN_12IPS = mavlink_msg_r10_vsens_err_get_VSEN_12IPS(msg);
    r10_vsens_err->VSEN_5IPS = mavlink_msg_r10_vsens_err_get_VSEN_5IPS(msg);
    r10_vsens_err->VSEN_OSB = mavlink_msg_r10_vsens_err_get_VSEN_OSB(msg);
    r10_vsens_err->VSEN_OBB = mavlink_msg_r10_vsens_err_get_VSEN_OBB(msg);
    r10_vsens_err->AUX_PIX_VOLT = mavlink_msg_r10_vsens_err_get_AUX_PIX_VOLT(msg);
    r10_vsens_err->STM_IN_VOLT = mavlink_msg_r10_vsens_err_get_STM_IN_VOLT(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_R10_VSENS_ERR_LEN? msg->len : MAVLINK_MSG_ID_R10_VSENS_ERR_LEN;
        memset(r10_vsens_err, 0, MAVLINK_MSG_ID_R10_VSENS_ERR_LEN);
    memcpy(r10_vsens_err, _MAV_PAYLOAD(msg), len);
#endif
}
