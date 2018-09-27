// Fill out your copyright notice in the Description page of Project Settings.

#include "CharacterStats.h"


UCharacterStats::UCharacterStats() {
	BaseStat.Add(FOneStat("Strength", 30, 10, 10));
	BaseStat.Add(FOneStat("Intellect", 30, 10, 10));
	BaseStat.Add(FOneStat("Agility", 30, 10, 10));
	BaseStat.Add(FOneStat("Constitution", 30, 10, 10));
	BaseStat.Add(FOneStat("Smekalochka", 300, 101, 102));
}



