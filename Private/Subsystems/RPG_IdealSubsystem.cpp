// Fill out your copyright notice in the Description page of Project Settings.


#include "Subsystems/RPG_IdealSubsystem.h"
#include "Engine/DataTable.h"


URPG_IdealSubsystem::URPG_IdealSubsystem()
{
	//static ConstructorHelpers::FObjectFinder<UDataTable> table(
	//	TEXT("")
	//	);
	//check(table.Succeeded());
	//AttributeTable = table.Object;
	//check(AttributeTable->GetRowMap().Num() > 0);
}	
  
void URPG_IdealSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	//GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Blue, )
}

const FWC_CharacterIdeal * URPG_IdealSubsystem::GetCharacterIdeal(FString name) const
{
	return CharacterTable->FindRow<FWC_CharacterIdeal>(*name, TEXT(""));
}

const FWC_ItemIdeal * URPG_IdealSubsystem::GetItemIdeal(int id) const
{
	return ItemTable->FindRow<FWC_ItemIdeal>(*FString::FromInt(id), TEXT(""));
}

