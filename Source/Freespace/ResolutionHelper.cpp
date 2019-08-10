// Fill out your copyright notice in the Description page of Project Settings.

#include "ResolutionHelper.h"
#include "Engine.h"

FVector2D UResolutionHelper::GetGameViewportSize() {
	FVector2D Result = FVector2D(1, 1);

	if (GEngine && GEngine->GameViewport)
	{
		GEngine->GameViewport->GetViewportSize( /*out*/Result);
	}

	return Result;
}

FVector2D UResolutionHelper::GetGameResolution()
{
	FVector2D Result = FVector2D(1, 1);

	Result.X = GSystemResolution.ResX;
	Result.Y = GSystemResolution.ResY;

	return Result;
}
