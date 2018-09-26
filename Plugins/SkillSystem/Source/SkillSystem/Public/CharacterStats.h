// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//#include "CoreMinimal.h"
#include "Engine.h"
#include "Engine/DataAsset.h"
#include "CharacterStats.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FBaceStatOfChar {

	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere)
		FString StatName;

	UPROPERTY(EditAnywhere)
		int32 MaxPointOfStat;

	UPROPERTY(EditAnywhere)
		int32 MinPointOfStat;

	UPROPERTY(EditAnywhere)
		int32 CurrentPointOfStat;
	
	 FBaceStatOfChar() { StatName = "NewStat"; MaxPointOfStat = 10; MinPointOfStat = 0; CurrentPointOfStat = 1; }
	 FBaceStatOfChar(FString NewName, int32 NewMaxStat, int32 NewMinStat, int32 NewCurrentStat) { 
		 if ((NewMaxStat < NewCurrentStat) || (NewCurrentStat < NewMinStat) || (NewMinStat > NewMaxStat))
		 {
			 StatName = "BadStatParm"; MaxPointOfStat = 10; MinPointOfStat = 0; CurrentPointOfStat = 1;
		 }
		 else
		 {
			StatName = NewName; MaxPointOfStat = NewMaxStat; MinPointOfStat = NewMinStat; CurrentPointOfStat = NewCurrentStat;
		 }
		  }
};


UCLASS()
class SKILLSYSTEM_API UCharacterStats : public UDataAsset
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
		TArray<FBaceStatOfChar> BaseStat;
		///s
};
