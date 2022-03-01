#pragma once
// MESSAGE MID_DATA PACKING

#define MAVLINK_MSG_ID_MID_DATA 11071


typedef struct __mavlink_mid_data_t {
 int16_t servo4_current; /*< [mA] mid servo4 current*/
 int16_t servo5_current; /*< [mA] mid servo5 current*/
 int16_t servo6_current; /*< [mA] mid servo6 current*/
 int16_t aux_batt_current; /*< [mA] aux battery current*/
 int16_t bec1_voltage; /*< [V] bec voltage 1*/
 int16_t bec2_voltage; /*< [V] bec voltage 2*/
 int16_t converter1_voltage_7V; /*< [V] converter1 voltage*/
 int16_t converter2_voltage_7V; /*< [V] converter2 voltage*/
 int16_t converter3_voltage_7V; /*< [V] converter3 voltage*/
 int16_t converter4_voltage_7V; /*< [V] converter4 voltage*/
 int16_t uC_buck_voltage_5V; /*< [V] microcontroller buck voltage*/
 int16_t pixhawk_cots_voltage_5V; /*< [V] pixhawk main voltage*/
 int16_t pixhawk_aux_voltage_5V; /*< [V] pixhawk aux voltage*/
 int16_t pixhawk_buc_voltage; /*< [V] pixhawk main extra voltage*/
 int16_t jetson_cots_voltage; /*< [V] jetson main voltage*/
 int16_t jetson_buc_voltage; /*< [V] jetson main extra voltage*/
 int16_t video_main_voltage_12V; /*< [V] video main voltage*/
 int16_t video_aux_voltage_12V; /*< [V] video aux voltage*/
 int16_t main_battery_voltage; /*< [V] main battery voltage*/
 int16_t aux_battery_voltage; /*< [V] aux battery voltage*/
 int8_t servo4_temperature; /*< [C] top servo1 temperature*/
 int8_t servo5_temperature; /*< [C] top servo2 temperature*/
 int8_t servo6_temperature; /*< [C] top servo3 temperature*/
 int8_t extra; /*<  extra*/
} mavlink_mid_data_t;

#define MAVLINK_MSG_ID_MID_DATA_LEN 44
#define MAVLINK_MSG_ID_MID_DATA_MIN_LEN 44
#define MAVLINK_MSG_ID_11071_LEN 44
#define MAVLINK_MSG_ID_11071_MIN_LEN 44

