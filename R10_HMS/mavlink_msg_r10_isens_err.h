#pragma once
// MESSAGE R10_ISENS_ERR PACKING

#define MAVLINK_MSG_ID_R10_ISENS_ERR 11079


typedef struct __mavlink_r10_isens_err_t {
 uint64_t TIME_US; /*<  Timestamp in microseconds*/
 uint16_t error_bitmask; /*<  Bitmask  for sensors crossing limits*/
 uint16_t ISEN_S1; /*<  Servo1 current sensor reading*/
 uint16_t ISEN_S2; /*<  Servo2 current sensor reading*/
 uint16_t ISEN_S3; /*<  Servo3 current sensor reading*/
 uint16_t ISEN_S4; /*<  Servo4 current sensor reading*/
 uint16_t ISEN_S6; /*<  Servo6 current sensor reading*/
 uint16_t ISEN_S_AUX; /*<  S-Aux current sensor reading*/
 uint16_t ISEN_28IPS; /*<  IPS 28V output current reading*/
 uint16_t ISEN_12IPS; /*<  IPS 12V output current reading*/
 uint16_t ISEN_5IPS; /*<  IPS 5V output current reading*/
 uint16_t ISENS_OSB; /*<  Onshore battery current*/
 uint16_t ISENS_OBB; /*<  Onboard battery current*/
} mavlink_r10_isens_err_t;

#define MAVLINK_MSG_ID_R10_ISENS_ERR_LEN 32
#define MAVLINK_MSG_ID_R10_ISENS_ERR_MIN_LEN 32
#define MAVLINK_MSG_ID_11079_LEN 32
#define MAVLINK_MSG_ID_11079_MIN_LEN 32

#define MAVLINK_MSG_ID_R10_ISENS_ERR_CRC 219
#define MAVLINK_MSG_ID_11079_CRC 219



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_R10_ISENS_ERR { \
    11079, \
    "R10_ISENS_ERR", \
    13, \
    {  { "TIME_US", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_r10_isens_err_t, TIME_US) }, \
         { "error_bitmask", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_r10_isens_err_t, error_bitmask) }, \
         { "ISEN_S1", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_r10_isens_err_t, ISEN_S1) }, \
         { "ISEN_S2", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_r10_isens_err_t, ISEN_S2) }, \
         { "ISEN_S3", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_r10_isens_err_t, ISEN_S3) }, \
         { "ISEN_S4", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_r10_isens_err_t, ISEN_S4) }, \
         { "ISEN_S6", NULL, MAVLINK_TYPE_UINT16_T, 0, 18, offsetof(mavlink_r10_isens_err_t, ISEN_S6) }, \
         { "ISEN_S_AUX", NULL, MAVLINK_TYPE_UINT16_T, 0, 20, offsetof(mavlink_r10_isens_err_t, ISEN_S_AUX) }, \
         { "ISEN_28IPS", NULL, MAVLINK_TYPE_UINT16_T, 0, 22, offsetof(mavlink_r10_isens_err_t, ISEN_28IPS) }, \
         { "ISEN_12IPS", NULL, MAVLINK_TYPE_UINT16_T, 0, 24, offsetof(mavlink_r10_isens_err_t, ISEN_12IPS) }, \
         { "ISEN_5IPS", NULL, MAVLINK_TYPE_UINT16_T, 0, 26, offsetof(mavlink_r10_isens_err_t, ISEN_5IPS) }, \
         { "ISENS_OSB", NULL, MAVLINK_TYPE_UINT16_T, 0, 28, offsetof(mavlink_r10_isens_err_t, ISENS_OSB) }, \
         { "ISENS_OBB", NULL, MAVLINK_TYPE_UINT16_T, 0, 30, offsetof(mavlink_r10_isens_err_t, ISENS_OBB) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_R10_ISENS_ERR { \
    "R10_ISENS_ERR", \
    13, \
    {  { "TIME_US", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_r10_isens_err_t, TIME_US) }, \
         { "error_bitmask", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_r10_isens_err_t, error_bitmask) }, \
         { "ISEN_S1", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_r10_isens_err_t, ISEN_S1) }, \
         { "ISEN_S2", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_r10_isens_err_t, ISEN_S2) }, \
         { "ISEN_S3", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_r10_isens_err_t, ISEN_S3) }, \
         { "ISEN_S4", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_r10_isens_err_t, ISEN_S4) }, \
         { "ISEN_S6", NULL, MAVLINK_TYPE_UINT16_T, 0, 18, offsetof(mavlink_r10_isens_err_t, ISEN_S6) }, \
         { "ISEN_S_AUX", NULL, MAVLINK_TYPE_UINT16_T, 0, 20, offsetof(mavlink_r10_isens_err_t, ISEN_S_AUX) }, \
         { "ISEN_28IPS", NULL, MAVLINK_TYPE_UINT16_T, 0, 22, offsetof(mavlink_r10_isens_err_t, ISEN_28IPS) }, \
         { "ISEN_12IPS", NULL, MAVLINK_TYPE_UINT16_T, 0, 24, offsetof(mavlink_r10_isens_err_t, ISEN_12IPS) }, \
         { "ISEN_5IPS", NULL, MAVLINK_TYPE_UINT16_T, 0, 26, offsetof(mavlink_r10_isens_err_t, ISEN_5IPS) }, \
         { "ISENS_OSB", NULL, MAVLINK_TYPE_UINT16_T, 0, 28, offsetof(mavlink_r10_isens_err_t, ISENS_OSB) }, \
         { "ISENS_OBB", NULL, MAVLINK_TYPE_UINT16_T, 0, 30, offsetof(mavlink_r10_isens_err_t, ISENS_OBB) }, \
         } \
}
#endif

