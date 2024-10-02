// Fill out your copyright notice in the Description page of Project Settings.


#include "Roullete.h"

#include "TPSlotMachine/TPSlotMachineCharacter.h"

// Sets default values
ARoullete::ARoullete()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;

	Reels = CreateDefaultSubobject<USceneComponent>(TEXT("Reels"));
	Reels->SetupAttachment(Root);

	Lever = CreateDefaultSubobject<USceneComponent>(TEXT("Lever"));
	Lever->SetupAttachment(Root);

	ReelLeft = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ReelLeft"));
	ReelLeft->SetupAttachment(Reels);

	ReelMid = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ReelMid"));
	ReelMid->SetupAttachment(Reels);

	ReelRight = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ReelRight"));
	ReelRight->SetupAttachment(Reels);

	Line = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Line"));
	Line->SetupAttachment(Root);

	WinEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("WinEffect"));
	WinEffect->SetupAttachment(Line);
}

// Called when the game starts or when spawned
void ARoullete::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ARoullete::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	LeverAngle -= DeltaTime * 100;
	if (LeverAngle <= 0)
	{
		LeverAngle = 0;
		Lever->SetRelativeRotation(FRotator(0, 0, 0));
	}
	else
	{
		Lever->AddRelativeRotation(FRotator(0, 0, -DeltaTime * 100));
	}
}

void ARoullete::NotifyHit(class UPrimitiveComponent* MyComp, AActor* Other, class UPrimitiveComponent* OtherComp,
                          bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse,
                          const FHitResult& Hit)
{
	Super::NotifyHit(MyComp, Other, OtherComp, bSelfMoved, HitLocation, HitNormal, NormalImpulse, Hit);

	if (LeverAngle == 0)
	{
		LeverAngle = 45.f;
		Lever->AddRelativeRotation(FRotator(0, 0, LeverAngle));

		auto reel1 = SpinRoullette(ReelLeft);
		auto reel2 = SpinRoullette(ReelMid);
		auto reel3 = SpinRoullette(ReelRight);

		if (reel1 == reel2 && reel3 == reel1 || reel1 == reel2 || reel1 == reel3 || reel2 == reel3)
		{
			UE_LOG(LogTemp, Warning, TEXT(" All reels match: %.2f"), reel1, reel2, reel3);
			WinEffect->Activate(true);
			Line -> SetMaterial(0, GlowMaterial);			
		}
	}
}

float ARoullete::SpinRoullette(UStaticMeshComponent* reel)
{
	Line -> SetMaterial(0,DefaultMaterial);
	auto result = FMath::RandRange(0, 15);
	reel->SetRelativeRotation(FRotator(result * 22.5, 90, 90));

	return result;
}
