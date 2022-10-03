// Copyright Epic Games, Inc. All Rights Reserved.

#include "ChatServerGameMode.h"
#include "ChatServerCharacter.h"
#include "UObject/ConstructorHelpers.h"

AChatServerGameMode::AChatServerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
