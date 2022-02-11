#pragma once
// MESSAGE MID_DATA PACKING

#define MAVLINK_MSG_ID_MID_DATA 11071


typedef struct __mavlink_mid_data_t {
 uint16_t servo4_current; /*< [mA] mid servo4 current*/
 uint16_t servo5_current; /*< [mA] mid servo5 current*/
 uint16_t servo6_current; /*< [mA] mid servo6 current*/
 uint16_t aux_batt_current; /*< [mA] aux battery current*/
 uint8_t servo4_temperature; /*< [C] top servo1 temperature*/
 uint8_t servo5_temperature; /*< [C] top servo2 temperature*/
 uint8_t servo6_temperature; /*< [C] top servo3 temperature*/
 uint8_t bec1_voltage; /*< [V] bec voltage 1*/
 uint8_t bec2_voltage; /*< [V] bec voltage 2*/
 uint8_t converter1_voltage_7V; /*< [V] converter1 voltage*/
 uint8_t converter2_voltage_7V; /*< [V] converter2 voltage*/
 uint8_t converter3_voltage_7V; /*< [V] converter3 voltage*/
 uint8_t converter4_voltage_7V; /*< [V] converter4 voltage*/
 uint8_t uC_buck_voltage_5V; /*< [V] microcontroller buck voltage*/
 uint8_t pixhawk_main_voltage_5V; /*< [V] pixhawk main voltage*/
 uint8_t pixhawk_aux_voltage_5V; /*< [V] pixhawk aux voltage*/
 uint8_t pixhawk_main_extra_voltage; /*< [V] pixhawk main extra voltage*/
 uint8_t jetson_voltage; /*< [V] jetson main voltage*/
 uint8_t jetson_extra; /*< [V] jetson main extra voltage*/
 uint8_t video_main_voltage_12V; /*< [V] video main voltage*/
 uint8_t video_aux_voltage_12V; /*< [V] video aux voltage*/
 uint8_t main_battery_voltage; /*< [V] main battery voltage*/
 uint8_t aux_battery_voltage; /*< [V] aux battery voltage*/
 uint8_t extra; /*<  extra*/
} mavlink_mid_data_t;

#define MAVLINK_MSG_ID_MID_DATA_LEN 28
#define MAVLINK_MSG_ID_MID_DATA_MIN_LEN 28
#define MAVLINK_MSG_ID_11071_LEN 28
#define MAVLINK_MSG_ID_11071_MIN_LEN 28

