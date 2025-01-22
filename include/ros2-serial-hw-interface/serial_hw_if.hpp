#ifndef __SERIAL_HW_IF_H__
#define __SERIAL_HW_IF_H__


#include <rclcpp/rclcpp.hpp>

#include "hardware_interface/handle.hpp"
#include "hardware_interface/hardware_info.hpp"
#include "hardware_interface/system_interface.hpp"
#include "hardware_interface/types/hardware_interface_return_values.hpp"
#include "hardware_interface/types/hardware_interface_type_values.hpp"

#include "serial/serial.h"

namespace serial_hw_if
{

    // using CallbackReturn = rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn;

    class SerialHardwareInterface : public hardware_interface::SystemInterface
    {
        public:

            hardware_interface::CallbackReturn on_init(const hardware_interface::HardwareInfo &info) override;

            hardware_interface::CallbackReturn on_configure(const rclcpp_lifecycle::State &previous_state) override;
            hardware_interface::CallbackReturn on_cleanup(const rclcpp_lifecycle::State &previous_state) override;

            hardware_interface::CallbackReturn on_activate(const rclcpp_lifecycle::State &previous_state) override;
            hardware_interface::CallbackReturn on_deactivate(const rclcpp_lifecycle::State &previous_state) override;

            hardware_interface::return_type read(const rclcpp::Time &time, const rclcpp::Duration &period) override;
            hardware_interface::return_type write(const rclcpp::Time &time, const rclcpp::Duration &period) override;

    };


} // serial_hw_if







#endif // __SERIAL_HW_IF_H__