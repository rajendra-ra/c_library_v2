#pragma once
// MESSAGE R10_BAT_DATA PACKING

#define MAVLINK_MSG_ID_R10_BAT_DATA 11074


typedef struct __mavlink_r10_bat_data_t {
 uint64_t TIME_US; /*<  Timestamp in micro seconds*/
 uint16_t VSEN_OSB; /*<  Onshore battery voltage*/
 uint16_t VSEN_OBB; /*<  Onboard battery voltage*/
 uint16_t ISENS_OSB; /*<  Onshore battery current*/
 uint16_t ISENS_OBB; /*<  Onboard battery current*/
 uint8_t OSB_TEMP; /*<  Onshore battery temperature*/
 uint8_t OBB_TEMP; /*<  Onboard battery temperature*/
} mavlink_r10_bat_data_t;

#define MAVLINK_MSG_ID_R10_BAT_DATA_LEN 18
#define MAVLINK_MSG_ID_R10_BAT_DATA_MIN_LEN 18
#define MAVLINK_MSG_ID_11074_LEN 18
#define MAVLINK_MSG_ID_11074_MIN_LEN 18

#define MAVLINK_MSG_ID_R10_BAT_DATA_CRC 84
#define MAVLINK_MSG_ID_11074_CRC 84



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_R10_BAT_DATA { \
    11074, \
    "R10_BAT_DATA", \
    7, \
    {  { "TIME_US", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_r10_bat_data_t, TIME_US) }, \
         { "VSEN_OSB", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_r10_bat_data_t, VSEN_OSB) }, \
         { "VSEN_OBB", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_r10_bat_data_t, VSEN_OBB) }, \
         { "ISENS_OSB", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_r10_bat_data_t, ISENS_OSB) }, \
         { "ISENS_OBB", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_r10_bat_data_t, ISENS_OBB) }, \
         { "OSB_TEMP", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_r10_bat_data_t, OSB_TEMP) }, \
         { "OBB_TEMP", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_r10_bat_data_t, OBB_TEMP) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_R10_BAT_DATA { \
    "R10_BAT_DATA", \
    7, \
    {  { "TIME_US", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_r10_bat_data_t, TIME_US) }, \
         { "VSEN_OSB", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_r10_bat_data_t, VSEN_OSB) }, \
         { "VSEN_OBB", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_r10_bat_data_t, VSEN_OBB) }, \
         { "ISENS_OSB", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_r10_bat_data_t, ISENS_OSB) }, \
         { "ISENS_OBB", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_r10_bat_data_t, ISENS_OBB) }, \
         { "OSB_TEMP", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_r10_bat_data_t, OSB_TEMP) }, \
         { "OBB_TEMP", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_r10_bat_data_t, OBB_TEMP) }, \
         } \
}
#endif

