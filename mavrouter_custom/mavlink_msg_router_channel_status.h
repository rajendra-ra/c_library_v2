#pragma once
// MESSAGE ROUTER_CHANNEL_STATUS PACKING

#define MAVLINK_MSG_ID_ROUTER_CHANNEL_STATUS 11078


typedef struct __mavlink_router_channel_status_t {
 uint8_t Channel_id; /*<  Current channel in use */
 uint8_t channel_active; /*<  Bitmask of active channels*/
 uint8_t total_channels; /*<  Number of physical channels connected(max 8)*/
} mavlink_router_channel_status_t;

#define MAVLINK_MSG_ID_ROUTER_CHANNEL_STATUS_LEN 3
#define MAVLINK_MSG_ID_ROUTER_CHANNEL_STATUS_MIN_LEN 3
#define MAVLINK_MSG_ID_11078_LEN 3
#define MAVLINK_MSG_ID_11078_MIN_LEN 3

#define MAVLINK_MSG_ID_ROUTER_CHANNEL_STATUS_CRC 27
#define MAVLINK_MSG_ID_11078_CRC 27



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ROUTER_CHANNEL_STATUS { \
    11078, \
    "ROUTER_CHANNEL_STATUS", \
    3, \
    {  { "Channel_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_router_channel_status_t, Channel_id) }, \
         { "channel_active", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_router_channel_status_t, channel_active) }, \
         { "total_channels", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_router_channel_status_t, total_channels) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ROUTER_CHANNEL_STATUS { \
    "ROUTER_CHANNEL_STATUS", \
    3, \
    {  { "Channel_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_router_channel_status_t, Channel_id) }, \
         { "channel_active", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_router_channel_status_t, channel_active) }, \
         { "total_channels", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_router_channel_status_t, total_channels) }, \
         } \
}
#endif

