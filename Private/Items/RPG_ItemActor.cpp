// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/RPG_ItemActor.h"


TQueue<ARPG_ItemActor*> ARPG_ItemActor::_Pool;


// Sets default values
ARPG_ItemActor::ARPG_ItemActor()
{
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
}

// Called when the game starts or when spawned
void ARPG_ItemActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void ARPG_ItemActor::_SetItemInstance(URPG_ItemInstance * Instance_)
{
}

ARPG_ItemActor * ARPG_ItemActor::New(URPG_ItemInstance * Instance_, const FVector& Location_, const FRotator& Rotation_)
{
	ARPG_ItemActor* ret;

	if (_Pool.IsEmpty())
		ret = Instance_->GetWorld()->SpawnActor<ARPG_ItemActor>(Location_, Rotation_);
	else
		_Pool.Dequeue(ret);

	ret->SetHidden(false);

	ret->_SetItemInstance(Instance_);

	return ret;
}