#define MAVLINK_MSG_ID_MID_DATA_CRC 229
#define MAVLINK_MSG_ID_11071_CRC 229



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_MID_DATA { \
    11071, \
    "MID_DATA", \
    24, \
    {  { "servo4_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_mid_data_t, servo4_current) }, \
         { "servo5_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_mid_data_t, servo5_current) }, \
         { "servo6_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_mid_data_t, servo6_current) }, \
         { "aux_batt_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_mid_data_t, aux_batt_current) }, \
         { "servo4_temperature", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_mid_data_t, servo4_temperature) }, \
         { "servo5_temperature", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_mid_data_t, servo5_temperature) }, \
         { "servo6_temperature", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_mid_data_t, servo6_temperature) }, \
         { "bec1_voltage", NULL, MAVLINK_TYPE_UINT8_T, 0, 11, offsetof(mavlink_mid_data_t, bec1_voltage) }, \
         { "bec2_voltage", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_mid_data_t, bec2_voltage) }, \
         { "converter1_voltage_7V", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_mid_data_t, converter1_voltage_7V) }, \
         { "converter2_voltage_7V", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_mid_data_t, converter2_voltage_7V) }, \
         { "converter3_voltage_7V", NULL, MAVLINK_TYPE_UINT8_T, 0, 15, offsetof(mavlink_mid_data_t, converter3_voltage_7V) }, \
         { "converter4_voltage_7V", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_mid_data_t, converter4_voltage_7V) }, \
         { "uC_buck_voltage_5V", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_mid_data_t, uC_buck_voltage_5V) }, \
         { "pixhawk_main_voltage_5V", NULL, MAVLINK_TYPE_UINT8_T, 0, 18, offsetof(mavlink_mid_data_t, pixhawk_main_voltage_5V) }, \
         { "pixhawk_aux_voltage_5V", NULL, MAVLINK_TYPE_UINT8_T, 0, 19, offsetof(mavlink_mid_data_t, pixhawk_aux_voltage_5V) }, \
         { "pixhawk_main_extra_voltage", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_mid_data_t, pixhawk_main_extra_voltage) }, \
         { "jetson_voltage", NULL, MAVLINK_TYPE_UINT8_T, 0, 21, offsetof(mavlink_mid_data_t, jetson_voltage) }, \
         { "jetson_extra", NULL, MAVLINK_TYPE_UINT8_T, 0, 22, offsetof(mavlink_mid_data_t, jetson_extra) }, \
         { "video_main_voltage_12V", NULL, MAVLINK_TYPE_UINT8_T, 0, 23, offsetof(mavlink_mid_data_t, video_main_voltage_12V) }, \
         { "video_aux_voltage_12V", NULL, MAVLINK_TYPE_UINT8_T, 0, 24, offsetof(mavlink_mid_data_t, video_aux_voltage_12V) }, \
         { "main_battery_voltage", NULL, MAVLINK_TYPE_UINT8_T, 0, 25, offsetof(mavlink_mid_data_t, main_battery_voltage) }, \
         { "aux_battery_voltage", NULL, MAVLINK_TYPE_UINT8_T, 0, 26, offsetof(mavlink_mid_data_t, aux_battery_voltage) }, \
         { "extra", NULL, MAVLINK_TYPE_UINT8_T, 0, 27, offsetof(mavlink_mid_data_t, extra) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_MID_DATA { \
    "MID_DATA", \
    24, \
    {  { "servo4_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_mid_data_t, servo4_current) }, \
         { "servo5_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_mid_data_t, servo5_current) }, \
         { "servo6_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_mid_data_t, servo6_current) }, \
         { "aux_batt_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_mid_data_t, aux_batt_current) }, \
         { "servo4_temperature", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_mid_data_t, servo4_temperature) }, \
         { "servo5_temperature", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_mid_data_t, servo5_temperature) }, \
         { "servo6_temperature", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_mid_data_t, servo6_temperature) }, \
         { "bec1_voltage", NULL, MAVLINK_TYPE_UINT8_T, 0, 11, offsetof(mavlink_mid_data_t, bec1_voltage) }, \
         { "bec2_voltage", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_mid_data_t, bec2_voltage) }, \
         { "converter1_voltage_7V", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_mid_data_t, converter1_voltage_7V) }, \
         { "converter2_voltage_7V", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_mid_data_t, converter2_voltage_7V) }, \
         { "converter3_voltage_7V", NULL, MAVLINK_TYPE_UINT8_T, 0, 15, offsetof(mavlink_mid_data_t, converter3_voltage_7V) }, \
         { "converter4_voltage_7V", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_mid_data_t, converter4_voltage_7V) }, \
         { "uC_buck_voltage_5V", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_mid_data_t, uC_buck_voltage_5V) }, \
         { "pixhawk_main_voltage_5V", NULL, MAVLINK_TYPE_UINT8_T, 0, 18, offsetof(mavlink_mid_data_t, pixhawk_main_voltage_5V) }, \
         { "pixhawk_aux_voltage_5V", NULL, MAVLINK_TYPE_UINT8_T, 0, 19, offsetof(mavlink_mid_data_t, pixhawk_aux_voltage_5V) }, \
         { "pixhawk_main_extra_voltage", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_mid_data_t, pixhawk_main_extra_voltage) }, \
         { "jetson_voltage", NULL, MAVLINK_TYPE_UINT8_T, 0, 21, offsetof(mavlink_mid_data_t, jetson_voltage) }, \
         { "jetson_extra", NULL, MAVLINK_TYPE_UINT8_T, 0, 22, offsetof(mavlink_mid_data_t, jetson_extra) }, \
         { "video_main_voltage_12V", NULL, MAVLINK_TYPE_UINT8_T, 0, 23, offsetof(mavlink_mid_data_t, video_main_voltage_12V) }, \
         { "video_aux_voltage_12V", NULL, MAVLINK_TYPE_UINT8_T, 0, 24, offsetof(mavlink_mid_data_t, video_aux_voltage_12V) }, \
         { "main_battery_voltage", NULL, MAVLINK_TYPE_UINT8_T, 0, 25, offsetof(mavlink_mid_data_t, main_battery_voltage) }, \
         { "aux_battery_voltage", NULL, MAVLINK_TYPE_UINT8_T, 0, 26, offsetof(mavlink_mid_data_t, aux_battery_voltage) }, \
         { "extra", NULL, MAVLINK_TYPE_UINT8_T, 0, 27, offsetof(mavlink_mid_data_t, extra) }, \
         } \
}
#endif

