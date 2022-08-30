#pragma once
// MESSAGE R10_DLB_ERROR PACKING

#define MAVLINK_MSG_ID_R10_DLB_ERROR 11076


typedef struct __mavlink_r10_dlb_error_t {
 uint64_t TIME_US; /*<  Timestamp in microseconds*/
 uint16_t ERROR_CODE; /*<  Datalogger Board Error Code*/
} mavlink_r10_dlb_error_t;

#define MAVLINK_MSG_ID_R10_DLB_ERROR_LEN 10
#define MAVLINK_MSG_ID_R10_DLB_ERROR_MIN_LEN 10
#define MAVLINK_MSG_ID_11076_LEN 10
#define MAVLINK_MSG_ID_11076_MIN_LEN 10

#define MAVLINK_MSG_ID_R10_DLB_ERROR_CRC 106
#define MAVLINK_MSG_ID_11076_CRC 106



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_R10_DLB_ERROR { \
    11076, \
    "R10_DLB_ERROR", \
    2, \
    {  { "TIME_US", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_r10_dlb_error_t, TIME_US) }, \
         { "ERROR_CODE", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_r10_dlb_error_t, ERROR_CODE) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_R10_DLB_ERROR { \
    "R10_DLB_ERROR", \
    2, \
    {  { "TIME_US", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_r10_dlb_error_t, TIME_US) }, \
         { "ERROR_CODE", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_r10_dlb_error_t, ERROR_CODE) }, \
         } \
}
#endif

