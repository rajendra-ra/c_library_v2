#pragma once
// MESSAGE R10_IPS_DATA PACKING

#define MAVLINK_MSG_ID_R10_IPS_DATA 11073


typedef struct __mavlink_r10_ips_data_t {
 uint64_t TIME_US; /*<  Timestamp in micro seconds*/
 uint16_t VSEN_28IPS; /*<  IPS 28V output voltage reading*/
 uint16_t VSEN_12IPS; /*<  IPS 12V output voltage reading*/
 uint16_t VSEN_5IPS; /*<  IPS 5V output voltage reading*/
 uint16_t ISEN_28IPS; /*<  IPS 28V output current reading*/
 uint16_t ISEN_12IPS; /*<  IPS 12V output current reading*/
 uint16_t ISEN_5IPS; /*<  IPS 5V output current reading*/
 uint16_t PMU_TEMP; /*<  IPS unit temperature*/
 uint16_t SG_TEMP; /*<  SG temperature*/
} mavlink_r10_ips_data_t;

#define MAVLINK_MSG_ID_R10_IPS_DATA_LEN 24
#define MAVLINK_MSG_ID_R10_IPS_DATA_MIN_LEN 24
#define MAVLINK_MSG_ID_11073_LEN 24
#define MAVLINK_MSG_ID_11073_MIN_LEN 24

#define MAVLINK_MSG_ID_R10_IPS_DATA_CRC 23
#define MAVLINK_MSG_ID_11073_CRC 23



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_R10_IPS_DATA { \
    11073, \
    "R10_IPS_DATA", \
    9, \
    {  { "TIME_US", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_r10_ips_data_t, TIME_US) }, \
         { "VSEN_28IPS", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_r10_ips_data_t, VSEN_28IPS) }, \
         { "VSEN_12IPS", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_r10_ips_data_t, VSEN_12IPS) }, \
         { "VSEN_5IPS", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_r10_ips_data_t, VSEN_5IPS) }, \
         { "ISEN_28IPS", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_r10_ips_data_t, ISEN_28IPS) }, \
         { "ISEN_12IPS", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_r10_ips_data_t, ISEN_12IPS) }, \
         { "ISEN_5IPS", NULL, MAVLINK_TYPE_UINT16_T, 0, 18, offsetof(mavlink_r10_ips_data_t, ISEN_5IPS) }, \
         { "PMU_TEMP", NULL, MAVLINK_TYPE_UINT16_T, 0, 20, offsetof(mavlink_r10_ips_data_t, PMU_TEMP) }, \
         { "SG_TEMP", NULL, MAVLINK_TYPE_UINT16_T, 0, 22, offsetof(mavlink_r10_ips_data_t, SG_TEMP) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_R10_IPS_DATA { \
    "R10_IPS_DATA", \
    9, \
    {  { "TIME_US", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_r10_ips_data_t, TIME_US) }, \
         { "VSEN_28IPS", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_r10_ips_data_t, VSEN_28IPS) }, \
         { "VSEN_12IPS", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_r10_ips_data_t, VSEN_12IPS) }, \
         { "VSEN_5IPS", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_r10_ips_data_t, VSEN_5IPS) }, \
         { "ISEN_28IPS", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_r10_ips_data_t, ISEN_28IPS) }, \
         { "ISEN_12IPS", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_r10_ips_data_t, ISEN_12IPS) }, \
         { "ISEN_5IPS", NULL, MAVLINK_TYPE_UINT16_T, 0, 18, offsetof(mavlink_r10_ips_data_t, ISEN_5IPS) }, \
         { "PMU_TEMP", NULL, MAVLINK_TYPE_UINT16_T, 0, 20, offsetof(mavlink_r10_ips_data_t, PMU_TEMP) }, \
         { "SG_TEMP", NULL, MAVLINK_TYPE_UINT16_T, 0, 22, offsetof(mavlink_r10_ips_data_t, SG_TEMP) }, \
         } \
}
#endif

