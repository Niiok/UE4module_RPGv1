// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "WC_Struct.h"
#include "RPG_IdealSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class RPGV1_API URPG_IdealSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	URPG_IdealSubsystem();

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	
	const FWC_CharacterIdeal* GetCharacterIdeal(FString name) const;
	const FWC_ItemIdeal* GetItemIdeal(int id) const;

private:
	UPROPERTY()
		const class UDataTable* CharacterTable;
	UPROPERTY()
		const class UDataTable* ItemTable;
};
