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


void ATankAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//Move towards the player
	
	//Aim towards the Player
	AimTowardsPlayer();

	//Fire if ready
}

ATank * ATankAIController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}

ATank * ATankAIController::GetPlayerTank() const
{
	return Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());
}

void ATankAIController::AimTowardsPlayer()
{
	if (!GetControlledTank()) { return; }
	ATank* PlayerTank = GetPlayerTank();
	if (PlayerTank)
	{
	
		GetControlledTank()->AimAt(PlayerTank->GetActorLocation());
	
	}
}
