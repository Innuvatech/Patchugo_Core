/**
* File: patchugo_logger.cpp
* Created on: 2025-08-04 at 12:50
* Author: Andrea Rantin
* Description: Implementation file for patchugo_logger.h
*/

#include "internal/logger/patchugo_logger.h"

using namespace PatchugoLogger;

void PatchugoLogger::Patchugo_Logger::Log_Write_Internal(PatchugoLogger::PatchugoLogLevel logLevel, const char *fmt, va_list args) {

    if(logLevel > currentLogLevel) return;

    char buffer[PATCHUGO_LOGS_MAX_LEN];
    vsnprintf(buffer, sizeof(buffer), fmt, args);
    logSerial.println(buffer);
}

void PatchugoLogger::Patchugo_Logger::Log_Set_Level(PatchugoLogger::PatchugoLogLevel newLevel) {
    currentLogLevel = newLevel;
}

void PatchugoLogger::Patchugo_Logger::Log_Error(const char *fmt, ...) {
    va_list args;
    va_start(args, fmt);
    Log_Write_Internal(PatchugoLogLevel::LOG_LEVEL_ERROR, fmt, args);
    va_end(args);
}

void PatchugoLogger::Patchugo_Logger::Log_System(const char *fmt, ...) {
    va_list args;
    va_start(args, fmt);
    Log_Write_Internal(PatchugoLogLevel::LOG_LEVEL_SYSTEM, fmt, args);
    va_end(args);
}

void PatchugoLogger::Patchugo_Logger::Log_Warn(const char *fmt, ...) {
    va_list args;
    va_start(args, fmt);
    Log_Write_Internal(PatchugoLogLevel::LOG_LEVEL_WARN, fmt, args);
    va_end(args);
}

void PatchugoLogger::Patchugo_Logger::Log_Debug(const char *fmt, ...) {
    va_list args;
    va_start(args, fmt);
    Log_Write_Internal(PatchugoLogLevel::LOG_LEVEL_DEBUG, fmt, args);
    va_end(args);
}

void PatchugoLogger::Patchugo_Logger::Log_Info(const char *fmt, ...) {
    va_list args;
    va_start(args, fmt);
    Log_Write_Internal(PatchugoLogLevel::LOG_LEVEL_INFO, fmt, args);
    va_end(args);
}

void PatchugoLogger::Patchugo_Logger::Log_Verbose(const char *fmt, ...) {
    va_list args;
    va_start(args, fmt);
    Log_Write_Internal(PatchugoLogLevel::LOG_LEVEL_VERBOSE, fmt, args);
    va_end(args);
}