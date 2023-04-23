

#include "FPSCoreCustomSettings.h"
#include "Misc/FileHelper.h"

void UFPSCoreCustomSettings::CreateCollisionChannels()
{
	FString file = FPaths::ProjectConfigDir();
	file.Append(TEXT("DefaultEngine.ini"));

	// We will use this FileManager to deal with the file.
	IPlatformFile& FileManager = FPlatformFileManager::Get().GetPlatformFile();

	FString FileContent;
	
	// Always first check if the file that you want to manipulate exist.
	if (FileManager.FileExists(*file))
	{
		// We use the LoadFileToString to load the file into
		if(FFileHelper::LoadFileToString(FileContent,*file,FFileHelper::EHashOptions::None))
		{
			FileContent.Append("\n; FPS Core Settings\n[/Script/Engine.CollisionProfile]\n+DefaultChannelResponses=(Channel=ECC_GameTraceChannel18,DefaultResponse=ECR_Block,bTraceType=True,bStaticObject=False,Name=\"Testing\")");

			// We will use this FileManager to deal with the file.
			IPlatformFile& WriteFileManager = FPlatformFileManager::Get().GetPlatformFile();

			// Always first check if the file that you want to manipulate exist.
			if (WriteFileManager.FileExists(*file))
			{
				// We use the LoadFileToString to load the file into
				if(FFileHelper::SaveStringToFile(FileContent,*file))
				{
					UE_LOG(LogTemp, Warning, TEXT("FileManipulation: Successfully updated DefaultEngine.ini"));
				}
			}
		}
	}
}
