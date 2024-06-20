// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/Classes/Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "MyObject.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct FMyDataTableStruct : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	FMyDataTableStruct();

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "MyTestDataTableStruct")
	float Health;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyTestDataTableStruct")
	FString Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyTestDataTableStruct")
	int32 Level;
};

UCLASS()
class TESTDEMO_API UMyObject : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY()
	FMyDataTableStruct MyDataTableStruct;
};
