// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#pragma once
#include "GameFramework/GameModeBase.h"
#include "Paper2DTestGameMode.generated.h"

// The GameMode defines the game being played. It governs the game rules, scoring, what actors
// are allowed to exist in this game type, and who may enter the game.
//
// This game mode just sets the default pawn to be the MyCharacter asset, which is a subclass of Paper2DTestCharacter

UCLASS(minimalapi)
class APaper2DTestGameMode : public AGameModeBase
{
	GENERATED_BODY()
public:
	APaper2DTestGameMode();
};