/**
 * @brief Pack a mid_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param servo4_current [mA] mid servo4 current
 * @param servo5_current [mA] mid servo5 current
 * @param servo6_current [mA] mid servo6 current
 * @param aux_batt_current [mA] aux battery current
 * @param servo4_temperature [C] top servo1 temperature
 * @param servo5_temperature [C] top servo2 temperature
 * @param servo6_temperature [C] top servo3 temperature
 * @param bec1_voltage [V] bec voltage 1
 * @param bec2_voltage [V] bec voltage 2
 * @param converter1_voltage_7V [V] converter1 voltage
 * @param converter2_voltage_7V [V] converter2 voltage
 * @param converter3_voltage_7V [V] converter3 voltage
 * @param converter4_voltage_7V [V] converter4 voltage
 * @param uC_buck_voltage_5V [V] microcontroller buck voltage
 * @param pixhawk_main_voltage_5V [V] pixhawk main voltage
 * @param pixhawk_aux_voltage_5V [V] pixhawk aux voltage
 * @param pixhawk_main_extra_voltage [V] pixhawk main extra voltage
 * @param jetson_voltage [V] jetson main voltage
 * @param jetson_extra [V] jetson main extra voltage
 * @param video_main_voltage_12V [V] video main voltage
 * @param video_aux_voltage_12V [V] video aux voltage
 * @param main_battery_voltage [V] main battery voltage
 * @param aux_battery_voltage [V] aux battery voltage
 * @param extra  extra
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_mid_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t servo4_current, uint16_t servo5_current, uint16_t servo6_current, uint16_t aux_batt_current, uint8_t servo4_temperature, uint8_t servo5_temperature, uint8_t servo6_temperature, uint8_t bec1_voltage, uint8_t bec2_voltage, uint8_t converter1_voltage_7V, uint8_t converter2_voltage_7V, uint8_t converter3_voltage_7V, uint8_t converter4_voltage_7V, uint8_t uC_buck_voltage_5V, uint8_t pixhawk_main_voltage_5V, uint8_t pixhawk_aux_voltage_5V, uint8_t pixhawk_main_extra_voltage, uint8_t jetson_voltage, uint8_t jetson_extra, uint8_t video_main_voltage_12V, uint8_t video_aux_voltage_12V, uint8_t main_battery_voltage, uint8_t aux_battery_voltage, uint8_t extra)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MID_DATA_LEN];
    _mav_put_uint16_t(buf, 0, servo4_current);
    _mav_put_uint16_t(buf, 2, servo5_current);
    _mav_put_uint16_t(buf, 4, servo6_current);
    _mav_put_uint16_t(buf, 6, aux_batt_current);
    _mav_put_uint8_t(buf, 8, servo4_temperature);
    _mav_put_uint8_t(buf, 9, servo5_temperature);
    _mav_put_uint8_t(buf, 10, servo6_temperature);
    _mav_put_uint8_t(buf, 11, bec1_voltage);
    _mav_put_uint8_t(buf, 12, bec2_voltage);
    _mav_put_uint8_t(buf, 13, converter1_voltage_7V);
    _mav_put_uint8_t(buf, 14, converter2_voltage_7V);
    _mav_put_uint8_t(buf, 15, converter3_voltage_7V);
    _mav_put_uint8_t(buf, 16, converter4_voltage_7V);
    _mav_put_uint8_t(buf, 17, uC_buck_voltage_5V);
    _mav_put_uint8_t(buf, 18, pixhawk_main_voltage_5V);
    _mav_put_uint8_t(buf, 19, pixhawk_aux_voltage_5V);
    _mav_put_uint8_t(buf, 20, pixhawk_main_extra_voltage);
    _mav_put_uint8_t(buf, 21, jetson_voltage);
    _mav_put_uint8_t(buf, 22, jetson_extra);
    _mav_put_uint8_t(buf, 23, video_main_voltage_12V);
    _mav_put_uint8_t(buf, 24, video_aux_voltage_12V);
    _mav_put_uint8_t(buf, 25, main_battery_voltage);
    _mav_put_uint8_t(buf, 26, aux_battery_voltage);
    _mav_put_uint8_t(buf, 27, extra);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MID_DATA_LEN);
#else
    mavlink_mid_data_t packet;
    packet.servo4_current = servo4_current;
    packet.servo5_current = servo5_current;
    packet.servo6_current = servo6_current;
    packet.aux_batt_current = aux_batt_current;
    packet.servo4_temperature = servo4_temperature;
    packet.servo5_temperature = servo5_temperature;
    packet.servo6_temperature = servo6_temperature;
    packet.bec1_voltage = bec1_voltage;
    packet.bec2_voltage = bec2_voltage;
    packet.converter1_voltage_7V = converter1_voltage_7V;
    packet.converter2_voltage_7V = converter2_voltage_7V;
    packet.converter3_voltage_7V = converter3_voltage_7V;
    packet.converter4_voltage_7V = converter4_voltage_7V;
    packet.uC_buck_voltage_5V = uC_buck_voltage_5V;
    packet.pixhawk_main_voltage_5V = pixhawk_main_voltage_5V;
    packet.pixhawk_aux_voltage_5V = pixhawk_aux_voltage_5V;
    packet.pixhawk_main_extra_voltage = pixhawk_main_extra_voltage;
    packet.jetson_voltage = jetson_voltage;
    packet.jetson_extra = jetson_extra;
    packet.video_main_voltage_12V = video_main_voltage_12V;
    packet.video_aux_voltage_12V = video_aux_voltage_12V;
    packet.main_battery_voltage = main_battery_voltage;
    packet.aux_battery_voltage = aux_battery_voltage;
    packet.extra = extra;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MID_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MID_DATA;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_MID_DATA_MIN_LEN, MAVLINK_MSG_ID_MID_DATA_LEN, MAVLINK_MSG_ID_MID_DATA_CRC);
}

/**
 * @brief Pack a mid_data message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param servo4_current [mA] mid servo4 current
 * @param servo5_current [mA] mid servo5 current
 * @param servo6_current [mA] mid servo6 current
 * @param aux_batt_current [mA] aux battery current
 * @param servo4_temperature [C] top servo1 temperature
 * @param servo5_temperature [C] top servo2 temperature
 * @param servo6_temperature [C] top servo3 temperature
 * @param bec1_voltage [V] bec voltage 1
 * @param bec2_voltage [V] bec voltage 2
 * @param converter1_voltage_7V [V] converter1 voltage
 * @param converter2_voltage_7V [V] converter2 voltage
 * @param converter3_voltage_7V [V] converter3 voltage
 * @param converter4_voltage_7V [V] converter4 voltage
 * @param uC_buck_voltage_5V [V] microcontroller buck voltage
 * @param pixhawk_main_voltage_5V [V] pixhawk main voltage
 * @param pixhawk_aux_voltage_5V [V] pixhawk aux voltage
 * @param pixhawk_main_extra_voltage [V] pixhawk main extra voltage
 * @param jetson_voltage [V] jetson main voltage
 * @param jetson_extra [V] jetson main extra voltage
 * @param video_main_voltage_12V [V] video main voltage
 * @param video_aux_voltage_12V [V] video aux voltage
 * @param main_battery_voltage [V] main battery voltage
 * @param aux_battery_voltage [V] aux battery voltage
 * @param extra  extra
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_mid_data_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t servo4_current,uint16_t servo5_current,uint16_t servo6_current,uint16_t aux_batt_current,uint8_t servo4_temperature,uint8_t servo5_temperature,uint8_t servo6_temperature,uint8_t bec1_voltage,uint8_t bec2_voltage,uint8_t converter1_voltage_7V,uint8_t converter2_voltage_7V,uint8_t converter3_voltage_7V,uint8_t converter4_voltage_7V,uint8_t uC_buck_voltage_5V,uint8_t pixhawk_main_voltage_5V,uint8_t pixhawk_aux_voltage_5V,uint8_t pixhawk_main_extra_voltage,uint8_t jetson_voltage,uint8_t jetson_extra,uint8_t video_main_voltage_12V,uint8_t video_aux_voltage_12V,uint8_t main_battery_voltage,uint8_t aux_battery_voltage,uint8_t extra)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MID_DATA_LEN];
    _mav_put_uint16_t(buf, 0, servo4_current);
    _mav_put_uint16_t(buf, 2, servo5_current);
    _mav_put_uint16_t(buf, 4, servo6_current);
    _mav_put_uint16_t(buf, 6, aux_batt_current);
    _mav_put_uint8_t(buf, 8, servo4_temperature);
    _mav_put_uint8_t(buf, 9, servo5_temperature);
    _mav_put_uint8_t(buf, 10, servo6_temperature);
    _mav_put_uint8_t(buf, 11, bec1_voltage);
    _mav_put_uint8_t(buf, 12, bec2_voltage);
    _mav_put_uint8_t(buf, 13, converter1_voltage_7V);
    _mav_put_uint8_t(buf, 14, converter2_voltage_7V);
    _mav_put_uint8_t(buf, 15, converter3_voltage_7V);
    _mav_put_uint8_t(buf, 16, converter4_voltage_7V);
    _mav_put_uint8_t(buf, 17, uC_buck_voltage_5V);
    _mav_put_uint8_t(buf, 18, pixhawk_main_voltage_5V);
    _mav_put_uint8_t(buf, 19, pixhawk_aux_voltage_5V);
    _mav_put_uint8_t(buf, 20, pixhawk_main_extra_voltage);
    _mav_put_uint8_t(buf, 21, jetson_voltage);
    _mav_put_uint8_t(buf, 22, jetson_extra);
    _mav_put_uint8_t(buf, 23, video_main_voltage_12V);
    _mav_put_uint8_t(buf, 24, video_aux_voltage_12V);
    _mav_put_uint8_t(buf, 25, main_battery_voltage);
    _mav_put_uint8_t(buf, 26, aux_battery_voltage);
    _mav_put_uint8_t(buf, 27, extra);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MID_DATA_LEN);
#else
    mavlink_mid_data_t packet;
    packet.servo4_current = servo4_current;
    packet.servo5_current = servo5_current;
    packet.servo6_current = servo6_current;
    packet.aux_batt_current = aux_batt_current;
    packet.servo4_temperature = servo4_temperature;
    packet.servo5_temperature = servo5_temperature;
    packet.servo6_temperature = servo6_temperature;
    packet.bec1_voltage = bec1_voltage;
    packet.bec2_voltage = bec2_voltage;
    packet.converter1_voltage_7V = converter1_voltage_7V;
    packet.converter2_voltage_7V = converter2_voltage_7V;
    packet.converter3_voltage_7V = converter3_voltage_7V;
    packet.converter4_voltage_7V = converter4_voltage_7V;
    packet.uC_buck_voltage_5V = uC_buck_voltage_5V;
    packet.pixhawk_main_voltage_5V = pixhawk_main_voltage_5V;
    packet.pixhawk_aux_voltage_5V = pixhawk_aux_voltage_5V;
    packet.pixhawk_main_extra_voltage = pixhawk_main_extra_voltage;
    packet.jetson_voltage = jetson_voltage;
    packet.jetson_extra = jetson_extra;
    packet.video_main_voltage_12V = video_main_voltage_12V;
    packet.video_aux_voltage_12V = video_aux_voltage_12V;
    packet.main_battery_voltage = main_battery_voltage;
    packet.aux_battery_voltage = aux_battery_voltage;
    packet.extra = extra;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MID_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MID_DATA;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_MID_DATA_MIN_LEN, MAVLINK_MSG_ID_MID_DATA_LEN, MAVLINK_MSG_ID_MID_DATA_CRC);
}

/**
 * @brief Encode a mid_data struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param mid_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_mid_data_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_mid_data_t* mid_data)
{
    return mavlink_msg_mid_data_pack(system_id, component_id, msg, mid_data->servo4_current, mid_data->servo5_current, mid_data->servo6_current, mid_data->aux_batt_current, mid_data->servo4_temperature, mid_data->servo5_temperature, mid_data->servo6_temperature, mid_data->bec1_voltage, mid_data->bec2_voltage, mid_data->converter1_voltage_7V, mid_data->converter2_voltage_7V, mid_data->converter3_voltage_7V, mid_data->converter4_voltage_7V, mid_data->uC_buck_voltage_5V, mid_data->pixhawk_main_voltage_5V, mid_data->pixhawk_aux_voltage_5V, mid_data->pixhawk_main_extra_voltage, mid_data->jetson_voltage, mid_data->jetson_extra, mid_data->video_main_voltage_12V, mid_data->video_aux_voltage_12V, mid_data->main_battery_voltage, mid_data->aux_battery_voltage, mid_data->extra);
}

/**
 * @brief Encode a mid_data struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param mid_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_mid_data_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_mid_data_t* mid_data)
{
    return mavlink_msg_mid_data_pack_chan(system_id, component_id, chan, msg, mid_data->servo4_current, mid_data->servo5_current, mid_data->servo6_current, mid_data->aux_batt_current, mid_data->servo4_temperature, mid_data->servo5_temperature, mid_data->servo6_temperature, mid_data->bec1_voltage, mid_data->bec2_voltage, mid_data->converter1_voltage_7V, mid_data->converter2_voltage_7V, mid_data->converter3_voltage_7V, mid_data->converter4_voltage_7V, mid_data->uC_buck_voltage_5V, mid_data->pixhawk_main_voltage_5V, mid_data->pixhawk_aux_voltage_5V, mid_data->pixhawk_main_extra_voltage, mid_data->jetson_voltage, mid_data->jetson_extra, mid_data->video_main_voltage_12V, mid_data->video_aux_voltage_12V, mid_data->main_battery_voltage, mid_data->aux_battery_voltage, mid_data->extra);
}

/**
 * @brief Send a mid_data message
 * @param chan MAVLink channel to send the message
 *
 * @param servo4_current [mA] mid servo4 current
 * @param servo5_current [mA] mid servo5 current
 * @param servo6_current [mA] mid servo6 current
 * @param aux_batt_current [mA] aux battery current
 * @param servo4_temperature [C] top servo1 temperature
 * @param servo5_temperature [C] top servo2 temperature
 * @param servo6_temperature [C] top servo3 temperature
 * @param bec1_voltage [V] bec voltage 1
 * @param bec2_voltage [V] bec voltage 2
 * @param converter1_voltage_7V [V] converter1 voltage
 * @param converter2_voltage_7V [V] converter2 voltage
 * @param converter3_voltage_7V [V] converter3 voltage
 * @param converter4_voltage_7V [V] converter4 voltage
 * @param uC_buck_voltage_5V [V] microcontroller buck voltage
 * @param pixhawk_main_voltage_5V [V] pixhawk main voltage
 * @param pixhawk_aux_voltage_5V [V] pixhawk aux voltage
 * @param pixhawk_main_extra_voltage [V] pixhawk main extra voltage
 * @param jetson_voltage [V] jetson main voltage
 * @param jetson_extra [V] jetson main extra voltage
 * @param video_main_voltage_12V [V] video main voltage
 * @param video_aux_voltage_12V [V] video aux voltage
 * @param main_battery_voltage [V] main battery voltage
 * @param aux_battery_voltage [V] aux battery voltage
 * @param extra  extra
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_mid_data_send(mavlink_channel_t chan, uint16_t servo4_current, uint16_t servo5_current, uint16_t servo6_current, uint16_t aux_batt_current, uint8_t servo4_temperature, uint8_t servo5_temperature, uint8_t servo6_temperature, uint8_t bec1_voltage, uint8_t bec2_voltage, uint8_t converter1_voltage_7V, uint8_t converter2_voltage_7V, uint8_t converter3_voltage_7V, uint8_t converter4_voltage_7V, uint8_t uC_buck_voltage_5V, uint8_t pixhawk_main_voltage_5V, uint8_t pixhawk_aux_voltage_5V, uint8_t pixhawk_main_extra_voltage, uint8_t jetson_voltage, uint8_t jetson_extra, uint8_t video_main_voltage_12V, uint8_t video_aux_voltage_12V, uint8_t main_battery_voltage, uint8_t aux_battery_voltage, uint8_t extra)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MID_DATA_LEN];
    _mav_put_uint16_t(buf, 0, servo4_current);
    _mav_put_uint16_t(buf, 2, servo5_current);
    _mav_put_uint16_t(buf, 4, servo6_current);
    _mav_put_uint16_t(buf, 6, aux_batt_current);
    _mav_put_uint8_t(buf, 8, servo4_temperature);
    _mav_put_uint8_t(buf, 9, servo5_temperature);
    _mav_put_uint8_t(buf, 10, servo6_temperature);
    _mav_put_uint8_t(buf, 11, bec1_voltage);
    _mav_put_uint8_t(buf, 12, bec2_voltage);
    _mav_put_uint8_t(buf, 13, converter1_voltage_7V);
    _mav_put_uint8_t(buf, 14, converter2_voltage_7V);
    _mav_put_uint8_t(buf, 15, converter3_voltage_7V);
    _mav_put_uint8_t(buf, 16, converter4_voltage_7V);
    _mav_put_uint8_t(buf, 17, uC_buck_voltage_5V);
    _mav_put_uint8_t(buf, 18, pixhawk_main_voltage_5V);
    _mav_put_uint8_t(buf, 19, pixhawk_aux_voltage_5V);
    _mav_put_uint8_t(buf, 20, pixhawk_main_extra_voltage);
    _mav_put_uint8_t(buf, 21, jetson_voltage);
    _mav_put_uint8_t(buf, 22, jetson_extra);
    _mav_put_uint8_t(buf, 23, video_main_voltage_12V);
    _mav_put_uint8_t(buf, 24, video_aux_voltage_12V);
    _mav_put_uint8_t(buf, 25, main_battery_voltage);
    _mav_put_uint8_t(buf, 26, aux_battery_voltage);
    _mav_put_uint8_t(buf, 27, extra);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MID_DATA, buf, MAVLINK_MSG_ID_MID_DATA_MIN_LEN, MAVLINK_MSG_ID_MID_DATA_LEN, MAVLINK_MSG_ID_MID_DATA_CRC);
#else
    mavlink_mid_data_t packet;
    packet.servo4_current = servo4_current;
    packet.servo5_current = servo5_current;
    packet.servo6_current = servo6_current;
    packet.aux_batt_current = aux_batt_current;
    packet.servo4_temperature = servo4_temperature;
    packet.servo5_temperature = servo5_temperature;
    packet.servo6_temperature = servo6_temperature;
    packet.bec1_voltage = bec1_voltage;
    packet.bec2_voltage = bec2_voltage;
    packet.converter1_voltage_7V = converter1_voltage_7V;
    packet.converter2_voltage_7V = converter2_voltage_7V;
    packet.converter3_voltage_7V = converter3_voltage_7V;
    packet.converter4_voltage_7V = converter4_voltage_7V;
    packet.uC_buck_voltage_5V = uC_buck_voltage_5V;
    packet.pixhawk_main_voltage_5V = pixhawk_main_voltage_5V;
    packet.pixhawk_aux_voltage_5V = pixhawk_aux_voltage_5V;
    packet.pixhawk_main_extra_voltage = pixhawk_main_extra_voltage;
    packet.jetson_voltage = jetson_voltage;
    packet.jetson_extra = jetson_extra;
    packet.video_main_voltage_12V = video_main_voltage_12V;
    packet.video_aux_voltage_12V = video_aux_voltage_12V;
    packet.main_battery_voltage = main_battery_voltage;
    packet.aux_battery_voltage = aux_battery_voltage;
    packet.extra = extra;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MID_DATA, (const char *)&packet, MAVLINK_MSG_ID_MID_DATA_MIN_LEN, MAVLINK_MSG_ID_MID_DATA_LEN, MAVLINK_MSG_ID_MID_DATA_CRC);
#endif
}

/**
 * @brief Send a mid_data message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_mid_data_send_struct(mavlink_channel_t chan, const mavlink_mid_data_t* mid_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_mid_data_send(chan, mid_data->servo4_current, mid_data->servo5_current, mid_data->servo6_current, mid_data->aux_batt_current, mid_data->servo4_temperature, mid_data->servo5_temperature, mid_data->servo6_temperature, mid_data->bec1_voltage, mid_data->bec2_voltage, mid_data->converter1_voltage_7V, mid_data->converter2_voltage_7V, mid_data->converter3_voltage_7V, mid_data->converter4_voltage_7V, mid_data->uC_buck_voltage_5V, mid_data->pixhawk_main_voltage_5V, mid_data->pixhawk_aux_voltage_5V, mid_data->pixhawk_main_extra_voltage, mid_data->jetson_voltage, mid_data->jetson_extra, mid_data->video_main_voltage_12V, mid_data->video_aux_voltage_12V, mid_data->main_battery_voltage, mid_data->aux_battery_voltage, mid_data->extra);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MID_DATA, (const char *)mid_data, MAVLINK_MSG_ID_MID_DATA_MIN_LEN, MAVLINK_MSG_ID_MID_DATA_LEN, MAVLINK_MSG_ID_MID_DATA_CRC);
#endif
}

#if MAVLINK_MSG_ID_MID_DATA_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_mid_data_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t servo4_current, uint16_t servo5_current, uint16_t servo6_current, uint16_t aux_batt_current, uint8_t servo4_temperature, uint8_t servo5_temperature, uint8_t servo6_temperature, uint8_t bec1_voltage, uint8_t bec2_voltage, uint8_t converter1_voltage_7V, uint8_t converter2_voltage_7V, uint8_t converter3_voltage_7V, uint8_t converter4_voltage_7V, uint8_t uC_buck_voltage_5V, uint8_t pixhawk_main_voltage_5V, uint8_t pixhawk_aux_voltage_5V, uint8_t pixhawk_main_extra_voltage, uint8_t jetson_voltage, uint8_t jetson_extra, uint8_t video_main_voltage_12V, uint8_t video_aux_voltage_12V, uint8_t main_battery_voltage, uint8_t aux_battery_voltage, uint8_t extra)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, servo4_current);
    _mav_put_uint16_t(buf, 2, servo5_current);
    _mav_put_uint16_t(buf, 4, servo6_current);
    _mav_put_uint16_t(buf, 6, aux_batt_current);
    _mav_put_uint8_t(buf, 8, servo4_temperature);
    _mav_put_uint8_t(buf, 9, servo5_temperature);
    _mav_put_uint8_t(buf, 10, servo6_temperature);
    _mav_put_uint8_t(buf, 11, bec1_voltage);
    _mav_put_uint8_t(buf, 12, bec2_voltage);
    _mav_put_uint8_t(buf, 13, converter1_voltage_7V);
    _mav_put_uint8_t(buf, 14, converter2_voltage_7V);
    _mav_put_uint8_t(buf, 15, converter3_voltage_7V);
    _mav_put_uint8_t(buf, 16, converter4_voltage_7V);
    _mav_put_uint8_t(buf, 17, uC_buck_voltage_5V);
    _mav_put_uint8_t(buf, 18, pixhawk_main_voltage_5V);
    _mav_put_uint8_t(buf, 19, pixhawk_aux_voltage_5V);
    _mav_put_uint8_t(buf, 20, pixhawk_main_extra_voltage);
    _mav_put_uint8_t(buf, 21, jetson_voltage);
    _mav_put_uint8_t(buf, 22, jetson_extra);
    _mav_put_uint8_t(buf, 23, video_main_voltage_12V);
    _mav_put_uint8_t(buf, 24, video_aux_voltage_12V);
    _mav_put_uint8_t(buf, 25, main_battery_voltage);
    _mav_put_uint8_t(buf, 26, aux_battery_voltage);
    _mav_put_uint8_t(buf, 27, extra);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MID_DATA, buf, MAVLINK_MSG_ID_MID_DATA_MIN_LEN, MAVLINK_MSG_ID_MID_DATA_LEN, MAVLINK_MSG_ID_MID_DATA_CRC);
#else
    mavlink_mid_data_t *packet = (mavlink_mid_data_t *)msgbuf;
    packet->servo4_current = servo4_current;
    packet->servo5_current = servo5_current;
    packet->servo6_current = servo6_current;
    packet->aux_batt_current = aux_batt_current;
    packet->servo4_temperature = servo4_temperature;
    packet->servo5_temperature = servo5_temperature;
    packet->servo6_temperature = servo6_temperature;
    packet->bec1_voltage = bec1_voltage;
    packet->bec2_voltage = bec2_voltage;
    packet->converter1_voltage_7V = converter1_voltage_7V;
    packet->converter2_voltage_7V = converter2_voltage_7V;
    packet->converter3_voltage_7V = converter3_voltage_7V;
    packet->converter4_voltage_7V = converter4_voltage_7V;
    packet->uC_buck_voltage_5V = uC_buck_voltage_5V;
    packet->pixhawk_main_voltage_5V = pixhawk_main_voltage_5V;
    packet->pixhawk_aux_voltage_5V = pixhawk_aux_voltage_5V;
    packet->pixhawk_main_extra_voltage = pixhawk_main_extra_voltage;
    packet->jetson_voltage = jetson_voltage;
    packet->jetson_extra = jetson_extra;
    packet->video_main_voltage_12V = video_main_voltage_12V;
    packet->video_aux_voltage_12V = video_aux_voltage_12V;
    packet->main_battery_voltage = main_battery_voltage;
    packet->aux_battery_voltage = aux_battery_voltage;
    packet->extra = extra;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MID_DATA, (const char *)packet, MAVLINK_MSG_ID_MID_DATA_MIN_LEN, MAVLINK_MSG_ID_MID_DATA_LEN, MAVLINK_MSG_ID_MID_DATA_CRC);
#endif
}
#endif

#endif

// MESSAGE MID_DATA UNPACKING


/**
 * @brief Get field servo4_current from mid_data message
 *
 * @return [mA] mid servo4 current
 */
