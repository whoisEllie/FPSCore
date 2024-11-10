// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include <random>
#include "NormalDistribution.generated.h"

/**
 * 
 */
UCLASS()
class FPSCOREEDITOR_API UNormalDistribution : public UObject
{
	GENERATED_BODY()

public:

	UNormalDistribution();

	UPROPERTY(EditAnywhere)
	float Mean;

	UPROPERTY(EditAnywhere)
	float StandardDeviation;

	UFUNCTION(BlueprintCallable)
	float DrawSimple();

	UFUNCTION(CallInEditor)
	void LogSample();

	UFUNCTION(CallInEditor)
	void TestFileSystem();

private:

	std::mt19937 RandomNumberGenerator;
};
