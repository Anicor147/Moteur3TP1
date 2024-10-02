// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NiagaraComponent.h"
#include "Roullete.generated.h"

UCLASS()
class ARoullete : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ARoullete();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	float LeverAngle = 0;
	UPROPERTY(VisibleAnywhere)
	USceneComponent* Root;

	UPROPERTY(VisibleAnywhere)
	USceneComponent* Reels;

	UPROPERTY(VisibleAnywhere)
	USceneComponent* Lever;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* ReelLeft;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* ReelMid;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* ReelRight;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Line;

	UPROPERTY(VisibleAnywhere)
	UNiagaraComponent* WinEffect;

	virtual void NotifyHit(class UPrimitiveComponent* MyComp, AActor* Other, class UPrimitiveComponent* OtherComp,
	                       bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse,
	                       const FHitResult& Hit) override;

	virtual float SpinRoullette(UStaticMeshComponent* reel);
};
