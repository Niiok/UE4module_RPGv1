// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "RPG_StatusInterface.generated.h"

UENUM(BlueprintType)
enum class ERPG_Stat : uint8
{
	Health,
	MaxHealth,
	Energy,
	MaxEnergy,
	Hunger,
	MaxHunger
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStatIsZero, ERPG_Stat, ZeroStat);

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class URPG_StatusInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class RPGV1_API IRPG_StatusInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION()
		virtual float GetStat(ERPG_Stat stat) const { return -1; };

//	UFUNCTION()
//		virtual void BindDelegate(ERPG_Stat stat) { return NULL; }
};
