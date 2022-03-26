// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RPG_EquipmentComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RPGV1_API URPG_EquipmentComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	URPG_EquipmentComponent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName DefaultSocketName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName DefaultUnholdSocketName;

	TArray<class PrimitiveComponent*> Collisions;
	TArray<class PrimitiveComponent*> Mesh;


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

		
};
