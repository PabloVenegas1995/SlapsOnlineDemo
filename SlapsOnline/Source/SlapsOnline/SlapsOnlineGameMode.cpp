// Copyright Epic Games, Inc. All Rights Reserved.

#include "SlapsOnlineGameMode.h"
#include "SlapsOnlineCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASlapsOnlineGameMode::ASlapsOnlineGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
