// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ResolutionHelper.generated.h"

/**
 * 
 */
UCLASS()
class FREESPACE_API UResolutionHelper : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Resolution")
		static FVector2D GetGameViewportSize();
	UFUNCTION(BlueprintCallable, Category = "Resolution")
		static FVector2D GetGameResolution();
	
};
