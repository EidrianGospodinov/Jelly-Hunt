// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "FindPlayerLocation.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class JELLYHUNT_API UFindPlayerLocation : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
public:
	UFindPlayerLocation(FObjectInitializer const& _objectInitialiser);
	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& _ownerComp, uint8* _nodeMemory)override;

protected:
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Search", meta = (AllowProtectedAccess = "true"))
	float _searchRadius = 150.0f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Search", meta = (AllowPrivateAccess = "true"))
	FVector _playerLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Search", meta = (AllowProtectedAccess = "true"))
	bool _searchRandom = false;
};
