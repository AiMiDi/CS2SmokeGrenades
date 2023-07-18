// Copyright Epic Games, Inc. All Rights Reserved.

#include "CS2SmokeGrenadesGameMode.h"
#include "CS2SmokeGrenadesCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACS2SmokeGrenadesGameMode::ACS2SmokeGrenadesGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
