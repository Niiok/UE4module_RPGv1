// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/RPG_ItemStorage.h"
#include "Items/RPG_ItemInstance.h"

template<typename T>
const TRPG_ItemMap<T>& TRPG_ItemStorage<T>::GetItemMap()
{
	return ItemMap;
}

template<typename T>
TRPG_ItemStorage<T>::TRPG_ItemStorage()
{
}

template<typename T>
TRPG_ItemStorage<T>::~TRPG_ItemStorage()
{
}
