#pragma once
// MESSAGE R10_OTH_DATA PACKING

#define MAVLINK_MSG_ID_R10_OTH_DATA 11075


typedef struct __mavlink_r10_oth_data_t {
 uint64_t TIME_US; /*<  Timestamp in micro seconds*/
 uint16_t AUX_PIX_VOLT; /*<  5V PMU voltage*/
 uint16_t STM_IN_VOLT; /*<  STM input voltage*/
 uint16_t EX_MUX_PIN1; /*<  Extra mux input pin 1*/
 uint16_t EX_MUX_PIN2; /*<  Extra mux input pin 2*/
 uint8_t ENG_TEMP1; /*<  Engine temperature 1*/
 uint8_t ENG_TEMP2; /*<  Engine temperature 2*/
} mavlink_r10_oth_data_t;

#define MAVLINK_MSG_ID_R10_OTH_DATA_LEN 18
#define MAVLINK_MSG_ID_R10_OTH_DATA_MIN_LEN 18
#define MAVLINK_MSG_ID_11075_LEN 18
#define MAVLINK_MSG_ID_11075_MIN_LEN 18

#define MAVLINK_MSG_ID_R10_OTH_DATA_CRC 13
#define MAVLINK_MSG_ID_11075_CRC 13



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_R10_OTH_DATA { \
    11075, \
    "R10_OTH_DATA", \
    7, \
    {  { "TIME_US", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_r10_oth_data_t, TIME_US) }, \
         { "AUX_PIX_VOLT", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_r10_oth_data_t, AUX_PIX_VOLT) }, \
         { "STM_IN_VOLT", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_r10_oth_data_t, STM_IN_VOLT) }, \
         { "ENG_TEMP1", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_r10_oth_data_t, ENG_TEMP1) }, \
         { "ENG_TEMP2", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_r10_oth_data_t, ENG_TEMP2) }, \
         { "EX_MUX_PIN1", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_r10_oth_data_t, EX_MUX_PIN1) }, \
         { "EX_MUX_PIN2", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_r10_oth_data_t, EX_MUX_PIN2) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_R10_OTH_DATA { \
    "R10_OTH_DATA", \
    7, \
    {  { "TIME_US", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_r10_oth_data_t, TIME_US) }, \
         { "AUX_PIX_VOLT", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_r10_oth_data_t, AUX_PIX_VOLT) }, \
         { "STM_IN_VOLT", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_r10_oth_data_t, STM_IN_VOLT) }, \
         { "ENG_TEMP1", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_r10_oth_data_t, ENG_TEMP1) }, \
         { "ENG_TEMP2", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_r10_oth_data_t, ENG_TEMP2) }, \
         { "EX_MUX_PIN1", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_r10_oth_data_t, EX_MUX_PIN1) }, \
         { "EX_MUX_PIN2", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_r10_oth_data_t, EX_MUX_PIN2) }, \
         } \
}
#endif

