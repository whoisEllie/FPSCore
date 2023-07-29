// Copyright 2022 Ellie Kelemen. All Rights Reserved.

#include "FPSCharacterController.h"https://github.com/fetaderr/FPSCore/tree/patch-1

void AFPSCharacterController::SetAmmoTypeValue(int32 AmmoCount, EAmmoType AmmoType)
{
    AmmoMap[AmmoType] += AmmoCount;
}
