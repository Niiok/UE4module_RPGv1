// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TItemStorage.generated.h"

class UWC_ItemInstance;

template<typename T>
using TItemMap = TMap<UWC_ItemInstance*, T>;

UINTERFACE(Blueprintable)
class UItemStorage : public UInterface
{
	GENERATED_BODY()
};

class IItemStorage
{
	GENERATED_BODY()

public:
	bool Add(UWC_ItemInstance* Item_) PURE_VIRTUAL(IItemStorage::Add,);
	bool Remove(UWC_ItemInstance* Item_) PURE_VIRTUAL(IItemStorage::Remove);
};


UENUM(BlueprintType)
enum class EItemStorageOperation : uint8
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
class RPGV1_API TItemStorage : public IItemStorage
{
public:
	DECLARE_EVENT_ThreeParams(TItemStorage, FItemStorageSynchronizeSignature, IItemStorage*, EItemStorageOperation, T);
	FItemStorageSynchronizeSignature OnSynchronize;

protected:
	UPROPERTY(SaveGame)
		TItemMap<T> Items;
public:
	const TItemMap<T>& GetItems();

public:
	TItemStorage();
	~TItemStorage();


};