#define MAVLINK_MSG_ID_MID_DATA_CRC 92
#define MAVLINK_MSG_ID_11071_CRC 92



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_MID_DATA { \
    11071, \
    "MID_DATA", \
    24, \
    {  { "servo4_current", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_mid_data_t, servo4_current) }, \
         { "servo5_current", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_mid_data_t, servo5_current) }, \
         { "servo6_current", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_mid_data_t, servo6_current) }, \
         { "aux_batt_current", NULL, MAVLINK_TYPE_INT16_T, 0, 6, offsetof(mavlink_mid_data_t, aux_batt_current) }, \
         { "servo4_temperature", NULL, MAVLINK_TYPE_INT8_T, 0, 40, offsetof(mavlink_mid_data_t, servo4_temperature) }, \
         { "servo5_temperature", NULL, MAVLINK_TYPE_INT8_T, 0, 41, offsetof(mavlink_mid_data_t, servo5_temperature) }, \
         { "servo6_temperature", NULL, MAVLINK_TYPE_INT8_T, 0, 42, offsetof(mavlink_mid_data_t, servo6_temperature) }, \
         { "bec1_voltage", NULL, MAVLINK_TYPE_INT16_T, 0, 8, offsetof(mavlink_mid_data_t, bec1_voltage) }, \
         { "bec2_voltage", NULL, MAVLINK_TYPE_INT16_T, 0, 10, offsetof(mavlink_mid_data_t, bec2_voltage) }, \
         { "converter1_voltage_7V", NULL, MAVLINK_TYPE_INT16_T, 0, 12, offsetof(mavlink_mid_data_t, converter1_voltage_7V) }, \
         { "converter2_voltage_7V", NULL, MAVLINK_TYPE_INT16_T, 0, 14, offsetof(mavlink_mid_data_t, converter2_voltage_7V) }, \
         { "converter3_voltage_7V", NULL, MAVLINK_TYPE_INT16_T, 0, 16, offsetof(mavlink_mid_data_t, converter3_voltage_7V) }, \
         { "converter4_voltage_7V", NULL, MAVLINK_TYPE_INT16_T, 0, 18, offsetof(mavlink_mid_data_t, converter4_voltage_7V) }, \
         { "uC_buck_voltage_5V", NULL, MAVLINK_TYPE_INT16_T, 0, 20, offsetof(mavlink_mid_data_t, uC_buck_voltage_5V) }, \
         { "pixhawk_cots_voltage_5V", NULL, MAVLINK_TYPE_INT16_T, 0, 22, offsetof(mavlink_mid_data_t, pixhawk_cots_voltage_5V) }, \
         { "pixhawk_aux_voltage_5V", NULL, MAVLINK_TYPE_INT16_T, 0, 24, offsetof(mavlink_mid_data_t, pixhawk_aux_voltage_5V) }, \
         { "pixhawk_buc_voltage", NULL, MAVLINK_TYPE_INT16_T, 0, 26, offsetof(mavlink_mid_data_t, pixhawk_buc_voltage) }, \
         { "jetson_cots_voltage", NULL, MAVLINK_TYPE_INT16_T, 0, 28, offsetof(mavlink_mid_data_t, jetson_cots_voltage) }, \
         { "jetson_buc_voltage", NULL, MAVLINK_TYPE_INT16_T, 0, 30, offsetof(mavlink_mid_data_t, jetson_buc_voltage) }, \
         { "video_main_voltage_12V", NULL, MAVLINK_TYPE_INT16_T, 0, 32, offsetof(mavlink_mid_data_t, video_main_voltage_12V) }, \
         { "video_aux_voltage_12V", NULL, MAVLINK_TYPE_INT16_T, 0, 34, offsetof(mavlink_mid_data_t, video_aux_voltage_12V) }, \
         { "main_battery_voltage", NULL, MAVLINK_TYPE_INT16_T, 0, 36, offsetof(mavlink_mid_data_t, main_battery_voltage) }, \
         { "aux_battery_voltage", NULL, MAVLINK_TYPE_INT16_T, 0, 38, offsetof(mavlink_mid_data_t, aux_battery_voltage) }, \
         { "extra", NULL, MAVLINK_TYPE_INT8_T, 0, 43, offsetof(mavlink_mid_data_t, extra) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_MID_DATA { \
    "MID_DATA", \
    24, \
    {  { "servo4_current", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_mid_data_t, servo4_current) }, \
         { "servo5_current", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_mid_data_t, servo5_current) }, \
         { "servo6_current", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_mid_data_t, servo6_current) }, \
         { "aux_batt_current", NULL, MAVLINK_TYPE_INT16_T, 0, 6, offsetof(mavlink_mid_data_t, aux_batt_current) }, \
         { "servo4_temperature", NULL, MAVLINK_TYPE_INT8_T, 0, 40, offsetof(mavlink_mid_data_t, servo4_temperature) }, \
         { "servo5_temperature", NULL, MAVLINK_TYPE_INT8_T, 0, 41, offsetof(mavlink_mid_data_t, servo5_temperature) }, \
         { "servo6_temperature", NULL, MAVLINK_TYPE_INT8_T, 0, 42, offsetof(mavlink_mid_data_t, servo6_temperature) }, \
         { "bec1_voltage", NULL, MAVLINK_TYPE_INT16_T, 0, 8, offsetof(mavlink_mid_data_t, bec1_voltage) }, \
         { "bec2_voltage", NULL, MAVLINK_TYPE_INT16_T, 0, 10, offsetof(mavlink_mid_data_t, bec2_voltage) }, \
         { "converter1_voltage_7V", NULL, MAVLINK_TYPE_INT16_T, 0, 12, offsetof(mavlink_mid_data_t, converter1_voltage_7V) }, \
         { "converter2_voltage_7V", NULL, MAVLINK_TYPE_INT16_T, 0, 14, offsetof(mavlink_mid_data_t, converter2_voltage_7V) }, \
         { "converter3_voltage_7V", NULL, MAVLINK_TYPE_INT16_T, 0, 16, offsetof(mavlink_mid_data_t, converter3_voltage_7V) }, \
         { "converter4_voltage_7V", NULL, MAVLINK_TYPE_INT16_T, 0, 18, offsetof(mavlink_mid_data_t, converter4_voltage_7V) }, \
         { "uC_buck_voltage_5V", NULL, MAVLINK_TYPE_INT16_T, 0, 20, offsetof(mavlink_mid_data_t, uC_buck_voltage_5V) }, \
         { "pixhawk_cots_voltage_5V", NULL, MAVLINK_TYPE_INT16_T, 0, 22, offsetof(mavlink_mid_data_t, pixhawk_cots_voltage_5V) }, \
         { "pixhawk_aux_voltage_5V", NULL, MAVLINK_TYPE_INT16_T, 0, 24, offsetof(mavlink_mid_data_t, pixhawk_aux_voltage_5V) }, \
         { "pixhawk_buc_voltage", NULL, MAVLINK_TYPE_INT16_T, 0, 26, offsetof(mavlink_mid_data_t, pixhawk_buc_voltage) }, \
         { "jetson_cots_voltage", NULL, MAVLINK_TYPE_INT16_T, 0, 28, offsetof(mavlink_mid_data_t, jetson_cots_voltage) }, \
         { "jetson_buc_voltage", NULL, MAVLINK_TYPE_INT16_T, 0, 30, offsetof(mavlink_mid_data_t, jetson_buc_voltage) }, \
         { "video_main_voltage_12V", NULL, MAVLINK_TYPE_INT16_T, 0, 32, offsetof(mavlink_mid_data_t, video_main_voltage_12V) }, \
         { "video_aux_voltage_12V", NULL, MAVLINK_TYPE_INT16_T, 0, 34, offsetof(mavlink_mid_data_t, video_aux_voltage_12V) }, \
         { "main_battery_voltage", NULL, MAVLINK_TYPE_INT16_T, 0, 36, offsetof(mavlink_mid_data_t, main_battery_voltage) }, \
         { "aux_battery_voltage", NULL, MAVLINK_TYPE_INT16_T, 0, 38, offsetof(mavlink_mid_data_t, aux_battery_voltage) }, \
         { "extra", NULL, MAVLINK_TYPE_INT8_T, 0, 43, offsetof(mavlink_mid_data_t, extra) }, \
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
 * @param pixhawk_cots_voltage_5V [V] pixhawk main voltage
 * @param pixhawk_aux_voltage_5V [V] pixhawk aux voltage
 * @param pixhawk_buc_voltage [V] pixhawk main extra voltage
 * @param jetson_cots_voltage [V] jetson main voltage
 * @param jetson_buc_voltage [V] jetson main extra voltage
 * @param video_main_voltage_12V [V] video main voltage
 * @param video_aux_voltage_12V [V] video aux voltage
 * @param main_battery_voltage [V] main battery voltage
 * @param aux_battery_voltage [V] aux battery voltage
 * @param extra  extra
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_mid_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int16_t servo4_current, int16_t servo5_current, int16_t servo6_current, int16_t aux_batt_current, int8_t servo4_temperature, int8_t servo5_temperature, int8_t servo6_temperature, int16_t bec1_voltage, int16_t bec2_voltage, int16_t converter1_voltage_7V, int16_t converter2_voltage_7V, int16_t converter3_voltage_7V, int16_t converter4_voltage_7V, int16_t uC_buck_voltage_5V, int16_t pixhawk_cots_voltage_5V, int16_t pixhawk_aux_voltage_5V, int16_t pixhawk_buc_voltage, int16_t jetson_cots_voltage, int16_t jetson_buc_voltage, int16_t video_main_voltage_12V, int16_t video_aux_voltage_12V, int16_t main_battery_voltage, int16_t aux_battery_voltage, int8_t extra)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MID_DATA_LEN];
    _mav_put_int16_t(buf, 0, servo4_current);
    _mav_put_int16_t(buf, 2, servo5_current);
    _mav_put_int16_t(buf, 4, servo6_current);
    _mav_put_int16_t(buf, 6, aux_batt_current);
    _mav_put_int16_t(buf, 8, bec1_voltage);
    _mav_put_int16_t(buf, 10, bec2_voltage);
    _mav_put_int16_t(buf, 12, converter1_voltage_7V);
    _mav_put_int16_t(buf, 14, converter2_voltage_7V);
    _mav_put_int16_t(buf, 16, converter3_voltage_7V);
    _mav_put_int16_t(buf, 18, converter4_voltage_7V);
    _mav_put_int16_t(buf, 20, uC_buck_voltage_5V);
    _mav_put_int16_t(buf, 22, pixhawk_cots_voltage_5V);
    _mav_put_int16_t(buf, 24, pixhawk_aux_voltage_5V);
    _mav_put_int16_t(buf, 26, pixhawk_buc_voltage);
    _mav_put_int16_t(buf, 28, jetson_cots_voltage);
    _mav_put_int16_t(buf, 30, jetson_buc_voltage);
    _mav_put_int16_t(buf, 32, video_main_voltage_12V);
    _mav_put_int16_t(buf, 34, video_aux_voltage_12V);
    _mav_put_int16_t(buf, 36, main_battery_voltage);
    _mav_put_int16_t(buf, 38, aux_battery_voltage);
    _mav_put_int8_t(buf, 40, servo4_temperature);
    _mav_put_int8_t(buf, 41, servo5_temperature);
    _mav_put_int8_t(buf, 42, servo6_temperature);
    _mav_put_int8_t(buf, 43, extra);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MID_DATA_LEN);
