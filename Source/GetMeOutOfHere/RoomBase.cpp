// Fill out your copyright notice in the Description page of Project Settings.

#include "GetMeOutOfHere.h"
#include "RoomBase.h"


// Sets default values
ARoomBase::ARoomBase(int nSize, int nDoors, bool nEnemies, int nCount)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	setRSize(nSize);
	setRDoors(nDoors);
	setRHasEnemies(nEnemies);
	setREnemyCount(nCount);
}

// Called when the game starts or when spawned
void ARoomBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARoomBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
