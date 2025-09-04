// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DemoNiagara.generated.h"

UCLASS()
class CG_GAME_API ADemoNiagara : public AActor
{
	GENERATED_BODY()
	
	UPROPERTY(VisualAnywhere);
	TObjectPtr<class UNiagaraComponent> ParticleEffect;
public:	
	// Sets default values for this actor's properties
	ADemoNiagara();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
