// Fill out your copyright notice in the Description page of Project Settings.


#include "FindPlayerLocation.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Runtime/NavigationSystem/Public/NavigationSystem.h"
#include"NPC_AIController.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Vector.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "blackboardKeys.h"

UFindPlayerLocation::UFindPlayerLocation(FObjectInitializer const& _objectInitialiser)
{
	NodeName = TEXT("Find Player Location");
}

EBTNodeResult::Type UFindPlayerLocation::ExecuteTask(UBehaviorTreeComponent& _ownerComp, uint8* _nodeMemory)
{
	//get player character and npc controller
	//UE_LOG(LogTemp, Warning, TEXT("find player execute task"));
	ACharacter* const player = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
	auto const cont = Cast<ANPC_AIController>(_ownerComp.GetAIOwner());

	//get player location 
	
	  _playerLocation = player->GetActorLocation();
	// UE_LOG(LogTemp, Warning, TEXT("The player value is: %s"), *_playerLocation.ToString());
	if (_searchRandom) 
	{
		UE_LOG(LogTemp, Warning, TEXT("in radius"));
		FNavLocation loc;
		//get the nav system and generate rand loc near the player
		UNavigationSystemV1* const _navSystem = UNavigationSystemV1::GetCurrent(GetWorld());
		if (_navSystem->GetRandomPointInNavigableRadius(_playerLocation, _searchRadius, loc, nullptr)) 
		{
			UE_LOG(LogTemp, Warning, TEXT("set location"));
			cont->getBlackboard()->SetValueAsVector(bb_keys::_targetLocation, loc.Location);
		}
		
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("ekleewe"));
		cont->getBlackboard()->SetValueAsVector(bb_keys::_targetLocation, _playerLocation);
	}

	//finish successfully
	FinishLatentTask(_ownerComp, EBTNodeResult::Succeeded);

	return EBTNodeResult::Succeeded;
}