/**
 * @brief Pack a r10_oth_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param TIME_US  Timestamp in micro seconds
 * @param AUX_PIX_VOLT  5V PMU voltage
 * @param STM_IN_VOLT  STM input voltage
 * @param ENG_TEMP1  Engine temperature 1
 * @param ENG_TEMP2  Engine temperature 2
 * @param EX_MUX_PIN1  Extra mux input pin 1
 * @param EX_MUX_PIN2  Extra mux input pin 2
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_r10_oth_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t TIME_US, uint16_t AUX_PIX_VOLT, uint16_t STM_IN_VOLT, uint8_t ENG_TEMP1, uint8_t ENG_TEMP2, uint16_t EX_MUX_PIN1, uint16_t EX_MUX_PIN2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_R10_OTH_DATA_LEN];
    _mav_put_uint64_t(buf, 0, TIME_US);
    _mav_put_uint16_t(buf, 8, AUX_PIX_VOLT);
    _mav_put_uint16_t(buf, 10, STM_IN_VOLT);
    _mav_put_uint16_t(buf, 12, EX_MUX_PIN1);
    _mav_put_uint16_t(buf, 14, EX_MUX_PIN2);
    _mav_put_uint8_t(buf, 16, ENG_TEMP1);
    _mav_put_uint8_t(buf, 17, ENG_TEMP2);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_R10_OTH_DATA_LEN);
#else
    mavlink_r10_oth_data_t packet;
    packet.TIME_US = TIME_US;
    packet.AUX_PIX_VOLT = AUX_PIX_VOLT;
    packet.STM_IN_VOLT = STM_IN_VOLT;
    packet.EX_MUX_PIN1 = EX_MUX_PIN1;
    packet.EX_MUX_PIN2 = EX_MUX_PIN2;
    packet.ENG_TEMP1 = ENG_TEMP1;
    packet.ENG_TEMP2 = ENG_TEMP2;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_R10_OTH_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_R10_OTH_DATA;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_R10_OTH_DATA_MIN_LEN, MAVLINK_MSG_ID_R10_OTH_DATA_LEN, MAVLINK_MSG_ID_R10_OTH_DATA_CRC);
}

/**
 * @brief Pack a r10_oth_data message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param TIME_US  Timestamp in micro seconds
 * @param AUX_PIX_VOLT  5V PMU voltage
 * @param STM_IN_VOLT  STM input voltage
 * @param ENG_TEMP1  Engine temperature 1
 * @param ENG_TEMP2  Engine temperature 2
 * @param EX_MUX_PIN1  Extra mux input pin 1
 * @param EX_MUX_PIN2  Extra mux input pin 2
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_r10_oth_data_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t TIME_US,uint16_t AUX_PIX_VOLT,uint16_t STM_IN_VOLT,uint8_t ENG_TEMP1,uint8_t ENG_TEMP2,uint16_t EX_MUX_PIN1,uint16_t EX_MUX_PIN2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_R10_OTH_DATA_LEN];
    _mav_put_uint64_t(buf, 0, TIME_US);
    _mav_put_uint16_t(buf, 8, AUX_PIX_VOLT);
    _mav_put_uint16_t(buf, 10, STM_IN_VOLT);
    _mav_put_uint16_t(buf, 12, EX_MUX_PIN1);
    _mav_put_uint16_t(buf, 14, EX_MUX_PIN2);
    _mav_put_uint8_t(buf, 16, ENG_TEMP1);
    _mav_put_uint8_t(buf, 17, ENG_TEMP2);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_R10_OTH_DATA_LEN);
#else
    mavlink_r10_oth_data_t packet;
    packet.TIME_US = TIME_US;
    packet.AUX_PIX_VOLT = AUX_PIX_VOLT;
    packet.STM_IN_VOLT = STM_IN_VOLT;
    packet.EX_MUX_PIN1 = EX_MUX_PIN1;
    packet.EX_MUX_PIN2 = EX_MUX_PIN2;
    packet.ENG_TEMP1 = ENG_TEMP1;
    packet.ENG_TEMP2 = ENG_TEMP2;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_R10_OTH_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_R10_OTH_DATA;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_R10_OTH_DATA_MIN_LEN, MAVLINK_MSG_ID_R10_OTH_DATA_LEN, MAVLINK_MSG_ID_R10_OTH_DATA_CRC);
}

/**
 * @brief Encode a r10_oth_data struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param r10_oth_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_r10_oth_data_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_r10_oth_data_t* r10_oth_data)
{
    return mavlink_msg_r10_oth_data_pack(system_id, component_id, msg, r10_oth_data->TIME_US, r10_oth_data->AUX_PIX_VOLT, r10_oth_data->STM_IN_VOLT, r10_oth_data->ENG_TEMP1, r10_oth_data->ENG_TEMP2, r10_oth_data->EX_MUX_PIN1, r10_oth_data->EX_MUX_PIN2);
}

/**
 * @brief Encode a r10_oth_data struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param r10_oth_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_r10_oth_data_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_r10_oth_data_t* r10_oth_data)
{
    return mavlink_msg_r10_oth_data_pack_chan(system_id, component_id, chan, msg, r10_oth_data->TIME_US, r10_oth_data->AUX_PIX_VOLT, r10_oth_data->STM_IN_VOLT, r10_oth_data->ENG_TEMP1, r10_oth_data->ENG_TEMP2, r10_oth_data->EX_MUX_PIN1, r10_oth_data->EX_MUX_PIN2);
}

/**
 * @brief Send a r10_oth_data message
 * @param chan MAVLink channel to send the message
 *
 * @param TIME_US  Timestamp in micro seconds
 * @param AUX_PIX_VOLT  5V PMU voltage
 * @param STM_IN_VOLT  STM input voltage
 * @param ENG_TEMP1  Engine temperature 1
 * @param ENG_TEMP2  Engine temperature 2
 * @param EX_MUX_PIN1  Extra mux input pin 1
 * @param EX_MUX_PIN2  Extra mux input pin 2
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_r10_oth_data_send(mavlink_channel_t chan, uint64_t TIME_US, uint16_t AUX_PIX_VOLT, uint16_t STM_IN_VOLT, uint8_t ENG_TEMP1, uint8_t ENG_TEMP2, uint16_t EX_MUX_PIN1, uint16_t EX_MUX_PIN2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_R10_OTH_DATA_LEN];
    _mav_put_uint64_t(buf, 0, TIME_US);
    _mav_put_uint16_t(buf, 8, AUX_PIX_VOLT);
    _mav_put_uint16_t(buf, 10, STM_IN_VOLT);
    _mav_put_uint16_t(buf, 12, EX_MUX_PIN1);
    _mav_put_uint16_t(buf, 14, EX_MUX_PIN2);
    _mav_put_uint8_t(buf, 16, ENG_TEMP1);
    _mav_put_uint8_t(buf, 17, ENG_TEMP2);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_R10_OTH_DATA, buf, MAVLINK_MSG_ID_R10_OTH_DATA_MIN_LEN, MAVLINK_MSG_ID_R10_OTH_DATA_LEN, MAVLINK_MSG_ID_R10_OTH_DATA_CRC);
#else
    mavlink_r10_oth_data_t packet;
    packet.TIME_US = TIME_US;
    packet.AUX_PIX_VOLT = AUX_PIX_VOLT;
    packet.STM_IN_VOLT = STM_IN_VOLT;
    packet.EX_MUX_PIN1 = EX_MUX_PIN1;
    packet.EX_MUX_PIN2 = EX_MUX_PIN2;
    packet.ENG_TEMP1 = ENG_TEMP1;
    packet.ENG_TEMP2 = ENG_TEMP2;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_R10_OTH_DATA, (const char *)&packet, MAVLINK_MSG_ID_R10_OTH_DATA_MIN_LEN, MAVLINK_MSG_ID_R10_OTH_DATA_LEN, MAVLINK_MSG_ID_R10_OTH_DATA_CRC);
#endif
}

/**
 * @brief Send a r10_oth_data message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_r10_oth_data_send_struct(mavlink_channel_t chan, const mavlink_r10_oth_data_t* r10_oth_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_r10_oth_data_send(chan, r10_oth_data->TIME_US, r10_oth_data->AUX_PIX_VOLT, r10_oth_data->STM_IN_VOLT, r10_oth_data->ENG_TEMP1, r10_oth_data->ENG_TEMP2, r10_oth_data->EX_MUX_PIN1, r10_oth_data->EX_MUX_PIN2);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_R10_OTH_DATA, (const char *)r10_oth_data, MAVLINK_MSG_ID_R10_OTH_DATA_MIN_LEN, MAVLINK_MSG_ID_R10_OTH_DATA_LEN, MAVLINK_MSG_ID_R10_OTH_DATA_CRC);
#endif
}

#if MAVLINK_MSG_ID_R10_OTH_DATA_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_r10_oth_data_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t TIME_US, uint16_t AUX_PIX_VOLT, uint16_t STM_IN_VOLT, uint8_t ENG_TEMP1, uint8_t ENG_TEMP2, uint16_t EX_MUX_PIN1, uint16_t EX_MUX_PIN2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, TIME_US);
    _mav_put_uint16_t(buf, 8, AUX_PIX_VOLT);
    _mav_put_uint16_t(buf, 10, STM_IN_VOLT);
    _mav_put_uint16_t(buf, 12, EX_MUX_PIN1);
    _mav_put_uint16_t(buf, 14, EX_MUX_PIN2);
    _mav_put_uint8_t(buf, 16, ENG_TEMP1);
    _mav_put_uint8_t(buf, 17, ENG_TEMP2);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_R10_OTH_DATA, buf, MAVLINK_MSG_ID_R10_OTH_DATA_MIN_LEN, MAVLINK_MSG_ID_R10_OTH_DATA_LEN, MAVLINK_MSG_ID_R10_OTH_DATA_CRC);
#else
    mavlink_r10_oth_data_t *packet = (mavlink_r10_oth_data_t *)msgbuf;
    packet->TIME_US = TIME_US;
    packet->AUX_PIX_VOLT = AUX_PIX_VOLT;
    packet->STM_IN_VOLT = STM_IN_VOLT;
    packet->EX_MUX_PIN1 = EX_MUX_PIN1;
    packet->EX_MUX_PIN2 = EX_MUX_PIN2;
    packet->ENG_TEMP1 = ENG_TEMP1;
    packet->ENG_TEMP2 = ENG_TEMP2;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_R10_OTH_DATA, (const char *)packet, MAVLINK_MSG_ID_R10_OTH_DATA_MIN_LEN, MAVLINK_MSG_ID_R10_OTH_DATA_LEN, MAVLINK_MSG_ID_R10_OTH_DATA_CRC);
#endif
}
#endif

#endif

// MESSAGE R10_OTH_DATA UNPACKING


/**
 * @brief Get field TIME_US from r10_oth_data message
 *
 * @return  Timestamp in micro seconds
 */
