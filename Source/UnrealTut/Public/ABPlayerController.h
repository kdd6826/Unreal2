// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "UnrealTut.h"
#include "GameFramework/PlayerController.h"
#include "ABPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class UNREALTUT_API AABPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	virtual void PostInitializeComponents() override;
	virtual void OnPossess(APawn* aPawn) override;

protected:
	//virtual void SetupInputComponent() override;
	virtual void BeginPlay() override;

private:
	//void LeftRight(float NewAxisValue);
};
