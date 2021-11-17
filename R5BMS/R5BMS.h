/** @file
 *  @brief MAVLink comm protocol generated from R5BMS.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_R5BMS_H
#define MAVLINK_R5BMS_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_R5BMS.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#undef MAVLINK_THIS_XML_IDX
#define MAVLINK_THIS_XML_IDX 4

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{11069, 162, 24, 24, 0, 0, 0}, {11071, 32, 36, 36, 0, 0, 0}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_R5BMS

// ENUM DEFINITIONS



// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 3
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 3
#endif

// MESSAGE DEFINITIONS
#include "./mavlink_msg_bms_aux_data.h"
#include "./mavlink_msg_top_mid_pcb_data.h"

// base include


#undef MAVLINK_THIS_XML_IDX
#define MAVLINK_THIS_XML_IDX 4

#if MAVLINK_THIS_XML_IDX == MAVLINK_PRIMARY_XML_IDX
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_BMS_AUX_DATA, MAVLINK_MESSAGE_INFO_TOP_MID_PCB_DATA}
# define MAVLINK_MESSAGE_NAMES {{ "BMS_AUX_DATA", 11069 }, { "TOP_MID_PCB_DATA", 11071 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_R5BMS_H
