/** @file
 *  @brief MAVLink comm protocol generated from mavrouter_custom.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_MAVROUTER_CUSTOM_H
#define MAVLINK_MAVROUTER_CUSTOM_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_MAVROUTER_CUSTOM.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
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
#define MAVLINK_MESSAGE_CRCS {{11078, 27, 3, 3, 0, 0, 0}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_MAVROUTER_CUSTOM

// ENUM DEFINITIONS


/** @brief List of active channels */
#ifndef HAVE_ENUM_ROUTER_ACTIVE_CHANNEL
#define HAVE_ENUM_ROUTER_ACTIVE_CHANNEL
typedef enum ROUTER_ACTIVE_CHANNEL
{
   ROUTER_ACTIVE_CHANNEL_NONE=0, /* No active channels i.e all channels are dead | */
   ROUTER_ACTIVE_CHANNEL_ONE=1, /* Channel 1 active | */
   ROUTER_ACTIVE_CHANNEL_TWO=2, /* Channel 2 active | */
   ROUTER_ACTIVE_CHANNEL_THREE=4, /* Channel 3 active | */
   ROUTER_ACTIVE_CHANNEL_FOUR=8, /* Channel 4 active | */
   ROUTER_ACTIVE_CHANNEL_FIVE=16, /* Channel 5 active | */
   ROUTER_ACTIVE_CHANNEL_SIX=32, /* Channel 6 active | */
   ROUTER_ACTIVE_CHANNEL_SEVEN=64, /* Channel 7 active | */
   ROUTER_ACTIVE_CHANNEL_EIGHT=128, /* Channel 8 active | */
   ROUTER_ACTIVE_CHANNEL_ENUM_END=129, /*  | */
} ROUTER_ACTIVE_CHANNEL;
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
#include "./mavlink_msg_router_channel_status.h"

// base include


#undef MAVLINK_THIS_XML_IDX
#define MAVLINK_THIS_XML_IDX 4

#if MAVLINK_THIS_XML_IDX == MAVLINK_PRIMARY_XML_IDX
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_ROUTER_CHANNEL_STATUS}
# define MAVLINK_MESSAGE_NAMES {{ "ROUTER_CHANNEL_STATUS", 11078 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_MAVROUTER_CUSTOM_H
