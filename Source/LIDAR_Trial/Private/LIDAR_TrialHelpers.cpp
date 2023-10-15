// Fill out your copyright notice in the Description page of Project Settings.


#include "LIDAR_TrialHelpers.h"
#include "EditorAssetLibrary.h"

bool ULIDAR_TrialHelpers::DeleteDirectory(const FString& DirectoryPath)
{
	bool DeleteSuccess = UEditorAssetLibrary::DeleteDirectory(DirectoryPath);
	return DeleteSuccess;
}