/**
 * @brief Pack a r10_dlb_error message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param TIME_US  Timestamp in microseconds
 * @param ERROR_CODE  Datalogger Board Error Code
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_r10_dlb_error_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t TIME_US, uint16_t ERROR_CODE)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_R10_DLB_ERROR_LEN];
    _mav_put_uint64_t(buf, 0, TIME_US);
    _mav_put_uint16_t(buf, 8, ERROR_CODE);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_R10_DLB_ERROR_LEN);
#else
    mavlink_r10_dlb_error_t packet;
    packet.TIME_US = TIME_US;
    packet.ERROR_CODE = ERROR_CODE;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_R10_DLB_ERROR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_R10_DLB_ERROR;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_R10_DLB_ERROR_MIN_LEN, MAVLINK_MSG_ID_R10_DLB_ERROR_LEN, MAVLINK_MSG_ID_R10_DLB_ERROR_CRC);
}

/**
 * @brief Pack a r10_dlb_error message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param TIME_US  Timestamp in microseconds
 * @param ERROR_CODE  Datalogger Board Error Code
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_r10_dlb_error_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t TIME_US,uint16_t ERROR_CODE)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_R10_DLB_ERROR_LEN];
    _mav_put_uint64_t(buf, 0, TIME_US);
    _mav_put_uint16_t(buf, 8, ERROR_CODE);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_R10_DLB_ERROR_LEN);
#else
    mavlink_r10_dlb_error_t packet;
    packet.TIME_US = TIME_US;
    packet.ERROR_CODE = ERROR_CODE;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_R10_DLB_ERROR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_R10_DLB_ERROR;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_R10_DLB_ERROR_MIN_LEN, MAVLINK_MSG_ID_R10_DLB_ERROR_LEN, MAVLINK_MSG_ID_R10_DLB_ERROR_CRC);
}

/**
 * @brief Encode a r10_dlb_error struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param r10_dlb_error C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_r10_dlb_error_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_r10_dlb_error_t* r10_dlb_error)
{
    return mavlink_msg_r10_dlb_error_pack(system_id, component_id, msg, r10_dlb_error->TIME_US, r10_dlb_error->ERROR_CODE);
}

/**
 * @brief Encode a r10_dlb_error struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param r10_dlb_error C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_r10_dlb_error_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_r10_dlb_error_t* r10_dlb_error)
{
    return mavlink_msg_r10_dlb_error_pack_chan(system_id, component_id, chan, msg, r10_dlb_error->TIME_US, r10_dlb_error->ERROR_CODE);
}

/**
 * @brief Send a r10_dlb_error message
 * @param chan MAVLink channel to send the message
 *
 * @param TIME_US  Timestamp in microseconds
 * @param ERROR_CODE  Datalogger Board Error Code
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_r10_dlb_error_send(mavlink_channel_t chan, uint64_t TIME_US, uint16_t ERROR_CODE)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_R10_DLB_ERROR_LEN];
    _mav_put_uint64_t(buf, 0, TIME_US);
    _mav_put_uint16_t(buf, 8, ERROR_CODE);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_R10_DLB_ERROR, buf, MAVLINK_MSG_ID_R10_DLB_ERROR_MIN_LEN, MAVLINK_MSG_ID_R10_DLB_ERROR_LEN, MAVLINK_MSG_ID_R10_DLB_ERROR_CRC);
#else
    mavlink_r10_dlb_error_t packet;
    packet.TIME_US = TIME_US;
    packet.ERROR_CODE = ERROR_CODE;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_R10_DLB_ERROR, (const char *)&packet, MAVLINK_MSG_ID_R10_DLB_ERROR_MIN_LEN, MAVLINK_MSG_ID_R10_DLB_ERROR_LEN, MAVLINK_MSG_ID_R10_DLB_ERROR_CRC);
#endif
}

/**
 * @brief Send a r10_dlb_error message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_r10_dlb_error_send_struct(mavlink_channel_t chan, const mavlink_r10_dlb_error_t* r10_dlb_error)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_r10_dlb_error_send(chan, r10_dlb_error->TIME_US, r10_dlb_error->ERROR_CODE);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_R10_DLB_ERROR, (const char *)r10_dlb_error, MAVLINK_MSG_ID_R10_DLB_ERROR_MIN_LEN, MAVLINK_MSG_ID_R10_DLB_ERROR_LEN, MAVLINK_MSG_ID_R10_DLB_ERROR_CRC);
#endif
}

#if MAVLINK_MSG_ID_R10_DLB_ERROR_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_r10_dlb_error_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t TIME_US, uint16_t ERROR_CODE)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, TIME_US);
    _mav_put_uint16_t(buf, 8, ERROR_CODE);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_R10_DLB_ERROR, buf, MAVLINK_MSG_ID_R10_DLB_ERROR_MIN_LEN, MAVLINK_MSG_ID_R10_DLB_ERROR_LEN, MAVLINK_MSG_ID_R10_DLB_ERROR_CRC);
#else
    mavlink_r10_dlb_error_t *packet = (mavlink_r10_dlb_error_t *)msgbuf;
    packet->TIME_US = TIME_US;
    packet->ERROR_CODE = ERROR_CODE;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_R10_DLB_ERROR, (const char *)packet, MAVLINK_MSG_ID_R10_DLB_ERROR_MIN_LEN, MAVLINK_MSG_ID_R10_DLB_ERROR_LEN, MAVLINK_MSG_ID_R10_DLB_ERROR_CRC);
#endif
}
#endif

#endif

// MESSAGE R10_DLB_ERROR UNPACKING


/**
 * @brief Get field TIME_US from r10_dlb_error message
 *
 * @return  Timestamp in microseconds
 */
static inline uint64_t mavlink_msg_r10_dlb_error_get_TIME_US(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field ERROR_CODE from r10_dlb_error message
 *
 * @return  Datalogger Board Error Code
 */
static inline uint16_t mavlink_msg_r10_dlb_error_get_ERROR_CODE(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Decode a r10_dlb_error message into a struct
 *
 * @param msg The message to decode
 * @param r10_dlb_error C-struct to decode the message contents into
 */
static inline void mavlink_msg_r10_dlb_error_decode(const mavlink_message_t* msg, mavlink_r10_dlb_error_t* r10_dlb_error)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    r10_dlb_error->TIME_US = mavlink_msg_r10_dlb_error_get_TIME_US(msg);
    r10_dlb_error->ERROR_CODE = mavlink_msg_r10_dlb_error_get_ERROR_CODE(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_R10_DLB_ERROR_LEN? msg->len : MAVLINK_MSG_ID_R10_DLB_ERROR_LEN;
        memset(r10_dlb_error, 0, MAVLINK_MSG_ID_R10_DLB_ERROR_LEN);
    memcpy(r10_dlb_error, _MAV_PAYLOAD(msg), len);
#endif
}
