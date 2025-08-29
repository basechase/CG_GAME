// Fill out your copyright notice in the Description page of Project Settings.


#include "ProcdeduralCubeActor.h"
#include "ProceduralMeshComponent.h"
// Sets default values
AProcdeduralCubeActor::AProcdeduralCubeActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	RootComponent = ProceduralMesh = CreateDefaultSubobject<UProceduralMeshComponent>("ProceduralMesh");


}

// Called when the game starts or when spawned
void AProcdeduralCubeActor::BeginPlay()
{
	Super::BeginPlay();
	

	Positions.Add(FVector(0, 50, -50));		// 1st vert's position
	Positions.Add(FVector(0, -50, -50));	// 2nd vert's position
	Positions.Add(FVector(0, -50, 50));		// 3rd vert's position
	//Positions.Add(FVector(0, 50, 50));

	Uvs.Add({0,0});
	Uvs.Add({1,1});
	Uvs.Add({1,0});

	TrianglesIndices.Add(0);
	TrianglesIndices.Add(1);
	TrianglesIndices.Add(2);
	//TrianglesIndices.Add(3);

	//TrianglesIndices.Add(0);
	//TrianglesIndices.Add(3);
	//TrianglesIndices.Add(2);
	//TrianglesIndices.Add(1);

	


	// tells the engine to generate the mesh using the given data
	ProceduralMesh->CreateMeshSection(0, Positions, TrianglesIndices, TArray<FVector>(), Uvs, TArray<FColor>(), TArray<FProcMeshTangent>(), true);
	


}

