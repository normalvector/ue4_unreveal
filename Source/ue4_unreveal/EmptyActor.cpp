// Fill out your copyright notice in the Description page of Project Settings.

#include "ue4_unreveal.h"
#include "EmptyActor.h"


// Sets default values
AEmptyActor::AEmptyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEmptyActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEmptyActor::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

