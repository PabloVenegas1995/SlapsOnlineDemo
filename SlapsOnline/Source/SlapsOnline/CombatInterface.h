#pragma once

#include "CombatInterface.generated.h"

UINTERFACE(MinimalAPI, Blueprintable)

class UCombatInterface : public UInterface
{
	GENERATED_BODY()

};

class ICombatInterface
{
	GENERATED_BODY()


public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = attacks)
	void CheckPunch();
};