/**
 * @brief Pack a r10_isens_err message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param TIME_US  Timestamp in microseconds
 * @param error_bitmask  Bitmask  for sensors crossing limits
 * @param ISEN_S1  Servo1 current sensor reading
 * @param ISEN_S2  Servo2 current sensor reading
 * @param ISEN_S3  Servo3 current sensor reading
 * @param ISEN_S4  Servo4 current sensor reading
 * @param ISEN_S6  Servo6 current sensor reading
 * @param ISEN_S_AUX  S-Aux current sensor reading
 * @param ISEN_28IPS  IPS 28V output current reading
 * @param ISEN_12IPS  IPS 12V output current reading
 * @param ISEN_5IPS  IPS 5V output current reading
 * @param ISENS_OSB  Onshore battery current
 * @param ISENS_OBB  Onboard battery current
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_r10_isens_err_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t TIME_US, uint16_t error_bitmask, uint16_t ISEN_S1, uint16_t ISEN_S2, uint16_t ISEN_S3, uint16_t ISEN_S4, uint16_t ISEN_S6, uint16_t ISEN_S_AUX, uint16_t ISEN_28IPS, uint16_t ISEN_12IPS, uint16_t ISEN_5IPS, uint16_t ISENS_OSB, uint16_t ISENS_OBB)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_R10_ISENS_ERR_LEN];
    _mav_put_uint64_t(buf, 0, TIME_US);
    _mav_put_uint16_t(buf, 8, error_bitmask);
    _mav_put_uint16_t(buf, 10, ISEN_S1);
    _mav_put_uint16_t(buf, 12, ISEN_S2);
    _mav_put_uint16_t(buf, 14, ISEN_S3);
    _mav_put_uint16_t(buf, 16, ISEN_S4);
    _mav_put_uint16_t(buf, 18, ISEN_S6);
    _mav_put_uint16_t(buf, 20, ISEN_S_AUX);
    _mav_put_uint16_t(buf, 22, ISEN_28IPS);
    _mav_put_uint16_t(buf, 24, ISEN_12IPS);
    _mav_put_uint16_t(buf, 26, ISEN_5IPS);
    _mav_put_uint16_t(buf, 28, ISENS_OSB);
    _mav_put_uint16_t(buf, 30, ISENS_OBB);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_R10_ISENS_ERR_LEN);
#else
    mavlink_r10_isens_err_t packet;
    packet.TIME_US = TIME_US;
    packet.error_bitmask = error_bitmask;
    packet.ISEN_S1 = ISEN_S1;
    packet.ISEN_S2 = ISEN_S2;
    packet.ISEN_S3 = ISEN_S3;
    packet.ISEN_S4 = ISEN_S4;
    packet.ISEN_S6 = ISEN_S6;
    packet.ISEN_S_AUX = ISEN_S_AUX;
    packet.ISEN_28IPS = ISEN_28IPS;
    packet.ISEN_12IPS = ISEN_12IPS;
    packet.ISEN_5IPS = ISEN_5IPS;
    packet.ISENS_OSB = ISENS_OSB;
    packet.ISENS_OBB = ISENS_OBB;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_R10_ISENS_ERR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_R10_ISENS_ERR;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_R10_ISENS_ERR_MIN_LEN, MAVLINK_MSG_ID_R10_ISENS_ERR_LEN, MAVLINK_MSG_ID_R10_ISENS_ERR_CRC);
}

/**
 * @brief Pack a r10_isens_err message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param TIME_US  Timestamp in microseconds
 * @param error_bitmask  Bitmask  for sensors crossing limits
 * @param ISEN_S1  Servo1 current sensor reading
 * @param ISEN_S2  Servo2 current sensor reading
 * @param ISEN_S3  Servo3 current sensor reading
 * @param ISEN_S4  Servo4 current sensor reading
 * @param ISEN_S6  Servo6 current sensor reading
 * @param ISEN_S_AUX  S-Aux current sensor reading
 * @param ISEN_28IPS  IPS 28V output current reading
 * @param ISEN_12IPS  IPS 12V output current reading
 * @param ISEN_5IPS  IPS 5V output current reading
 * @param ISENS_OSB  Onshore battery current
 * @param ISENS_OBB  Onboard battery current
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_r10_isens_err_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t TIME_US,uint16_t error_bitmask,uint16_t ISEN_S1,uint16_t ISEN_S2,uint16_t ISEN_S3,uint16_t ISEN_S4,uint16_t ISEN_S6,uint16_t ISEN_S_AUX,uint16_t ISEN_28IPS,uint16_t ISEN_12IPS,uint16_t ISEN_5IPS,uint16_t ISENS_OSB,uint16_t ISENS_OBB)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_R10_ISENS_ERR_LEN];
    _mav_put_uint64_t(buf, 0, TIME_US);
    _mav_put_uint16_t(buf, 8, error_bitmask);
    _mav_put_uint16_t(buf, 10, ISEN_S1);
    _mav_put_uint16_t(buf, 12, ISEN_S2);
    _mav_put_uint16_t(buf, 14, ISEN_S3);
    _mav_put_uint16_t(buf, 16, ISEN_S4);
    _mav_put_uint16_t(buf, 18, ISEN_S6);
    _mav_put_uint16_t(buf, 20, ISEN_S_AUX);
    _mav_put_uint16_t(buf, 22, ISEN_28IPS);
    _mav_put_uint16_t(buf, 24, ISEN_12IPS);
    _mav_put_uint16_t(buf, 26, ISEN_5IPS);
    _mav_put_uint16_t(buf, 28, ISENS_OSB);
    _mav_put_uint16_t(buf, 30, ISENS_OBB);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_R10_ISENS_ERR_LEN);
#else
    mavlink_r10_isens_err_t packet;
    packet.TIME_US = TIME_US;
    packet.error_bitmask = error_bitmask;
    packet.ISEN_S1 = ISEN_S1;
    packet.ISEN_S2 = ISEN_S2;
    packet.ISEN_S3 = ISEN_S3;
    packet.ISEN_S4 = ISEN_S4;
    packet.ISEN_S6 = ISEN_S6;
    packet.ISEN_S_AUX = ISEN_S_AUX;
    packet.ISEN_28IPS = ISEN_28IPS;
    packet.ISEN_12IPS = ISEN_12IPS;
    packet.ISEN_5IPS = ISEN_5IPS;
    packet.ISENS_OSB = ISENS_OSB;
    packet.ISENS_OBB = ISENS_OBB;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_R10_ISENS_ERR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_R10_ISENS_ERR;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_R10_ISENS_ERR_MIN_LEN, MAVLINK_MSG_ID_R10_ISENS_ERR_LEN, MAVLINK_MSG_ID_R10_ISENS_ERR_CRC);
}

/**
 * @brief Encode a r10_isens_err struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param r10_isens_err C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_r10_isens_err_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_r10_isens_err_t* r10_isens_err)
{
    return mavlink_msg_r10_isens_err_pack(system_id, component_id, msg, r10_isens_err->TIME_US, r10_isens_err->error_bitmask, r10_isens_err->ISEN_S1, r10_isens_err->ISEN_S2, r10_isens_err->ISEN_S3, r10_isens_err->ISEN_S4, r10_isens_err->ISEN_S6, r10_isens_err->ISEN_S_AUX, r10_isens_err->ISEN_28IPS, r10_isens_err->ISEN_12IPS, r10_isens_err->ISEN_5IPS, r10_isens_err->ISENS_OSB, r10_isens_err->ISENS_OBB);
}

/**
 * @brief Encode a r10_isens_err struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param r10_isens_err C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_r10_isens_err_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_r10_isens_err_t* r10_isens_err)
{
    return mavlink_msg_r10_isens_err_pack_chan(system_id, component_id, chan, msg, r10_isens_err->TIME_US, r10_isens_err->error_bitmask, r10_isens_err->ISEN_S1, r10_isens_err->ISEN_S2, r10_isens_err->ISEN_S3, r10_isens_err->ISEN_S4, r10_isens_err->ISEN_S6, r10_isens_err->ISEN_S_AUX, r10_isens_err->ISEN_28IPS, r10_isens_err->ISEN_12IPS, r10_isens_err->ISEN_5IPS, r10_isens_err->ISENS_OSB, r10_isens_err->ISENS_OBB);
}

/**
 * @brief Send a r10_isens_err message
 * @param chan MAVLink channel to send the message
 *
 * @param TIME_US  Timestamp in microseconds
 * @param error_bitmask  Bitmask  for sensors crossing limits
 * @param ISEN_S1  Servo1 current sensor reading
 * @param ISEN_S2  Servo2 current sensor reading
 * @param ISEN_S3  Servo3 current sensor reading
 * @param ISEN_S4  Servo4 current sensor reading
 * @param ISEN_S6  Servo6 current sensor reading
 * @param ISEN_S_AUX  S-Aux current sensor reading
 * @param ISEN_28IPS  IPS 28V output current reading
 * @param ISEN_12IPS  IPS 12V output current reading
 * @param ISEN_5IPS  IPS 5V output current reading
 * @param ISENS_OSB  Onshore battery current
 * @param ISENS_OBB  Onboard battery current
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_r10_isens_err_send(mavlink_channel_t chan, uint64_t TIME_US, uint16_t error_bitmask, uint16_t ISEN_S1, uint16_t ISEN_S2, uint16_t ISEN_S3, uint16_t ISEN_S4, uint16_t ISEN_S6, uint16_t ISEN_S_AUX, uint16_t ISEN_28IPS, uint16_t ISEN_12IPS, uint16_t ISEN_5IPS, uint16_t ISENS_OSB, uint16_t ISENS_OBB)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_R10_ISENS_ERR_LEN];
    _mav_put_uint64_t(buf, 0, TIME_US);
    _mav_put_uint16_t(buf, 8, error_bitmask);
    _mav_put_uint16_t(buf, 10, ISEN_S1);
    _mav_put_uint16_t(buf, 12, ISEN_S2);
    _mav_put_uint16_t(buf, 14, ISEN_S3);
    _mav_put_uint16_t(buf, 16, ISEN_S4);
    _mav_put_uint16_t(buf, 18, ISEN_S6);
    _mav_put_uint16_t(buf, 20, ISEN_S_AUX);
    _mav_put_uint16_t(buf, 22, ISEN_28IPS);
    _mav_put_uint16_t(buf, 24, ISEN_12IPS);
    _mav_put_uint16_t(buf, 26, ISEN_5IPS);
    _mav_put_uint16_t(buf, 28, ISENS_OSB);
    _mav_put_uint16_t(buf, 30, ISENS_OBB);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_R10_ISENS_ERR, buf, MAVLINK_MSG_ID_R10_ISENS_ERR_MIN_LEN, MAVLINK_MSG_ID_R10_ISENS_ERR_LEN, MAVLINK_MSG_ID_R10_ISENS_ERR_CRC);
#else
    mavlink_r10_isens_err_t packet;
    packet.TIME_US = TIME_US;
    packet.error_bitmask = error_bitmask;
    packet.ISEN_S1 = ISEN_S1;
    packet.ISEN_S2 = ISEN_S2;
    packet.ISEN_S3 = ISEN_S3;
    packet.ISEN_S4 = ISEN_S4;
    packet.ISEN_S6 = ISEN_S6;
    packet.ISEN_S_AUX = ISEN_S_AUX;
    packet.ISEN_28IPS = ISEN_28IPS;
    packet.ISEN_12IPS = ISEN_12IPS;
    packet.ISEN_5IPS = ISEN_5IPS;
    packet.ISENS_OSB = ISENS_OSB;
    packet.ISENS_OBB = ISENS_OBB;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_R10_ISENS_ERR, (const char *)&packet, MAVLINK_MSG_ID_R10_ISENS_ERR_MIN_LEN, MAVLINK_MSG_ID_R10_ISENS_ERR_LEN, MAVLINK_MSG_ID_R10_ISENS_ERR_CRC);
#endif
}

/**
 * @brief Send a r10_isens_err message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_r10_isens_err_send_struct(mavlink_channel_t chan, const mavlink_r10_isens_err_t* r10_isens_err)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_r10_isens_err_send(chan, r10_isens_err->TIME_US, r10_isens_err->error_bitmask, r10_isens_err->ISEN_S1, r10_isens_err->ISEN_S2, r10_isens_err->ISEN_S3, r10_isens_err->ISEN_S4, r10_isens_err->ISEN_S6, r10_isens_err->ISEN_S_AUX, r10_isens_err->ISEN_28IPS, r10_isens_err->ISEN_12IPS, r10_isens_err->ISEN_5IPS, r10_isens_err->ISENS_OSB, r10_isens_err->ISENS_OBB);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_R10_ISENS_ERR, (const char *)r10_isens_err, MAVLINK_MSG_ID_R10_ISENS_ERR_MIN_LEN, MAVLINK_MSG_ID_R10_ISENS_ERR_LEN, MAVLINK_MSG_ID_R10_ISENS_ERR_CRC);
#endif
}

#if MAVLINK_MSG_ID_R10_ISENS_ERR_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_r10_isens_err_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t TIME_US, uint16_t error_bitmask, uint16_t ISEN_S1, uint16_t ISEN_S2, uint16_t ISEN_S3, uint16_t ISEN_S4, uint16_t ISEN_S6, uint16_t ISEN_S_AUX, uint16_t ISEN_28IPS, uint16_t ISEN_12IPS, uint16_t ISEN_5IPS, uint16_t ISENS_OSB, uint16_t ISENS_OBB)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, TIME_US);
    _mav_put_uint16_t(buf, 8, error_bitmask);
    _mav_put_uint16_t(buf, 10, ISEN_S1);
    _mav_put_uint16_t(buf, 12, ISEN_S2);
    _mav_put_uint16_t(buf, 14, ISEN_S3);
    _mav_put_uint16_t(buf, 16, ISEN_S4);
    _mav_put_uint16_t(buf, 18, ISEN_S6);
    _mav_put_uint16_t(buf, 20, ISEN_S_AUX);
    _mav_put_uint16_t(buf, 22, ISEN_28IPS);
    _mav_put_uint16_t(buf, 24, ISEN_12IPS);
    _mav_put_uint16_t(buf, 26, ISEN_5IPS);
    _mav_put_uint16_t(buf, 28, ISENS_OSB);
    _mav_put_uint16_t(buf, 30, ISENS_OBB);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_R10_ISENS_ERR, buf, MAVLINK_MSG_ID_R10_ISENS_ERR_MIN_LEN, MAVLINK_MSG_ID_R10_ISENS_ERR_LEN, MAVLINK_MSG_ID_R10_ISENS_ERR_CRC);
#else
    mavlink_r10_isens_err_t *packet = (mavlink_r10_isens_err_t *)msgbuf;
    packet->TIME_US = TIME_US;
    packet->error_bitmask = error_bitmask;
    packet->ISEN_S1 = ISEN_S1;
    packet->ISEN_S2 = ISEN_S2;
    packet->ISEN_S3 = ISEN_S3;
    packet->ISEN_S4 = ISEN_S4;
    packet->ISEN_S6 = ISEN_S6;
    packet->ISEN_S_AUX = ISEN_S_AUX;
    packet->ISEN_28IPS = ISEN_28IPS;
    packet->ISEN_12IPS = ISEN_12IPS;
    packet->ISEN_5IPS = ISEN_5IPS;
    packet->ISENS_OSB = ISENS_OSB;
    packet->ISENS_OBB = ISENS_OBB;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_R10_ISENS_ERR, (const char *)packet, MAVLINK_MSG_ID_R10_ISENS_ERR_MIN_LEN, MAVLINK_MSG_ID_R10_ISENS_ERR_LEN, MAVLINK_MSG_ID_R10_ISENS_ERR_CRC);
#endif
}
#endif

#endif

// MESSAGE R10_ISENS_ERR UNPACKING


/**
 * @brief Get field TIME_US from r10_isens_err message
 *
 * @return  Timestamp in microseconds
 */