/**
 * @brief Pack a r10_ips_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param TIME_US  Timestamp in micro seconds
 * @param VSEN_28IPS  IPS 28V output voltage reading
 * @param VSEN_12IPS  IPS 12V output voltage reading
 * @param VSEN_5IPS  IPS 5V output voltage reading
 * @param ISEN_28IPS  IPS 28V output current reading
 * @param ISEN_12IPS  IPS 12V output current reading
 * @param ISEN_5IPS  IPS 5V output current reading
 * @param PMU_TEMP  IPS unit temperature
 * @param SG_TEMP  SG temperature
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_r10_ips_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t TIME_US, uint16_t VSEN_28IPS, uint16_t VSEN_12IPS, uint16_t VSEN_5IPS, uint16_t ISEN_28IPS, uint16_t ISEN_12IPS, uint16_t ISEN_5IPS, uint16_t PMU_TEMP, uint16_t SG_TEMP)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_R10_IPS_DATA_LEN];
    _mav_put_uint64_t(buf, 0, TIME_US);
    _mav_put_uint16_t(buf, 8, VSEN_28IPS);
    _mav_put_uint16_t(buf, 10, VSEN_12IPS);
    _mav_put_uint16_t(buf, 12, VSEN_5IPS);
    _mav_put_uint16_t(buf, 14, ISEN_28IPS);
    _mav_put_uint16_t(buf, 16, ISEN_12IPS);
    _mav_put_uint16_t(buf, 18, ISEN_5IPS);
    _mav_put_uint16_t(buf, 20, PMU_TEMP);
    _mav_put_uint16_t(buf, 22, SG_TEMP);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_R10_IPS_DATA_LEN);
#else
    mavlink_r10_ips_data_t packet;
    packet.TIME_US = TIME_US;
    packet.VSEN_28IPS = VSEN_28IPS;
    packet.VSEN_12IPS = VSEN_12IPS;
    packet.VSEN_5IPS = VSEN_5IPS;
    packet.ISEN_28IPS = ISEN_28IPS;
    packet.ISEN_12IPS = ISEN_12IPS;
    packet.ISEN_5IPS = ISEN_5IPS;
    packet.PMU_TEMP = PMU_TEMP;
    packet.SG_TEMP = SG_TEMP;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_R10_IPS_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_R10_IPS_DATA;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_R10_IPS_DATA_MIN_LEN, MAVLINK_MSG_ID_R10_IPS_DATA_LEN, MAVLINK_MSG_ID_R10_IPS_DATA_CRC);
}

/**
 * @brief Pack a r10_ips_data message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param TIME_US  Timestamp in micro seconds
 * @param VSEN_28IPS  IPS 28V output voltage reading
 * @param VSEN_12IPS  IPS 12V output voltage reading
 * @param VSEN_5IPS  IPS 5V output voltage reading
 * @param ISEN_28IPS  IPS 28V output current reading
 * @param ISEN_12IPS  IPS 12V output current reading
 * @param ISEN_5IPS  IPS 5V output current reading
 * @param PMU_TEMP  IPS unit temperature
 * @param SG_TEMP  SG temperature
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_r10_ips_data_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t TIME_US,uint16_t VSEN_28IPS,uint16_t VSEN_12IPS,uint16_t VSEN_5IPS,uint16_t ISEN_28IPS,uint16_t ISEN_12IPS,uint16_t ISEN_5IPS,uint16_t PMU_TEMP,uint16_t SG_TEMP)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_R10_IPS_DATA_LEN];
    _mav_put_uint64_t(buf, 0, TIME_US);
    _mav_put_uint16_t(buf, 8, VSEN_28IPS);
    _mav_put_uint16_t(buf, 10, VSEN_12IPS);
    _mav_put_uint16_t(buf, 12, VSEN_5IPS);
    _mav_put_uint16_t(buf, 14, ISEN_28IPS);
    _mav_put_uint16_t(buf, 16, ISEN_12IPS);
    _mav_put_uint16_t(buf, 18, ISEN_5IPS);
    _mav_put_uint16_t(buf, 20, PMU_TEMP);
    _mav_put_uint16_t(buf, 22, SG_TEMP);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_R10_IPS_DATA_LEN);
#else
    mavlink_r10_ips_data_t packet;
    packet.TIME_US = TIME_US;
    packet.VSEN_28IPS = VSEN_28IPS;
    packet.VSEN_12IPS = VSEN_12IPS;
    packet.VSEN_5IPS = VSEN_5IPS;
    packet.ISEN_28IPS = ISEN_28IPS;
    packet.ISEN_12IPS = ISEN_12IPS;
    packet.ISEN_5IPS = ISEN_5IPS;
    packet.PMU_TEMP = PMU_TEMP;
    packet.SG_TEMP = SG_TEMP;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_R10_IPS_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_R10_IPS_DATA;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_R10_IPS_DATA_MIN_LEN, MAVLINK_MSG_ID_R10_IPS_DATA_LEN, MAVLINK_MSG_ID_R10_IPS_DATA_CRC);
}

/**
 * @brief Encode a r10_ips_data struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param r10_ips_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_r10_ips_data_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_r10_ips_data_t* r10_ips_data)
{
    return mavlink_msg_r10_ips_data_pack(system_id, component_id, msg, r10_ips_data->TIME_US, r10_ips_data->VSEN_28IPS, r10_ips_data->VSEN_12IPS, r10_ips_data->VSEN_5IPS, r10_ips_data->ISEN_28IPS, r10_ips_data->ISEN_12IPS, r10_ips_data->ISEN_5IPS, r10_ips_data->PMU_TEMP, r10_ips_data->SG_TEMP);
}

/**
 * @brief Encode a r10_ips_data struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param r10_ips_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_r10_ips_data_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_r10_ips_data_t* r10_ips_data)
{
    return mavlink_msg_r10_ips_data_pack_chan(system_id, component_id, chan, msg, r10_ips_data->TIME_US, r10_ips_data->VSEN_28IPS, r10_ips_data->VSEN_12IPS, r10_ips_data->VSEN_5IPS, r10_ips_data->ISEN_28IPS, r10_ips_data->ISEN_12IPS, r10_ips_data->ISEN_5IPS, r10_ips_data->PMU_TEMP, r10_ips_data->SG_TEMP);
}

/**
 * @brief Send a r10_ips_data message
 * @param chan MAVLink channel to send the message
 *
 * @param TIME_US  Timestamp in micro seconds
 * @param VSEN_28IPS  IPS 28V output voltage reading
 * @param VSEN_12IPS  IPS 12V output voltage reading
 * @param VSEN_5IPS  IPS 5V output voltage reading
 * @param ISEN_28IPS  IPS 28V output current reading
 * @param ISEN_12IPS  IPS 12V output current reading
 * @param ISEN_5IPS  IPS 5V output current reading
 * @param PMU_TEMP  IPS unit temperature
 * @param SG_TEMP  SG temperature
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_r10_ips_data_send(mavlink_channel_t chan, uint64_t TIME_US, uint16_t VSEN_28IPS, uint16_t VSEN_12IPS, uint16_t VSEN_5IPS, uint16_t ISEN_28IPS, uint16_t ISEN_12IPS, uint16_t ISEN_5IPS, uint16_t PMU_TEMP, uint16_t SG_TEMP)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_R10_IPS_DATA_LEN];
    _mav_put_uint64_t(buf, 0, TIME_US);
    _mav_put_uint16_t(buf, 8, VSEN_28IPS);
    _mav_put_uint16_t(buf, 10, VSEN_12IPS);
    _mav_put_uint16_t(buf, 12, VSEN_5IPS);
    _mav_put_uint16_t(buf, 14, ISEN_28IPS);
    _mav_put_uint16_t(buf, 16, ISEN_12IPS);
    _mav_put_uint16_t(buf, 18, ISEN_5IPS);
    _mav_put_uint16_t(buf, 20, PMU_TEMP);
    _mav_put_uint16_t(buf, 22, SG_TEMP);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_R10_IPS_DATA, buf, MAVLINK_MSG_ID_R10_IPS_DATA_MIN_LEN, MAVLINK_MSG_ID_R10_IPS_DATA_LEN, MAVLINK_MSG_ID_R10_IPS_DATA_CRC);
#else
    mavlink_r10_ips_data_t packet;
    packet.TIME_US = TIME_US;
    packet.VSEN_28IPS = VSEN_28IPS;
    packet.VSEN_12IPS = VSEN_12IPS;
    packet.VSEN_5IPS = VSEN_5IPS;
    packet.ISEN_28IPS = ISEN_28IPS;
    packet.ISEN_12IPS = ISEN_12IPS;
    packet.ISEN_5IPS = ISEN_5IPS;
    packet.PMU_TEMP = PMU_TEMP;
    packet.SG_TEMP = SG_TEMP;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_R10_IPS_DATA, (const char *)&packet, MAVLINK_MSG_ID_R10_IPS_DATA_MIN_LEN, MAVLINK_MSG_ID_R10_IPS_DATA_LEN, MAVLINK_MSG_ID_R10_IPS_DATA_CRC);
#endif
}

/**
 * @brief Send a r10_ips_data message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_r10_ips_data_send_struct(mavlink_channel_t chan, const mavlink_r10_ips_data_t* r10_ips_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_r10_ips_data_send(chan, r10_ips_data->TIME_US, r10_ips_data->VSEN_28IPS, r10_ips_data->VSEN_12IPS, r10_ips_data->VSEN_5IPS, r10_ips_data->ISEN_28IPS, r10_ips_data->ISEN_12IPS, r10_ips_data->ISEN_5IPS, r10_ips_data->PMU_TEMP, r10_ips_data->SG_TEMP);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_R10_IPS_DATA, (const char *)r10_ips_data, MAVLINK_MSG_ID_R10_IPS_DATA_MIN_LEN, MAVLINK_MSG_ID_R10_IPS_DATA_LEN, MAVLINK_MSG_ID_R10_IPS_DATA_CRC);
#endif
}

#if MAVLINK_MSG_ID_R10_IPS_DATA_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_r10_ips_data_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t TIME_US, uint16_t VSEN_28IPS, uint16_t VSEN_12IPS, uint16_t VSEN_5IPS, uint16_t ISEN_28IPS, uint16_t ISEN_12IPS, uint16_t ISEN_5IPS, uint16_t PMU_TEMP, uint16_t SG_TEMP)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, TIME_US);
    _mav_put_uint16_t(buf, 8, VSEN_28IPS);
    _mav_put_uint16_t(buf, 10, VSEN_12IPS);
    _mav_put_uint16_t(buf, 12, VSEN_5IPS);
    _mav_put_uint16_t(buf, 14, ISEN_28IPS);
    _mav_put_uint16_t(buf, 16, ISEN_12IPS);
    _mav_put_uint16_t(buf, 18, ISEN_5IPS);
    _mav_put_uint16_t(buf, 20, PMU_TEMP);
    _mav_put_uint16_t(buf, 22, SG_TEMP);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_R10_IPS_DATA, buf, MAVLINK_MSG_ID_R10_IPS_DATA_MIN_LEN, MAVLINK_MSG_ID_R10_IPS_DATA_LEN, MAVLINK_MSG_ID_R10_IPS_DATA_CRC);
#else
    mavlink_r10_ips_data_t *packet = (mavlink_r10_ips_data_t *)msgbuf;
    packet->TIME_US = TIME_US;
    packet->VSEN_28IPS = VSEN_28IPS;
    packet->VSEN_12IPS = VSEN_12IPS;
    packet->VSEN_5IPS = VSEN_5IPS;
    packet->ISEN_28IPS = ISEN_28IPS;
    packet->ISEN_12IPS = ISEN_12IPS;
    packet->ISEN_5IPS = ISEN_5IPS;
    packet->PMU_TEMP = PMU_TEMP;
    packet->SG_TEMP = SG_TEMP;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_R10_IPS_DATA, (const char *)packet, MAVLINK_MSG_ID_R10_IPS_DATA_MIN_LEN, MAVLINK_MSG_ID_R10_IPS_DATA_LEN, MAVLINK_MSG_ID_R10_IPS_DATA_CRC);
#endif
}
#endif

#endif

// MESSAGE R10_IPS_DATA UNPACKING


/**
 * @brief Get field TIME_US from r10_ips_data message
 *
 * @return  Timestamp in micro seconds
 */
