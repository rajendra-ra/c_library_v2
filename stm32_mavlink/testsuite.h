/** @file
 *    @brief MAVLink comm protocol testsuite generated from stm32_mavlink.xml
 *    @see http://qgroundcontrol.org/mavlink/
 */
#pragma once
#ifndef STM32_MAVLINK_TESTSUITE_H
#define STM32_MAVLINK_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL
static void mavlink_test_minimal(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_R10_HMS(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_stm32_mavlink(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_minimal(system_id, component_id, last_msg);
    mavlink_test_R10_HMS(system_id, component_id, last_msg);
    mavlink_test_stm32_mavlink(system_id, component_id, last_msg);
}
#endif

#include "../minimal/testsuite.h"
#include "../R10_HMS/testsuite.h"



static void mavlink_test_stm32_mavlink(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{

}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // STM32_MAVLINK_TESTSUITE_H
