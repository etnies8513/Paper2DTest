// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "Paper2DTest.h"
#include "Paper2DTestGameMode.h"
#include "Paper2DTestCharacter.h"

APaper2DTestGameMode::APaper2DTestGameMode()
{
	// set default pawn class to our character
	DefaultPawnClass = APaper2DTestCharacter::StaticClass();	
}
