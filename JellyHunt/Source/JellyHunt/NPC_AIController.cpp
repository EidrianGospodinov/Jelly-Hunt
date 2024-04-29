// Fill out your copyright notice in the Description page of Project Settings.


#include "NPC_AIController.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "UObject/ConstructorHelpers.h"

#include "Perception/AISenseConfig_Sight.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"
#include "Perception/AIPerceptionComponent.h"
#include "Runtime//Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime//Engine/Classes/Engine/World.h"
#include "GameFramework/Character.h"
#include "blackboardKeys.h"

#include "playerlocPawn.h"
//#include "playerLocPawn.generated.h"
#include "Kismet/GameplayStatics.h"
//#include "Blueprint.generated.h"
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
	//ACharacter* playerchar= UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
	////AplayerLocPawn* playerchar= Cast<AplayerLocPawn>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	//if (playerchar)
	//{
	//	// Now you can safely call GetPlayerPosition
	//	FVector PlayerPosition = playerchar->GetActorLocation();
	//	UE_LOG(LogTemp, Warning, TEXT("The player's position is: %s"), *PlayerPosition.ToString());
	//}
	//else
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("Player character instance is NULL or not of type plauer loc"));
	//}
	UE_LOG(LogTemp, Warning, TEXT("getting blackboard"));
	return Blackboard;
}



//perception


void ANPC_AIController::OnTargetDetected(AActor* actor, FAIStimulus const stimulus)
{
	if (ACharacter* playerchar = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0)) {
		getBlackboard()->SetValueAsBool(bb_keys::_canSeePlayer, stimulus.WasSuccessfullySensed());
	}
}

void ANPC_AIController::_onUpdated(TArray<AActor*> const& _updatedActors)
{
}
void ANPC_AIController::_setupPerceptionSystem()
{

	//create and initialise sight confiuration object
	_sightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("Sight Config"));
	SetPerceptionComponent(*CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("Perception Component")));
	_sightConfig->SightRadius = 500.0f;
	_sightConfig->LoseSightRadius = _sightConfig->SightRadius + 50.0f;
	_sightConfig->PeripheralVisionAngleDegrees = 120.0f;
	_sightConfig->SetMaxAge(5.0f);
	_sightConfig->AutoSuccessRangeFromLastSeenLocation = 900.0f;
	_sightConfig->DetectionByAffiliation.bDetectEnemies = true;
	_sightConfig->DetectionByAffiliation.bDetectFriendlies = true;
	_sightConfig->DetectionByAffiliation.bDetectNeutrals = true;

	//add sight configuration component to perception components
	GetPerceptionComponent()->SetDominantSense(*_sightConfig->GetSenseImplementation());
	GetPerceptionComponent()->OnTargetPerceptionUpdated.AddDynamic(this, &ANPC_AIController::OnTargetDetected);
	GetPerceptionComponent()->ConfigureSense(*_sightConfig);

}
