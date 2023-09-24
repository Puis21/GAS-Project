// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/WidgetController/GameWidgetController.h"

void UGameWidgetController::SetWidgetControllerParams(const FWidgetControllerParams& WCParams)
{
	PlayerController = WCParams.PlayerController;
	PlayerState= WCParams.PlayerState;
	AbilitySystemComponent = WCParams.AbilitySystemComponent;
	AttributeSet = WCParams.AttributeSet;
}

void UGameWidgetController::BroadcastInitialValues()
{

}

void UGameWidgetController::BindCallbacksToDependencies()
{

}
