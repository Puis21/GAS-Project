// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Widget/GameUserWidget.h"

void UGameUserWidget::SetWidgetController(UObject* InWidgetController)
{
	WidgetController = InWidgetController;
	WidgetControllerSet();
}
