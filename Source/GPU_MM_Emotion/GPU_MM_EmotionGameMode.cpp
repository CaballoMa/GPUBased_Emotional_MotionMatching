// Copyright Epic Games, Inc. All Rights Reserved.

#include "GPU_MM_EmotionGameMode.h"
#include "GPU_MM_EmotionCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGPU_MM_EmotionGameMode::AGPU_MM_EmotionGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
