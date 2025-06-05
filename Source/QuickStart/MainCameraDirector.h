// Copyright (c) 2025, Hiroya-W All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "MainCameraDirector.generated.h"

UCLASS()
class QUICKSTART_API AMainCameraDirector : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMainCameraDirector();

	UPROPERTY(EditAnywhere, Category = "Camera")
	AActor* CameraActor;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
