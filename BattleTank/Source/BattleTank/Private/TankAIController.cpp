// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"
#include "Tank.h"
#include "Engine/World.h"





void  ATankAIController::BeginPlay()
{
	Super::BeginPlay();



}


void ATankAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//Move towards the player

	auto PlayerTank = Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());
	auto ControlledTank =  Cast<ATank>(GetPawn());
	if (PlayerTank && ControlledTank)
	{
		//Aim towards the Player
		ControlledTank->AimAt(PlayerTank->GetActorLocation());
		//Fire if ready
		ControlledTank->Fire();
	}
}



