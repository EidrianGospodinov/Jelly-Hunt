// Fill out your copyright notice in the Description page of Project Settings.


#include "NPC.h"
#include "RunTime/Engine/Classes/Engine/World.h"
#include "Components/SkeletalMeshComponent.h"
#include "Materials/MaterialInstance.h"
#include "GameFramework/PlayerController.h"

// Sets default values
ANPC::ANPC()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANPC::BeginPlay()
{
	Super::BeginPlay();
	UMaterialInstanceDynamic* const _materialInstance = UMaterialInstanceDynamic::Create(GetMesh()->GetMaterial(0), this);

	if (_materialInstance) {
		_materialInstance->SetVectorParameterValue("BodyColor", FLinearColor(1.0f, 0.0f, 0.0f, 1.0f));
		GetMesh()->SetMaterial(0, _materialInstance);
	}
	
}

// Called every frame
void ANPC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ANPC::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