static inline uint64_t mavlink_msg_r10_ips_data_get_TIME_US(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field VSEN_28IPS from r10_ips_data message
 *
 * @return  IPS 28V output voltage reading
 */
static inline uint16_t mavlink_msg_r10_ips_data_get_VSEN_28IPS(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Get field VSEN_12IPS from r10_ips_data message
 *
 * @return  IPS 12V output voltage reading
 */
static inline uint16_t mavlink_msg_r10_ips_data_get_VSEN_12IPS(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  10);
}

/**
 * @brief Get field VSEN_5IPS from r10_ips_data message
 *
 * @return  IPS 5V output voltage reading
 */
static inline uint16_t mavlink_msg_r10_ips_data_get_VSEN_5IPS(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  12);
}

/**
 * @brief Get field ISEN_28IPS from r10_ips_data message
 *
 * @return  IPS 28V output current reading
 */
static inline uint16_t mavlink_msg_r10_ips_data_get_ISEN_28IPS(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  14);
}

/**
 * @brief Get field ISEN_12IPS from r10_ips_data message
 *
 * @return  IPS 12V output current reading
 */
static inline uint16_t mavlink_msg_r10_ips_data_get_ISEN_12IPS(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  16);
}

/**
 * @brief Get field ISEN_5IPS from r10_ips_data message
 *
 * @return  IPS 5V output current reading
 */