#else
    mavlink_mid_data_t packet;
    packet.servo4_current = servo4_current;
    packet.servo5_current = servo5_current;
    packet.servo6_current = servo6_current;
    packet.aux_batt_current = aux_batt_current;
    packet.bec1_voltage = bec1_voltage;
    packet.bec2_voltage = bec2_voltage;
    packet.converter1_voltage_7V = converter1_voltage_7V;
    packet.converter2_voltage_7V = converter2_voltage_7V;
    packet.converter3_voltage_7V = converter3_voltage_7V;
    packet.converter4_voltage_7V = converter4_voltage_7V;
    packet.uC_buck_voltage_5V = uC_buck_voltage_5V;
    packet.pixhawk_cots_voltage_5V = pixhawk_cots_voltage_5V;
    packet.pixhawk_aux_voltage_5V = pixhawk_aux_voltage_5V;
    packet.pixhawk_buc_voltage = pixhawk_buc_voltage;
    packet.jetson_cots_voltage = jetson_cots_voltage;
    packet.jetson_buc_voltage = jetson_buc_voltage;
    packet.video_main_voltage_12V = video_main_voltage_12V;
    packet.video_aux_voltage_12V = video_aux_voltage_12V;
    packet.main_battery_voltage = main_battery_voltage;
    packet.aux_battery_voltage = aux_battery_voltage;
    packet.servo4_temperature = servo4_temperature;
    packet.servo5_temperature = servo5_temperature;
    packet.servo6_temperature = servo6_temperature;
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
 * @param pixhawk_cots_voltage_5V [V] pixhawk main voltage
 * @param pixhawk_aux_voltage_5V [V] pixhawk aux voltage
 * @param pixhawk_buc_voltage [V] pixhawk main extra voltage
 * @param jetson_cots_voltage [V] jetson main voltage
 * @param jetson_buc_voltage [V] jetson main extra voltage
 * @param video_main_voltage_12V [V] video main voltage
 * @param video_aux_voltage_12V [V] video aux voltage
 * @param main_battery_voltage [V] main battery voltage
 * @param aux_battery_voltage [V] aux battery voltage
 * @param extra  extra
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_mid_data_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int16_t servo4_current,int16_t servo5_current,int16_t servo6_current,int16_t aux_batt_current,int8_t servo4_temperature,int8_t servo5_temperature,int8_t servo6_temperature,int16_t bec1_voltage,int16_t bec2_voltage,int16_t converter1_voltage_7V,int16_t converter2_voltage_7V,int16_t converter3_voltage_7V,int16_t converter4_voltage_7V,int16_t uC_buck_voltage_5V,int16_t pixhawk_cots_voltage_5V,int16_t pixhawk_aux_voltage_5V,int16_t pixhawk_buc_voltage,int16_t jetson_cots_voltage,int16_t jetson_buc_voltage,int16_t video_main_voltage_12V,int16_t video_aux_voltage_12V,int16_t main_battery_voltage,int16_t aux_battery_voltage,int8_t extra)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MID_DATA_LEN];
    _mav_put_int16_t(buf, 0, servo4_current);
    _mav_put_int16_t(buf, 2, servo5_current);
    _mav_put_int16_t(buf, 4, servo6_current);
    _mav_put_int16_t(buf, 6, aux_batt_current);
    _mav_put_int16_t(buf, 8, bec1_voltage);
    _mav_put_int16_t(buf, 10, bec2_voltage);
    _mav_put_int16_t(buf, 12, converter1_voltage_7V);
    _mav_put_int16_t(buf, 14, converter2_voltage_7V);
    _mav_put_int16_t(buf, 16, converter3_voltage_7V);
    _mav_put_int16_t(buf, 18, converter4_voltage_7V);
    _mav_put_int16_t(buf, 20, uC_buck_voltage_5V);
    _mav_put_int16_t(buf, 22, pixhawk_cots_voltage_5V);
    _mav_put_int16_t(buf, 24, pixhawk_aux_voltage_5V);
    _mav_put_int16_t(buf, 26, pixhawk_buc_voltage);
    _mav_put_int16_t(buf, 28, jetson_cots_voltage);
    _mav_put_int16_t(buf, 30, jetson_buc_voltage);
    _mav_put_int16_t(buf, 32, video_main_voltage_12V);
    _mav_put_int16_t(buf, 34, video_aux_voltage_12V);
    _mav_put_int16_t(buf, 36, main_battery_voltage);
    _mav_put_int16_t(buf, 38, aux_battery_voltage);
    _mav_put_int8_t(buf, 40, servo4_temperature);
    _mav_put_int8_t(buf, 41, servo5_temperature);
    _mav_put_int8_t(buf, 42, servo6_temperature);
    _mav_put_int8_t(buf, 43, extra);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MID_DATA_LEN);
