// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "AimingPointHUD.generated.h"

/**
 * 
 */
UCLASS()
class SPACEWAR_API AAimingPointHUD : public AHUD
{
	GENERATED_BODY()
	
protected:
	// ȭ�� �߾ӿ� �׷��� ���Դϴ�.
	UPROPERTY(EditDefaultsOnly)
		UTexture2D* CrosshairTexture;

public:
	// HUD �� ���� �ֿ� ��� ���Դϴ�.
	virtual void DrawHUD() override;

};