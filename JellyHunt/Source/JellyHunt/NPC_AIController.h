// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Perception/AIPerceptionTypes.h"
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
private:
	//perception
	class UAISenseConfig_Sight* _sightConfig;

	UFUNCTION()
	void on_target_detected(AActor* actor, FAIStimulus const stimulus);

	UFUNCTION()
		void _onUpdated(TArray<AActor*>const& _updatedActors);

		void _setupPerceptionSystem();
};
