// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankBarrel.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Custom),meta = (BlueprintSpawnableComponent),hidecategories=("Collision"))
class BATTLETANK_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()

public:
	void Elevate(float DegressPerSecond);

private:
	UPROPERTY(EditAnywhere, Category = Setup)
	float MaxDegreesPerSecond = 20.f; //Sensible Default
	
	UPROPERTY(EditAnywhere, Category = Setup)
	float MaxElevationDegrees = 40.f; //Sensible Default

	UPROPERTY(EditAnywhere, Category = Setup)
	float MinElevationDegrees = 0.f; //Sensible Default
};
