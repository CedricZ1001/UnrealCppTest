// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyGameState.h"
#include "MyHUD.h"
#include "MyPawn.h"
#include "MyPlayerController.h"
#include "MyPlayerState.h"
#include "GameFramework/GameMode.h"
#include "MyGameMode.generated.h"

/**
 * 
 */
UCLASS()
class TESTDEMO_API AMyGameMode : public AGameMode
{
	GENERATED_BODY()
	AMyGameMode();

public:


	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
};
