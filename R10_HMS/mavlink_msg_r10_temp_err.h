#pragma once
// MESSAGE R10_TEMP_ERR PACKING

#define MAVLINK_MSG_ID_R10_TEMP_ERR 11080


typedef struct __mavlink_r10_temp_err_t {
 uint64_t TIME_US; /*<  Timestamp in microseconds*/
 uint16_t error_bitmask; /*<  Bitmask  for sensors crossing limits*/
 uint8_t S1_TEMP; /*<  Servo1 Temperature sensor reading*/
 uint8_t S2_TEMP; /*<  Servo2 Temperature sensor reading*/
 uint8_t S3_TEMP; /*<  Servo3 Temperature sensor reading*/
 uint8_t S4_TEMP; /*<  Servo4 Temperature sensor reading*/
 uint8_t S5_TEMP; /*<  Servo5 Temperature sensor reading*/
 uint8_t S6_TEMP; /*<  Servo6 Temperature sensor reading*/
 uint8_t PMU_TEMP; /*<  IPS unit temperature*/
 uint8_t SG_TEMP; /*<  SG temperature*/
 uint8_t OSB_TEMP; /*<  Onshore battery temperature*/
 uint8_t OBB_TEMP; /*<  Onboard battery temperature*/
 uint8_t ENG_TEMP1; /*<  Engine temperature 1*/
 uint8_t ENG_TEMP2; /*<  Engine temperature 2*/
} mavlink_r10_temp_err_t;

#define MAVLINK_MSG_ID_R10_TEMP_ERR_LEN 22
#define MAVLINK_MSG_ID_R10_TEMP_ERR_MIN_LEN 22
#define MAVLINK_MSG_ID_11080_LEN 22
#define MAVLINK_MSG_ID_11080_MIN_LEN 22

#define MAVLINK_MSG_ID_R10_TEMP_ERR_CRC 185
#define MAVLINK_MSG_ID_11080_CRC 185



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_R10_TEMP_ERR { \
    11080, \
    "R10_TEMP_ERR", \
    14, \
    {  { "TIME_US", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_r10_temp_err_t, TIME_US) }, \
         { "error_bitmask", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_r10_temp_err_t, error_bitmask) }, \
         { "S1_TEMP", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_r10_temp_err_t, S1_TEMP) }, \
         { "S2_TEMP", NULL, MAVLINK_TYPE_UINT8_T, 0, 11, offsetof(mavlink_r10_temp_err_t, S2_TEMP) }, \
         { "S3_TEMP", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_r10_temp_err_t, S3_TEMP) }, \
         { "S4_TEMP", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_r10_temp_err_t, S4_TEMP) }, \
         { "S5_TEMP", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_r10_temp_err_t, S5_TEMP) }, \
         { "S6_TEMP", NULL, MAVLINK_TYPE_UINT8_T, 0, 15, offsetof(mavlink_r10_temp_err_t, S6_TEMP) }, \
         { "PMU_TEMP", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_r10_temp_err_t, PMU_TEMP) }, \
         { "SG_TEMP", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_r10_temp_err_t, SG_TEMP) }, \
         { "OSB_TEMP", NULL, MAVLINK_TYPE_UINT8_T, 0, 18, offsetof(mavlink_r10_temp_err_t, OSB_TEMP) }, \
         { "OBB_TEMP", NULL, MAVLINK_TYPE_UINT8_T, 0, 19, offsetof(mavlink_r10_temp_err_t, OBB_TEMP) }, \
         { "ENG_TEMP1", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_r10_temp_err_t, ENG_TEMP1) }, \
         { "ENG_TEMP2", NULL, MAVLINK_TYPE_UINT8_T, 0, 21, offsetof(mavlink_r10_temp_err_t, ENG_TEMP2) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_R10_TEMP_ERR { \
    "R10_TEMP_ERR", \
    14, \
    {  { "TIME_US", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_r10_temp_err_t, TIME_US) }, \
         { "error_bitmask", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_r10_temp_err_t, error_bitmask) }, \
         { "S1_TEMP", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_r10_temp_err_t, S1_TEMP) }, \
         { "S2_TEMP", NULL, MAVLINK_TYPE_UINT8_T, 0, 11, offsetof(mavlink_r10_temp_err_t, S2_TEMP) }, \
         { "S3_TEMP", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_r10_temp_err_t, S3_TEMP) }, \
         { "S4_TEMP", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_r10_temp_err_t, S4_TEMP) }, \
         { "S5_TEMP", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_r10_temp_err_t, S5_TEMP) }, \
         { "S6_TEMP", NULL, MAVLINK_TYPE_UINT8_T, 0, 15, offsetof(mavlink_r10_temp_err_t, S6_TEMP) }, \
         { "PMU_TEMP", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_r10_temp_err_t, PMU_TEMP) }, \
         { "SG_TEMP", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_r10_temp_err_t, SG_TEMP) }, \
         { "OSB_TEMP", NULL, MAVLINK_TYPE_UINT8_T, 0, 18, offsetof(mavlink_r10_temp_err_t, OSB_TEMP) }, \
         { "OBB_TEMP", NULL, MAVLINK_TYPE_UINT8_T, 0, 19, offsetof(mavlink_r10_temp_err_t, OBB_TEMP) }, \
         { "ENG_TEMP1", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_r10_temp_err_t, ENG_TEMP1) }, \
         { "ENG_TEMP2", NULL, MAVLINK_TYPE_UINT8_T, 0, 21, offsetof(mavlink_r10_temp_err_t, ENG_TEMP2) }, \
         } \
}
#endif

