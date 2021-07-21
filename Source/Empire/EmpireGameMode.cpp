// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "EmpireGameMode.h"
#include "EmpirePlayerController.h"
#include "EmpireCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEmpireGameMode::AEmpireGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AEmpirePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}