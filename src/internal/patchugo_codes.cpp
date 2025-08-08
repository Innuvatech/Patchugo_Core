/**
* File: patchugo_codes.cpp
* Created on: 2025-08-04 at 12:16
* Author: Andrea Rantin
* Description: Implementation file for patchugo_codes.h
*/

#include "internal/patchugo_codes.h"

uint32_t PatchugoCodes::PatchugoStatusCode_ToUint(PatchugoStatusCode code) {
    return static_cast<uint32_t>(code);
}

