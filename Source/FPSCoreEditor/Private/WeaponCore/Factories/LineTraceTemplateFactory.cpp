// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponCore/Factories/LineTraceTemplateFactory.h"
#include "WeaponCore/LineTraceTemplate.h"

ULineTraceTemplateFactory::ULineTraceTemplateFactory()
{
	SupportedClass = ULineTraceTemplate::StaticClass();
	bCreateNew = true;
}

UObject* ULineTraceTemplateFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags,
	UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<ULineTraceTemplate>(InParent, InClass, InName, Flags, Context);
}
