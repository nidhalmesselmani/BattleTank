// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"



void  ATankAIController::BeginPlay()
{
	Super::BeginPlay();

	ATank* PlayerTank = GetPlayerTank();
	if (!PlayerTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("AI Controller didnt find the player"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AI found the player : %s"), *(PlayerTank->GetName()));
	}

}


ATank * ATankAIController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}

ATank * ATankAIController::GetPlayerTank() const
{
	return Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());
}
