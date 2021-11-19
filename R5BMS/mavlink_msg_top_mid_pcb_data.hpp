// MESSAGE TOP_MID_PCB_DATA support class

#pragma once

namespace mavlink {
namespace R5BMS {
namespace msg {

/**
 * @brief TOP_MID_PCB_DATA message
 *
 * Data from top and mid pcb controllers microcontroller
 */
struct TOP_MID_PCB_DATA : mavlink::Message {
    static constexpr msgid_t MSG_ID = 11071;
    static constexpr size_t LENGTH = 36;
    static constexpr size_t MIN_LENGTH = 36;
    static constexpr uint8_t CRC_EXTRA = 32;
    static constexpr auto NAME = "TOP_MID_PCB_DATA";


    uint16_t battery_voltage; /*<  Top_battery_voltage */
    uint16_t servo1_current; /*<  Top_servo1_current */
    uint16_t servo2_current; /*<  Top_servo2_current */
    uint16_t servo3_current; /*<  Top_servo3_current */
    uint16_t temp_servo1; /*<  Top_servo1_temperature */
    uint16_t temp_servo2; /*<  Top_servo2_temperature */
    uint16_t temp_servo3; /*<  Top_servo3_temperature */
    uint16_t temp_ambient1; /*<  ambient temperature 1 */
    uint16_t temp_ambient2; /*<  ambient temperature 2 */
    uint16_t mid_servo1_current; /*<  mid_servo1_current */
    uint16_t mid_servo2_current; /*<  mid_servo2_current */
    uint16_t mid_servo3_current; /*<  mid_servo3_current */
    uint16_t mid_temp_servo1; /*<  mid_temp_servo1 */
    uint16_t mid_temp_servo2; /*<  mid_temp_servo2 */
    uint16_t voltage_bec1; /*<  voltage_bec1 */
    uint16_t voltage_bec2; /*<  voltage_bec2 */
    uint16_t voltage_buck; /*<  voltage_buck */
    uint16_t Temp_servo3; /*<  Temp_servo3 */


    inline std::string get_name(void) const override
    {
            return NAME;
    }

    inline Info get_message_info(void) const override
    {
            return { MSG_ID, LENGTH, MIN_LENGTH, CRC_EXTRA };
    }

    inline std::string to_yaml(void) const override
    {
        std::stringstream ss;

        ss << NAME << ":" << std::endl;
        ss << "  battery_voltage: " << battery_voltage << std::endl;
        ss << "  servo1_current: " << servo1_current << std::endl;
        ss << "  servo2_current: " << servo2_current << std::endl;
        ss << "  servo3_current: " << servo3_current << std::endl;
        ss << "  temp_servo1: " << temp_servo1 << std::endl;
        ss << "  temp_servo2: " << temp_servo2 << std::endl;
        ss << "  temp_servo3: " << temp_servo3 << std::endl;
        ss << "  temp_ambient1: " << temp_ambient1 << std::endl;
        ss << "  temp_ambient2: " << temp_ambient2 << std::endl;
        ss << "  mid_servo1_current: " << mid_servo1_current << std::endl;
        ss << "  mid_servo2_current: " << mid_servo2_current << std::endl;
        ss << "  mid_servo3_current: " << mid_servo3_current << std::endl;
        ss << "  mid_temp_servo1: " << mid_temp_servo1 << std::endl;
        ss << "  mid_temp_servo2: " << mid_temp_servo2 << std::endl;
        ss << "  voltage_bec1: " << voltage_bec1 << std::endl;
        ss << "  voltage_bec2: " << voltage_bec2 << std::endl;
        ss << "  voltage_buck: " << voltage_buck << std::endl;
        ss << "  Temp_servo3: " << Temp_servo3 << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << battery_voltage;               // offset: 0
        map << servo1_current;                // offset: 2
        map << servo2_current;                // offset: 4
        map << servo3_current;                // offset: 6
        map << temp_servo1;                   // offset: 8
        map << temp_servo2;                   // offset: 10
        map << temp_servo3;                   // offset: 12
        map << temp_ambient1;                 // offset: 14
        map << temp_ambient2;                 // offset: 16
        map << mid_servo1_current;            // offset: 18
        map << mid_servo2_current;            // offset: 20
        map << mid_servo3_current;            // offset: 22
        map << mid_temp_servo1;               // offset: 24
        map << mid_temp_servo2;               // offset: 26
        map << voltage_bec1;                  // offset: 28
        map << voltage_bec2;                  // offset: 30
        map << voltage_buck;                  // offset: 32
        map << Temp_servo3;                   // offset: 34
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> battery_voltage;               // offset: 0
        map >> servo1_current;                // offset: 2
        map >> servo2_current;                // offset: 4
        map >> servo3_current;                // offset: 6
        map >> temp_servo1;                   // offset: 8
        map >> temp_servo2;                   // offset: 10
        map >> temp_servo3;                   // offset: 12
        map >> temp_ambient1;                 // offset: 14
        map >> temp_ambient2;                 // offset: 16
        map >> mid_servo1_current;            // offset: 18
        map >> mid_servo2_current;            // offset: 20
        map >> mid_servo3_current;            // offset: 22
        map >> mid_temp_servo1;               // offset: 24
        map >> mid_temp_servo2;               // offset: 26
        map >> voltage_bec1;                  // offset: 28
        map >> voltage_bec2;                  // offset: 30
        map >> voltage_buck;                  // offset: 32
        map >> Temp_servo3;                   // offset: 34
    }
};

} // namespace msg
} // namespace R5BMS
} // namespace mavlink
