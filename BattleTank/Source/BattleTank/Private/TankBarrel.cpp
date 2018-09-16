// Fill out your copyright notice in the Description page of Project Settings.

#include "Engine/StaticMesh.h"
#include "TankBarrel.h"




void UTankBarrel::Elevate(float RelativeSpeed)
{
	//how much we gonna move the barrel this frame 
	//Given a max elevation speed, and the frame time 
	auto Time = GetWorld()->GetTimeSeconds();
	//UE_LOG(LogTemp, Warning, TEXT("%f: Barrel Elevate() called at speed %f"),Time,RelativeSpeed );
}