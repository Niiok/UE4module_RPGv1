// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/TriggerBase.h"
//#include "Character/RPG_Player.h"
#include "RPG_EquipComponent.generated.h"


UENUM(BlueprintType)
enum class EEquipmentSlot : uint8
{
	LeftHand,
	RightHand,
	Head,
	Chest,
	Legs,
	Hands,
	Feet,
	EnumMax
};

UENUM(BlueprintType)
enum class EEquipMode : uint8
{
	OneHand,
	TwoHand,
	DoubleHand,
	SwordShield,
	Bow,
	Throw,
	// ...
	EnumMax
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RPGV1_API URPG_EquipComponent : public UActorComponent
{
	GENERATED_BODY()


private:
	TArray<class ARPG_ItemActor*> Equipments;// ((int)EEquipmentSlot::EnumMax);


public:	
	// Sets default values for this component's properties
	URPG_EquipComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
};
