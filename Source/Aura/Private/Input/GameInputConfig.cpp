// Fill out your copyright notice in the Description page of Project Settings.


#include "Input/GameInputConfig.h"

const UInputAction* UGameInputConfig::FindAbilityInputactionForTag(const FGameplayTag& InputTag, bool bLogNotFound) const
{
	for (const FGameInputAction& Action : AbilityInputAction)
	{
		if (Action.InputAction && Action.InputTag == InputTag)
		{
			return Action.InputAction;
		}
	}

	if (bLogNotFound)
	{
		UE_LOG(LogTemp, Error, TEXT("Can't find ability Input Action for InputTag [%s], on InputConfig [%s]"), *InputTag.ToString(), *GetNameSafe(this));
	}

	return nullptr;
}
