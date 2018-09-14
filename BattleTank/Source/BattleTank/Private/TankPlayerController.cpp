// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController.h"



void  ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();
	
	auto Tank = GetControlledTank();
	if (!Tank)
	{
		UE_LOG(LogTemp, Warning, TEXT("Player Controller not possessing the tank"));
	}
	else
	{
		 UE_LOG(LogTemp, Warning, TEXT("Player Controlling the tank %s Begin Play"), *(Tank->GetName()));
	}

}


ATank* ATankPlayerController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}
