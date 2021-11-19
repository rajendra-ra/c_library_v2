/** @file
 *	@brief MAVLink comm protocol generated from R5BMS.xml
 *	@see http://mavlink.org
 */

#pragma once

#include <array>
#include <cstdint>
#include <sstream>

#ifndef MAVLINK_STX
#define MAVLINK_STX 253
#endif

#include "../message.hpp"

namespace mavlink {
namespace R5BMS {

/**
 * Array of msg_entry needed for @p mavlink_parse_char() (trought @p mavlink_get_msg_entry())
 */
constexpr std::array<mavlink_msg_entry_t, 2> MESSAGE_ENTRIES {{ {11069, 162, 24, 24, 0, 0, 0}, {11071, 32, 36, 36, 0, 0, 0} }};

//! MAVLINK VERSION
constexpr auto MAVLINK_VERSION = 3;


// ENUM DEFINITIONS




} // namespace R5BMS
} // namespace mavlink

// MESSAGE DEFINITIONS
#include "./mavlink_msg_bms_aux_data.hpp"
#include "./mavlink_msg_top_mid_pcb_data.hpp"

// base include

