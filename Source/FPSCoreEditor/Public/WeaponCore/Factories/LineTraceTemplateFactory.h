// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "LineTraceTemplateFactory.generated.h"

/**
 * 
 */
UCLASS()
class FPSCOREEDITOR_API ULineTraceTemplateFactory : public UFactory
{

	GENERATED_BODY()
	
public:
	ULineTraceTemplateFactory();
	virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn);
};