static inline uint64_t mavlink_msg_r10_isens_err_get_TIME_US(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field error_bitmask from r10_isens_err message
 *
 * @return  Bitmask  for sensors crossing limits
 */
static inline uint16_t mavlink_msg_r10_isens_err_get_error_bitmask(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Get field ISEN_S1 from r10_isens_err message
 *
 * @return  Servo1 current sensor reading
 */
static inline uint16_t mavlink_msg_r10_isens_err_get_ISEN_S1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  10);
}

/**
 * @brief Get field ISEN_S2 from r10_isens_err message
 *
 * @return  Servo2 current sensor reading
 */
static inline uint16_t mavlink_msg_r10_isens_err_get_ISEN_S2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  12);
}

/**
 * @brief Get field ISEN_S3 from r10_isens_err message
 *
 * @return  Servo3 current sensor reading
 */
static inline uint16_t mavlink_msg_r10_isens_err_get_ISEN_S3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  14);
}

/**
 * @brief Get field ISEN_S4 from r10_isens_err message
 *
 * @return  Servo4 current sensor reading
 */
static inline uint16_t mavlink_msg_r10_isens_err_get_ISEN_S4(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  16);
}

/**
 * @brief Get field ISEN_S6 from r10_isens_err message
 *
 * @return  Servo6 current sensor reading
 */