static inline uint64_t mavlink_msg_r10_oth_data_get_TIME_US(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field AUX_PIX_VOLT from r10_oth_data message
 *
 * @return  5V PMU voltage
 */
static inline uint16_t mavlink_msg_r10_oth_data_get_AUX_PIX_VOLT(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Get field STM_IN_VOLT from r10_oth_data message
 *
 * @return  STM input voltage
 */
static inline uint16_t mavlink_msg_r10_oth_data_get_STM_IN_VOLT(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  10);
}

/**
 * @brief Get field ENG_TEMP1 from r10_oth_data message
 *
 * @return  Engine temperature 1
 */
static inline uint8_t mavlink_msg_r10_oth_data_get_ENG_TEMP1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  16);
}

/**
 * @brief Get field ENG_TEMP2 from r10_oth_data message
 *
 * @return  Engine temperature 2
 */
static inline uint8_t mavlink_msg_r10_oth_data_get_ENG_TEMP2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  17);
}

/**
 * @brief Get field EX_MUX_PIN1 from r10_oth_data message
 *
 * @return  Extra mux input pin 1
 */
static inline uint16_t mavlink_msg_r10_oth_data_get_EX_MUX_PIN1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  12);
}

/**
 * @brief Get field EX_MUX_PIN2 from r10_oth_data message
 *
 * @return  Extra mux input pin 2
 */
