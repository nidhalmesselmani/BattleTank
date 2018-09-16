// Fill out your copyright notice in the Description page of Project Settings.

#include "TankBarrel.h"
#include "Engine/StaticMesh.h"





void UTankBarrel::Elevate(float RelativeSpeed)
{
	//how much we gonna move the barrel this frame 
	//Given a max elevation speed, and the frame time 
	RelativeSpeed = FMath::Clamp<float>(RelativeSpeed,-1,+1);
	auto ElevationChange = RelativeSpeed * MaxDegreesPerSecond * GetWorld()->DeltaTimeSeconds;
	auto RawNewElavation = RelativeRotation.Pitch + ElevationChange;
	auto Elevation =  FMath::Clamp<float>(RawNewElavation, MinElevationDegrees, MaxElevationDegrees);
	SetRelativeRotation(FRotator(Elevation, 0, 0));
}