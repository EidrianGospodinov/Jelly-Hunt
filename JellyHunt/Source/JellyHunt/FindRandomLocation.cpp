// Fill out your copyright notice in the Description page of Project Settings.


#include "FindRandomLocation.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Runtime/NavigationSystem/Public/NavigationSystem.h"
#include"NPC_AIController.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Vector.h"
#include "blackboardKeys.h"

UFindRandomLocation::UFindRandomLocation(FObjectInitializer const& objectInitializer)
{
	NodeName = TEXT("Find Random Location");
	UE_LOG(LogTemp, Warning, TEXT("NodeName"));
}

EBTNodeResult::Type UFindRandomLocation::ExecuteTask(UBehaviorTreeComponent& ownerComp, uint8* nodeMemory)
{
	UE_LOG(LogTemp, Warning, TEXT("Execute task"));
	//get ai contrller and its NPC
	auto const cont = Cast<ANPC_AIController>(ownerComp.GetAIOwner());
	auto const npc = cont->GetPawn();

	//obtain npc location to use as an orgin
	FVector const orgin = npc->GetActorLocation();
	FNavLocation loc;


	//get nav system and generate a random location
	UNavigationSystemV1* const navSys = UNavigationSystemV1::GetCurrent(GetWorld());
	if (navSys->GetRandomPointInNavigableRadius(orgin, searchRadius, loc, nullptr)) {

		UE_LOG(LogTemp, Warning, TEXT("success"));
		cont->getBlackboard()->SetValueAsVector(bb_keys::_targetLocation, loc.Location);
	}
	//finish successfully
	FinishLatentTask(ownerComp, EBTNodeResult::Succeeded);
	return EBTNodeResult::Succeeded;

	return EBTNodeResult::Type();
}