static inline uint16_t mavlink_msg_mid_data_get_servo4_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field servo5_current from mid_data message
 *
 * @return [mA] mid servo5 current
 */
static inline uint16_t mavlink_msg_mid_data_get_servo5_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Get field servo6_current from mid_data message
 *
 * @return [mA] mid servo6 current
 */
static inline uint16_t mavlink_msg_mid_data_get_servo6_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field aux_batt_current from mid_data message
 *
 * @return [mA] aux battery current
 */
static inline uint16_t mavlink_msg_mid_data_get_aux_batt_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  6);
}

/**
 * @brief Get field servo4_temperature from mid_data message
 *
 * @return [C] top servo1 temperature
 */
static inline uint8_t mavlink_msg_mid_data_get_servo4_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field servo5_temperature from mid_data message
 *
 * @return [C] top servo2 temperature
 */
static inline uint8_t mavlink_msg_mid_data_get_servo5_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  9);
}

/**
 * @brief Get field servo6_temperature from mid_data message
 *
 * @return [C] top servo3 temperature
 */
static inline uint8_t mavlink_msg_mid_data_get_servo6_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  10);
}

/**
 * @brief Get field bec1_voltage from mid_data message
 *
 * @return [V] bec voltage 1
 */
static inline uint8_t mavlink_msg_mid_data_get_bec1_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  11);
}

