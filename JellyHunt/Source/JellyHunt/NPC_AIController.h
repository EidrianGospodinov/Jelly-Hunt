// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "NPC_AIController.generated.h"

/**
 * 
 */
UCLASS()
class JELLYHUNT_API ANPC_AIController : public AAIController
{
	GENERATED_BODY()
	
	public:

	ANPC_AIController(FObjectInitializer const& objectInitializer = FObjectInitializer::Get());
	void BeginPlay() override;
	void OnPossess(APawn* const pawn)override;
	class UBlackboardComponent* getBlackboard() const;
private:
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "AI", meta = (AllowPrivateAccess = "true"));
	class UBehaviorTreeComponent* _behaviorTreeComponent;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "AI", meta = (AllowPrivateAccess = "true"));
	class UBehaviorTree* _behaviorTree;

	class UBlackboardComponent* blackboard;
};
