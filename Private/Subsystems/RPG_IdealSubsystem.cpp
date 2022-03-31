// Fill out your copyright notice in the Description page of Project Settings.


#include "Subsystems/RPG_IdealSubsystem.h"
#include "Engine/DataTable.h"
#include "RPGv1.h"


URPG_IdealSubsystem::URPG_IdealSubsystem()
{
	//static ConstructorHelpers::FObjectFinder<UDataTable> stats_table(STATS_IDEAL_TABLE_PATH);
	//check(stats_table.Succeeded());
	//StatsTable = stats_table.Object;
	//check(StatsTable->GetRowMap().Num() > 0);
	
	static ConstructorHelpers::FObjectFinder<UDataTable> item_table(ITEM_IDEAL_TABLE_PATH);
	check(item_table.Succeeded());
	ItemTable = item_table.Object;
	check(ItemTable->GetRowMap().Num() > 0);
}	
  
void URPG_IdealSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	//GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Blue, )
}

const FRPG_StatsIdeal * URPG_IdealSubsystem::GetStatsIdeal(FString name) const
{
	return StatsTable->FindRow<FRPG_StatsIdeal>(*name, TEXT(""));
}

const FRPG_ItemIdeal * URPG_IdealSubsystem::GetItemIdeal(int id) const
{
	return ItemTable->FindRow<FRPG_ItemIdeal>(*FString::FromInt(id), TEXT(""));
}

