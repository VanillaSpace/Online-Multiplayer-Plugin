// Copyright Epic Games, Inc. All Rights Reserved.

#include "OnlineMP_PluginGameMode.h"
#include "OnlineMP_PluginCharacter.h"
#include "UObject/ConstructorHelpers.h"

AOnlineMP_PluginGameMode::AOnlineMP_PluginGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
