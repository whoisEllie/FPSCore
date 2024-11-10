// Fill out your copyright notice in the Description page of Project Settings.


#include "NormalDistributionFactory.h"

#include "NormalDistribution.h"

UNormalDistributionFactory::UNormalDistributionFactory()
{
	SupportedClass = UNormalDistribution::StaticClass();
	bCreateNew = true;
}

UObject* UNormalDistributionFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName,
                                                      EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UNormalDistribution>(InParent, InClass, InName, Flags, Context);
}
