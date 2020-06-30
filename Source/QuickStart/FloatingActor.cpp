// Fill out your copyright notice in the Description page of Project Settings.


#include "FloatingActor.h"
#include "Components/SpotLightComponent.h"

// Sets default values
AFloatingActor::AFloatingActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	root = CreateDefaultSubobject<USpotLightComponent>(TEXT("Spotlight"));
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFloatingActor::BeginPlay()
{
	
	Super::BeginPlay();
	
}

// Called every frame
void AFloatingActor::Tick(float DeltaTime)
{
	UE_LOG(LogTemp, Warning, TEXT("I just started running"));
	this->AddActorLocalRotation(FRotator(0, 100*DeltaTime, 0));
	Super::Tick(DeltaTime);

}