/**
 * @brief Pack a r10_bat_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param TIME_US  Timestamp in micro seconds
 * @param VSEN_OSB  Onshore battery voltage
 * @param VSEN_OBB  Onboard battery voltage
 * @param ISENS_OSB  Onshore battery current
 * @param ISENS_OBB  Onboard battery current
 * @param OSB_TEMP  Onshore battery temperature
 * @param OBB_TEMP  Onboard battery temperature
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_r10_bat_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t TIME_US, uint16_t VSEN_OSB, uint16_t VSEN_OBB, uint16_t ISENS_OSB, uint16_t ISENS_OBB, uint8_t OSB_TEMP, uint8_t OBB_TEMP)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_R10_BAT_DATA_LEN];
    _mav_put_uint64_t(buf, 0, TIME_US);
    _mav_put_uint16_t(buf, 8, VSEN_OSB);
    _mav_put_uint16_t(buf, 10, VSEN_OBB);
    _mav_put_uint16_t(buf, 12, ISENS_OSB);
    _mav_put_uint16_t(buf, 14, ISENS_OBB);
    _mav_put_uint8_t(buf, 16, OSB_TEMP);
    _mav_put_uint8_t(buf, 17, OBB_TEMP);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_R10_BAT_DATA_LEN);
#else
    mavlink_r10_bat_data_t packet;
    packet.TIME_US = TIME_US;
    packet.VSEN_OSB = VSEN_OSB;
    packet.VSEN_OBB = VSEN_OBB;
    packet.ISENS_OSB = ISENS_OSB;
    packet.ISENS_OBB = ISENS_OBB;
    packet.OSB_TEMP = OSB_TEMP;
    packet.OBB_TEMP = OBB_TEMP;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_R10_BAT_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_R10_BAT_DATA;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_R10_BAT_DATA_MIN_LEN, MAVLINK_MSG_ID_R10_BAT_DATA_LEN, MAVLINK_MSG_ID_R10_BAT_DATA_CRC);
}

/**
 * @brief Pack a r10_bat_data message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param TIME_US  Timestamp in micro seconds
 * @param VSEN_OSB  Onshore battery voltage
 * @param VSEN_OBB  Onboard battery voltage
 * @param ISENS_OSB  Onshore battery current
 * @param ISENS_OBB  Onboard battery current
 * @param OSB_TEMP  Onshore battery temperature
 * @param OBB_TEMP  Onboard battery temperature
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_r10_bat_data_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t TIME_US,uint16_t VSEN_OSB,uint16_t VSEN_OBB,uint16_t ISENS_OSB,uint16_t ISENS_OBB,uint8_t OSB_TEMP,uint8_t OBB_TEMP)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_R10_BAT_DATA_LEN];
    _mav_put_uint64_t(buf, 0, TIME_US);
    _mav_put_uint16_t(buf, 8, VSEN_OSB);
    _mav_put_uint16_t(buf, 10, VSEN_OBB);
    _mav_put_uint16_t(buf, 12, ISENS_OSB);
    _mav_put_uint16_t(buf, 14, ISENS_OBB);
    _mav_put_uint8_t(buf, 16, OSB_TEMP);
    _mav_put_uint8_t(buf, 17, OBB_TEMP);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_R10_BAT_DATA_LEN);
#else
    mavlink_r10_bat_data_t packet;
    packet.TIME_US = TIME_US;
    packet.VSEN_OSB = VSEN_OSB;
    packet.VSEN_OBB = VSEN_OBB;
    packet.ISENS_OSB = ISENS_OSB;
    packet.ISENS_OBB = ISENS_OBB;
    packet.OSB_TEMP = OSB_TEMP;
    packet.OBB_TEMP = OBB_TEMP;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_R10_BAT_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_R10_BAT_DATA;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_R10_BAT_DATA_MIN_LEN, MAVLINK_MSG_ID_R10_BAT_DATA_LEN, MAVLINK_MSG_ID_R10_BAT_DATA_CRC);
}

/**
 * @brief Encode a r10_bat_data struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param r10_bat_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_r10_bat_data_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_r10_bat_data_t* r10_bat_data)
{
    return mavlink_msg_r10_bat_data_pack(system_id, component_id, msg, r10_bat_data->TIME_US, r10_bat_data->VSEN_OSB, r10_bat_data->VSEN_OBB, r10_bat_data->ISENS_OSB, r10_bat_data->ISENS_OBB, r10_bat_data->OSB_TEMP, r10_bat_data->OBB_TEMP);
}

/**
 * @brief Encode a r10_bat_data struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param r10_bat_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_r10_bat_data_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_r10_bat_data_t* r10_bat_data)
{
    return mavlink_msg_r10_bat_data_pack_chan(system_id, component_id, chan, msg, r10_bat_data->TIME_US, r10_bat_data->VSEN_OSB, r10_bat_data->VSEN_OBB, r10_bat_data->ISENS_OSB, r10_bat_data->ISENS_OBB, r10_bat_data->OSB_TEMP, r10_bat_data->OBB_TEMP);
}

/**
 * @brief Send a r10_bat_data message
 * @param chan MAVLink channel to send the message
 *
 * @param TIME_US  Timestamp in micro seconds
 * @param VSEN_OSB  Onshore battery voltage
 * @param VSEN_OBB  Onboard battery voltage
 * @param ISENS_OSB  Onshore battery current
 * @param ISENS_OBB  Onboard battery current
 * @param OSB_TEMP  Onshore battery temperature
 * @param OBB_TEMP  Onboard battery temperature
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_r10_bat_data_send(mavlink_channel_t chan, uint64_t TIME_US, uint16_t VSEN_OSB, uint16_t VSEN_OBB, uint16_t ISENS_OSB, uint16_t ISENS_OBB, uint8_t OSB_TEMP, uint8_t OBB_TEMP)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_R10_BAT_DATA_LEN];
    _mav_put_uint64_t(buf, 0, TIME_US);
    _mav_put_uint16_t(buf, 8, VSEN_OSB);
    _mav_put_uint16_t(buf, 10, VSEN_OBB);
    _mav_put_uint16_t(buf, 12, ISENS_OSB);
    _mav_put_uint16_t(buf, 14, ISENS_OBB);
    _mav_put_uint8_t(buf, 16, OSB_TEMP);
    _mav_put_uint8_t(buf, 17, OBB_TEMP);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_R10_BAT_DATA, buf, MAVLINK_MSG_ID_R10_BAT_DATA_MIN_LEN, MAVLINK_MSG_ID_R10_BAT_DATA_LEN, MAVLINK_MSG_ID_R10_BAT_DATA_CRC);
#else
    mavlink_r10_bat_data_t packet;
    packet.TIME_US = TIME_US;
    packet.VSEN_OSB = VSEN_OSB;
    packet.VSEN_OBB = VSEN_OBB;
    packet.ISENS_OSB = ISENS_OSB;
    packet.ISENS_OBB = ISENS_OBB;
    packet.OSB_TEMP = OSB_TEMP;
    packet.OBB_TEMP = OBB_TEMP;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_R10_BAT_DATA, (const char *)&packet, MAVLINK_MSG_ID_R10_BAT_DATA_MIN_LEN, MAVLINK_MSG_ID_R10_BAT_DATA_LEN, MAVLINK_MSG_ID_R10_BAT_DATA_CRC);
#endif
}

/**
 * @brief Send a r10_bat_data message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_r10_bat_data_send_struct(mavlink_channel_t chan, const mavlink_r10_bat_data_t* r10_bat_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_r10_bat_data_send(chan, r10_bat_data->TIME_US, r10_bat_data->VSEN_OSB, r10_bat_data->VSEN_OBB, r10_bat_data->ISENS_OSB, r10_bat_data->ISENS_OBB, r10_bat_data->OSB_TEMP, r10_bat_data->OBB_TEMP);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_R10_BAT_DATA, (const char *)r10_bat_data, MAVLINK_MSG_ID_R10_BAT_DATA_MIN_LEN, MAVLINK_MSG_ID_R10_BAT_DATA_LEN, MAVLINK_MSG_ID_R10_BAT_DATA_CRC);
#endif
}

#if MAVLINK_MSG_ID_R10_BAT_DATA_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_r10_bat_data_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t TIME_US, uint16_t VSEN_OSB, uint16_t VSEN_OBB, uint16_t ISENS_OSB, uint16_t ISENS_OBB, uint8_t OSB_TEMP, uint8_t OBB_TEMP)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, TIME_US);
    _mav_put_uint16_t(buf, 8, VSEN_OSB);
    _mav_put_uint16_t(buf, 10, VSEN_OBB);
    _mav_put_uint16_t(buf, 12, ISENS_OSB);
    _mav_put_uint16_t(buf, 14, ISENS_OBB);
    _mav_put_uint8_t(buf, 16, OSB_TEMP);
    _mav_put_uint8_t(buf, 17, OBB_TEMP);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_R10_BAT_DATA, buf, MAVLINK_MSG_ID_R10_BAT_DATA_MIN_LEN, MAVLINK_MSG_ID_R10_BAT_DATA_LEN, MAVLINK_MSG_ID_R10_BAT_DATA_CRC);
#else
    mavlink_r10_bat_data_t *packet = (mavlink_r10_bat_data_t *)msgbuf;
    packet->TIME_US = TIME_US;
    packet->VSEN_OSB = VSEN_OSB;
    packet->VSEN_OBB = VSEN_OBB;
    packet->ISENS_OSB = ISENS_OSB;
    packet->ISENS_OBB = ISENS_OBB;
    packet->OSB_TEMP = OSB_TEMP;
    packet->OBB_TEMP = OBB_TEMP;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_R10_BAT_DATA, (const char *)packet, MAVLINK_MSG_ID_R10_BAT_DATA_MIN_LEN, MAVLINK_MSG_ID_R10_BAT_DATA_LEN, MAVLINK_MSG_ID_R10_BAT_DATA_CRC);
#endif
}
#endif

#endif

// MESSAGE R10_BAT_DATA UNPACKING


/**
 * @brief Get field TIME_US from r10_bat_data message
 *
 * @return  Timestamp in micro seconds
 */