static inline uint16_t mavlink_msg_r10_oth_data_get_EX_MUX_PIN2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  14);
}

/**
 * @brief Decode a r10_oth_data message into a struct
 *
 * @param msg The message to decode
 * @param r10_oth_data C-struct to decode the message contents into
 */
static inline void mavlink_msg_r10_oth_data_decode(const mavlink_message_t* msg, mavlink_r10_oth_data_t* r10_oth_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    r10_oth_data->TIME_US = mavlink_msg_r10_oth_data_get_TIME_US(msg);
    r10_oth_data->AUX_PIX_VOLT = mavlink_msg_r10_oth_data_get_AUX_PIX_VOLT(msg);
    r10_oth_data->STM_IN_VOLT = mavlink_msg_r10_oth_data_get_STM_IN_VOLT(msg);
    r10_oth_data->EX_MUX_PIN1 = mavlink_msg_r10_oth_data_get_EX_MUX_PIN1(msg);
    r10_oth_data->EX_MUX_PIN2 = mavlink_msg_r10_oth_data_get_EX_MUX_PIN2(msg);
    r10_oth_data->ENG_TEMP1 = mavlink_msg_r10_oth_data_get_ENG_TEMP1(msg);
    r10_oth_data->ENG_TEMP2 = mavlink_msg_r10_oth_data_get_ENG_TEMP2(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_R10_OTH_DATA_LEN? msg->len : MAVLINK_MSG_ID_R10_OTH_DATA_LEN;
        memset(r10_oth_data, 0, MAVLINK_MSG_ID_R10_OTH_DATA_LEN);
    memcpy(r10_oth_data, _MAV_PAYLOAD(msg), len);
#endif
}
