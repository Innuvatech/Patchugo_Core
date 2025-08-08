# Patchugo_Core
The Patchugo_Core library is a shared libary for Arduino that provides all the foundational definitions needed by all Patchugo libraries, such as Status Codes and Logging functionalities

## Library Description

The **Patchugo_Core** library provides definitions and functionalities that are used by all other Patchugo/Patchugino libraries. It is essential to have this library installed before installing any other Patchugo library.

### Logging
The library provides a logging functionality that can be used for efficient and clean logging. It provides a class called **Patchugo_Logger** that by being provided a Serial instance and a log level filters on the given level
to show/hide logs. The availble logging levels can be seen below:
  - LOG_LEVEL_VERBOSE: Highest log level, with this enabled all logs are shown. All Patchugino libraries have this log level set as the default one
  - LOG_LEVEL_INFO: Log level to use for additional information that may be useful
  - LOG_LEVEL_DEBUG: Log level for debug information
  - LOG_LEVEL_WARN: Log level for problems that are not critical for the flow of the code
  - LOG_LEVEL_ERROR: Log level for errors
  - LOG_LEVEL_NONE: No logs are shown

When a logger is initialized with a log level, all logs of a level lower or equal to the set one will be shown, while logs with a higer level will not be shown. To initialize a logger an initialized Serial instance is also
needed to make it work correctly. Each Patchugino library has its own private logger wich means that if multiple Patchugino libraries are used at the same time, logging for each of them can be customized to accomodate the needs of the user. An example of initialization of a logger can be seen below:
```
  //Initialize a logger with highest level of logging
  Patchugo_Logger logger = Patchugo_Logger(Serial,LOG_LEVEL_VERBOSE);
```

### Status Codes
The library is the central hub for all status code for the Patchugino libraries. The status code list is provided below:
| Status Code | Value | Description |
| ------------|-------|-------------|
| OK | 105 | Signals success |
| ERROR_ANALOG_WRITE_CONF_REG | 106 | Patchugino Analog error code. Signals an error during internal configuration before a read |
| ERROR_ANALOG_READ_CONF_REG | 107 | Patchugino Analog error code. Signals an error during internal configuration before a read |
| ERROR_ANALOG_WRONG_CONF | 108 | Patchugino Analog error code. Signals an error during internal configuration before a read |
| ERROR_ANALOG_READ_CONV | 109 | Patchugino Analog error code. Signals an error during a read |
| ERROR_RELAY_READ_STATE | 110 | Patchugino Relay error code. Signals an error during a relay read |
| ERROR_RELAY_WRITE | 111 | Patchugino Relay error code. Signals an error during a relay write |
| ERROR_RELAY_CLEAR | 112 | Patchugino Relay error code. Signals an error dugin a clear |

All status codes can be converted to their integer value by calling the **PatchugoStatusCode_ToUint** function. An example is provided below:
```
  uint8_t status = PatchugoStatusCodeToUint(analog.Read(ANALOG_CHANNEL_0, ANALOG_CURRENT_READING, &analogValue, &currentVal));
  if(status == 105) {
    Serial.println("OK!");
  }
```
