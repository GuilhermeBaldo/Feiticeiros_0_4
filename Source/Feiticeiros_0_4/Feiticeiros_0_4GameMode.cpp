// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Feiticeiros_0_4GameMode.h"
#include "Feiticeiros_0_4Character.h"
#include "UObject/ConstructorHelpers.h"

AFeiticeiros_0_4GameMode::AFeiticeiros_0_4GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
