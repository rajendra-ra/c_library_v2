/** @file
 *  @brief MAVLink comm protocol generated from stm32_mavlink.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_STM32_MAVLINK_H
#define MAVLINK_STM32_MAVLINK_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_STM32_MAVLINK.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#undef MAVLINK_THIS_XML_IDX
#define MAVLINK_THIS_XML_IDX 0

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{0, 50, 9, 9, 0, 0, 0}, {11072, 154, 38, 38, 0, 0, 0}, {11073, 23, 24, 24, 0, 0, 0}, {11074, 84, 18, 18, 0, 0, 0}, {11075, 13, 18, 18, 0, 0, 0}, {11076, 106, 10, 10, 0, 0, 0}, {11077, 34, 12, 12, 0, 0, 0}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_STM32_MAVLINK

// ENUM DEFINITIONS



// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

// MESSAGE DEFINITIONS


// base include
#include "../minimal/minimal.h"
#include "../R10_HMS/R10_HMS.h"

#undef MAVLINK_THIS_XML_IDX
#define MAVLINK_THIS_XML_IDX 0

#if MAVLINK_THIS_XML_IDX == MAVLINK_PRIMARY_XML_IDX
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_HEARTBEAT, MAVLINK_MESSAGE_INFO_R10_SERVO_DATA, MAVLINK_MESSAGE_INFO_R10_IPS_DATA, MAVLINK_MESSAGE_INFO_R10_BAT_DATA, MAVLINK_MESSAGE_INFO_R10_OTH_DATA, MAVLINK_MESSAGE_INFO_R10_DLB_ERROR, MAVLINK_MESSAGE_INFO_R10_PSDATA_ERROR}
# define MAVLINK_MESSAGE_NAMES {{ "HEARTBEAT", 0 }, { "R10_BAT_DATA", 11074 }, { "R10_DLB_ERROR", 11076 }, { "R10_IPS_DATA", 11073 }, { "R10_OTH_DATA", 11075 }, { "R10_PSDATA_ERROR", 11077 }, { "R10_SERVO_DATA", 11072 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_STM32_MAVLINK_H