/**
 * @brief Pack a router_channel_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param Channel_id  Current channel in use 
 * @param channel_active  Bitmask of active channels
 * @param total_channels  Number of physical channels connected(max 8)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_router_channel_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t Channel_id, uint8_t channel_active, uint8_t total_channels)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ROUTER_CHANNEL_STATUS_LEN];
    _mav_put_uint8_t(buf, 0, Channel_id);
    _mav_put_uint8_t(buf, 1, channel_active);
    _mav_put_uint8_t(buf, 2, total_channels);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ROUTER_CHANNEL_STATUS_LEN);
#else
    mavlink_router_channel_status_t packet;
    packet.Channel_id = Channel_id;
    packet.channel_active = channel_active;
    packet.total_channels = total_channels;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ROUTER_CHANNEL_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ROUTER_CHANNEL_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ROUTER_CHANNEL_STATUS_MIN_LEN, MAVLINK_MSG_ID_ROUTER_CHANNEL_STATUS_LEN, MAVLINK_MSG_ID_ROUTER_CHANNEL_STATUS_CRC);
}

/**
 * @brief Pack a router_channel_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param Channel_id  Current channel in use 
 * @param channel_active  Bitmask of active channels
 * @param total_channels  Number of physical channels connected(max 8)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_router_channel_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t Channel_id,uint8_t channel_active,uint8_t total_channels)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ROUTER_CHANNEL_STATUS_LEN];
    _mav_put_uint8_t(buf, 0, Channel_id);
    _mav_put_uint8_t(buf, 1, channel_active);
    _mav_put_uint8_t(buf, 2, total_channels);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ROUTER_CHANNEL_STATUS_LEN);
#else
    mavlink_router_channel_status_t packet;
    packet.Channel_id = Channel_id;
    packet.channel_active = channel_active;
    packet.total_channels = total_channels;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ROUTER_CHANNEL_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ROUTER_CHANNEL_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ROUTER_CHANNEL_STATUS_MIN_LEN, MAVLINK_MSG_ID_ROUTER_CHANNEL_STATUS_LEN, MAVLINK_MSG_ID_ROUTER_CHANNEL_STATUS_CRC);
}

/**
 * @brief Encode a router_channel_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param router_channel_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_router_channel_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_router_channel_status_t* router_channel_status)
{
    return mavlink_msg_router_channel_status_pack(system_id, component_id, msg, router_channel_status->Channel_id, router_channel_status->channel_active, router_channel_status->total_channels);
}

/**
 * @brief Encode a router_channel_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param router_channel_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_router_channel_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_router_channel_status_t* router_channel_status)
{
    return mavlink_msg_router_channel_status_pack_chan(system_id, component_id, chan, msg, router_channel_status->Channel_id, router_channel_status->channel_active, router_channel_status->total_channels);
}

/**
 * @brief Send a router_channel_status message
 * @param chan MAVLink channel to send the message
 *
 * @param Channel_id  Current channel in use 
 * @param channel_active  Bitmask of active channels
 * @param total_channels  Number of physical channels connected(max 8)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_router_channel_status_send(mavlink_channel_t chan, uint8_t Channel_id, uint8_t channel_active, uint8_t total_channels)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ROUTER_CHANNEL_STATUS_LEN];
    _mav_put_uint8_t(buf, 0, Channel_id);
    _mav_put_uint8_t(buf, 1, channel_active);
    _mav_put_uint8_t(buf, 2, total_channels);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROUTER_CHANNEL_STATUS, buf, MAVLINK_MSG_ID_ROUTER_CHANNEL_STATUS_MIN_LEN, MAVLINK_MSG_ID_ROUTER_CHANNEL_STATUS_LEN, MAVLINK_MSG_ID_ROUTER_CHANNEL_STATUS_CRC);
#else
    mavlink_router_channel_status_t packet;
    packet.Channel_id = Channel_id;
    packet.channel_active = channel_active;
    packet.total_channels = total_channels;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROUTER_CHANNEL_STATUS, (const char *)&packet, MAVLINK_MSG_ID_ROUTER_CHANNEL_STATUS_MIN_LEN, MAVLINK_MSG_ID_ROUTER_CHANNEL_STATUS_LEN, MAVLINK_MSG_ID_ROUTER_CHANNEL_STATUS_CRC);
#endif
}

/**
 * @brief Send a router_channel_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_router_channel_status_send_struct(mavlink_channel_t chan, const mavlink_router_channel_status_t* router_channel_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_router_channel_status_send(chan, router_channel_status->Channel_id, router_channel_status->channel_active, router_channel_status->total_channels);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROUTER_CHANNEL_STATUS, (const char *)router_channel_status, MAVLINK_MSG_ID_ROUTER_CHANNEL_STATUS_MIN_LEN, MAVLINK_MSG_ID_ROUTER_CHANNEL_STATUS_LEN, MAVLINK_MSG_ID_ROUTER_CHANNEL_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_ROUTER_CHANNEL_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_router_channel_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t Channel_id, uint8_t channel_active, uint8_t total_channels)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, Channel_id);
    _mav_put_uint8_t(buf, 1, channel_active);
    _mav_put_uint8_t(buf, 2, total_channels);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROUTER_CHANNEL_STATUS, buf, MAVLINK_MSG_ID_ROUTER_CHANNEL_STATUS_MIN_LEN, MAVLINK_MSG_ID_ROUTER_CHANNEL_STATUS_LEN, MAVLINK_MSG_ID_ROUTER_CHANNEL_STATUS_CRC);
#else
    mavlink_router_channel_status_t *packet = (mavlink_router_channel_status_t *)msgbuf;
    packet->Channel_id = Channel_id;
    packet->channel_active = channel_active;
    packet->total_channels = total_channels;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROUTER_CHANNEL_STATUS, (const char *)packet, MAVLINK_MSG_ID_ROUTER_CHANNEL_STATUS_MIN_LEN, MAVLINK_MSG_ID_ROUTER_CHANNEL_STATUS_LEN, MAVLINK_MSG_ID_ROUTER_CHANNEL_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE ROUTER_CHANNEL_STATUS UNPACKING


/**
 * @brief Get field Channel_id from router_channel_status message
 *
 * @return  Current channel in use 
 */
static inline uint8_t mavlink_msg_router_channel_status_get_Channel_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field channel_active from router_channel_status message
 *
 * @return  Bitmask of active channels
 */
static inline uint8_t mavlink_msg_router_channel_status_get_channel_active(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field total_channels from router_channel_status message
 *
 * @return  Number of physical channels connected(max 8)
 */
static inline uint8_t mavlink_msg_router_channel_status_get_total_channels(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Decode a router_channel_status message into a struct
 *
 * @param msg The message to decode
 * @param router_channel_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_router_channel_status_decode(const mavlink_message_t* msg, mavlink_router_channel_status_t* router_channel_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    router_channel_status->Channel_id = mavlink_msg_router_channel_status_get_Channel_id(msg);
    router_channel_status->channel_active = mavlink_msg_router_channel_status_get_channel_active(msg);
    router_channel_status->total_channels = mavlink_msg_router_channel_status_get_total_channels(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ROUTER_CHANNEL_STATUS_LEN? msg->len : MAVLINK_MSG_ID_ROUTER_CHANNEL_STATUS_LEN;
        memset(router_channel_status, 0, MAVLINK_MSG_ID_ROUTER_CHANNEL_STATUS_LEN);
    memcpy(router_channel_status, _MAV_PAYLOAD(msg), len);
#endif
}