static inline uint64_t mavlink_msg_r10_bat_data_get_TIME_US(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field VSEN_OSB from r10_bat_data message
 *
 * @return  Onshore battery voltage
 */
static inline uint16_t mavlink_msg_r10_bat_data_get_VSEN_OSB(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Get field VSEN_OBB from r10_bat_data message
 *
 * @return  Onboard battery voltage
 */
static inline uint16_t mavlink_msg_r10_bat_data_get_VSEN_OBB(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  10);
}

/**
 * @brief Get field ISENS_OSB from r10_bat_data message
 *
 * @return  Onshore battery current
 */
static inline uint16_t mavlink_msg_r10_bat_data_get_ISENS_OSB(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  12);
}

/**
 * @brief Get field ISENS_OBB from r10_bat_data message
 *
 * @return  Onboard battery current
 */
static inline uint16_t mavlink_msg_r10_bat_data_get_ISENS_OBB(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  14);
}

/**
 * @brief Get field OSB_TEMP from r10_bat_data message
 *
 * @return  Onshore battery temperature
 */
static inline uint8_t mavlink_msg_r10_bat_data_get_OSB_TEMP(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  16);
}

/**
 * @brief Get field OBB_TEMP from r10_bat_data message
 *
 * @return  Onboard battery temperature
 */
