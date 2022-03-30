// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Items/RPG_ItemStorage.h"
#include "RPG_InventoryInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class URPG_InventoryInterface : public URPG_ItemStorage
{
	GENERATED_BODY()
};

/**
 * 
 */
class RPGV1_API IRPG_InventoryInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
};
