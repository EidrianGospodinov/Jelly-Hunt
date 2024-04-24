// Fill out your copyright notice in the Description page of Project Settings.


#include "NPC_AIController.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "UObject/ConstructorHelpers.h"
//#include "CPP_AICharacter.h"



ANPC_AIController::ANPC_AIController(FObjectInitializer const& objectInitializer)
{
	static ConstructorHelpers::FObjectFinder<UBehaviorTree> obj(TEXT("BehaviorTree'/Game/AI/NPC_BT.NPC_BT'"));
	if (obj.Succeeded()) {


		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Screen Message"));
		_behaviorTree = obj.Object;
	}
	_behaviorTreeComponent = objectInitializer.CreateDefaultSubobject<UBehaviorTreeComponent>(this, TEXT("BehaviourComp"));
	blackboard = objectInitializer.CreateDefaultSubobject<UBlackboardComponent>(this, TEXT("BlackboardComp"));
}

void ANPC_AIController::BeginPlay()
{
	UE_LOG(LogTemp, Warning, TEXT("begin play"));

	Super::BeginPlay();
	RunBehaviorTree(_behaviorTree);
	_behaviorTreeComponent->StartTree(*_behaviorTree);
}

void ANPC_AIController::OnPossess(APawn* const pawn)
{
	UE_LOG(LogTemp, Warning, TEXT("on posses"));
	Super::OnPossess(pawn);
	if (blackboard) {
		UE_LOG(LogTemp, Warning, TEXT("possessed"));
		blackboard->InitializeBlackboard(*_behaviorTree->BlackboardAsset);

	}
}

UBlackboardComponent* ANPC_AIController::getBlackboard() const
{
	UE_LOG(LogTemp, Warning, TEXT("getting blackboard"));
	return Blackboard;
}
