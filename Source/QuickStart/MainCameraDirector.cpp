// Copyright (c) 2025, Hiroya-W All rights reserved.


#include "MainCameraDirector.h"

// Sets default values
AMainCameraDirector::AMainCameraDirector()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AMainCameraDirector::BeginPlay()
{
	Super::BeginPlay();

	if (APlayerController* PlayerController = GetWorld()->GetFirstPlayerController())
	{
		PlayerController->SetViewTarget(CameraActor);
	}
}

// Called every frame
void AMainCameraDirector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