/**
 * @brief Pack a r10_temp_err message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param TIME_US  Timestamp in microseconds
 * @param error_bitmask  Bitmask  for sensors crossing limits
 * @param S1_TEMP  Servo1 Temperature sensor reading
 * @param S2_TEMP  Servo2 Temperature sensor reading
 * @param S3_TEMP  Servo3 Temperature sensor reading
 * @param S4_TEMP  Servo4 Temperature sensor reading
 * @param S5_TEMP  Servo5 Temperature sensor reading
 * @param S6_TEMP  Servo6 Temperature sensor reading
 * @param PMU_TEMP  IPS unit temperature
 * @param SG_TEMP  SG temperature
 * @param OSB_TEMP  Onshore battery temperature
 * @param OBB_TEMP  Onboard battery temperature
 * @param ENG_TEMP1  Engine temperature 1
 * @param ENG_TEMP2  Engine temperature 2
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_r10_temp_err_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t TIME_US, uint16_t error_bitmask, uint8_t S1_TEMP, uint8_t S2_TEMP, uint8_t S3_TEMP, uint8_t S4_TEMP, uint8_t S5_TEMP, uint8_t S6_TEMP, uint8_t PMU_TEMP, uint8_t SG_TEMP, uint8_t OSB_TEMP, uint8_t OBB_TEMP, uint8_t ENG_TEMP1, uint8_t ENG_TEMP2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_R10_TEMP_ERR_LEN];
    _mav_put_uint64_t(buf, 0, TIME_US);
    _mav_put_uint16_t(buf, 8, error_bitmask);
    _mav_put_uint8_t(buf, 10, S1_TEMP);
    _mav_put_uint8_t(buf, 11, S2_TEMP);
    _mav_put_uint8_t(buf, 12, S3_TEMP);
    _mav_put_uint8_t(buf, 13, S4_TEMP);
    _mav_put_uint8_t(buf, 14, S5_TEMP);
    _mav_put_uint8_t(buf, 15, S6_TEMP);
    _mav_put_uint8_t(buf, 16, PMU_TEMP);
    _mav_put_uint8_t(buf, 17, SG_TEMP);
    _mav_put_uint8_t(buf, 18, OSB_TEMP);
    _mav_put_uint8_t(buf, 19, OBB_TEMP);
    _mav_put_uint8_t(buf, 20, ENG_TEMP1);
    _mav_put_uint8_t(buf, 21, ENG_TEMP2);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_R10_TEMP_ERR_LEN);
#else
    mavlink_r10_temp_err_t packet;
    packet.TIME_US = TIME_US;
    packet.error_bitmask = error_bitmask;
    packet.S1_TEMP = S1_TEMP;
    packet.S2_TEMP = S2_TEMP;
    packet.S3_TEMP = S3_TEMP;
    packet.S4_TEMP = S4_TEMP;
    packet.S5_TEMP = S5_TEMP;
    packet.S6_TEMP = S6_TEMP;
    packet.PMU_TEMP = PMU_TEMP;
    packet.SG_TEMP = SG_TEMP;
    packet.OSB_TEMP = OSB_TEMP;
    packet.OBB_TEMP = OBB_TEMP;
    packet.ENG_TEMP1 = ENG_TEMP1;
    packet.ENG_TEMP2 = ENG_TEMP2;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_R10_TEMP_ERR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_R10_TEMP_ERR;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_R10_TEMP_ERR_MIN_LEN, MAVLINK_MSG_ID_R10_TEMP_ERR_LEN, MAVLINK_MSG_ID_R10_TEMP_ERR_CRC);
}

/**
 * @brief Pack a r10_temp_err message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param TIME_US  Timestamp in microseconds
 * @param error_bitmask  Bitmask  for sensors crossing limits
 * @param S1_TEMP  Servo1 Temperature sensor reading
 * @param S2_TEMP  Servo2 Temperature sensor reading
 * @param S3_TEMP  Servo3 Temperature sensor reading
 * @param S4_TEMP  Servo4 Temperature sensor reading
 * @param S5_TEMP  Servo5 Temperature sensor reading
 * @param S6_TEMP  Servo6 Temperature sensor reading
 * @param PMU_TEMP  IPS unit temperature
 * @param SG_TEMP  SG temperature
 * @param OSB_TEMP  Onshore battery temperature
 * @param OBB_TEMP  Onboard battery temperature
 * @param ENG_TEMP1  Engine temperature 1
 * @param ENG_TEMP2  Engine temperature 2
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_r10_temp_err_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t TIME_US,uint16_t error_bitmask,uint8_t S1_TEMP,uint8_t S2_TEMP,uint8_t S3_TEMP,uint8_t S4_TEMP,uint8_t S5_TEMP,uint8_t S6_TEMP,uint8_t PMU_TEMP,uint8_t SG_TEMP,uint8_t OSB_TEMP,uint8_t OBB_TEMP,uint8_t ENG_TEMP1,uint8_t ENG_TEMP2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_R10_TEMP_ERR_LEN];
    _mav_put_uint64_t(buf, 0, TIME_US);
    _mav_put_uint16_t(buf, 8, error_bitmask);
    _mav_put_uint8_t(buf, 10, S1_TEMP);
    _mav_put_uint8_t(buf, 11, S2_TEMP);
    _mav_put_uint8_t(buf, 12, S3_TEMP);
    _mav_put_uint8_t(buf, 13, S4_TEMP);
    _mav_put_uint8_t(buf, 14, S5_TEMP);
    _mav_put_uint8_t(buf, 15, S6_TEMP);
    _mav_put_uint8_t(buf, 16, PMU_TEMP);
    _mav_put_uint8_t(buf, 17, SG_TEMP);
    _mav_put_uint8_t(buf, 18, OSB_TEMP);
    _mav_put_uint8_t(buf, 19, OBB_TEMP);
    _mav_put_uint8_t(buf, 20, ENG_TEMP1);
    _mav_put_uint8_t(buf, 21, ENG_TEMP2);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_R10_TEMP_ERR_LEN);
#else
    mavlink_r10_temp_err_t packet;
    packet.TIME_US = TIME_US;
    packet.error_bitmask = error_bitmask;
    packet.S1_TEMP = S1_TEMP;
    packet.S2_TEMP = S2_TEMP;
    packet.S3_TEMP = S3_TEMP;
    packet.S4_TEMP = S4_TEMP;
    packet.S5_TEMP = S5_TEMP;
    packet.S6_TEMP = S6_TEMP;
    packet.PMU_TEMP = PMU_TEMP;
    packet.SG_TEMP = SG_TEMP;
    packet.OSB_TEMP = OSB_TEMP;
    packet.OBB_TEMP = OBB_TEMP;
    packet.ENG_TEMP1 = ENG_TEMP1;
    packet.ENG_TEMP2 = ENG_TEMP2;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_R10_TEMP_ERR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_R10_TEMP_ERR;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_R10_TEMP_ERR_MIN_LEN, MAVLINK_MSG_ID_R10_TEMP_ERR_LEN, MAVLINK_MSG_ID_R10_TEMP_ERR_CRC);
}

/**
 * @brief Encode a r10_temp_err struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param r10_temp_err C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_r10_temp_err_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_r10_temp_err_t* r10_temp_err)
{
    return mavlink_msg_r10_temp_err_pack(system_id, component_id, msg, r10_temp_err->TIME_US, r10_temp_err->error_bitmask, r10_temp_err->S1_TEMP, r10_temp_err->S2_TEMP, r10_temp_err->S3_TEMP, r10_temp_err->S4_TEMP, r10_temp_err->S5_TEMP, r10_temp_err->S6_TEMP, r10_temp_err->PMU_TEMP, r10_temp_err->SG_TEMP, r10_temp_err->OSB_TEMP, r10_temp_err->OBB_TEMP, r10_temp_err->ENG_TEMP1, r10_temp_err->ENG_TEMP2);
}

/**
 * @brief Encode a r10_temp_err struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param r10_temp_err C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_r10_temp_err_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_r10_temp_err_t* r10_temp_err)
{
    return mavlink_msg_r10_temp_err_pack_chan(system_id, component_id, chan, msg, r10_temp_err->TIME_US, r10_temp_err->error_bitmask, r10_temp_err->S1_TEMP, r10_temp_err->S2_TEMP, r10_temp_err->S3_TEMP, r10_temp_err->S4_TEMP, r10_temp_err->S5_TEMP, r10_temp_err->S6_TEMP, r10_temp_err->PMU_TEMP, r10_temp_err->SG_TEMP, r10_temp_err->OSB_TEMP, r10_temp_err->OBB_TEMP, r10_temp_err->ENG_TEMP1, r10_temp_err->ENG_TEMP2);
}

/**
 * @brief Send a r10_temp_err message
 * @param chan MAVLink channel to send the message
 *
 * @param TIME_US  Timestamp in microseconds
 * @param error_bitmask  Bitmask  for sensors crossing limits
 * @param S1_TEMP  Servo1 Temperature sensor reading
 * @param S2_TEMP  Servo2 Temperature sensor reading
 * @param S3_TEMP  Servo3 Temperature sensor reading
 * @param S4_TEMP  Servo4 Temperature sensor reading
 * @param S5_TEMP  Servo5 Temperature sensor reading
 * @param S6_TEMP  Servo6 Temperature sensor reading
 * @param PMU_TEMP  IPS unit temperature
 * @param SG_TEMP  SG temperature
 * @param OSB_TEMP  Onshore battery temperature
 * @param OBB_TEMP  Onboard battery temperature
 * @param ENG_TEMP1  Engine temperature 1
 * @param ENG_TEMP2  Engine temperature 2
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_r10_temp_err_send(mavlink_channel_t chan, uint64_t TIME_US, uint16_t error_bitmask, uint8_t S1_TEMP, uint8_t S2_TEMP, uint8_t S3_TEMP, uint8_t S4_TEMP, uint8_t S5_TEMP, uint8_t S6_TEMP, uint8_t PMU_TEMP, uint8_t SG_TEMP, uint8_t OSB_TEMP, uint8_t OBB_TEMP, uint8_t ENG_TEMP1, uint8_t ENG_TEMP2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_R10_TEMP_ERR_LEN];
    _mav_put_uint64_t(buf, 0, TIME_US);
    _mav_put_uint16_t(buf, 8, error_bitmask);
    _mav_put_uint8_t(buf, 10, S1_TEMP);
    _mav_put_uint8_t(buf, 11, S2_TEMP);
    _mav_put_uint8_t(buf, 12, S3_TEMP);
    _mav_put_uint8_t(buf, 13, S4_TEMP);
    _mav_put_uint8_t(buf, 14, S5_TEMP);
    _mav_put_uint8_t(buf, 15, S6_TEMP);
    _mav_put_uint8_t(buf, 16, PMU_TEMP);
    _mav_put_uint8_t(buf, 17, SG_TEMP);
    _mav_put_uint8_t(buf, 18, OSB_TEMP);
    _mav_put_uint8_t(buf, 19, OBB_TEMP);
    _mav_put_uint8_t(buf, 20, ENG_TEMP1);
    _mav_put_uint8_t(buf, 21, ENG_TEMP2);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_R10_TEMP_ERR, buf, MAVLINK_MSG_ID_R10_TEMP_ERR_MIN_LEN, MAVLINK_MSG_ID_R10_TEMP_ERR_LEN, MAVLINK_MSG_ID_R10_TEMP_ERR_CRC);
#else
    mavlink_r10_temp_err_t packet;
    packet.TIME_US = TIME_US;
    packet.error_bitmask = error_bitmask;
    packet.S1_TEMP = S1_TEMP;
    packet.S2_TEMP = S2_TEMP;
    packet.S3_TEMP = S3_TEMP;
    packet.S4_TEMP = S4_TEMP;
    packet.S5_TEMP = S5_TEMP;
    packet.S6_TEMP = S6_TEMP;
    packet.PMU_TEMP = PMU_TEMP;
    packet.SG_TEMP = SG_TEMP;
    packet.OSB_TEMP = OSB_TEMP;
    packet.OBB_TEMP = OBB_TEMP;
    packet.ENG_TEMP1 = ENG_TEMP1;
    packet.ENG_TEMP2 = ENG_TEMP2;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_R10_TEMP_ERR, (const char *)&packet, MAVLINK_MSG_ID_R10_TEMP_ERR_MIN_LEN, MAVLINK_MSG_ID_R10_TEMP_ERR_LEN, MAVLINK_MSG_ID_R10_TEMP_ERR_CRC);
#endif
}

/**
 * @brief Send a r10_temp_err message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_r10_temp_err_send_struct(mavlink_channel_t chan, const mavlink_r10_temp_err_t* r10_temp_err)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_r10_temp_err_send(chan, r10_temp_err->TIME_US, r10_temp_err->error_bitmask, r10_temp_err->S1_TEMP, r10_temp_err->S2_TEMP, r10_temp_err->S3_TEMP, r10_temp_err->S4_TEMP, r10_temp_err->S5_TEMP, r10_temp_err->S6_TEMP, r10_temp_err->PMU_TEMP, r10_temp_err->SG_TEMP, r10_temp_err->OSB_TEMP, r10_temp_err->OBB_TEMP, r10_temp_err->ENG_TEMP1, r10_temp_err->ENG_TEMP2);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_R10_TEMP_ERR, (const char *)r10_temp_err, MAVLINK_MSG_ID_R10_TEMP_ERR_MIN_LEN, MAVLINK_MSG_ID_R10_TEMP_ERR_LEN, MAVLINK_MSG_ID_R10_TEMP_ERR_CRC);
#endif
}

#if MAVLINK_MSG_ID_R10_TEMP_ERR_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_r10_temp_err_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t TIME_US, uint16_t error_bitmask, uint8_t S1_TEMP, uint8_t S2_TEMP, uint8_t S3_TEMP, uint8_t S4_TEMP, uint8_t S5_TEMP, uint8_t S6_TEMP, uint8_t PMU_TEMP, uint8_t SG_TEMP, uint8_t OSB_TEMP, uint8_t OBB_TEMP, uint8_t ENG_TEMP1, uint8_t ENG_TEMP2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, TIME_US);
    _mav_put_uint16_t(buf, 8, error_bitmask);
    _mav_put_uint8_t(buf, 10, S1_TEMP);
    _mav_put_uint8_t(buf, 11, S2_TEMP);
    _mav_put_uint8_t(buf, 12, S3_TEMP);
    _mav_put_uint8_t(buf, 13, S4_TEMP);
    _mav_put_uint8_t(buf, 14, S5_TEMP);
    _mav_put_uint8_t(buf, 15, S6_TEMP);
    _mav_put_uint8_t(buf, 16, PMU_TEMP);
    _mav_put_uint8_t(buf, 17, SG_TEMP);
    _mav_put_uint8_t(buf, 18, OSB_TEMP);
    _mav_put_uint8_t(buf, 19, OBB_TEMP);
    _mav_put_uint8_t(buf, 20, ENG_TEMP1);
    _mav_put_uint8_t(buf, 21, ENG_TEMP2);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_R10_TEMP_ERR, buf, MAVLINK_MSG_ID_R10_TEMP_ERR_MIN_LEN, MAVLINK_MSG_ID_R10_TEMP_ERR_LEN, MAVLINK_MSG_ID_R10_TEMP_ERR_CRC);
#else
    mavlink_r10_temp_err_t *packet = (mavlink_r10_temp_err_t *)msgbuf;
    packet->TIME_US = TIME_US;
    packet->error_bitmask = error_bitmask;
    packet->S1_TEMP = S1_TEMP;
    packet->S2_TEMP = S2_TEMP;
    packet->S3_TEMP = S3_TEMP;
    packet->S4_TEMP = S4_TEMP;
    packet->S5_TEMP = S5_TEMP;
    packet->S6_TEMP = S6_TEMP;
    packet->PMU_TEMP = PMU_TEMP;
    packet->SG_TEMP = SG_TEMP;
    packet->OSB_TEMP = OSB_TEMP;
    packet->OBB_TEMP = OBB_TEMP;
    packet->ENG_TEMP1 = ENG_TEMP1;
    packet->ENG_TEMP2 = ENG_TEMP2;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_R10_TEMP_ERR, (const char *)packet, MAVLINK_MSG_ID_R10_TEMP_ERR_MIN_LEN, MAVLINK_MSG_ID_R10_TEMP_ERR_LEN, MAVLINK_MSG_ID_R10_TEMP_ERR_CRC);
#endif
}
#endif

#endif

// MESSAGE R10_TEMP_ERR UNPACKING


/**
 * @brief Get field TIME_US from r10_temp_err message
 *
 * @return  Timestamp in microseconds
 */