#else
    mavlink_mid_data_t packet;
    packet.servo4_current = servo4_current;
    packet.servo5_current = servo5_current;
    packet.servo6_current = servo6_current;
    packet.aux_batt_current = aux_batt_current;
    packet.bec1_voltage = bec1_voltage;
    packet.bec2_voltage = bec2_voltage;
    packet.converter1_voltage_7V = converter1_voltage_7V;
    packet.converter2_voltage_7V = converter2_voltage_7V;
    packet.converter3_voltage_7V = converter3_voltage_7V;
    packet.converter4_voltage_7V = converter4_voltage_7V;
    packet.uC_buck_voltage_5V = uC_buck_voltage_5V;
    packet.pixhawk_cots_voltage_5V = pixhawk_cots_voltage_5V;
    packet.pixhawk_aux_voltage_5V = pixhawk_aux_voltage_5V;
    packet.pixhawk_buc_voltage = pixhawk_buc_voltage;
    packet.jetson_cots_voltage = jetson_cots_voltage;
    packet.jetson_buc_voltage = jetson_buc_voltage;
    packet.video_main_voltage_12V = video_main_voltage_12V;
    packet.video_aux_voltage_12V = video_aux_voltage_12V;
    packet.main_battery_voltage = main_battery_voltage;
    packet.aux_battery_voltage = aux_battery_voltage;
    packet.servo4_temperature = servo4_temperature;
    packet.servo5_temperature = servo5_temperature;
    packet.servo6_temperature = servo6_temperature;
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
    return mavlink_msg_mid_data_pack(system_id, component_id, msg, mid_data->servo4_current, mid_data->servo5_current, mid_data->servo6_current, mid_data->aux_batt_current, mid_data->servo4_temperature, mid_data->servo5_temperature, mid_data->servo6_temperature, mid_data->bec1_voltage, mid_data->bec2_voltage, mid_data->converter1_voltage_7V, mid_data->converter2_voltage_7V, mid_data->converter3_voltage_7V, mid_data->converter4_voltage_7V, mid_data->uC_buck_voltage_5V, mid_data->pixhawk_cots_voltage_5V, mid_data->pixhawk_aux_voltage_5V, mid_data->pixhawk_buc_voltage, mid_data->jetson_cots_voltage, mid_data->jetson_buc_voltage, mid_data->video_main_voltage_12V, mid_data->video_aux_voltage_12V, mid_data->main_battery_voltage, mid_data->aux_battery_voltage, mid_data->extra);
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
    return mavlink_msg_mid_data_pack_chan(system_id, component_id, chan, msg, mid_data->servo4_current, mid_data->servo5_current, mid_data->servo6_current, mid_data->aux_batt_current, mid_data->servo4_temperature, mid_data->servo5_temperature, mid_data->servo6_temperature, mid_data->bec1_voltage, mid_data->bec2_voltage, mid_data->converter1_voltage_7V, mid_data->converter2_voltage_7V, mid_data->converter3_voltage_7V, mid_data->converter4_voltage_7V, mid_data->uC_buck_voltage_5V, mid_data->pixhawk_cots_voltage_5V, mid_data->pixhawk_aux_voltage_5V, mid_data->pixhawk_buc_voltage, mid_data->jetson_cots_voltage, mid_data->jetson_buc_voltage, mid_data->video_main_voltage_12V, mid_data->video_aux_voltage_12V, mid_data->main_battery_voltage, mid_data->aux_battery_voltage, mid_data->extra);
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
 * @param pixhawk_cots_voltage_5V [V] pixhawk main voltage
 * @param pixhawk_aux_voltage_5V [V] pixhawk aux voltage
 * @param pixhawk_buc_voltage [V] pixhawk main extra voltage
 * @param jetson_cots_voltage [V] jetson main voltage
 * @param jetson_buc_voltage [V] jetson main extra voltage
 * @param video_main_voltage_12V [V] video main voltage
 * @param video_aux_voltage_12V [V] video aux voltage
 * @param main_battery_voltage [V] main battery voltage
 * @param aux_battery_voltage [V] aux battery voltage
 * @param extra  extra
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_mid_data_send(mavlink_channel_t chan, int16_t servo4_current, int16_t servo5_current, int16_t servo6_current, int16_t aux_batt_current, int8_t servo4_temperature, int8_t servo5_temperature, int8_t servo6_temperature, int16_t bec1_voltage, int16_t bec2_voltage, int16_t converter1_voltage_7V, int16_t converter2_voltage_7V, int16_t converter3_voltage_7V, int16_t converter4_voltage_7V, int16_t uC_buck_voltage_5V, int16_t pixhawk_cots_voltage_5V, int16_t pixhawk_aux_voltage_5V, int16_t pixhawk_buc_voltage, int16_t jetson_cots_voltage, int16_t jetson_buc_voltage, int16_t video_main_voltage_12V, int16_t video_aux_voltage_12V, int16_t main_battery_voltage, int16_t aux_battery_voltage, int8_t extra)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MID_DATA_LEN];
    _mav_put_int16_t(buf, 0, servo4_current);
    _mav_put_int16_t(buf, 2, servo5_current);
    _mav_put_int16_t(buf, 4, servo6_current);
    _mav_put_int16_t(buf, 6, aux_batt_current);
    _mav_put_int16_t(buf, 8, bec1_voltage);
    _mav_put_int16_t(buf, 10, bec2_voltage);
    _mav_put_int16_t(buf, 12, converter1_voltage_7V);
    _mav_put_int16_t(buf, 14, converter2_voltage_7V);
    _mav_put_int16_t(buf, 16, converter3_voltage_7V);
    _mav_put_int16_t(buf, 18, converter4_voltage_7V);
    _mav_put_int16_t(buf, 20, uC_buck_voltage_5V);
    _mav_put_int16_t(buf, 22, pixhawk_cots_voltage_5V);
    _mav_put_int16_t(buf, 24, pixhawk_aux_voltage_5V);
    _mav_put_int16_t(buf, 26, pixhawk_buc_voltage);
    _mav_put_int16_t(buf, 28, jetson_cots_voltage);
    _mav_put_int16_t(buf, 30, jetson_buc_voltage);
    _mav_put_int16_t(buf, 32, video_main_voltage_12V);
    _mav_put_int16_t(buf, 34, video_aux_voltage_12V);
    _mav_put_int16_t(buf, 36, main_battery_voltage);
    _mav_put_int16_t(buf, 38, aux_battery_voltage);
    _mav_put_int8_t(buf, 40, servo4_temperature);
    _mav_put_int8_t(buf, 41, servo5_temperature);
    _mav_put_int8_t(buf, 42, servo6_temperature);
    _mav_put_int8_t(buf, 43, extra);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MID_DATA, buf, MAVLINK_MSG_ID_MID_DATA_MIN_LEN, MAVLINK_MSG_ID_MID_DATA_LEN, MAVLINK_MSG_ID_MID_DATA_CRC);