/**
 * @brief Get field bec2_voltage from mid_data message
 *
 * @return [V] bec voltage 2
 */
static inline uint8_t mavlink_msg_mid_data_get_bec2_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  12);
}

/**
 * @brief Get field converter1_voltage_7V from mid_data message
 *
 * @return [V] converter1 voltage
 */
static inline uint8_t mavlink_msg_mid_data_get_converter1_voltage_7V(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  13);
}

/**
 * @brief Get field converter2_voltage_7V from mid_data message
 *
 * @return [V] converter2 voltage
 */
static inline uint8_t mavlink_msg_mid_data_get_converter2_voltage_7V(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  14);
}

/**
 * @brief Get field converter3_voltage_7V from mid_data message
 *
 * @return [V] converter3 voltage
 */
static inline uint8_t mavlink_msg_mid_data_get_converter3_voltage_7V(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  15);
}

/**
 * @brief Get field converter4_voltage_7V from mid_data message
 *
 * @return [V] converter4 voltage
 */
static inline uint8_t mavlink_msg_mid_data_get_converter4_voltage_7V(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  16);
}

/**
 * @brief Get field uC_buck_voltage_5V from mid_data message
 *
 * @return [V] microcontroller buck voltage
 */
static inline uint8_t mavlink_msg_mid_data_get_uC_buck_voltage_5V(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  17);
}

