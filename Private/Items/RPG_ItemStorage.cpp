// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/RPG_ItemStorage.h"
#include "Items/RPG_ItemInstance.h"

template<typename T>
const TItemMap<T>& TItemStorage<T>::GetItems()
{
	return Items;
}

template<typename T>
TItemStorage<T>::TItemStorage()
{
}

template<typename T>
TItemStorage<T>::~TItemStorage()
{
}
