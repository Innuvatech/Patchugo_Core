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
    };

    //Utility constant expressions to ease use of enum class of PatchugoStatusCode
    static constexpr PatchugoStatusCode OK = PatchugoCodes::PatchugoStatusCode::OK;

    /**
    * @brief Returns the integer representation of the given status code
    * 
    * @param code Code to convert
    * @return uint32_t Integer representation of the status code. For example,
    * if PatchgoStatusCode::OK is given to this function, the value 105 will be returned.
    */
    uint32_t PatchugoStatusCode_ToUint(PatchugoStatusCode code);
}