// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPawn.h"

// Sets default values
AMyPawn::AMyPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyPawn::BeginPlay()
{
	Super::BeginPlay();
	
	TSubclassOf<UMyObject> MySubClassObject = UMyObject::StaticClass();

	MyTestObject = NewObject<UMyObject>(GetWorld(), MySubClassObject);
	if (MyTestObject)
	{
		UE_LOG(LogTemp, Warning, TEXT("MyTestObject is %s"), *MyTestObject->GetName());
		UE_LOG(LogTemp, Warning, TEXT("Health is %f"), MyTestObject->MyDataTableStruct.Health);
		UE_LOG(LogTemp, Warning, TEXT("Name is %s"), *MyTestObject->MyDataTableStruct.Name);
		UE_LOG(LogTemp, Warning, TEXT("Level is %d"), MyTestObject->MyDataTableStruct.Level);
	}
	MyInstance = Cast<UMyGameInstance>(GetWorld()->GetFirstLocalPlayerFromController()->GetGameInstance());
	if (MyInstance) {
		UE_LOG(LogTemp, Warning, TEXT("MyInstance is %s"), *MyInstance->GetName());
	}
}

// Called every frame
void AMyPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AMyPawn::PrintF1()
{
}

bool AMyPawn::PrintF2()
{
	return false;
}