/**
 * @brief Get field pixhawk_main_voltage_5V from mid_data message
 *
 * @return [V] pixhawk main voltage
 */
static inline uint8_t mavlink_msg_mid_data_get_pixhawk_main_voltage_5V(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  18);
}

/**
 * @brief Get field pixhawk_aux_voltage_5V from mid_data message
 *
 * @return [V] pixhawk aux voltage
 */
static inline uint8_t mavlink_msg_mid_data_get_pixhawk_aux_voltage_5V(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  19);
}

/**
 * @brief Get field pixhawk_main_extra_voltage from mid_data message
 *
 * @return [V] pixhawk main extra voltage
 */
static inline uint8_t mavlink_msg_mid_data_get_pixhawk_main_extra_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  20);
}

/**
 * @brief Get field jetson_voltage from mid_data message
 *
 * @return [V] jetson main voltage
 */
static inline uint8_t mavlink_msg_mid_data_get_jetson_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  21);
}

/**
 * @brief Get field jetson_extra from mid_data message
 *
 * @return [V] jetson main extra voltage
 */
static inline uint8_t mavlink_msg_mid_data_get_jetson_extra(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  22);
}

/**
 * @brief Get field video_main_voltage_12V from mid_data message
 *
 * @return [V] video main voltage
 */
