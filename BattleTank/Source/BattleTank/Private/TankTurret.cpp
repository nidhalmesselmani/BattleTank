// Fill out your copyright notice in the Description page of Project Settings.

#include "TankTurret.h"
#include "Engine/StaticMesh.h"



void UTankTurret::RotateAzimoth(float RelativeSpeed)
{
	//how much we gonna move the turret this frame 
	//Given a max Azimoth speed, and the frame time 
	RelativeSpeed = FMath::Clamp<float>(RelativeSpeed, -1, +1);
	auto AzimothChange = RelativeSpeed * MaxDegreesPerSecond * GetWorld()->DeltaTimeSeconds;
	auto RawNewAzimoth = RelativeRotation.Yaw + AzimothChange;

	SetRelativeRotation(FRotator(0, RawNewAzimoth,0));
}