// Copyright 2022 Ellie Kelemen. All Rights Reserved.

#include "FPSCharacterController.h"

void AFPSCharacterController::SetAmmoTypeValue(int32 AmmoCount, EAmmoType AmmoType)
{
    AmmoMap[AmmoType] += AmmoCount;
}
