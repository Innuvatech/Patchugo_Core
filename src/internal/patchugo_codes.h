/**
* File: patchugo_codes.h
* Created on: 2025-08-04 at 12:12
* Author: Andrea Rantin
* Description: This file contains status code definitions and functionalities such as converting to/from int
*/

#pragma once

#include <Arduino.h>

namespace PatchugoCodes {

    /**
    * @brief Status code returned by operations
    * in all other Patchugo libraries.
    * All codes between 0 and 105 are considered as WARNINGS(Conditions
    * that are not critical enough to break the flow/logic of the functionality but
    * should be handled if possible). All codes after 105 are considered as ERRORS(Conditions
    * that must be fixed/handled in order for the flow/logic to work). The value of 105 represents OK
    * which signals success in any operation
    */
    enum class PatchugoStatusCode {
        OK = 105,
        ERROR_ANALOG_WRITE_CONF_REG,
        ERROR_ANALOG_READ_CONF_REG,
        ERROR_ANALOG_WRONG_CONF,
        ERROR_ANALOG_READ_CONV,
        ERROR_RELAY_READ_STATE,
        ERROR_RELAY_WRITE,
        ERROR_RELAY_CLEAR,
        ERROR_BT_SERIAL_HAL_INIT,
        ERROR_BT_ECHO_OFF,
        ERROR_BT_ECHO_OFF_SEND_CMD,
        ERROR_DMA_CALLBACK_NULL,
        ERROR_DMA_RESULT_NULL,
        ERROR_BT_NAME_LEN,
        ERROR_BT_CHANGE_NAME,
        ERROR_BT_NAME_SEND_CMD,
        ERROR_BT_SET_MTU,
        ERROR_BT_MTU_SEND_CMD,
        ERROR_BT_MODE,
        ERROR_BT_SEND_AT,
        ERROR_BT_AT,
        ERROR_RS485_SERIAL_HAL_INIT,
        ERROR_RS485_SERIAL_WRITE,
        ERROR_RS485_SERIAL_READ,
        ERROR_USB_SERIAL_HAL_INIT,
        ERROR_USB_SERIAL_WRITE,
        ERROR_USB_SERIAL_READ,
        ERROR_I2C_HAL_INIT,
        ERROR_I2C_WRITE,
        ERROR_I2C_READ,
        ERROR_I2C_WRITE_REG,
        ERROR_I2C_READ_REG,
        ERROR_SPI_HAL_INIT,
        ERROR_SPI_WRITE,
        ERROR_SPI_READ,
        ERROR_FLASH_READ_REG,
        ERROR_FLASH_WRITE_INSTRUCTION,
        ERROR_FLASH_STATUS,
        ERROR_FLASH_SECTOR_ERASE,
        ERROR_FLASH_READ_DATA,
        ERROR_FLASH_WRITE_DATA,
    };

