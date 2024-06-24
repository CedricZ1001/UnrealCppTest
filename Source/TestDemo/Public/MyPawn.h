// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MyGameInstance.h"
#include "MyObject.h"
#include "MyPawn.generated.h"

UENUM(BlueprintType)

enum MyCustomEnum {
	Type1,
	Type2,
	Type3,
};


UCLASS()
class TESTDEMO_API AMyPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMyPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	UPROPERTY(VisibleDefaultsOnly)
	int32 visibleDefaultsOnlyInt;

	UPROPERTY(VisibleInstanceOnly)
	FString visibleInstanceString;

	UPROPERTY(VisibleAnywhere)
	FVector visibleAnywhereVector;

	UPROPERTY(EditDefaultsOnly)
	int32 editDefaultsOnly;

	UPROPERTY(EditInstanceOnly)
	FString editInstanceOnly;

	UPROPERTY(EditAnywhere)
	FVector editAntwhere;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MyIntValue",Transient)
	int32 blueprintReadOnly;

	
	UFUNCTION(BlueprintCallable,Category = "MyFunction")
	void PrintF1();

	UFUNCTION(BlueprintCallable,BlueprintPure,Category="MyFunction")
	bool PrintF2();

	UFUNCTION(BlueprintImplementableEvent)
	void Test1();

	UFUNCTION(BlueprintImplementableEvent)
	int Test2();


	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "MyEnum")
	TEnumAsByte<MyCustomEnum> CutomEnum;
	
	UPROPERTY()
	UMyObject* MyTestObject;

	UPROPERTY()
	UMyGameInstance* MyInstance; 

	void Zoom(bool Direction, float Speed);

};