static inline uint16_t mavlink_msg_r10_ips_data_get_ISEN_5IPS(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  18);
}

/**
 * @brief Get field PMU_TEMP from r10_ips_data message
 *
 * @return  IPS unit temperature
 */
static inline uint16_t mavlink_msg_r10_ips_data_get_PMU_TEMP(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  20);
}

/**
 * @brief Get field SG_TEMP from r10_ips_data message
 *
 * @return  SG temperature
 */
static inline uint16_t mavlink_msg_r10_ips_data_get_SG_TEMP(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  22);
}

/**
 * @brief Decode a r10_ips_data message into a struct
 *
 * @param msg The message to decode
 * @param r10_ips_data C-struct to decode the message contents into
 */
static inline void mavlink_msg_r10_ips_data_decode(const mavlink_message_t* msg, mavlink_r10_ips_data_t* r10_ips_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    r10_ips_data->TIME_US = mavlink_msg_r10_ips_data_get_TIME_US(msg);
    r10_ips_data->VSEN_28IPS = mavlink_msg_r10_ips_data_get_VSEN_28IPS(msg);
    r10_ips_data->VSEN_12IPS = mavlink_msg_r10_ips_data_get_VSEN_12IPS(msg);
    r10_ips_data->VSEN_5IPS = mavlink_msg_r10_ips_data_get_VSEN_5IPS(msg);
    r10_ips_data->ISEN_28IPS = mavlink_msg_r10_ips_data_get_ISEN_28IPS(msg);
    r10_ips_data->ISEN_12IPS = mavlink_msg_r10_ips_data_get_ISEN_12IPS(msg);
    r10_ips_data->ISEN_5IPS = mavlink_msg_r10_ips_data_get_ISEN_5IPS(msg);
    r10_ips_data->PMU_TEMP = mavlink_msg_r10_ips_data_get_PMU_TEMP(msg);
    r10_ips_data->SG_TEMP = mavlink_msg_r10_ips_data_get_SG_TEMP(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_R10_IPS_DATA_LEN? msg->len : MAVLINK_MSG_ID_R10_IPS_DATA_LEN;
        memset(r10_ips_data, 0, MAVLINK_MSG_ID_R10_IPS_DATA_LEN);
    memcpy(r10_ips_data, _MAV_PAYLOAD(msg), len);
#endif
}
