// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"



void  ATankAIController::BeginPlay()
{
	Super::BeginPlay();

	ATank* Tank = GetControlledTank();
	if (!Tank)
	{
		UE_LOG(LogTemp, Warning, TEXT("AI Controller not possessing the tank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AI Controlling the tank %s Begin Play"), *(Tank->GetName()));
	}

}


ATank* ATankAIController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}
