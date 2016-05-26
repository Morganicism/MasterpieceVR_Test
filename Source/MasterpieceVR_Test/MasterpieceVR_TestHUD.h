// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
#pragma once 
#include "GameFramework/HUD.h"
#include "MasterpieceVR_TestHUD.generated.h"

UCLASS()
class AMasterpieceVR_TestHUD : public AHUD
{
	GENERATED_BODY()

public:
	AMasterpieceVR_TestHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

