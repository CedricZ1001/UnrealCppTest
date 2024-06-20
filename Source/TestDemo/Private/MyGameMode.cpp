// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameMode.h"
#define LOCTEXT_NAMESPACE "MyGameModeNamespace"

AMyGameMode::AMyGameMode() {
	DefaultPawnClass = AMyPawn::StaticClass();
	PlayerControllerClass = AMyPlayerController::StaticClass();
	GameStateClass = AMyGameState::StaticClass();
	PlayerStateClass = AMyPlayerState::StaticClass();
	HUDClass = AMyHUD::StaticClass();
}

void AMyGameMode::BeginPlay(){
	Super::BeginPlay();
}

void AMyGameMode::Tick(float DeltaTime){
	Super::Tick(DeltaTime);
}

void AMyGameMode::EndPlay(const EEndPlayReason::Type EndPlayReason){
	Super::EndPlay(EndPlayReason);
}
