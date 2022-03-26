// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RPG_ItemInstance.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class RPGV1_API URPG_ItemInstance : public UObject
{
	GENERATED_BODY()
	
private:
	UPROPERTY(VisibleAnywhere)
		int ID;
	UPROPERTY(VisibleAnywhere)
		float Life;
	UPROPERTY(VisibleAnywhere)
		int Count;
	UPROPERTY(VisibleAnywhere)
		int Level;

private:
	const struct FRPG_ItemIdeal* Ideal;

public:
	URPG_ItemInstance();

	UFUNCTION(BlueprintCallable)
		static URPG_ItemInstance* New(int ID_, int Level_ = 1, int Count_ = 1);

private:
	const struct FRPG_ItemIdeal* FindIdeal(int ID_);
};
