/** @file
 *	@brief MAVLink comm testsuite protocol generated from R5BMS.xml
 *	@see http://mavlink.org
 */

#pragma once

#include <gtest/gtest.h>
#include "R5BMS.hpp"

#ifdef TEST_INTEROP
using namespace mavlink;
#undef MAVLINK_HELPER
#include "mavlink.h"
#endif


TEST(R5BMS, BMS_AUX_DATA)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::R5BMS::msg::BMS_AUX_DATA packet_in{};
    packet_in.aux_current = 17235;
    packet_in.aux_voltage = 17339;
    packet_in.BMS_current1 = 17443;
    packet_in.BMS_current2 = 17547;
    packet_in.BMS_current3 = 17651;
    packet_in.BMS_voltage = 17755;
    packet_in.BMS_temperature1 = 17859;
    packet_in.BMS_temperature2 = 17963;
    packet_in.BMS_temperature3 = 18067;
    packet_in.BMS_temperature4 = 18171;
    packet_in.BMS_cout = 18275;
    packet_in.BMS_dout = 18379;

    mavlink::R5BMS::msg::BMS_AUX_DATA packet1{};
    mavlink::R5BMS::msg::BMS_AUX_DATA packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.aux_current, packet2.aux_current);
    EXPECT_EQ(packet1.aux_voltage, packet2.aux_voltage);
    EXPECT_EQ(packet1.BMS_current1, packet2.BMS_current1);
    EXPECT_EQ(packet1.BMS_current2, packet2.BMS_current2);
    EXPECT_EQ(packet1.BMS_current3, packet2.BMS_current3);
    EXPECT_EQ(packet1.BMS_voltage, packet2.BMS_voltage);
    EXPECT_EQ(packet1.BMS_temperature1, packet2.BMS_temperature1);
    EXPECT_EQ(packet1.BMS_temperature2, packet2.BMS_temperature2);
    EXPECT_EQ(packet1.BMS_temperature3, packet2.BMS_temperature3);
    EXPECT_EQ(packet1.BMS_temperature4, packet2.BMS_temperature4);
    EXPECT_EQ(packet1.BMS_cout, packet2.BMS_cout);
    EXPECT_EQ(packet1.BMS_dout, packet2.BMS_dout);
}

#ifdef TEST_INTEROP
TEST(R5BMS_interop, BMS_AUX_DATA)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_bms_aux_data_t packet_c {
         17235, 17339, 17443, 17547, 17651, 17755, 17859, 17963, 18067, 18171, 18275, 18379
    };

    mavlink::R5BMS::msg::BMS_AUX_DATA packet_in{};
    packet_in.aux_current = 17235;
    packet_in.aux_voltage = 17339;
    packet_in.BMS_current1 = 17443;
    packet_in.BMS_current2 = 17547;
    packet_in.BMS_current3 = 17651;
    packet_in.BMS_voltage = 17755;
    packet_in.BMS_temperature1 = 17859;
    packet_in.BMS_temperature2 = 17963;
    packet_in.BMS_temperature3 = 18067;
    packet_in.BMS_temperature4 = 18171;
    packet_in.BMS_cout = 18275;
    packet_in.BMS_dout = 18379;

    mavlink::R5BMS::msg::BMS_AUX_DATA packet2{};

    mavlink_msg_bms_aux_data_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.aux_current, packet2.aux_current);
    EXPECT_EQ(packet_in.aux_voltage, packet2.aux_voltage);
    EXPECT_EQ(packet_in.BMS_current1, packet2.BMS_current1);
    EXPECT_EQ(packet_in.BMS_current2, packet2.BMS_current2);
    EXPECT_EQ(packet_in.BMS_current3, packet2.BMS_current3);
    EXPECT_EQ(packet_in.BMS_voltage, packet2.BMS_voltage);
    EXPECT_EQ(packet_in.BMS_temperature1, packet2.BMS_temperature1);
    EXPECT_EQ(packet_in.BMS_temperature2, packet2.BMS_temperature2);
    EXPECT_EQ(packet_in.BMS_temperature3, packet2.BMS_temperature3);
    EXPECT_EQ(packet_in.BMS_temperature4, packet2.BMS_temperature4);
    EXPECT_EQ(packet_in.BMS_cout, packet2.BMS_cout);
    EXPECT_EQ(packet_in.BMS_dout, packet2.BMS_dout);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(R5BMS, TOP_MID_PCB_DATA)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::R5BMS::msg::TOP_MID_PCB_DATA packet_in{};
    packet_in.battery_voltage = 17235;
    packet_in.servo1_current = 17339;
    packet_in.servo2_current = 17443;
    packet_in.servo3_current = 17547;
    packet_in.temp_servo1 = 17651;
    packet_in.temp_servo2 = 17755;
    packet_in.temp_servo3 = 17859;
    packet_in.temp_ambient1 = 17963;
    packet_in.temp_ambient2 = 18067;
    packet_in.mid_servo1_current = 18171;
    packet_in.mid_servo2_current = 18275;
    packet_in.mid_servo3_current = 18379;
    packet_in.mid_temp_servo1 = 18483;
    packet_in.mid_temp_servo2 = 18587;
    packet_in.voltage_bec1 = 18691;
    packet_in.voltage_bec2 = 18795;
    packet_in.voltage_buck = 18899;
    packet_in.Temp_servo3 = 19003;

    mavlink::R5BMS::msg::TOP_MID_PCB_DATA packet1{};
    mavlink::R5BMS::msg::TOP_MID_PCB_DATA packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.battery_voltage, packet2.battery_voltage);
    EXPECT_EQ(packet1.servo1_current, packet2.servo1_current);
    EXPECT_EQ(packet1.servo2_current, packet2.servo2_current);
    EXPECT_EQ(packet1.servo3_current, packet2.servo3_current);
    EXPECT_EQ(packet1.temp_servo1, packet2.temp_servo1);
    EXPECT_EQ(packet1.temp_servo2, packet2.temp_servo2);
    EXPECT_EQ(packet1.temp_servo3, packet2.temp_servo3);
    EXPECT_EQ(packet1.temp_ambient1, packet2.temp_ambient1);
    EXPECT_EQ(packet1.temp_ambient2, packet2.temp_ambient2);
    EXPECT_EQ(packet1.mid_servo1_current, packet2.mid_servo1_current);
    EXPECT_EQ(packet1.mid_servo2_current, packet2.mid_servo2_current);
    EXPECT_EQ(packet1.mid_servo3_current, packet2.mid_servo3_current);
    EXPECT_EQ(packet1.mid_temp_servo1, packet2.mid_temp_servo1);
    EXPECT_EQ(packet1.mid_temp_servo2, packet2.mid_temp_servo2);
    EXPECT_EQ(packet1.voltage_bec1, packet2.voltage_bec1);
    EXPECT_EQ(packet1.voltage_bec2, packet2.voltage_bec2);
    EXPECT_EQ(packet1.voltage_buck, packet2.voltage_buck);
    EXPECT_EQ(packet1.Temp_servo3, packet2.Temp_servo3);
}