static inline uint64_t mavlink_msg_r10_temp_err_get_TIME_US(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field error_bitmask from r10_temp_err message
 *
 * @return  Bitmask  for sensors crossing limits
 */
static inline uint16_t mavlink_msg_r10_temp_err_get_error_bitmask(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Get field S1_TEMP from r10_temp_err message
 *
 * @return  Servo1 Temperature sensor reading
 */
static inline uint8_t mavlink_msg_r10_temp_err_get_S1_TEMP(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  10);
}

/**
 * @brief Get field S2_TEMP from r10_temp_err message
 *
 * @return  Servo2 Temperature sensor reading
 */
static inline uint8_t mavlink_msg_r10_temp_err_get_S2_TEMP(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  11);
}

/**
 * @brief Get field S3_TEMP from r10_temp_err message
 *
 * @return  Servo3 Temperature sensor reading
 */
static inline uint8_t mavlink_msg_r10_temp_err_get_S3_TEMP(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  12);
}

/**
 * @brief Get field S4_TEMP from r10_temp_err message
 *
 * @return  Servo4 Temperature sensor reading
 */
static inline uint8_t mavlink_msg_r10_temp_err_get_S4_TEMP(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  13);
}

/**
 * @brief Get field S5_TEMP from r10_temp_err message
 *
 * @return  Servo5 Temperature sensor reading
 */
