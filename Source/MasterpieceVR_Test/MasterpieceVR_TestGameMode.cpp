// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "MasterpieceVR_Test.h"
#include "MasterpieceVR_TestGameMode.h"
#include "MasterpieceVR_TestHUD.h"
#include "MasterpieceVR_TestCharacter.h"

AMasterpieceVR_TestGameMode::AMasterpieceVR_TestGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMasterpieceVR_TestHUD::StaticClass();
}
