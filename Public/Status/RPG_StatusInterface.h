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

UENUM(BlueprintType)
enum class ERPG_StatusEventType : uint8
{
	HealthIsZero,
	EnergyIsZero,
	HungerIsZero
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStatusEvent, ERPG_StatusEventType, EventType);


UINTERFACE(MinimalAPI)
class URPG_StatusListenerInterface : public UInterface
{
	GENERATED_BODY()
};

class IRPG_StatusListenerInterface
{
	GENERATED_BODY()

public:
	UFUNCTION()
		virtual void OnStatusChanged(ERPG_StatusEventType EventType) PURE_VIRTUAL(IRPG_StatusListenerInterface::OnStatusChanged);
};


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
		virtual float GetStat(ERPG_Stat stat) const { return NAN; }

	UFUNCTION()
		virtual void BindListener(TScriptInterface<IRPG_StatusListenerInterface>& Listener) PURE_VIRTUAL(IRPG_StatusInterface::BindListener);
};
