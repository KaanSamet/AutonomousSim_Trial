// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include "LIDAR_TrialHelpers.generated.h"

/**
 * 
 */
UCLASS()
class LIDAR_TRIAL_API ULIDAR_TrialHelpers : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "LidarHelpers Asset")
	static bool DeleteDirectory(const FString& DirectoryPath);
	
};
