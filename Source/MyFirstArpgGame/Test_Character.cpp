// Fill out your copyright notice in the Description page of Project Settings.


#include "Test_Character.h"
#include "MyFirstArpgGame/DebugMacros.h"
#include "GameFramework/CharacterMovementComponent.h"
// Sets default values
ATest_Character::ATest_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATest_Character::BeginPlay()
{
	Super::BeginPlay();
	//GetCharacterMovement()->SetSimulatePhysics(false);
	//GetCharacterMovement()->Physics
}

// Called every frame
void ATest_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	RunningTime += DeltaTime;
	DrawDebugSphere(GetWorld(), GetActorLocation(), 100.f, 24, FColor::Red, false, -1);
	//const auto Ff = FVector(GetActorForwardVector().X, GetActorForwardVector().Y, FMath::Sin(RunningTime) * 10) * 50 * DeltaTime;
	// AddActorWorldOffset(GetActorForwardVector() * 500 * DeltaTime);
	// AddActorWorldOffset(FVector(0,0,FMath::Sin(RunningTime) * 50));
	
}

// Called to bind functionality to input
void ATest_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

