// Fill out your copyright notice in the Description page of Project Settings.


#include "playerLocPawn.h"

// Sets default values
AplayerLocPawn::AplayerLocPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AplayerLocPawn::BeginPlay()
{
	Super::BeginPlay();
	pPos=this->GetPlayerPosition();
}

// Called every frame
void AplayerLocPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AplayerLocPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}