#else
    mavlink_mid_data_t packet;
    packet.servo4_current = servo4_current;
    packet.servo5_current = servo5_current;
    packet.servo6_current = servo6_current;
    packet.aux_batt_current = aux_batt_current;
    packet.bec1_voltage = bec1_voltage;
    packet.bec2_voltage = bec2_voltage;
    packet.converter1_voltage_7V = converter1_voltage_7V;
    packet.converter2_voltage_7V = converter2_voltage_7V;
    packet.converter3_voltage_7V = converter3_voltage_7V;
    packet.converter4_voltage_7V = converter4_voltage_7V;
    packet.uC_buck_voltage_5V = uC_buck_voltage_5V;
    packet.pixhawk_cots_voltage_5V = pixhawk_cots_voltage_5V;
    packet.pixhawk_aux_voltage_5V = pixhawk_aux_voltage_5V;
    packet.pixhawk_buc_voltage = pixhawk_buc_voltage;
    packet.jetson_cots_voltage = jetson_cots_voltage;
    packet.jetson_buc_voltage = jetson_buc_voltage;
    packet.video_main_voltage_12V = video_main_voltage_12V;
    packet.video_aux_voltage_12V = video_aux_voltage_12V;
    packet.main_battery_voltage = main_battery_voltage;
    packet.aux_battery_voltage = aux_battery_voltage;
    packet.servo4_temperature = servo4_temperature;
    packet.servo5_temperature = servo5_temperature;
    packet.servo6_temperature = servo6_temperature;
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
    mavlink_msg_mid_data_send(chan, mid_data->servo4_current, mid_data->servo5_current, mid_data->servo6_current, mid_data->aux_batt_current, mid_data->servo4_temperature, mid_data->servo5_temperature, mid_data->servo6_temperature, mid_data->bec1_voltage, mid_data->bec2_voltage, mid_data->converter1_voltage_7V, mid_data->converter2_voltage_7V, mid_data->converter3_voltage_7V, mid_data->converter4_voltage_7V, mid_data->uC_buck_voltage_5V, mid_data->pixhawk_cots_voltage_5V, mid_data->pixhawk_aux_voltage_5V, mid_data->pixhawk_buc_voltage, mid_data->jetson_cots_voltage, mid_data->jetson_buc_voltage, mid_data->video_main_voltage_12V, mid_data->video_aux_voltage_12V, mid_data->main_battery_voltage, mid_data->aux_battery_voltage, mid_data->extra);
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
static inline void mavlink_msg_mid_data_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int16_t servo4_current, int16_t servo5_current, int16_t servo6_current, int16_t aux_batt_current, int8_t servo4_temperature, int8_t servo5_temperature, int8_t servo6_temperature, int16_t bec1_voltage, int16_t bec2_voltage, int16_t converter1_voltage_7V, int16_t converter2_voltage_7V, int16_t converter3_voltage_7V, int16_t converter4_voltage_7V, int16_t uC_buck_voltage_5V, int16_t pixhawk_cots_voltage_5V, int16_t pixhawk_aux_voltage_5V, int16_t pixhawk_buc_voltage, int16_t jetson_cots_voltage, int16_t jetson_buc_voltage, int16_t video_main_voltage_12V, int16_t video_aux_voltage_12V, int16_t main_battery_voltage, int16_t aux_battery_voltage, int8_t extra)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int16_t(buf, 0, servo4_current);
    _mav_put_int16_t(buf, 2, servo5_current);
    _mav_put_int16_t(buf, 4, servo6_current);
    _mav_put_int16_t(buf, 6, aux_batt_current);
    _mav_put_int16_t(buf, 8, bec1_voltage);
    _mav_put_int16_t(buf, 10, bec2_voltage);
    _mav_put_int16_t(buf, 12, converter1_voltage_7V);
    _mav_put_int16_t(buf, 14, converter2_voltage_7V);
    _mav_put_int16_t(buf, 16, converter3_voltage_7V);
    _mav_put_int16_t(buf, 18, converter4_voltage_7V);
    _mav_put_int16_t(buf, 20, uC_buck_voltage_5V);
    _mav_put_int16_t(buf, 22, pixhawk_cots_voltage_5V);
    _mav_put_int16_t(buf, 24, pixhawk_aux_voltage_5V);
    _mav_put_int16_t(buf, 26, pixhawk_buc_voltage);
    _mav_put_int16_t(buf, 28, jetson_cots_voltage);
    _mav_put_int16_t(buf, 30, jetson_buc_voltage);
    _mav_put_int16_t(buf, 32, video_main_voltage_12V);
    _mav_put_int16_t(buf, 34, video_aux_voltage_12V);
    _mav_put_int16_t(buf, 36, main_battery_voltage);
    _mav_put_int16_t(buf, 38, aux_battery_voltage);
    _mav_put_int8_t(buf, 40, servo4_temperature);
    _mav_put_int8_t(buf, 41, servo5_temperature);
    _mav_put_int8_t(buf, 42, servo6_temperature);
    _mav_put_int8_t(buf, 43, extra);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MID_DATA, buf, MAVLINK_MSG_ID_MID_DATA_MIN_LEN, MAVLINK_MSG_ID_MID_DATA_LEN, MAVLINK_MSG_ID_MID_DATA_CRC);
