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
#define MAVLINK_THIS_XML_IDX 5

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{11072, 154, 38, 38, 0, 0, 0}, {11073, 23, 24, 24, 0, 0, 0}, {11074, 84, 18, 18, 0, 0, 0}, {11075, 13, 18, 18, 0, 0, 0}, {11076, 106, 10, 10, 0, 0, 0}, {11077, 34, 12, 12, 0, 0, 0}}
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

/** @brief Power system data error codes */
#ifndef HAVE_ENUM_PS_ERROR_CODE
#define HAVE_ENUM_PS_ERROR_CODE
typedef enum PS_ERROR_CODE
{
   PS_VSEN_BUCK1_UV=2005, /* Critical: Servo converter 1 undervolt | */
   PS_VSEN_BUCK1_OV=2006, /* Critical: Servo converter 1 overvolt | */
   PS_VSEN_BUCK2_UV=2007, /* Critical: Servo converter 2 undervolt | */
   PS_VSEN_BUCK2_OV=2008, /* Critical: Servo converter 2 overvolt | */
   PS_VSEN_BUCK3_UV=2009, /* Critical: Servo converter 3 undervolt | */
   PS_VSEN_BUCK3_OV=2010, /* Critical: Servo converter 3 overvolt | */
   PS_VSEN_BUCK4_UV=2011, /* Critical: Servo converter 4 undervolt | */
   PS_VSEN_BUCK4_OV=2012, /* Critical: Servo converter 4 overvolt | */
   PS_VSEN_BUCK6_UV=2013, /* Critical: Servo converter 6 undervolt | */
   PS_VSEN_BUCK6_OV=2014, /* Critical: Servo converter 6 overvolt | */
   PS_VSEN_BUCK_S_AUX_UV=2015, /* Critical Backup failure: S-Aux converter  undervolt | */
   PS_VSEN_BUCK_S_AUX_OV=2016, /* Critical Backup failure: S-Aux converter  overvolt | */
   PS_VSEN_OSB_UV=2017, /* Critical: Onshore battery undervolt | */
   PS_VSEN_OSB_OV=2018, /* Critical: Onshore battery overvolt | */
   PS_VSEN_OBB_UV=2019, /* Critical: Onboard battery undervolt | */
   PS_VSEN_OBB_OV=2020, /* Critical: Onboard battery overvolt | */
   PS_VSEN_28IPS_UV=2021, /* Critical: IPS 28V output undervolt | */
   PS_VSEN_28IPS_OV=2022, /* Critical: IPS 28V output overvolt | */
   PS_VSEN_12IPS_UV=2023, /* Critical: IPS 12V output undervolt | */
   PS_VSEN_12IPS_OV=2024, /* Critical: IPS 12V output overvolt | */
   PS_VSEN_5IPS_UV=2025, /* Critical: IPS 5V output undervolt | */
   PS_VSEN_5IPS_OV=2026, /* Critical: IPS 5V output overvolt | */
   PS_AUX_PIX_VOLT_UV=2027, /* Critical Backup failure: Auxillary pixhawk voltage undervolt | */
   PS_AUX_PIX_VOLT_OV=2028, /* Critical Backup failure: Auxillary pixhawk voltage overvolt | */
   PS_STM_IN_VOLT_UV=2029, /* Critical:STM microcontroller input voltage undervolt | */
   PS_STM_IN_VOLT_OV=2030, /* Critical:STM microcontroller input voltage overvolt | */
   PS_ISEN_S1_OC=5002, /* Warning: Servo converter 1 overcurrent  | */
   PS_ISEN_S2_OC=5003, /* Warning: Servo converter 2 overcurrent  | */
   PS_ISEN_S3_OC=5004, /* Warning: Servo converter 3 overcurrent  | */
   PS_ISEN_S4_OC=5005, /* Warning: Servo converter 4 overcurrent  | */
   PS_ISEN_S6_OC=5006, /* Warning: Servo converter 6 overcurrent  | */
   PS_ISEN_S_AUX_OC=5007, /* Warning: S-Aux overcurrent  | */
   PS_S1_TEMP_HIGH=5008, /* Warning: Servo 1 temperature high  | */
   PS_S1_TEMP_LOW=5009, /* Warning: Servo 1 temperature low  | */
   PS_S2_TEMP_HIGH=5010, /* Warning: Servo 2 temperature high  | */
   PS_S2_TEMP_LOW=5011, /* Warning: Servo 2 temperature low  | */
   PS_S3_TEMP_HIGH=5012, /* Warning: Servo 3 temperature high  | */
   PS_S3_TEMP_LOW=5013, /* Warning: Servo 3 temperature low  | */
   PS_S4_TEMP_HIGH=5014, /* Warning: Servo 4 temperature high  | */
   PS_S4_TEMP_LOW=5015, /* Warning: Servo 4 temperature low  | */
   PS_S5_TEMP_HIGH=5016, /* Warning: Servo 5 temperature high  | */
   PS_S5_TEMP_LOW=5017, /* Warning: Servo 5 temperature low  | */
   PS_S6_TEMP_HIGH=5018, /* Warning: Servo 6 temperature high  | */
   PS_S6_TEMP_LOW=5019, /* Warning: Servo 6 temperature low  | */
   PS_ISENS_OSB_OC=5020, /* Warning: Onshore battery overcurrent  | */
   PS_ISENS_OBB_OC=5021, /* Warning: Onboard battery overcurrent  | */
   PS_OSB_TEMP_LOW=5022, /* Warning: Onshore battery temperature low  | */
   PS_OSB_TEMP_HIGH=5023, /* Warning: Onshore battery temperature high  | */
   PS_OBB_TEMP_LOW=5024, /* Warning: Onboard battery temperature low  | */
   PS_OBB_TEMP_HIGH=5025, /* Warning: Onboard battery temperature high  | */
   PS_ISEN_28IPS_OC=5026, /* Warning: IPS 28V output overcurrent  | */
   PS_ISEN_12IPS_OC=5027, /* Warning: IPS 12V output overcurrent  | */
   PS_ISEN_5IPS_OC=5028, /* Warning: IPS 5V output overcurrent  | */
   PS_PMU_TEMP_LOW=5029, /* Warning: IPS temperature low  | */
   PS_PMU_TEMP_HIGH=5030, /* Warning: IPS temperature high  | */
   PS_SG_TEMP_LOW=5031, /* Warning: SG temperature low  | */
   PS_SG_TEMP_HIGH=5032, /* Warning: SG temperature high  | */
   PS_ENG_TEMP1_LOW=5033, /* Warning:Engine temperature 1 low  | */
   PS_ENG_TEMP1_HIGH=5034, /* Warning:Engine temperature 1 high  | */
   PS_ENG_TEMP2_LOW=5035, /* Warning:Engine temperature 2 low  | */
   PS_ENG_TEMP2_HIGH=5036, /* Warning:Engine temperature 2 high  | */
   PS_ERROR_CODE_ENUM_END=5037, /*  | */
} PS_ERROR_CODE;
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
#include "./mavlink_msg_r10_psdata_error.h"

// base include


#undef MAVLINK_THIS_XML_IDX
#define MAVLINK_THIS_XML_IDX 5

#if MAVLINK_THIS_XML_IDX == MAVLINK_PRIMARY_XML_IDX
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_R10_SERVO_DATA, MAVLINK_MESSAGE_INFO_R10_IPS_DATA, MAVLINK_MESSAGE_INFO_R10_BAT_DATA, MAVLINK_MESSAGE_INFO_R10_OTH_DATA, MAVLINK_MESSAGE_INFO_R10_DLB_ERROR, MAVLINK_MESSAGE_INFO_R10_PSDATA_ERROR}
# define MAVLINK_MESSAGE_NAMES {{ "R10_BAT_DATA", 11074 }, { "R10_DLB_ERROR", 11076 }, { "R10_IPS_DATA", 11073 }, { "R10_OTH_DATA", 11075 }, { "R10_PSDATA_ERROR", 11077 }, { "R10_SERVO_DATA", 11072 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_R10_HMS_H
