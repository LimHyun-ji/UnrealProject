// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemy_FarAwayAttack.generated.h"

UCLASS()
class SPACEWAR_API AEnemy_FarAwayAttack : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AEnemy_FarAwayAttack();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditDefaultsOnly)
		class UBoxComponent* BoxComp;

	UPROPERTY(EditDefaultsOnly)
		class UParticleSystemComponent* Particle;

	UPROPERTY(VisibleAnywhere, Category = "Visible Target")
		class APlayer_Human* target;

	UPROPERTY(EditDefaultsOnly, Category = "Settings")
		int attackDamage = 5;
	UPROPERTY()
		float currentLifeTime = 0.0f;
	UPROPERTY(EditDefaultsOnly, Category = "Settings")
		float lifeTime = 1.0f;

	UFUNCTION()
		void LifeTime();
	UFUNCTION()
		int GetAttackDamage();
};
