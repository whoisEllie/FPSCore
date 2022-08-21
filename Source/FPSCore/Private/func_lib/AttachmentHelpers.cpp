// Fill out your copyright notice in the Description page of Project Settings.

#include "func_lib/AttachmentHelpers.h"
#include "Math/UnrealMathUtility.h"	

TArray<FName> FAttachmentHelpers::RandomiseAllAttachments(UDataTable* AttachmentDataTable) const
{
	TArray<FString> BarrelAttachments;
	TArray<FString> MagazineAttachments;
	TArray<FString> SightsAttachments;
	TArray<FString> StockAttachments;
	TArray<FString> GripAttachments;

	// Sorting attachments into arrays by their type
	for (FString RowKey : GetDataTableKeyColumnAsString(AttachmentDataTable))
	{
		const FAttachmentData* AttachmentData = AttachmentDataTable->FindRow<FAttachmentData>(FName(*RowKey), RowKey, true);

		switch(AttachmentData->AttachmentType)
		{
		case EAttachmentType::Barrel:
			BarrelAttachments.Add(RowKey);
			break;
		case EAttachmentType::Magazine:
			MagazineAttachments.Add(RowKey);
			break;
		case EAttachmentType::Sights:
			SightsAttachments.Add(RowKey);
			break;
		case EAttachmentType::Stock:
			StockAttachments.Add(RowKey);
			break;
		case EAttachmentType::Grip:
			GripAttachments.Add(RowKey);
			break;
		default: break;
		}
	}
	
	TArray<FName> TempArray;

	// Randomly adding one of each type of attachment to the array
	TempArray.Add(FName(*BarrelAttachments[FMath::RandRange(0, BarrelAttachments.Num() - 1)]));
	TempArray.Add(FName(*MagazineAttachments[FMath::RandRange(0, MagazineAttachments.Num() - 1)]));
	TempArray.Add(FName(*SightsAttachments[FMath::RandRange(0, SightsAttachments.Num() - 1)]));
	TempArray.Add(FName(*StockAttachments[FMath::RandRange(0, StockAttachments.Num() - 1)]));
	TempArray.Add(FName(*GripAttachments[FMath::RandRange(0, GripAttachments.Num() - 1)]));
	
	return TempArray;
}


