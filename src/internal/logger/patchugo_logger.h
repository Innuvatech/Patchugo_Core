/**
* File: patchugo_logger.h
* Created on: 2025-08-04 at 12:44
* Author: Andrea Rantin
* Description: File containing the logger class of the library. It's this class
* that is responsible for managing logging and filtering on log levels aswell as managing the logging
* of formatted strings
*/

#pragma once

#include "internal/logger/patchugo_logger_types.h"
#include <HardwareSerial.h>

namespace PatchugoLogger {

    class Patchugo_Logger {
        private:
            HardwareSerial& logSerial; /*!< Reference to the Serial instance used for logging*/
            PatchugoLogLevel currentLogLevel = PatchugoLogLevel::LOG_LEVEL_NONE; /*!< Log level used to filter on logs. Defaults to NONE*/

            /**
            * @brief Internal function used to actually print the logs torugh Serial
            * 
            * @param logLevel Log level of the log to print
            * @param fmt Formatted string to print
            * @param args Arguments of the formatted string
            */
            void Log_Write_Internal(PatchugoLogger::PatchugoLogLevel logLevel, const char *fmt, va_list args);

        public:
            Patchugo_Logger(HardwareSerial& serial, PatchugoLogger::PatchugoLogLevel level) : logSerial(serial), currentLogLevel(level){};

                        /**
            * @brief Sets the current logging level to the new provided one
            * 
            * @param newLevel New log level to filter on
            */
            void Log_Set_Level(PatchugoLogger::PatchugoLogLevel newLevel);

            /**
            * @brief Prints a log with LOG_LEVEL_ERROR
            * 
            * @param fmt Formatted string
            * @param ... Arguments of the string
            */
            void Log_Error(const char *fmt, ...);

            /**
            * @brief Prints a log with LOG_LEVEL_SYSTEM
            * 
            * @param fmt Formatted string
            * @param ... Arguments of the string
            */
            void Log_System(const char *fmt, ...);

            /**
            * @brief Prints a log with LOG_LEVEL_WARN
            * 
            * @param fmt Formatted string
            * @param ... Arguments of the string
            */
            void Log_Warn(const char *fmt, ...);

            /**
            * @brief Prints a log with LOG_LEVEL_DEBUG
            * 
            * @param fmt Formatted string
            * @param ... Arguments of the string
            */
            void Log_Debug(const char *fmt, ...);

            /**
            * @brief Prints a log with LOG_LEVEL_INFO
            * 
            * @param fmt Formatted string
            * @param ... Arguments of the string
            */
            void Log_Info(const char *fmt, ...);

            /**
            * @brief Prints a log with LOG_LEVEL_VERBOSE
            * 
            * @param fmt Formatted string
            * @param ... Arguments of the string
            */
            void Log_Verbose(const char *fmt, ...);
    };
}