static inline uint16_t mavlink_msg_r10_isens_err_get_ISEN_S6(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  18);
}

/**
 * @brief Get field ISEN_S_AUX from r10_isens_err message
 *
 * @return  S-Aux current sensor reading
 */
static inline uint16_t mavlink_msg_r10_isens_err_get_ISEN_S_AUX(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  20);
}

/**
 * @brief Get field ISEN_28IPS from r10_isens_err message
 *
 * @return  IPS 28V output current reading
 */
static inline uint16_t mavlink_msg_r10_isens_err_get_ISEN_28IPS(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  22);
}

/**
 * @brief Get field ISEN_12IPS from r10_isens_err message
 *
 * @return  IPS 12V output current reading
 */
static inline uint16_t mavlink_msg_r10_isens_err_get_ISEN_12IPS(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  24);
}

/**
 * @brief Get field ISEN_5IPS from r10_isens_err message
 *
 * @return  IPS 5V output current reading
 */
static inline uint16_t mavlink_msg_r10_isens_err_get_ISEN_5IPS(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  26);
}

/**
 * @brief Get field ISENS_OSB from r10_isens_err message
 *
 * @return  Onshore battery current
 */
static inline uint16_t mavlink_msg_r10_isens_err_get_ISENS_OSB(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  28);
}

