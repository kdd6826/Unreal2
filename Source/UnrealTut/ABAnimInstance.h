// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "UnrealTut.h"
#include "Animation/AnimInstance.h"
#include "ABAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class UNREALTUT_API UABAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	UABAnimInstance();
private:
	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category=Pawn, Meta=(AllowPrivateAccess=true))
	float CurrentPawnSpeed;
};