static inline uint8_t mavlink_msg_r10_bat_data_get_OBB_TEMP(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  17);
}

/**
 * @brief Decode a r10_bat_data message into a struct
 *
 * @param msg The message to decode
 * @param r10_bat_data C-struct to decode the message contents into
 */
static inline void mavlink_msg_r10_bat_data_decode(const mavlink_message_t* msg, mavlink_r10_bat_data_t* r10_bat_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    r10_bat_data->TIME_US = mavlink_msg_r10_bat_data_get_TIME_US(msg);
    r10_bat_data->VSEN_OSB = mavlink_msg_r10_bat_data_get_VSEN_OSB(msg);
    r10_bat_data->VSEN_OBB = mavlink_msg_r10_bat_data_get_VSEN_OBB(msg);
    r10_bat_data->ISENS_OSB = mavlink_msg_r10_bat_data_get_ISENS_OSB(msg);
    r10_bat_data->ISENS_OBB = mavlink_msg_r10_bat_data_get_ISENS_OBB(msg);
    r10_bat_data->OSB_TEMP = mavlink_msg_r10_bat_data_get_OSB_TEMP(msg);
    r10_bat_data->OBB_TEMP = mavlink_msg_r10_bat_data_get_OBB_TEMP(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_R10_BAT_DATA_LEN? msg->len : MAVLINK_MSG_ID_R10_BAT_DATA_LEN;
        memset(r10_bat_data, 0, MAVLINK_MSG_ID_R10_BAT_DATA_LEN);
    memcpy(r10_bat_data, _MAV_PAYLOAD(msg), len);
#endif
}