static inline uint8_t mavlink_msg_r10_temp_err_get_S5_TEMP(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  14);
}

/**
 * @brief Get field S6_TEMP from r10_temp_err message
 *
 * @return  Servo6 Temperature sensor reading
 */
static inline uint8_t mavlink_msg_r10_temp_err_get_S6_TEMP(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  15);
}

/**
 * @brief Get field PMU_TEMP from r10_temp_err message
 *
 * @return  IPS unit temperature
 */
static inline uint8_t mavlink_msg_r10_temp_err_get_PMU_TEMP(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  16);
}

/**
 * @brief Get field SG_TEMP from r10_temp_err message
 *
 * @return  SG temperature
 */
static inline uint8_t mavlink_msg_r10_temp_err_get_SG_TEMP(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  17);
}

/**
 * @brief Get field OSB_TEMP from r10_temp_err message
 *
 * @return  Onshore battery temperature
 */
static inline uint8_t mavlink_msg_r10_temp_err_get_OSB_TEMP(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  18);
}

/**
 * @brief Get field OBB_TEMP from r10_temp_err message
 *
 * @return  Onboard battery temperature
 */
static inline uint8_t mavlink_msg_r10_temp_err_get_OBB_TEMP(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  19);
}

/**
 * @brief Get field ENG_TEMP1 from r10_temp_err message
 *
 * @return  Engine temperature 1
 */
