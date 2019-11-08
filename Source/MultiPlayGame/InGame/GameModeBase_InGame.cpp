// Fill out your copyright notice in the Description page of Project Settings.


#include "GameModeBase_InGame.h"
//#include "PlayerController_InGame.h"
#include "PlayerController_InGame.h"
#include "GameStateBase_InGame.h"
#include "PlayerState_InGame.h"

AGameModeBase_InGame::AGameModeBase_InGame()
{
    //DefaultPawnClass =
    //HUDClass =
    PlayerControllerClass = APlayerController_InGame::StaticClass();
    GameStateClass = AGameStateBase_InGame::StaticClass();
    PlayerStateClass = APlayerState_InGame::StaticClass();
}