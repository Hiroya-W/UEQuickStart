// Copyright (c) 2025, Hiroya-W All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PawnMovementComponent.h"

#include "CollidingPawnMovementComponent.generated.h"

/**
 *
 */
UCLASS()
class QUICKSTART_API UCollidingPawnMovementComponent : public UPawnMovementComponent
{
	GENERATED_BODY()

public:
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType,
							   FActorComponentTickFunction* ThisTickFunction) override;
};