TArray<FName> FAttachmentHelpers::ReplaceIncompatibleAttachments(UDataTable* AttachmentDataTable, TArray<FName> CurrentAttachments) const
{
	TArray<FString> BarrelAttachments;
	TArray<FString> MagazineAttachments;
	TArray<FString> SightsAttachments;
	TArray<FString> StockAttachments;
	TArray<FString> GripAttachments;

	// Sorting attachments into arrays by their type
	for (FString RowKey : GetDataTableKeyColumnAsString(AttachmentDataTable))
	{
		const FAttachmentData* AttachmentData = AttachmentDataTable->FindRow<FAttachmentData>(FName(*RowKey), RowKey, true);

		switch(AttachmentData->AttachmentType)
		{
			case EAttachmentType::Barrel:
				BarrelAttachments.Add(RowKey);
				break;
			case EAttachmentType::Magazine:
				MagazineAttachments.Add(RowKey);
				break;
			case EAttachmentType::Sights:
				SightsAttachments.Add(RowKey);
				break;
			case EAttachmentType::Stock:
				StockAttachments.Add(RowKey);
				break;
			case EAttachmentType::Grip:
				GripAttachments.Add(RowKey);
				break;
			default: break;
		}
	}
	
	TArray<FName> AttachmentsToReplace;

	// Aggregating incompatible attachments across all attachments
	for (FName Attachment : CurrentAttachments)
	{
		FAttachmentData* IncompatibleAttachmentData = AttachmentDataTable->FindRow<FAttachmentData>(Attachment, Attachment.ToString(), true);

		if (IncompatibleAttachmentData)
		{
			if (IncompatibleAttachmentData->IncompatibleAttachments.Num() > 0)
			{
				for (FName IncompatibleAttachment : IncompatibleAttachmentData->IncompatibleAttachments)
				{
					AttachmentsToReplace.Add(IncompatibleAttachment);
				}
			}
		}
	}

	TArray<EAttachmentType> TypesToReplace;
	
	// Obtaining attachment type for attachments to replace, removing those attachments from the current attachments
	// list, creates a list for the types of attachment to replace, and removes unwanted attachments from the
	// lists generated above
	for (FName RowKey : AttachmentsToReplace)
	{
		const FAttachmentData* AttachmentData = AttachmentDataTable->FindRow<FAttachmentData>(RowKey, RowKey.ToString(), true);

		switch(AttachmentData->AttachmentType)
		{
			case EAttachmentType::Barrel:

				if (!TypesToReplace.Contains(EAttachmentType::Barrel))
				{
					TypesToReplace.Add(EAttachmentType::Barrel);
				}
				if (CurrentAttachments.Contains(RowKey))
				{
					CurrentAttachments.Remove(RowKey);
				}
				BarrelAttachments.Remove(RowKey.ToString());
				break;
				
			case EAttachmentType::Magazine:

				if (!TypesToReplace.Contains(EAttachmentType::Magazine))
				{
					TypesToReplace.Add(EAttachmentType::Magazine);
				}
				if (CurrentAttachments.Contains(RowKey))
				{
					CurrentAttachments.Remove(RowKey);
				}
				MagazineAttachments.Remove(RowKey.ToString());
				break;
				
			case EAttachmentType::Sights:

				if (!TypesToReplace.Contains(EAttachmentType::Sights))
				{
					TypesToReplace.Add(EAttachmentType::Sights);
				}
				if (CurrentAttachments.Contains(RowKey))
				{
					CurrentAttachments.Remove(RowKey);
				}
				SightsAttachments.Remove(RowKey.ToString());
				break;
				
			case EAttachmentType::Stock:

				if (!TypesToReplace.Contains(EAttachmentType::Stock))
				{
					TypesToReplace.Add(EAttachmentType::Stock);
				}
				if (CurrentAttachments.Contains(RowKey))
				{
					CurrentAttachments.Remove(RowKey);
				}
				StockAttachments.Remove(RowKey.ToString());
				break;
				
			case EAttachmentType::Grip:

				if (!TypesToReplace.Contains(EAttachmentType::Grip))
				{
					TypesToReplace.Add(EAttachmentType::Grip);
				}
				if (CurrentAttachments.Contains(RowKey))
				{
					CurrentAttachments.Remove(RowKey);
				}
				GripAttachments.Remove(RowKey.ToString());
				break;
				
			default: break;
		}
	}


	// Populating empty attachment slots with new, compatible attachments
	for (const EAttachmentType Type : TypesToReplace)
	{
		if (Type == EAttachmentType::Barrel)
		{
			CurrentAttachments.Add(FName(*BarrelAttachments[FMath::RandRange(0, BarrelAttachments.Num() - 1)]));
		}
		else if (Type == EAttachmentType::Magazine)
		{
			CurrentAttachments.Add(FName(*MagazineAttachments[FMath::RandRange(0, MagazineAttachments.Num() - 1)]));
		}
		else if (Type == EAttachmentType::Sights)
		{
			CurrentAttachments.Add(FName(*SightsAttachments[FMath::RandRange(0, SightsAttachments.Num() - 1)]));
		}
		else if (Type == EAttachmentType::Stock)
		{
			CurrentAttachments.Add(FName(*StockAttachments[FMath::RandRange(0, StockAttachments.Num() - 1)]));
		}
		else if (Type == EAttachmentType::Grip)
		{
			CurrentAttachments.Add(FName(*GripAttachments[FMath::RandRange(0, GripAttachments.Num() - 1)]));
		}
	}
	
	return CurrentAttachments;
}

TArray<FString> FAttachmentHelpers::GetDataTableKeyColumnAsString(UDataTable* DataTable)
{
	TArray<FString> RowAggregate;

	// Collecting key from each data table row
	for(auto It : DataTable->GetRowMap())
	{
		RowAggregate.Add(It.Key.ToString());
	}
		
	return RowAggregate;
}
