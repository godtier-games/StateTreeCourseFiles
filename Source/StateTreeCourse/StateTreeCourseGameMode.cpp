// Copyright Epic Games, Inc. All Rights Reserved.

#include "StateTreeCourseGameMode.h"
#include "StateTreeCourseCharacter.h"
#include "UObject/ConstructorHelpers.h"

AStateTreeCourseGameMode::AStateTreeCourseGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