#ifdef TEST_INTEROP
TEST(R5BMS_interop, TOP_MID_PCB_DATA)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_top_mid_pcb_data_t packet_c {
         17235, 17339, 17443, 17547, 17651, 17755, 17859, 17963, 18067, 18171, 18275, 18379, 18483, 18587, 18691, 18795, 18899, 19003
    };

    mavlink::R5BMS::msg::TOP_MID_PCB_DATA packet_in{};
    packet_in.battery_voltage = 17235;
    packet_in.servo1_current = 17339;
    packet_in.servo2_current = 17443;
    packet_in.servo3_current = 17547;
    packet_in.temp_servo1 = 17651;
    packet_in.temp_servo2 = 17755;
    packet_in.temp_servo3 = 17859;
    packet_in.temp_ambient1 = 17963;
    packet_in.temp_ambient2 = 18067;
    packet_in.mid_servo1_current = 18171;
    packet_in.mid_servo2_current = 18275;
    packet_in.mid_servo3_current = 18379;
    packet_in.mid_temp_servo1 = 18483;
    packet_in.mid_temp_servo2 = 18587;
    packet_in.voltage_bec1 = 18691;
    packet_in.voltage_bec2 = 18795;
    packet_in.voltage_buck = 18899;
    packet_in.Temp_servo3 = 19003;

    mavlink::R5BMS::msg::TOP_MID_PCB_DATA packet2{};

    mavlink_msg_top_mid_pcb_data_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.battery_voltage, packet2.battery_voltage);
    EXPECT_EQ(packet_in.servo1_current, packet2.servo1_current);
    EXPECT_EQ(packet_in.servo2_current, packet2.servo2_current);
    EXPECT_EQ(packet_in.servo3_current, packet2.servo3_current);
    EXPECT_EQ(packet_in.temp_servo1, packet2.temp_servo1);
    EXPECT_EQ(packet_in.temp_servo2, packet2.temp_servo2);
    EXPECT_EQ(packet_in.temp_servo3, packet2.temp_servo3);
    EXPECT_EQ(packet_in.temp_ambient1, packet2.temp_ambient1);
    EXPECT_EQ(packet_in.temp_ambient2, packet2.temp_ambient2);
    EXPECT_EQ(packet_in.mid_servo1_current, packet2.mid_servo1_current);
    EXPECT_EQ(packet_in.mid_servo2_current, packet2.mid_servo2_current);
    EXPECT_EQ(packet_in.mid_servo3_current, packet2.mid_servo3_current);
    EXPECT_EQ(packet_in.mid_temp_servo1, packet2.mid_temp_servo1);
    EXPECT_EQ(packet_in.mid_temp_servo2, packet2.mid_temp_servo2);
    EXPECT_EQ(packet_in.voltage_bec1, packet2.voltage_bec1);
    EXPECT_EQ(packet_in.voltage_bec2, packet2.voltage_bec2);
    EXPECT_EQ(packet_in.voltage_buck, packet2.voltage_buck);
    EXPECT_EQ(packet_in.Temp_servo3, packet2.Temp_servo3);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif
