// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Items/RPG_ItemInstance.h"
#include "RPG_ItemActor.generated.h"

UCLASS()
class RPGV1_API ARPG_ItemActor : public AActor
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(BlueprintReadOnly)
		class URPG_ItemInstance* Item;

	class UStaticMeshComponent* StaticMesh;



public:	
	// Sets default values for this actor's properties
	ARPG_ItemActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	virtual void _SetItemInstance(class URPG_ItemInstance* Instance_);


public:
	static ARPG_ItemActor* New(class URPG_ItemInstance* Instance_, const FVector& Location_, const FRotator& Rotation_);
private:
	static TQueue<ARPG_ItemActor*> _Pool;
};