static inline uint8_t mavlink_msg_mid_data_get_video_main_voltage_12V(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  23);
}

/**
 * @brief Get field video_aux_voltage_12V from mid_data message
 *
 * @return [V] video aux voltage
 */
static inline uint8_t mavlink_msg_mid_data_get_video_aux_voltage_12V(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  24);
}

/**
 * @brief Get field main_battery_voltage from mid_data message
 *
 * @return [V] main battery voltage
 */
static inline uint8_t mavlink_msg_mid_data_get_main_battery_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  25);
}

/**
 * @brief Get field aux_battery_voltage from mid_data message
 *
 * @return [V] aux battery voltage
 */
static inline uint8_t mavlink_msg_mid_data_get_aux_battery_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  26);
}

/**
 * @brief Get field extra from mid_data message
 *
 * @return  extra
 */
static inline uint8_t mavlink_msg_mid_data_get_extra(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  27);
}

/**
 * @brief Decode a mid_data message into a struct
 *
 * @param msg The message to decode
 * @param mid_data C-struct to decode the message contents into
 */
static inline void mavlink_msg_mid_data_decode(const mavlink_message_t* msg, mavlink_mid_data_t* mid_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mid_data->servo4_current = mavlink_msg_mid_data_get_servo4_current(msg);
    mid_data->servo5_current = mavlink_msg_mid_data_get_servo5_current(msg);
    mid_data->servo6_current = mavlink_msg_mid_data_get_servo6_current(msg);
    mid_data->aux_batt_current = mavlink_msg_mid_data_get_aux_batt_current(msg);
    mid_data->servo4_temperature = mavlink_msg_mid_data_get_servo4_temperature(msg);
    mid_data->servo5_temperature = mavlink_msg_mid_data_get_servo5_temperature(msg);
    mid_data->servo6_temperature = mavlink_msg_mid_data_get_servo6_temperature(msg);
    mid_data->bec1_voltage = mavlink_msg_mid_data_get_bec1_voltage(msg);
    mid_data->bec2_voltage = mavlink_msg_mid_data_get_bec2_voltage(msg);
    mid_data->converter1_voltage_7V = mavlink_msg_mid_data_get_converter1_voltage_7V(msg);
    mid_data->converter2_voltage_7V = mavlink_msg_mid_data_get_converter2_voltage_7V(msg);
    mid_data->converter3_voltage_7V = mavlink_msg_mid_data_get_converter3_voltage_7V(msg);
    mid_data->converter4_voltage_7V = mavlink_msg_mid_data_get_converter4_voltage_7V(msg);
    mid_data->uC_buck_voltage_5V = mavlink_msg_mid_data_get_uC_buck_voltage_5V(msg);
    mid_data->pixhawk_main_voltage_5V = mavlink_msg_mid_data_get_pixhawk_main_voltage_5V(msg);
    mid_data->pixhawk_aux_voltage_5V = mavlink_msg_mid_data_get_pixhawk_aux_voltage_5V(msg);
    mid_data->pixhawk_main_extra_voltage = mavlink_msg_mid_data_get_pixhawk_main_extra_voltage(msg);
    mid_data->jetson_voltage = mavlink_msg_mid_data_get_jetson_voltage(msg);
    mid_data->jetson_extra = mavlink_msg_mid_data_get_jetson_extra(msg);
    mid_data->video_main_voltage_12V = mavlink_msg_mid_data_get_video_main_voltage_12V(msg);
    mid_data->video_aux_voltage_12V = mavlink_msg_mid_data_get_video_aux_voltage_12V(msg);
    mid_data->main_battery_voltage = mavlink_msg_mid_data_get_main_battery_voltage(msg);
    mid_data->aux_battery_voltage = mavlink_msg_mid_data_get_aux_battery_voltage(msg);
    mid_data->extra = mavlink_msg_mid_data_get_extra(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_MID_DATA_LEN? msg->len : MAVLINK_MSG_ID_MID_DATA_LEN;
        memset(mid_data, 0, MAVLINK_MSG_ID_MID_DATA_LEN);
    memcpy(mid_data, _MAV_PAYLOAD(msg), len);
#endif
}