    //Utility constant expressions to ease use of enum class of PatchugoStatusCode
    static constexpr PatchugoStatusCode OK = PatchugoCodes::PatchugoStatusCode::OK;
    static constexpr PatchugoStatusCode ERROR_ANALOG_WRITE_CONF_REG = PatchugoCodes::PatchugoStatusCode::ERROR_ANALOG_WRITE_CONF_REG;
    static constexpr PatchugoStatusCode ERROR_ANALOG_READ_CONF_REG = PatchugoCodes::PatchugoStatusCode::ERROR_ANALOG_READ_CONF_REG;
    static constexpr PatchugoStatusCode ERROR_ANALOG_WRONG_CONF = PatchugoCodes::PatchugoStatusCode::ERROR_ANALOG_WRONG_CONF;
    static constexpr PatchugoStatusCode ERROR_ANALOG_READ_CONV = PatchugoCodes::PatchugoStatusCode::ERROR_ANALOG_READ_CONV;
    static constexpr PatchugoStatusCode ERROR_RELAY_READ_STATE = PatchugoCodes::PatchugoStatusCode::ERROR_RELAY_READ_STATE;
    static constexpr PatchugoStatusCode ERROR_RELAY_WRITE = PatchugoCodes::PatchugoStatusCode::ERROR_RELAY_WRITE;
    static constexpr PatchugoStatusCode ERROR_RELAY_CLEAR = PatchugoCodes::PatchugoStatusCode::ERROR_RELAY_CLEAR;
    static constexpr PatchugoStatusCode ERROR_BT_SERIAL_HAL_INIT = PatchugoCodes::PatchugoStatusCode::ERROR_BT_SERIAL_HAL_INIT;
    static constexpr PatchugoStatusCode ERROR_BT_ECHO_OFF = PatchugoCodes::PatchugoStatusCode::ERROR_BT_ECHO_OFF;
    static constexpr PatchugoStatusCode ERROR_BT_ECHO_OFF_SEND_CMD = PatchugoCodes::PatchugoStatusCode::ERROR_BT_ECHO_OFF_SEND_CMD;
    static constexpr PatchugoStatusCode ERROR_DMA_CALLBACK_NULL = PatchugoCodes::PatchugoStatusCode::ERROR_DMA_CALLBACK_NULL;
    static constexpr PatchugoStatusCode ERROR_DMA_RESULT_NULL = PatchugoCodes::PatchugoStatusCode::ERROR_DMA_RESULT_NULL;
    static constexpr PatchugoStatusCode ERROR_BT_NAME_LEN = PatchugoCodes::PatchugoStatusCode::ERROR_BT_NAME_LEN;
    static constexpr PatchugoStatusCode ERROR_BT_CHANGE_NAME = PatchugoCodes::PatchugoStatusCode::ERROR_BT_CHANGE_NAME;
    static constexpr PatchugoStatusCode ERROR_BT_NAME_SEND_CMD = PatchugoCodes::PatchugoStatusCode::ERROR_BT_NAME_SEND_CMD;
    static constexpr PatchugoStatusCode ERROR_BT_SET_MTU = PatchugoCodes::PatchugoStatusCode::ERROR_BT_SET_MTU;
    static constexpr PatchugoStatusCode ERROR_BT_MTU_SEND_CMD = PatchugoCodes::PatchugoStatusCode::ERROR_BT_MTU_SEND_CMD;
    static constexpr PatchugoStatusCode ERROR_BT_MODE = PatchugoCodes::PatchugoStatusCode::ERROR_BT_MODE;
    static constexpr PatchugoStatusCode ERROR_BT_SEND_AT = PatchugoCodes::PatchugoStatusCode::ERROR_BT_SEND_AT;
    static constexpr PatchugoStatusCode ERROR_BT_AT = PatchugoCodes::PatchugoStatusCode::ERROR_BT_AT;
    static constexpr PatchugoStatusCode ERROR_RS485_SERIAL_HAL_INIT = PatchugoCodes::PatchugoStatusCode::ERROR_RS485_SERIAL_HAL_INIT;
    static constexpr PatchugoStatusCode ERROR_RS485_SERIAL_WRITE = PatchugoCodes::PatchugoStatusCode::ERROR_RS485_SERIAL_WRITE;
    static constexpr PatchugoStatusCode ERROR_RS485_SERIAL_READ = PatchugoCodes::PatchugoStatusCode::ERROR_RS485_SERIAL_READ;
    static constexpr PatchugoStatusCode ERROR_USB_SERIAL_HAL_INIT = PatchugoCodes::PatchugoStatusCode::ERROR_USB_SERIAL_HAL_INIT;
    static constexpr PatchugoStatusCode ERROR_USB_SERIAL_WRITE = PatchugoCodes::PatchugoStatusCode::ERROR_USB_SERIAL_WRITE;
    static constexpr PatchugoStatusCode ERROR_USB_SERIAL_READ = PatchugoCodes::PatchugoStatusCode::ERROR_USB_SERIAL_READ;
    static constexpr PatchugoStatusCode ERROR_I2C_HAL_INIT = PatchugoCodes::PatchugoStatusCode::ERROR_I2C_HAL_INIT;
    static constexpr PatchugoStatusCode ERROR_I2C_WRITE = PatchugoCodes::PatchugoStatusCode::ERROR_I2C_WRITE;
    static constexpr PatchugoStatusCode ERROR_I2C_READ = PatchugoCodes::PatchugoStatusCode::ERROR_I2C_READ;
    static constexpr PatchugoStatusCode ERROR_I2C_WRITE_REG = PatchugoCodes::PatchugoStatusCode::ERROR_I2C_WRITE_REG;
    static constexpr PatchugoStatusCode ERROR_I2C_READ_REG = PatchugoCodes::PatchugoStatusCode::ERROR_I2C_READ_REG;
    static constexpr PatchugoStatusCode ERROR_SPI_HAL_INIT = PatchugoCodes::PatchugoStatusCode::ERROR_SPI_HAL_INIT;
    static constexpr PatchugoStatusCode ERROR_SPI_WRITE = PatchugoCodes::PatchugoStatusCode::ERROR_SPI_WRITE;
    static constexpr PatchugoStatusCode ERROR_SPI_READ = PatchugoCodes::PatchugoStatusCode::ERROR_SPI_READ;
    static constexpr PatchugoStatusCode ERROR_FLASH_READ_REG = PatchugoCodes::PatchugoStatusCode::ERROR_FLASH_READ_REG;
    static constexpr PatchugoStatusCode ERROR_FLASH_WRITE_INSTRUCTION = PatchugoCodes::PatchugoStatusCode::ERROR_FLASH_WRITE_INSTRUCTION;
    static constexpr PatchugoStatusCode ERROR_FLASH_STATUS = PatchugoCodes::PatchugoStatusCode::ERROR_FLASH_STATUS;
    static constexpr PatchugoStatusCode ERROR_FLASH_SECTOR_ERASE = PatchugoCodes::PatchugoStatusCode::ERROR_FLASH_SECTOR_ERASE;
    static constexpr PatchugoStatusCode ERROR_FLASH_READ_DATA = PatchugoCodes::PatchugoStatusCode::ERROR_FLASH_READ_DATA;
    static constexpr PatchugoStatusCode ERROR_FLASH_WRITE_DATA = PatchugoCodes::PatchugoStatusCode::ERROR_FLASH_WRITE_DATA;


    /**
    * @brief Returns the integer representation of the given status code
    * 
    * @param code Code to convert
    * @return uint32_t Integer representation of the status code. For example,
    * if PatchgoStatusCode::OK is given to this function, the value 105 will be returned.
    */
    uint32_t PatchugoStatusCode_ToUint(PatchugoStatusCode code);
}