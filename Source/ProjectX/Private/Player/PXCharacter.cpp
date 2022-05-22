// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/PXCharacter.h"

// Sets default values
APXCharacter::APXCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APXCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APXCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APXCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

