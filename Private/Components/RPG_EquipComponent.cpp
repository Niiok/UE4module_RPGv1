// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/RPG_EquipComponent.h"
#include "Engine/TriggerSphere.h"
#include "Engine/TriggerCapsule.h"
#include "Components/SphereComponent.h"
#include "Engine.h"

// Sets default values for this component's properties
URPG_EquipComponent::URPG_EquipComponent()
{
	Equipments.Init(NULL, (int)EEquipmentSlot::EnumMax);

}


// Called when the game starts
void URPG_EquipComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}