static inline uint8_t mavlink_msg_r10_temp_err_get_ENG_TEMP1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  20);
}

/**
 * @brief Get field ENG_TEMP2 from r10_temp_err message
 *
 * @return  Engine temperature 2
 */
static inline uint8_t mavlink_msg_r10_temp_err_get_ENG_TEMP2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  21);
}

/**
 * @brief Decode a r10_temp_err message into a struct
 *
 * @param msg The message to decode
 * @param r10_temp_err C-struct to decode the message contents into
 */
static inline void mavlink_msg_r10_temp_err_decode(const mavlink_message_t* msg, mavlink_r10_temp_err_t* r10_temp_err)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    r10_temp_err->TIME_US = mavlink_msg_r10_temp_err_get_TIME_US(msg);
    r10_temp_err->error_bitmask = mavlink_msg_r10_temp_err_get_error_bitmask(msg);
    r10_temp_err->S1_TEMP = mavlink_msg_r10_temp_err_get_S1_TEMP(msg);
    r10_temp_err->S2_TEMP = mavlink_msg_r10_temp_err_get_S2_TEMP(msg);
    r10_temp_err->S3_TEMP = mavlink_msg_r10_temp_err_get_S3_TEMP(msg);
    r10_temp_err->S4_TEMP = mavlink_msg_r10_temp_err_get_S4_TEMP(msg);
    r10_temp_err->S5_TEMP = mavlink_msg_r10_temp_err_get_S5_TEMP(msg);
    r10_temp_err->S6_TEMP = mavlink_msg_r10_temp_err_get_S6_TEMP(msg);
    r10_temp_err->PMU_TEMP = mavlink_msg_r10_temp_err_get_PMU_TEMP(msg);
    r10_temp_err->SG_TEMP = mavlink_msg_r10_temp_err_get_SG_TEMP(msg);
    r10_temp_err->OSB_TEMP = mavlink_msg_r10_temp_err_get_OSB_TEMP(msg);
    r10_temp_err->OBB_TEMP = mavlink_msg_r10_temp_err_get_OBB_TEMP(msg);
    r10_temp_err->ENG_TEMP1 = mavlink_msg_r10_temp_err_get_ENG_TEMP1(msg);
    r10_temp_err->ENG_TEMP2 = mavlink_msg_r10_temp_err_get_ENG_TEMP2(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_R10_TEMP_ERR_LEN? msg->len : MAVLINK_MSG_ID_R10_TEMP_ERR_LEN;
        memset(r10_temp_err, 0, MAVLINK_MSG_ID_R10_TEMP_ERR_LEN);
    memcpy(r10_temp_err, _MAV_PAYLOAD(msg), len);
#endif
}
