// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "RoomBase.generated.h"

UCLASS()
class GETMEOUTOFHERE_API ARoomBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARoomBase(int nSize, int nDoors, bool nEnemies, int nCount);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	int getRSize() { return rSize; };
	void setRSize(int nSize) { rSize = nSize; };
	int getRDoors() { return rDoors; };
	void setRDoors(int nDoors) { rDoors = nDoors; };
	bool getRHasEnemies() { return rHasEnemies; };
	void setRHasEnemies(bool nHasEnemies) { rHasEnemies = nHasEnemies; };
	int getREnemyCount() { return rEnemyCount; };
	void setREnemyCount(int nEnemyCount) { rEnemyCount = nEnemyCount; };

private:
	//Declaring our variables for the creation of the rooms
	int rSize;
	int rDoors;
	bool rHasEnemies;
	int rEnemyCount;

};
