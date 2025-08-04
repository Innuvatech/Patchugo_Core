/**
* File: patchugo_logger_types.h
* Created on: 2025-08-04 at 12:40
* Author: Andrea Rantin
* Description: This file contains definitions for the Patchugo logging library.
* The maximum length printable with the library and all logging levels are defined here
*/

#pragma once

#include <Arduino.h>

namespace PatchugoLogger {

    /**
    * @brief Maximum number of bytes that can be printed by the Patchugo logger
    * 
    */
    static constexpr uint16_t PATCHUGO_LOGS_MAX_LEN = 512;

    /**
    * @brief Logging levels of the library. These are used to filter logs,
    * all logs with a level higher than the selected one are not shown
    */
    enum class PatchugoLogLevel {
        LOG_LEVEL_NONE, /*<! Lowest level of logging, with this level active no logs are shown*/
        LOG_LEVEL_ERROR, /*<! Errors log level, with this level active, all error logs that are printed by the Patchugo libraries are shown*/
        LOG_LEVEL_SYSTEM, /*!< System log level, with this level active, all system logs such as initializations by the Patchugo libraries are shown*/
        LOG_LEVEL_WARN, /*!< Warning log level, with this level active, all informations about things that could be dangerous but are not considered errors are shown*/
        LOG_LEVEL_DEBUG, /*!< Debug log level, with this level active all debugging information is shown*/
        LOG_LEVEL_INFO, /*!< Information log level, with this level active almost all additional information that is printed inside the libraries is shown*/
        LOG_LEVEL_VERBOSE, /*!< Verbose log level, with this level active all logs of the Patchugo libraries are show*/
    };

    //Utility constant expressions to ease use of enum class of PatchugoLogLevel
    static constexpr PatchugoLogLevel LOG_LEVEL_NONE = PatchugoLogLevel::LOG_LEVEL_NONE;
    static constexpr PatchugoLogLevel LOG_LEVEL_ERROR = PatchugoLogLevel::LOG_LEVEL_ERROR;
    static constexpr PatchugoLogLevel LOG_LEVEL_SYSTEM = PatchugoLogLevel::LOG_LEVEL_SYSTEM;
    static constexpr PatchugoLogLevel LOG_LEVEL_WARN = PatchugoLogLevel::LOG_LEVEL_WARN;
    static constexpr PatchugoLogLevel LOG_LEVEL_DEBUG = PatchugoLogLevel::LOG_LEVEL_DEBUG;
    static constexpr PatchugoLogLevel LOG_LEVEL_INFO = PatchugoLogLevel::LOG_LEVEL_INFO;
    static constexpr PatchugoLogLevel LOG_LEVEL_VERBOSE = PatchugoLogLevel::LOG_LEVEL_VERBOSE;
}

