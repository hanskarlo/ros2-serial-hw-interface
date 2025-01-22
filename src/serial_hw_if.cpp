#include "../include/ros2-serial-hw-interface/serial_hw_if.hpp"
#include "pluginlib/class_list_macros.hpp"

namespace serial_hw_if
{
    hardware_interface::CallbackReturn SerialHardwareInterface::on_init(const hardware_interface::HardwareInfo &info)
    {
        
    }


    hardware_interface::CallbackReturn SerialHardwareInterface::on_configure(const rclcpp_lifecycle::State &previous_state)
    {

    }


    hardware_interface::CallbackReturn SerialHardwareInterface::on_cleanup(const rclcpp_lifecycle::State &previous_state)
    {

    }


    hardware_interface::CallbackReturn SerialHardwareInterface::on_activate(const rclcpp_lifecycle::State &previous_state)
    {

    }


    hardware_interface::CallbackReturn SerialHardwareInterface::on_deactivate(const rclcpp_lifecycle::State &previous_state)
    {

    }


    hardware_interface::return_type SerialHardwareInterface::read(const rclcpp::Time &time, const rclcpp::Duration &period)
    {

    }


    hardware_interface::return_type SerialHardwareInterface::write(const rclcpp::Time &time, const rclcpp::Duration &period)
    {

    }

}

PLUGINLIB_EXPORT_CLASS(serial_hw_if::SerialHardwareInterface, hardware_interface::SystemInterface);