#else
    mavlink_mid_data_t *packet = (mavlink_mid_data_t *)msgbuf;
    packet->servo4_current = servo4_current;
    packet->servo5_current = servo5_current;
    packet->servo6_current = servo6_current;
    packet->aux_batt_current = aux_batt_current;
    packet->bec1_voltage = bec1_voltage;
    packet->bec2_voltage = bec2_voltage;
    packet->converter1_voltage_7V = converter1_voltage_7V;
    packet->converter2_voltage_7V = converter2_voltage_7V;
    packet->converter3_voltage_7V = converter3_voltage_7V;
    packet->converter4_voltage_7V = converter4_voltage_7V;
    packet->uC_buck_voltage_5V = uC_buck_voltage_5V;
    packet->pixhawk_cots_voltage_5V = pixhawk_cots_voltage_5V;
    packet->pixhawk_aux_voltage_5V = pixhawk_aux_voltage_5V;
    packet->pixhawk_buc_voltage = pixhawk_buc_voltage;
    packet->jetson_cots_voltage = jetson_cots_voltage;
    packet->jetson_buc_voltage = jetson_buc_voltage;
    packet->video_main_voltage_12V = video_main_voltage_12V;
    packet->video_aux_voltage_12V = video_aux_voltage_12V;
    packet->main_battery_voltage = main_battery_voltage;
    packet->aux_battery_voltage = aux_battery_voltage;
    packet->servo4_temperature = servo4_temperature;
    packet->servo5_temperature = servo5_temperature;
    packet->servo6_temperature = servo6_temperature;
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
static inline int16_t mavlink_msg_mid_data_get_servo4_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  0);
}

