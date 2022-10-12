/** @file
 *  @brief MAVLink comm protocol generated from R10_HMS.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_R10_HMS_H
#define MAVLINK_R10_HMS_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_R10_HMS.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#undef MAVLINK_THIS_XML_IDX
#define MAVLINK_THIS_XML_IDX 15

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{11072, 154, 38, 38, 0, 0, 0}, {11073, 23, 24, 24, 0, 0, 0}, {11074, 84, 18, 18, 0, 0, 0}, {11075, 13, 18, 18, 0, 0, 0}, {11076, 106, 10, 10, 0, 0, 0}, {11077, 146, 36, 36, 0, 0, 0}, {11079, 219, 32, 32, 0, 0, 0}, {11080, 185, 22, 22, 0, 0, 0}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_R10_HMS

// ENUM DEFINITIONS


/** @brief Datalogger board error codes */
#ifndef HAVE_ENUM_DLB_ERROR_CODE
#define HAVE_ENUM_DLB_ERROR_CODE
typedef enum DLB_ERROR_CODE
{
   DLB_ADC_FAILURE=2001, /* Datalogger adc failure | */
   DLB_SD_MOUNT_FAILURE=2002, /* Datalogger SD card mount unsuccessful | */
   DLB_ADC1_FAIL=2003, /* Datalogger failure of ADC connected to MUX 1 | */
   DLB_ADC2_FAIL=2004, /* Datalogger failure of ADC connected to MUX 2 | */
   DLB_SD_LSTLG_COR=3001, /* Datalogger lastlog file corrupted | */
   DLB_RTC_FAILURE=3002, /* Datalogger RTC not working | */
   DLB_CHT_TEMP1_FAIL=3003, /* Datalogger engine temperature sensor 1 not working | */
   DLB_CHT_TEMP2_FAIL=3004, /* Datalogger engine temperature sensor 2 not working | */
   DLB_UNKNOWN_ERR=3005, /* Datalogger unknown error | */
   DLB_IMU1_FAIL=3006, /* Datalogger IMU1 failed to initalize | */
   DLB_IMU2_FAIL=3007, /* Datalogger IMU2 failed to initalize | */
   DLB_SD_FILE_OPEN_ERR=3008, /* Datalogger failed to open file on SD card | */
   DLB_SD_FILE_WRITE_ERR=3009, /* Datalogger failed to write to file on SD card | */
   DLB_TIMESTAMP_LOW=4001, /* Datalogger timestamp is below a predetermined value | */
   DLB_SD_LSTLG_NP=5001, /* Datalogger lastlog file not present | */
   DLB_ERROR_CODE_ENUM_END=5002, /*  | */
} DLB_ERROR_CODE;
#endif

// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 3
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 3
#endif

// MESSAGE DEFINITIONS
#include "./mavlink_msg_r10_servo_data.h"
#include "./mavlink_msg_r10_ips_data.h"
#include "./mavlink_msg_r10_bat_data.h"
#include "./mavlink_msg_r10_oth_data.h"
#include "./mavlink_msg_r10_dlb_error.h"
#include "./mavlink_msg_r10_vsens_err.h"
#include "./mavlink_msg_r10_isens_err.h"
#include "./mavlink_msg_r10_temp_err.h"

// base include


#undef MAVLINK_THIS_XML_IDX
#define MAVLINK_THIS_XML_IDX 15

#if MAVLINK_THIS_XML_IDX == MAVLINK_PRIMARY_XML_IDX
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_R10_SERVO_DATA, MAVLINK_MESSAGE_INFO_R10_IPS_DATA, MAVLINK_MESSAGE_INFO_R10_BAT_DATA, MAVLINK_MESSAGE_INFO_R10_OTH_DATA, MAVLINK_MESSAGE_INFO_R10_DLB_ERROR, MAVLINK_MESSAGE_INFO_R10_VSENS_ERR, MAVLINK_MESSAGE_INFO_R10_ISENS_ERR, MAVLINK_MESSAGE_INFO_R10_TEMP_ERR}
# define MAVLINK_MESSAGE_NAMES {{ "R10_BAT_DATA", 11074 }, { "R10_DLB_ERROR", 11076 }, { "R10_IPS_DATA", 11073 }, { "R10_ISENS_ERR", 11079 }, { "R10_OTH_DATA", 11075 }, { "R10_SERVO_DATA", 11072 }, { "R10_TEMP_ERR", 11080 }, { "R10_VSENS_ERR", 11077 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_R10_HMS_H
