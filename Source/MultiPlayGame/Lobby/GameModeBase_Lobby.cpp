// Fill out your copyright notice in the Description page of Project Settings.


#include "GameModeBase_Lobby.h"
//#include "PlayerController_Lobby.h"
#include "PlayerController_Lobby.h"
#include "GameStateBase_Lobby.h"
#include "PlayerState_Lobby.h"

AGameModeBase_Lobby::AGameModeBase_Lobby()
{
    //DefaultPawnClass =
    //HUDClass =
    PlayerControllerClass = APlayerController_Lobby::StaticClass();
    GameStateClass = AGameStateBase_Lobby::StaticClass();
    PlayerStateClass = APlayerState_Lobby::StaticClass();

}
