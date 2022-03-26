// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/RPG_ItemInstance.h"
#include "Subsystems/RPG_IdealSubsystem.h"
#include "Kismet/GameplayStatics.h"

	
URPG_ItemInstance::URPG_ItemInstance()
{
}


URPG_ItemInstance * URPG_ItemInstance::New(int ID_, int Level_, int Count_)
{
	URPG_ItemInstance* new_item = NewObject<URPG_ItemInstance>();

	new_item->Ideal = new_item->FindIdeal(ID_);

	new_item->ID = ID_;
	new_item->Count = Count_;
	new_item->Level = Level_;
	new_item->Life = new_item->Ideal->MaxLife;

	return new_item;
}


const FRPG_ItemIdeal * URPG_ItemInstance::FindIdeal(int ID_)
{
	URPG_IdealSubsystem* gi = UGameplayStatics::GetGameInstance(this)->GetSubsystem<URPG_IdealSubsystem>();

	return gi->GetItemIdeal(ID_);
}