/**
 * @brief Get field servo5_current from mid_data message
 *
 * @return [mA] mid servo5 current
 */
static inline int16_t mavlink_msg_mid_data_get_servo5_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  2);
}

/**
 * @brief Get field servo6_current from mid_data message
 *
 * @return [mA] mid servo6 current
 */
static inline int16_t mavlink_msg_mid_data_get_servo6_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  4);
}

/**
 * @brief Get field aux_batt_current from mid_data message
 *
 * @return [mA] aux battery current
 */
static inline int16_t mavlink_msg_mid_data_get_aux_batt_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  6);
}

/**
 * @brief Get field servo4_temperature from mid_data message
 *
 * @return [C] top servo1 temperature
 */
static inline int8_t mavlink_msg_mid_data_get_servo4_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  40);
}

/**
 * @brief Get field servo5_temperature from mid_data message
 *
 * @return [C] top servo2 temperature
 */
static inline int8_t mavlink_msg_mid_data_get_servo5_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  41);
}

/**
 * @brief Get field servo6_temperature from mid_data message
 *
 * @return [C] top servo3 temperature
 */
static inline int8_t mavlink_msg_mid_data_get_servo6_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  42);
}

/**
 * @brief Get field bec1_voltage from mid_data message
 *
 * @return [V] bec voltage 1
 */
static inline int16_t mavlink_msg_mid_data_get_bec1_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  8);
}

/**
 * @brief Get field bec2_voltage from mid_data message
 *
 * @return [V] bec voltage 2
 */
static inline int16_t mavlink_msg_mid_data_get_bec2_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  10);
}

/**
 * @brief Get field converter1_voltage_7V from mid_data message
 *
 * @return [V] converter1 voltage
 */
static inline int16_t mavlink_msg_mid_data_get_converter1_voltage_7V(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  12);
}

/**
 * @brief Get field converter2_voltage_7V from mid_data message
 *
 * @return [V] converter2 voltage
 */
static inline int16_t mavlink_msg_mid_data_get_converter2_voltage_7V(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  14);
}

/**
 * @brief Get field converter3_voltage_7V from mid_data message
 *
 * @return [V] converter3 voltage
 */
static inline int16_t mavlink_msg_mid_data_get_converter3_voltage_7V(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  16);
}

/**
 * @brief Get field converter4_voltage_7V from mid_data message
 *
 * @return [V] converter4 voltage
 */
static inline int16_t mavlink_msg_mid_data_get_converter4_voltage_7V(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  18);
}

