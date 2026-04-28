#include "SpartaGameMode.h"
#include "SpartaPawn.h"
#include "SpartaCharacter.h"
#include "SpartaPlayerController.h"

ASpartaGameMode::ASpartaGameMode()
{
	//DefaultPawnClass = ASpartaCharacter::StaticClass();//“게임 시작 시 기본 Pawn을 ASpartaCharacter로 설정한다”
	DefaultPawnClass = ASpartaPawn::StaticClass();
	PlayerControllerClass = ASpartaPlayerController::StaticClass(); //기본 플레이어 컨트롤러 설정
}

