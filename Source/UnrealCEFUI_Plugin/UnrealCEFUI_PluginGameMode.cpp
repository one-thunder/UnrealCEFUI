// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "UnrealCEFUI_PluginGameMode.h"
#include "UnrealCEFUI_PluginPlayerController.h"
#include "UnrealCEFUI_PluginCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealCEFUI_PluginGameMode::AUnrealCEFUI_PluginGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AUnrealCEFUI_PluginPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}