/**
 * @brief Get field ISENS_OBB from r10_isens_err message
 *
 * @return  Onboard battery current
 */
static inline uint16_t mavlink_msg_r10_isens_err_get_ISENS_OBB(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  30);
}

/**
 * @brief Decode a r10_isens_err message into a struct
 *
 * @param msg The message to decode
 * @param r10_isens_err C-struct to decode the message contents into
 */
static inline void mavlink_msg_r10_isens_err_decode(const mavlink_message_t* msg, mavlink_r10_isens_err_t* r10_isens_err)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    r10_isens_err->TIME_US = mavlink_msg_r10_isens_err_get_TIME_US(msg);
    r10_isens_err->error_bitmask = mavlink_msg_r10_isens_err_get_error_bitmask(msg);
    r10_isens_err->ISEN_S1 = mavlink_msg_r10_isens_err_get_ISEN_S1(msg);
    r10_isens_err->ISEN_S2 = mavlink_msg_r10_isens_err_get_ISEN_S2(msg);
    r10_isens_err->ISEN_S3 = mavlink_msg_r10_isens_err_get_ISEN_S3(msg);
    r10_isens_err->ISEN_S4 = mavlink_msg_r10_isens_err_get_ISEN_S4(msg);
    r10_isens_err->ISEN_S6 = mavlink_msg_r10_isens_err_get_ISEN_S6(msg);
    r10_isens_err->ISEN_S_AUX = mavlink_msg_r10_isens_err_get_ISEN_S_AUX(msg);
    r10_isens_err->ISEN_28IPS = mavlink_msg_r10_isens_err_get_ISEN_28IPS(msg);
    r10_isens_err->ISEN_12IPS = mavlink_msg_r10_isens_err_get_ISEN_12IPS(msg);
    r10_isens_err->ISEN_5IPS = mavlink_msg_r10_isens_err_get_ISEN_5IPS(msg);
    r10_isens_err->ISENS_OSB = mavlink_msg_r10_isens_err_get_ISENS_OSB(msg);
    r10_isens_err->ISENS_OBB = mavlink_msg_r10_isens_err_get_ISENS_OBB(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_R10_ISENS_ERR_LEN? msg->len : MAVLINK_MSG_ID_R10_ISENS_ERR_LEN;
        memset(r10_isens_err, 0, MAVLINK_MSG_ID_R10_ISENS_ERR_LEN);
    memcpy(r10_isens_err, _MAV_PAYLOAD(msg), len);
#endif
}
