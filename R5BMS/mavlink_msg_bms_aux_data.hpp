// MESSAGE BMS_AUX_DATA support class

#pragma once

namespace mavlink {
namespace R5BMS {
namespace msg {

/**
 * @brief BMS_AUX_DATA message
 *
 * Data from auxillary microcontroller and BMS microcontroller
 */
struct BMS_AUX_DATA : mavlink::Message {
    static constexpr msgid_t MSG_ID = 11069;
    static constexpr size_t LENGTH = 24;
    static constexpr size_t MIN_LENGTH = 24;
    static constexpr uint8_t CRC_EXTRA = 162;
    static constexpr auto NAME = "BMS_AUX_DATA";


    uint16_t aux_current; /*<  aux_battery_current */
    uint16_t aux_voltage; /*<  aux_battery_voltage */
    uint16_t BMS_current1; /*<  BMS_mux_current1 */
    uint16_t BMS_current2; /*<  BMS_mux_current2 */
    uint16_t BMS_current3; /*<  BMS_mux_current3 */
    uint16_t BMS_voltage; /*<  BMS_mux_voltage */
    uint16_t BMS_temperature1; /*<  BMS_mux_temperature1 */
    uint16_t BMS_temperature2; /*<  BMS_mux_temperature2 */
    uint16_t BMS_temperature3; /*<  BMS_mux_temperature3 */
    uint16_t BMS_temperature4; /*<  BMS_mux_temperature4 */
    uint16_t BMS_cout; /*<  BMS_ic_cout */
    uint16_t BMS_dout; /*<  BMS_ic_dout */


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
        ss << "  aux_current: " << aux_current << std::endl;
        ss << "  aux_voltage: " << aux_voltage << std::endl;
        ss << "  BMS_current1: " << BMS_current1 << std::endl;
        ss << "  BMS_current2: " << BMS_current2 << std::endl;
        ss << "  BMS_current3: " << BMS_current3 << std::endl;
        ss << "  BMS_voltage: " << BMS_voltage << std::endl;
        ss << "  BMS_temperature1: " << BMS_temperature1 << std::endl;
        ss << "  BMS_temperature2: " << BMS_temperature2 << std::endl;
        ss << "  BMS_temperature3: " << BMS_temperature3 << std::endl;
        ss << "  BMS_temperature4: " << BMS_temperature4 << std::endl;
        ss << "  BMS_cout: " << BMS_cout << std::endl;
        ss << "  BMS_dout: " << BMS_dout << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << aux_current;                   // offset: 0
        map << aux_voltage;                   // offset: 2
        map << BMS_current1;                  // offset: 4
        map << BMS_current2;                  // offset: 6
        map << BMS_current3;                  // offset: 8
        map << BMS_voltage;                   // offset: 10
        map << BMS_temperature1;              // offset: 12
        map << BMS_temperature2;              // offset: 14
        map << BMS_temperature3;              // offset: 16
        map << BMS_temperature4;              // offset: 18
        map << BMS_cout;                      // offset: 20
        map << BMS_dout;                      // offset: 22
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> aux_current;                   // offset: 0
        map >> aux_voltage;                   // offset: 2
        map >> BMS_current1;                  // offset: 4
        map >> BMS_current2;                  // offset: 6
        map >> BMS_current3;                  // offset: 8
        map >> BMS_voltage;                   // offset: 10
        map >> BMS_temperature1;              // offset: 12
        map >> BMS_temperature2;              // offset: 14
        map >> BMS_temperature3;              // offset: 16
        map >> BMS_temperature4;              // offset: 18
        map >> BMS_cout;                      // offset: 20
        map >> BMS_dout;                      // offset: 22
    }
};

} // namespace msg
} // namespace R5BMS
} // namespace mavlink
