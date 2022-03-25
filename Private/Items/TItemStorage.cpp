// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/TItemStorage.h"
#include "Items/WC_ItemInstance.h"

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
