// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class TESTDEMO_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
	UMyGameInstance();
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "MyInstance")
	FString MyAppID;
};