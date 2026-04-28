#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SpartaCharacter.generated.h"

class USpringArmComponent; //전방선언
class UCameraComponent;//전방선언 아직은 모르는데 나중에 알려줄게
struct FInputActionValue;

UCLASS()
class HOMEWORK7_API ASpartaCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	
	ASpartaCharacter();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	USpringArmComponent* SpringArmComp;//스프링 암 컴포터는 (카메라 연결할 봉)
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	UCameraComponent* CameraComp;// 카메라


protected:
	
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION()
	void Move(const FInputActionValue& Value);
	
	UFUNCTION()
	void StartJump(const FInputActionValue& Value);
	
	UFUNCTION()
	void StopJump(const FInputActionValue& Value);
	
	UFUNCTION()
	void Look(const FInputActionValue& Value);
	
	UFUNCTION()
	void StartSprint(const FInputActionValue& Value);
	
	UFUNCTION()
	void StopSprint(const FInputActionValue& Value);

private:
	float NormalSpeed;
	float SprintSpeedMultiplier;
	float SprintSpeed;

};