/**
 * @brief Get field uC_buck_voltage_5V from mid_data message
 *
 * @return [V] microcontroller buck voltage
 */
static inline int16_t mavlink_msg_mid_data_get_uC_buck_voltage_5V(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  20);
}

/**
 * @brief Get field pixhawk_cots_voltage_5V from mid_data message
 *
 * @return [V] pixhawk main voltage
 */
static inline int16_t mavlink_msg_mid_data_get_pixhawk_cots_voltage_5V(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  22);
}

/**
 * @brief Get field pixhawk_aux_voltage_5V from mid_data message
 *
 * @return [V] pixhawk aux voltage
 */
static inline int16_t mavlink_msg_mid_data_get_pixhawk_aux_voltage_5V(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  24);
}

/**
 * @brief Get field pixhawk_buc_voltage from mid_data message
 *
 * @return [V] pixhawk main extra voltage
 */
static inline int16_t mavlink_msg_mid_data_get_pixhawk_buc_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  26);
}

/**
 * @brief Get field jetson_cots_voltage from mid_data message
 *
 * @return [V] jetson main voltage
 */
static inline int16_t mavlink_msg_mid_data_get_jetson_cots_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  28);
}

/**
 * @brief Get field jetson_buc_voltage from mid_data message
 *
 * @return [V] jetson main extra voltage
 */
static inline int16_t mavlink_msg_mid_data_get_jetson_buc_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  30);
}

/**
 * @brief Get field video_main_voltage_12V from mid_data message
 *
 * @return [V] video main voltage
 */
static inline int16_t mavlink_msg_mid_data_get_video_main_voltage_12V(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  32);
}

/**
 * @brief Get field video_aux_voltage_12V from mid_data message
 *
 * @return [V] video aux voltage
 */
static inline int16_t mavlink_msg_mid_data_get_video_aux_voltage_12V(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  34);
}

/**
 * @brief Get field main_battery_voltage from mid_data message
 *
 * @return [V] main battery voltage
 */
static inline int16_t mavlink_msg_mid_data_get_main_battery_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  36);
}

/**
 * @brief Get field aux_battery_voltage from mid_data message
 *
 * @return [V] aux battery voltage
 */
static inline int16_t mavlink_msg_mid_data_get_aux_battery_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  38);
}

/**
 * @brief Get field extra from mid_data message
 *
 * @return  extra
 */
static inline int8_t mavlink_msg_mid_data_get_extra(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  43);
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
    mid_data->bec1_voltage = mavlink_msg_mid_data_get_bec1_voltage(msg);
    mid_data->bec2_voltage = mavlink_msg_mid_data_get_bec2_voltage(msg);
    mid_data->converter1_voltage_7V = mavlink_msg_mid_data_get_converter1_voltage_7V(msg);
    mid_data->converter2_voltage_7V = mavlink_msg_mid_data_get_converter2_voltage_7V(msg);
    mid_data->converter3_voltage_7V = mavlink_msg_mid_data_get_converter3_voltage_7V(msg);
    mid_data->converter4_voltage_7V = mavlink_msg_mid_data_get_converter4_voltage_7V(msg);
    mid_data->uC_buck_voltage_5V = mavlink_msg_mid_data_get_uC_buck_voltage_5V(msg);
    mid_data->pixhawk_cots_voltage_5V = mavlink_msg_mid_data_get_pixhawk_cots_voltage_5V(msg);
    mid_data->pixhawk_aux_voltage_5V = mavlink_msg_mid_data_get_pixhawk_aux_voltage_5V(msg);
    mid_data->pixhawk_buc_voltage = mavlink_msg_mid_data_get_pixhawk_buc_voltage(msg);
    mid_data->jetson_cots_voltage = mavlink_msg_mid_data_get_jetson_cots_voltage(msg);
    mid_data->jetson_buc_voltage = mavlink_msg_mid_data_get_jetson_buc_voltage(msg);
    mid_data->video_main_voltage_12V = mavlink_msg_mid_data_get_video_main_voltage_12V(msg);
    mid_data->video_aux_voltage_12V = mavlink_msg_mid_data_get_video_aux_voltage_12V(msg);
    mid_data->main_battery_voltage = mavlink_msg_mid_data_get_main_battery_voltage(msg);
    mid_data->aux_battery_voltage = mavlink_msg_mid_data_get_aux_battery_voltage(msg);
    mid_data->servo4_temperature = mavlink_msg_mid_data_get_servo4_temperature(msg);
    mid_data->servo5_temperature = mavlink_msg_mid_data_get_servo5_temperature(msg);
    mid_data->servo6_temperature = mavlink_msg_mid_data_get_servo6_temperature(msg);
    mid_data->extra = mavlink_msg_mid_data_get_extra(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_MID_DATA_LEN? msg->len : MAVLINK_MSG_ID_MID_DATA_LEN;
        memset(mid_data, 0, MAVLINK_MSG_ID_MID_DATA_LEN);
    memcpy(mid_data, _MAV_PAYLOAD(msg), len);
#endif
}
