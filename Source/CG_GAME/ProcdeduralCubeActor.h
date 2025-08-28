// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProcdeduralCubeActor.generated.h"


UCLASS()
class CG_GAME_API AProcdeduralCubeActor : public AActor
{
	GENERATED_BODY()
	
	TArray<FVector> Positions;

	TArray<FVector2D> Uvs;

	TArray<int32> TrianglesIndices;
public:	
	// Sets default values for this actor's properties
	AProcdeduralCubeActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<class UProceduralMeshComponent> ProceduralMesh;


};
