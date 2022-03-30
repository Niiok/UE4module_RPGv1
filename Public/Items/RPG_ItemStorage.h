// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RPG_ItemStorage.generated.h"

class URPG_ItemInstance;

template<typename T>
using TRPG_ItemMap = TMap<URPG_ItemInstance*, T>;

UINTERFACE(Blueprintable)
class URPG_ItemStorage : public UInterface
{
	GENERATED_BODY()
};

class IRPG_ItemStorage
{
	GENERATED_BODY()

public:
	bool Add(URPG_ItemInstance* Item_) PURE_VIRTUAL(IRPG_ItemStorage::Add,);
	bool Remove(URPG_ItemInstance* Item_) PURE_VIRTUAL(IRPG_ItemStorage::Remove);
};


UENUM(BlueprintType)
enum class ERPG_ItemStorageOperation : uint8
{
	Refresh,
	Add,
	Remove,
	EnumMax
};


/**
 *
 */
template<typename T>
class RPGV1_API TRPG_ItemStorage : public IRPG_ItemStorage
{
public:
	DECLARE_EVENT_ThreeParams(TRPG_ItemStorage, FItemStorageSynchronizeSignature, IRPG_ItemStorage*, ERPG_ItemStorageOperation, T);
	FItemStorageSynchronizeSignature OnSynchronize;

protected:
	UPROPERTY(SaveGame)
		TRPG_ItemMap<T> ItemMap;
public:
	const TRPG_ItemMap<T>& GetItemMap();

public:
	TRPG_ItemStorage();
	~TRPG_ItemStorage();


};
