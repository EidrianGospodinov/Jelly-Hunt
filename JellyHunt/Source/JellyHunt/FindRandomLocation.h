// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "FindRandomLocation.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class JELLYHUNT_API UFindRandomLocation : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
	
public:
	UFindRandomLocation(FObjectInitializer const& objectInitializer);
	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& ownerComp, uint8* nodeMemory);
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Search", meta = (AllowPrivateAccess = "true"))
	float searchRadius = 1500.0f;

};
