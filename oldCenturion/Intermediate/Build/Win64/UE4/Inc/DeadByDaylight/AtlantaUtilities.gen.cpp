// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AtlantaUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaUtilities() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaUtilities_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EInputInteractionType();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EItemRarity();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerRole();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ECurrencyType();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EAIDifficultyLevel();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EEmblemQuality();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EItemAvailability();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EOfferingCategory();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAtlantaUtilities::execGetAlantaInteractionDescriptionText)
	{
		P_GET_OBJECT(UInteractionDefinition,Z_Param_interaction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UAtlantaUtilities::GetAlantaInteractionDescriptionText(Z_Param_interaction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execGetAvailableInteractionOfType)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_GET_ENUM(EInputInteractionType,Z_Param_interactionInputType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInteractionDefinition**)Z_Param__Result=UAtlantaUtilities::GetAvailableInteractionOfType(Z_Param_player,EInputInteractionType(Z_Param_interactionInputType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execGetBackgroundColorByRarity)
	{
		P_GET_ENUM(EItemRarity,Z_Param_rarity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FColor*)Z_Param__Result=UAtlantaUtilities::GetBackgroundColorByRarity(EItemRarity(Z_Param_rarity));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execGetControlsTunable)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_tunableValueName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UAtlantaUtilities::GetControlsTunable(Z_Param_tunableValueName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execGetControlsTunableByRole)
	{
		P_GET_ENUM(EPlayerRole,Z_Param_playerRole);
		P_GET_PROPERTY(FNameProperty,Z_Param_tunableValueName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UAtlantaUtilities::GetControlsTunableByRole(EPlayerRole(Z_Param_playerRole),Z_Param_tunableValueName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execGetCurrencyColor)
	{
		P_GET_ENUM(ECurrencyType,Z_Param_currencyType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSlateColor*)Z_Param__Result=UAtlantaUtilities::GetCurrencyColor(ECurrencyType(Z_Param_currencyType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execGetCurrencyUITexturePath)
	{
		P_GET_ENUM(ECurrencyType,Z_Param_currencyType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAtlantaUtilities::GetCurrencyUITexturePath(ECurrencyType(Z_Param_currencyType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execGetCurrentInteraction)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInteractionDefinition**)Z_Param__Result=UAtlantaUtilities::GetCurrentInteraction(Z_Param_player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execGetCurrentInteractionOfType)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_GET_ENUM(EInputInteractionType,Z_Param_interactionInputType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInteractionDefinition**)Z_Param__Result=UAtlantaUtilities::GetCurrentInteractionOfType(Z_Param_player,EInputInteractionType(Z_Param_interactionInputType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execGetCurrentOrAvailableInteractionOfType)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_GET_ENUM(EInputInteractionType,Z_Param_interactionInputType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInteractionDefinition**)Z_Param__Result=UAtlantaUtilities::GetCurrentOrAvailableInteractionOfType(Z_Param_player,EInputInteractionType(Z_Param_interactionInputType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execGetDifficultyLevelText)
	{
		P_GET_ENUM(EAIDifficultyLevel,Z_Param_difficultyLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UAtlantaUtilities::GetDifficultyLevelText(EAIDifficultyLevel(Z_Param_difficultyLevel));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execGetEmblemColorByQuality)
	{
		P_GET_ENUM(EEmblemQuality,Z_Param_emblemQuality);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FColor*)Z_Param__Result=UAtlantaUtilities::GetEmblemColorByQuality(EEmblemQuality(Z_Param_emblemQuality));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execGetEmblemQualityText)
	{
		P_GET_ENUM(EEmblemQuality,Z_Param_emblemQuality);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UAtlantaUtilities::GetEmblemQualityText(EEmblemQuality(Z_Param_emblemQuality));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execGetIconImageByPath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_iconPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UAtlantaUtilities::GetIconImageByPath(Z_Param_iconPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execGetItemAvailabilityText)
	{
		P_GET_ENUM(EItemAvailability,Z_Param_availability);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UAtlantaUtilities::GetItemAvailabilityText(EItemAvailability(Z_Param_availability));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execGetItemRarityText)
	{
		P_GET_ENUM(EItemRarity,Z_Param_rarity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UAtlantaUtilities::GetItemRarityText(EItemRarity(Z_Param_rarity));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execGetMapSpriteFromPath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_mapSpritePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPaperSprite**)Z_Param__Result=UAtlantaUtilities::GetMapSpriteFromPath(Z_Param_mapSpritePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execGetOfferingCategoryText)
	{
		P_GET_ENUM(EOfferingCategory,Z_Param_offeringCategory);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UAtlantaUtilities::GetOfferingCategoryText(EOfferingCategory(Z_Param_offeringCategory));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execGetPaintColorByRarity)
	{
		P_GET_ENUM(EItemRarity,Z_Param_rarity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FColor*)Z_Param__Result=UAtlantaUtilities::GetPaintColorByRarity(EItemRarity(Z_Param_rarity));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execGetPlayerRoleText)
	{
		P_GET_ENUM(EPlayerRole,Z_Param_playerRole);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UAtlantaUtilities::GetPlayerRoleText(EPlayerRole(Z_Param_playerRole));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execGetPlayerRoleTextUppercase)
	{
		P_GET_ENUM(EPlayerRole,Z_Param_playerRole);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UAtlantaUtilities::GetPlayerRoleTextUppercase(EPlayerRole(Z_Param_playerRole));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execGetSpriteFromFullPath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_fullSpritePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPaperSprite**)Z_Param__Result=UAtlantaUtilities::GetSpriteFromFullPath(Z_Param_fullSpritePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execGetSpriteFromPath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_fullDbPathToImage);
		P_GET_PROPERTY(FStrProperty,Z_Param_constantDbPathToImageFolder);
		P_GET_PROPERTY(FStrProperty,Z_Param_constantPathToSpriteFolder);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPaperSprite**)Z_Param__Result=UAtlantaUtilities::GetSpriteFromPath(Z_Param_fullDbPathToImage,Z_Param_constantDbPathToImageFolder,Z_Param_constantPathToSpriteFolder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execGetStoreVersion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAtlantaUtilities::GetStoreVersion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execIsInAtlantaTutorialLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtlantaUtilities::IsInAtlantaTutorialLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execIsPlayerInteractingWithActor)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_GET_OBJECT(AActor,Z_Param_actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtlantaUtilities::IsPlayerInteractingWithActor(Z_Param_player,Z_Param_actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execIsTutorialEditorDebuggingEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtlantaUtilities::IsTutorialEditorDebuggingEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execLoadTextureByAsset)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UAtlantaUtilities::LoadTextureByAsset(Z_Param_path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execMakeBrushFromSprite)
	{
		P_GET_OBJECT(UPaperSprite,Z_Param_sprite);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSlateBrush*)Z_Param__Result=UAtlantaUtilities::MakeBrushFromSprite(Z_Param_sprite);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execMakeBrushFromTexture)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_texture);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSlateBrush*)Z_Param__Result=UAtlantaUtilities::MakeBrushFromTexture(Z_Param_texture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execSecondsToStringWithoutDecimals)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_seconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAtlantaUtilities::SecondsToStringWithoutDecimals(Z_Param_seconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execSetButtonStyle)
	{
		P_GET_OBJECT(UButton,Z_Param_button);
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_brush);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtlantaUtilities::SetButtonStyle(Z_Param_button,Z_Param_Out_brush);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execSetImageBrush)
	{
		P_GET_OBJECT(UImage,Z_Param_image);
		P_GET_OBJECT(UTexture2D,Z_Param_asset);
		P_GET_UBOOL(Z_Param_bMatchSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtlantaUtilities::SetImageBrush(Z_Param_image,Z_Param_asset,Z_Param_bMatchSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execSetImageBrushFromPath)
	{
		P_GET_OBJECT(UImage,Z_Param_image);
		P_GET_PROPERTY(FStrProperty,Z_Param_path);
		P_GET_UBOOL(Z_Param_bMatchSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtlantaUtilities::SetImageBrushFromPath(Z_Param_image,Z_Param_path,Z_Param_bMatchSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execSetImageBrushFromSpritePath)
	{
		P_GET_OBJECT(UImage,Z_Param_image);
		P_GET_PROPERTY(FStrProperty,Z_Param_path);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtlantaUtilities::SetImageBrushFromSpritePath(Z_Param_image,Z_Param_path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execSetImageSlateBrush)
	{
		P_GET_OBJECT(UImage,Z_Param_image);
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_brush);
		P_GET_UBOOL(Z_Param_bMatchSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtlantaUtilities::SetImageSlateBrush(Z_Param_image,Z_Param_Out_brush,Z_Param_bMatchSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execShouldSupportMultipleActiveActivatablePerks)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtlantaUtilities::ShouldSupportMultipleActiveActivatablePerks();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execShouldUseAtlantaBackendBloodMarketData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtlantaUtilities::ShouldUseAtlantaBackendBloodMarketData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execShouldUseAtlantaBloodweb)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtlantaUtilities::ShouldUseAtlantaBloodweb();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execShouldUseAtlantaBundleFilterRules)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtlantaUtilities::ShouldUseAtlantaBundleFilterRules();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execShouldUseAtlantaCatalog)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtlantaUtilities::ShouldUseAtlantaCatalog();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execShouldUseAtlantaCDNBucketChangelist)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtlantaUtilities::ShouldUseAtlantaCDNBucketChangelist();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execShouldUseAtlantaCDNPatching)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtlantaUtilities::ShouldUseAtlantaCDNPatching();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execShouldUseAtlantaCharacterProgression)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtlantaUtilities::ShouldUseAtlantaCharacterProgression();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execShouldUseAtlantaContent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtlantaUtilities::ShouldUseAtlantaContent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execShouldUseAtlantaCurrencies)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtlantaUtilities::ShouldUseAtlantaCurrencies();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execShouldUseAtlantaCustomizedHudSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtlantaUtilities::ShouldUseAtlantaCustomizedHudSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execShouldUseAtlantaDailyRewards)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtlantaUtilities::ShouldUseAtlantaDailyRewards();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execShouldUseAtlantaDreamworldFX)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtlantaUtilities::ShouldUseAtlantaDreamworldFX();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execShouldUseAtlantaEntity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtlantaUtilities::ShouldUseAtlantaEntity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execShouldUseAtlantaFearMarket)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtlantaUtilities::ShouldUseAtlantaFearMarket();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execShouldUseAtlantaFixedMaps)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtlantaUtilities::ShouldUseAtlantaFixedMaps();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execShouldUseAtlantaFreeTickets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtlantaUtilities::ShouldUseAtlantaFreeTickets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execShouldUseAtlantaFriendList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtlantaUtilities::ShouldUseAtlantaFriendList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execShouldUseAtlantaGameplayValues)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtlantaUtilities::ShouldUseAtlantaGameplayValues();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execShouldUseAtlantaHudAttackJoystick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtlantaUtilities::ShouldUseAtlantaHudAttackJoystick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execShouldUseAtlantaHudEditor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtlantaUtilities::ShouldUseAtlantaHudEditor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execShouldUseAtlantaItemAvailability)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtlantaUtilities::ShouldUseAtlantaItemAvailability();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execShouldUseAtlantaKrakenContentVersion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtlantaUtilities::ShouldUseAtlantaKrakenContentVersion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execShouldUseAtlantaLighting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtlantaUtilities::ShouldUseAtlantaLighting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execShouldUseAtlantaMatchmaking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtlantaUtilities::ShouldUseAtlantaMatchmaking();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execShouldUseAtlantaOutlines)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtlantaUtilities::ShouldUseAtlantaOutlines();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execShouldUseAtlantaPurchasableOperations)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtlantaUtilities::ShouldUseAtlantaPurchasableOperations();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execShouldUseAtlantaQualitySettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtlantaUtilities::ShouldUseAtlantaQualitySettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execShouldUseAtlantaRank)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtlantaUtilities::ShouldUseAtlantaRank();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execShouldUseAtlantaRituals)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtlantaUtilities::ShouldUseAtlantaRituals();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execShouldUseAtlantaStreamVideo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtlantaUtilities::ShouldUseAtlantaStreamVideo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execShouldUseAtlantaUI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtlantaUtilities::ShouldUseAtlantaUI();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execShouldUseOfflineMatchHistory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtlantaUtilities::ShouldUseOfflineMatchHistory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaUtilities::execShouldUseQuickRoleSwitch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtlantaUtilities::ShouldUseQuickRoleSwitch();
		P_NATIVE_END;
	}
	void UAtlantaUtilities::StaticRegisterNativesUAtlantaUtilities()
	{
		UClass* Class = UAtlantaUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAlantaInteractionDescriptionText", &UAtlantaUtilities::execGetAlantaInteractionDescriptionText },
			{ "GetAvailableInteractionOfType", &UAtlantaUtilities::execGetAvailableInteractionOfType },
			{ "GetBackgroundColorByRarity", &UAtlantaUtilities::execGetBackgroundColorByRarity },
			{ "GetControlsTunable", &UAtlantaUtilities::execGetControlsTunable },
			{ "GetControlsTunableByRole", &UAtlantaUtilities::execGetControlsTunableByRole },
			{ "GetCurrencyColor", &UAtlantaUtilities::execGetCurrencyColor },
			{ "GetCurrencyUITexturePath", &UAtlantaUtilities::execGetCurrencyUITexturePath },
			{ "GetCurrentInteraction", &UAtlantaUtilities::execGetCurrentInteraction },
			{ "GetCurrentInteractionOfType", &UAtlantaUtilities::execGetCurrentInteractionOfType },
			{ "GetCurrentOrAvailableInteractionOfType", &UAtlantaUtilities::execGetCurrentOrAvailableInteractionOfType },
			{ "GetDifficultyLevelText", &UAtlantaUtilities::execGetDifficultyLevelText },
			{ "GetEmblemColorByQuality", &UAtlantaUtilities::execGetEmblemColorByQuality },
			{ "GetEmblemQualityText", &UAtlantaUtilities::execGetEmblemQualityText },
			{ "GetIconImageByPath", &UAtlantaUtilities::execGetIconImageByPath },
			{ "GetItemAvailabilityText", &UAtlantaUtilities::execGetItemAvailabilityText },
			{ "GetItemRarityText", &UAtlantaUtilities::execGetItemRarityText },
			{ "GetMapSpriteFromPath", &UAtlantaUtilities::execGetMapSpriteFromPath },
			{ "GetOfferingCategoryText", &UAtlantaUtilities::execGetOfferingCategoryText },
			{ "GetPaintColorByRarity", &UAtlantaUtilities::execGetPaintColorByRarity },
			{ "GetPlayerRoleText", &UAtlantaUtilities::execGetPlayerRoleText },
			{ "GetPlayerRoleTextUppercase", &UAtlantaUtilities::execGetPlayerRoleTextUppercase },
			{ "GetSpriteFromFullPath", &UAtlantaUtilities::execGetSpriteFromFullPath },
			{ "GetSpriteFromPath", &UAtlantaUtilities::execGetSpriteFromPath },
			{ "GetStoreVersion", &UAtlantaUtilities::execGetStoreVersion },
			{ "IsInAtlantaTutorialLevel", &UAtlantaUtilities::execIsInAtlantaTutorialLevel },
			{ "IsPlayerInteractingWithActor", &UAtlantaUtilities::execIsPlayerInteractingWithActor },
			{ "IsTutorialEditorDebuggingEnabled", &UAtlantaUtilities::execIsTutorialEditorDebuggingEnabled },
			{ "LoadTextureByAsset", &UAtlantaUtilities::execLoadTextureByAsset },
			{ "MakeBrushFromSprite", &UAtlantaUtilities::execMakeBrushFromSprite },
			{ "MakeBrushFromTexture", &UAtlantaUtilities::execMakeBrushFromTexture },
			{ "SecondsToStringWithoutDecimals", &UAtlantaUtilities::execSecondsToStringWithoutDecimals },
			{ "SetButtonStyle", &UAtlantaUtilities::execSetButtonStyle },
			{ "SetImageBrush", &UAtlantaUtilities::execSetImageBrush },
			{ "SetImageBrushFromPath", &UAtlantaUtilities::execSetImageBrushFromPath },
			{ "SetImageBrushFromSpritePath", &UAtlantaUtilities::execSetImageBrushFromSpritePath },
			{ "SetImageSlateBrush", &UAtlantaUtilities::execSetImageSlateBrush },
			{ "ShouldSupportMultipleActiveActivatablePerks", &UAtlantaUtilities::execShouldSupportMultipleActiveActivatablePerks },
			{ "ShouldUseAtlantaBackendBloodMarketData", &UAtlantaUtilities::execShouldUseAtlantaBackendBloodMarketData },
			{ "ShouldUseAtlantaBloodweb", &UAtlantaUtilities::execShouldUseAtlantaBloodweb },
			{ "ShouldUseAtlantaBundleFilterRules", &UAtlantaUtilities::execShouldUseAtlantaBundleFilterRules },
			{ "ShouldUseAtlantaCatalog", &UAtlantaUtilities::execShouldUseAtlantaCatalog },
			{ "ShouldUseAtlantaCDNBucketChangelist", &UAtlantaUtilities::execShouldUseAtlantaCDNBucketChangelist },
			{ "ShouldUseAtlantaCDNPatching", &UAtlantaUtilities::execShouldUseAtlantaCDNPatching },
			{ "ShouldUseAtlantaCharacterProgression", &UAtlantaUtilities::execShouldUseAtlantaCharacterProgression },
			{ "ShouldUseAtlantaContent", &UAtlantaUtilities::execShouldUseAtlantaContent },
			{ "ShouldUseAtlantaCurrencies", &UAtlantaUtilities::execShouldUseAtlantaCurrencies },
			{ "ShouldUseAtlantaCustomizedHudSettings", &UAtlantaUtilities::execShouldUseAtlantaCustomizedHudSettings },
			{ "ShouldUseAtlantaDailyRewards", &UAtlantaUtilities::execShouldUseAtlantaDailyRewards },
			{ "ShouldUseAtlantaDreamworldFX", &UAtlantaUtilities::execShouldUseAtlantaDreamworldFX },
			{ "ShouldUseAtlantaEntity", &UAtlantaUtilities::execShouldUseAtlantaEntity },
			{ "ShouldUseAtlantaFearMarket", &UAtlantaUtilities::execShouldUseAtlantaFearMarket },
			{ "ShouldUseAtlantaFixedMaps", &UAtlantaUtilities::execShouldUseAtlantaFixedMaps },
			{ "ShouldUseAtlantaFreeTickets", &UAtlantaUtilities::execShouldUseAtlantaFreeTickets },
			{ "ShouldUseAtlantaFriendList", &UAtlantaUtilities::execShouldUseAtlantaFriendList },
			{ "ShouldUseAtlantaGameplayValues", &UAtlantaUtilities::execShouldUseAtlantaGameplayValues },
			{ "ShouldUseAtlantaHudAttackJoystick", &UAtlantaUtilities::execShouldUseAtlantaHudAttackJoystick },
			{ "ShouldUseAtlantaHudEditor", &UAtlantaUtilities::execShouldUseAtlantaHudEditor },
			{ "ShouldUseAtlantaItemAvailability", &UAtlantaUtilities::execShouldUseAtlantaItemAvailability },
			{ "ShouldUseAtlantaKrakenContentVersion", &UAtlantaUtilities::execShouldUseAtlantaKrakenContentVersion },
			{ "ShouldUseAtlantaLighting", &UAtlantaUtilities::execShouldUseAtlantaLighting },
			{ "ShouldUseAtlantaMatchmaking", &UAtlantaUtilities::execShouldUseAtlantaMatchmaking },
			{ "ShouldUseAtlantaOutlines", &UAtlantaUtilities::execShouldUseAtlantaOutlines },
			{ "ShouldUseAtlantaPurchasableOperations", &UAtlantaUtilities::execShouldUseAtlantaPurchasableOperations },
			{ "ShouldUseAtlantaQualitySettings", &UAtlantaUtilities::execShouldUseAtlantaQualitySettings },
			{ "ShouldUseAtlantaRank", &UAtlantaUtilities::execShouldUseAtlantaRank },
			{ "ShouldUseAtlantaRituals", &UAtlantaUtilities::execShouldUseAtlantaRituals },
			{ "ShouldUseAtlantaStreamVideo", &UAtlantaUtilities::execShouldUseAtlantaStreamVideo },
			{ "ShouldUseAtlantaUI", &UAtlantaUtilities::execShouldUseAtlantaUI },
			{ "ShouldUseOfflineMatchHistory", &UAtlantaUtilities::execShouldUseOfflineMatchHistory },
			{ "ShouldUseQuickRoleSwitch", &UAtlantaUtilities::execShouldUseQuickRoleSwitch },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_GetAlantaInteractionDescriptionText_Statics
	{
		struct AtlantaUtilities_eventGetAlantaInteractionDescriptionText_Parms
		{
			UInteractionDefinition* interaction;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interaction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interaction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetAlantaInteractionDescriptionText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventGetAlantaInteractionDescriptionText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_GetAlantaInteractionDescriptionText_Statics::NewProp_interaction_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetAlantaInteractionDescriptionText_Statics::NewProp_interaction = { "interaction", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventGetAlantaInteractionDescriptionText_Parms, interaction), Z_Construct_UClass_UInteractionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_GetAlantaInteractionDescriptionText_Statics::NewProp_interaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetAlantaInteractionDescriptionText_Statics::NewProp_interaction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_GetAlantaInteractionDescriptionText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetAlantaInteractionDescriptionText_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetAlantaInteractionDescriptionText_Statics::NewProp_interaction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_GetAlantaInteractionDescriptionText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_GetAlantaInteractionDescriptionText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "GetAlantaInteractionDescriptionText", nullptr, nullptr, sizeof(AtlantaUtilities_eventGetAlantaInteractionDescriptionText_Parms), Z_Construct_UFunction_UAtlantaUtilities_GetAlantaInteractionDescriptionText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetAlantaInteractionDescriptionText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_GetAlantaInteractionDescriptionText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetAlantaInteractionDescriptionText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_GetAlantaInteractionDescriptionText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_GetAlantaInteractionDescriptionText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_GetAvailableInteractionOfType_Statics
	{
		struct AtlantaUtilities_eventGetAvailableInteractionOfType_Parms
		{
			ADBDPlayer* player;
			EInputInteractionType interactionInputType;
			UInteractionDefinition* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_interactionInputType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_interactionInputType_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_GetAvailableInteractionOfType_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetAvailableInteractionOfType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventGetAvailableInteractionOfType_Parms, ReturnValue), Z_Construct_UClass_UInteractionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_GetAvailableInteractionOfType_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetAvailableInteractionOfType_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetAvailableInteractionOfType_Statics::NewProp_interactionInputType = { "interactionInputType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventGetAvailableInteractionOfType_Parms, interactionInputType), Z_Construct_UEnum_DeadByDaylight_EInputInteractionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetAvailableInteractionOfType_Statics::NewProp_interactionInputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetAvailableInteractionOfType_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventGetAvailableInteractionOfType_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_GetAvailableInteractionOfType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetAvailableInteractionOfType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetAvailableInteractionOfType_Statics::NewProp_interactionInputType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetAvailableInteractionOfType_Statics::NewProp_interactionInputType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetAvailableInteractionOfType_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_GetAvailableInteractionOfType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_GetAvailableInteractionOfType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "GetAvailableInteractionOfType", nullptr, nullptr, sizeof(AtlantaUtilities_eventGetAvailableInteractionOfType_Parms), Z_Construct_UFunction_UAtlantaUtilities_GetAvailableInteractionOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetAvailableInteractionOfType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_GetAvailableInteractionOfType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetAvailableInteractionOfType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_GetAvailableInteractionOfType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_GetAvailableInteractionOfType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_GetBackgroundColorByRarity_Statics
	{
		struct AtlantaUtilities_eventGetBackgroundColorByRarity_Parms
		{
			EItemRarity rarity;
			FColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rarity_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_rarity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_rarity_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetBackgroundColorByRarity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventGetBackgroundColorByRarity_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_GetBackgroundColorByRarity_Statics::NewProp_rarity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetBackgroundColorByRarity_Statics::NewProp_rarity = { "rarity", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventGetBackgroundColorByRarity_Parms, rarity), Z_Construct_UEnum_DBDSharedTypes_EItemRarity, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_GetBackgroundColorByRarity_Statics::NewProp_rarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetBackgroundColorByRarity_Statics::NewProp_rarity_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetBackgroundColorByRarity_Statics::NewProp_rarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_GetBackgroundColorByRarity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetBackgroundColorByRarity_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetBackgroundColorByRarity_Statics::NewProp_rarity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetBackgroundColorByRarity_Statics::NewProp_rarity_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_GetBackgroundColorByRarity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_GetBackgroundColorByRarity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "GetBackgroundColorByRarity", nullptr, nullptr, sizeof(AtlantaUtilities_eventGetBackgroundColorByRarity_Parms), Z_Construct_UFunction_UAtlantaUtilities_GetBackgroundColorByRarity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetBackgroundColorByRarity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_GetBackgroundColorByRarity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetBackgroundColorByRarity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_GetBackgroundColorByRarity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_GetBackgroundColorByRarity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_GetControlsTunable_Statics
	{
		struct AtlantaUtilities_eventGetControlsTunable_Parms
		{
			FName tunableValueName;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_tunableValueName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetControlsTunable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventGetControlsTunable_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetControlsTunable_Statics::NewProp_tunableValueName = { "tunableValueName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventGetControlsTunable_Parms, tunableValueName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_GetControlsTunable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetControlsTunable_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetControlsTunable_Statics::NewProp_tunableValueName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_GetControlsTunable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_GetControlsTunable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "GetControlsTunable", nullptr, nullptr, sizeof(AtlantaUtilities_eventGetControlsTunable_Parms), Z_Construct_UFunction_UAtlantaUtilities_GetControlsTunable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetControlsTunable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_GetControlsTunable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetControlsTunable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_GetControlsTunable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_GetControlsTunable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_GetControlsTunableByRole_Statics
	{
		struct AtlantaUtilities_eventGetControlsTunableByRole_Parms
		{
			EPlayerRole playerRole;
			FName tunableValueName;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_tunableValueName;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_playerRole;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_playerRole_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetControlsTunableByRole_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventGetControlsTunableByRole_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetControlsTunableByRole_Statics::NewProp_tunableValueName = { "tunableValueName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventGetControlsTunableByRole_Parms, tunableValueName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetControlsTunableByRole_Statics::NewProp_playerRole = { "playerRole", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventGetControlsTunableByRole_Parms, playerRole), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetControlsTunableByRole_Statics::NewProp_playerRole_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_GetControlsTunableByRole_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetControlsTunableByRole_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetControlsTunableByRole_Statics::NewProp_tunableValueName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetControlsTunableByRole_Statics::NewProp_playerRole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetControlsTunableByRole_Statics::NewProp_playerRole_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_GetControlsTunableByRole_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_GetControlsTunableByRole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "GetControlsTunableByRole", nullptr, nullptr, sizeof(AtlantaUtilities_eventGetControlsTunableByRole_Parms), Z_Construct_UFunction_UAtlantaUtilities_GetControlsTunableByRole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetControlsTunableByRole_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_GetControlsTunableByRole_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetControlsTunableByRole_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_GetControlsTunableByRole()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_GetControlsTunableByRole_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_GetCurrencyColor_Statics
	{
		struct AtlantaUtilities_eventGetCurrencyColor_Parms
		{
			ECurrencyType currencyType;
			FSlateColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_currencyType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_currencyType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetCurrencyColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventGetCurrencyColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetCurrencyColor_Statics::NewProp_currencyType = { "currencyType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventGetCurrencyColor_Parms, currencyType), Z_Construct_UEnum_DBDSharedTypes_ECurrencyType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetCurrencyColor_Statics::NewProp_currencyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_GetCurrencyColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetCurrencyColor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetCurrencyColor_Statics::NewProp_currencyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetCurrencyColor_Statics::NewProp_currencyType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_GetCurrencyColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_GetCurrencyColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "GetCurrencyColor", nullptr, nullptr, sizeof(AtlantaUtilities_eventGetCurrencyColor_Parms), Z_Construct_UFunction_UAtlantaUtilities_GetCurrencyColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetCurrencyColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_GetCurrencyColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetCurrencyColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_GetCurrencyColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_GetCurrencyColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_GetCurrencyUITexturePath_Statics
	{
		struct AtlantaUtilities_eventGetCurrencyUITexturePath_Parms
		{
			ECurrencyType currencyType;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_currencyType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_currencyType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetCurrencyUITexturePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventGetCurrencyUITexturePath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetCurrencyUITexturePath_Statics::NewProp_currencyType = { "currencyType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventGetCurrencyUITexturePath_Parms, currencyType), Z_Construct_UEnum_DBDSharedTypes_ECurrencyType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetCurrencyUITexturePath_Statics::NewProp_currencyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_GetCurrencyUITexturePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetCurrencyUITexturePath_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetCurrencyUITexturePath_Statics::NewProp_currencyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetCurrencyUITexturePath_Statics::NewProp_currencyType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_GetCurrencyUITexturePath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_GetCurrencyUITexturePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "GetCurrencyUITexturePath", nullptr, nullptr, sizeof(AtlantaUtilities_eventGetCurrencyUITexturePath_Parms), Z_Construct_UFunction_UAtlantaUtilities_GetCurrencyUITexturePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetCurrencyUITexturePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_GetCurrencyUITexturePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetCurrencyUITexturePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_GetCurrencyUITexturePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_GetCurrencyUITexturePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_GetCurrentInteraction_Statics
	{
		struct AtlantaUtilities_eventGetCurrentInteraction_Parms
		{
			ADBDPlayer* player;
			UInteractionDefinition* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_GetCurrentInteraction_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetCurrentInteraction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventGetCurrentInteraction_Parms, ReturnValue), Z_Construct_UClass_UInteractionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_GetCurrentInteraction_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetCurrentInteraction_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetCurrentInteraction_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventGetCurrentInteraction_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_GetCurrentInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetCurrentInteraction_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetCurrentInteraction_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_GetCurrentInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_GetCurrentInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "GetCurrentInteraction", nullptr, nullptr, sizeof(AtlantaUtilities_eventGetCurrentInteraction_Parms), Z_Construct_UFunction_UAtlantaUtilities_GetCurrentInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetCurrentInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_GetCurrentInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetCurrentInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_GetCurrentInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_GetCurrentInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_GetCurrentInteractionOfType_Statics
	{
		struct AtlantaUtilities_eventGetCurrentInteractionOfType_Parms
		{
			ADBDPlayer* player;
			EInputInteractionType interactionInputType;
			UInteractionDefinition* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_interactionInputType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_interactionInputType_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_GetCurrentInteractionOfType_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetCurrentInteractionOfType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventGetCurrentInteractionOfType_Parms, ReturnValue), Z_Construct_UClass_UInteractionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_GetCurrentInteractionOfType_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetCurrentInteractionOfType_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetCurrentInteractionOfType_Statics::NewProp_interactionInputType = { "interactionInputType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventGetCurrentInteractionOfType_Parms, interactionInputType), Z_Construct_UEnum_DeadByDaylight_EInputInteractionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetCurrentInteractionOfType_Statics::NewProp_interactionInputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetCurrentInteractionOfType_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventGetCurrentInteractionOfType_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_GetCurrentInteractionOfType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetCurrentInteractionOfType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetCurrentInteractionOfType_Statics::NewProp_interactionInputType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetCurrentInteractionOfType_Statics::NewProp_interactionInputType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetCurrentInteractionOfType_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_GetCurrentInteractionOfType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_GetCurrentInteractionOfType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "GetCurrentInteractionOfType", nullptr, nullptr, sizeof(AtlantaUtilities_eventGetCurrentInteractionOfType_Parms), Z_Construct_UFunction_UAtlantaUtilities_GetCurrentInteractionOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetCurrentInteractionOfType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_GetCurrentInteractionOfType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetCurrentInteractionOfType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_GetCurrentInteractionOfType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_GetCurrentInteractionOfType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_GetCurrentOrAvailableInteractionOfType_Statics
	{
		struct AtlantaUtilities_eventGetCurrentOrAvailableInteractionOfType_Parms
		{
			ADBDPlayer* player;
			EInputInteractionType interactionInputType;
			UInteractionDefinition* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_interactionInputType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_interactionInputType_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_GetCurrentOrAvailableInteractionOfType_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetCurrentOrAvailableInteractionOfType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventGetCurrentOrAvailableInteractionOfType_Parms, ReturnValue), Z_Construct_UClass_UInteractionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_GetCurrentOrAvailableInteractionOfType_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetCurrentOrAvailableInteractionOfType_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetCurrentOrAvailableInteractionOfType_Statics::NewProp_interactionInputType = { "interactionInputType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventGetCurrentOrAvailableInteractionOfType_Parms, interactionInputType), Z_Construct_UEnum_DeadByDaylight_EInputInteractionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetCurrentOrAvailableInteractionOfType_Statics::NewProp_interactionInputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetCurrentOrAvailableInteractionOfType_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventGetCurrentOrAvailableInteractionOfType_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_GetCurrentOrAvailableInteractionOfType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetCurrentOrAvailableInteractionOfType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetCurrentOrAvailableInteractionOfType_Statics::NewProp_interactionInputType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetCurrentOrAvailableInteractionOfType_Statics::NewProp_interactionInputType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetCurrentOrAvailableInteractionOfType_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_GetCurrentOrAvailableInteractionOfType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_GetCurrentOrAvailableInteractionOfType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "GetCurrentOrAvailableInteractionOfType", nullptr, nullptr, sizeof(AtlantaUtilities_eventGetCurrentOrAvailableInteractionOfType_Parms), Z_Construct_UFunction_UAtlantaUtilities_GetCurrentOrAvailableInteractionOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetCurrentOrAvailableInteractionOfType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_GetCurrentOrAvailableInteractionOfType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetCurrentOrAvailableInteractionOfType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_GetCurrentOrAvailableInteractionOfType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_GetCurrentOrAvailableInteractionOfType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_GetDifficultyLevelText_Statics
	{
		struct AtlantaUtilities_eventGetDifficultyLevelText_Parms
		{
			EAIDifficultyLevel difficultyLevel;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_difficultyLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_difficultyLevel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_difficultyLevel_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetDifficultyLevelText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventGetDifficultyLevelText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_GetDifficultyLevelText_Statics::NewProp_difficultyLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetDifficultyLevelText_Statics::NewProp_difficultyLevel = { "difficultyLevel", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventGetDifficultyLevelText_Parms, difficultyLevel), Z_Construct_UEnum_DeadByDaylight_EAIDifficultyLevel, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_GetDifficultyLevelText_Statics::NewProp_difficultyLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetDifficultyLevelText_Statics::NewProp_difficultyLevel_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetDifficultyLevelText_Statics::NewProp_difficultyLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_GetDifficultyLevelText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetDifficultyLevelText_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetDifficultyLevelText_Statics::NewProp_difficultyLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetDifficultyLevelText_Statics::NewProp_difficultyLevel_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_GetDifficultyLevelText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_GetDifficultyLevelText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "GetDifficultyLevelText", nullptr, nullptr, sizeof(AtlantaUtilities_eventGetDifficultyLevelText_Parms), Z_Construct_UFunction_UAtlantaUtilities_GetDifficultyLevelText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetDifficultyLevelText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_GetDifficultyLevelText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetDifficultyLevelText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_GetDifficultyLevelText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_GetDifficultyLevelText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_GetEmblemColorByQuality_Statics
	{
		struct AtlantaUtilities_eventGetEmblemColorByQuality_Parms
		{
			EEmblemQuality emblemQuality;
			FColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_emblemQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_emblemQuality;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_emblemQuality_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetEmblemColorByQuality_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventGetEmblemColorByQuality_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_GetEmblemColorByQuality_Statics::NewProp_emblemQuality_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetEmblemColorByQuality_Statics::NewProp_emblemQuality = { "emblemQuality", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventGetEmblemColorByQuality_Parms, emblemQuality), Z_Construct_UEnum_DeadByDaylight_EEmblemQuality, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_GetEmblemColorByQuality_Statics::NewProp_emblemQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetEmblemColorByQuality_Statics::NewProp_emblemQuality_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetEmblemColorByQuality_Statics::NewProp_emblemQuality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_GetEmblemColorByQuality_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetEmblemColorByQuality_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetEmblemColorByQuality_Statics::NewProp_emblemQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetEmblemColorByQuality_Statics::NewProp_emblemQuality_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_GetEmblemColorByQuality_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_GetEmblemColorByQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "GetEmblemColorByQuality", nullptr, nullptr, sizeof(AtlantaUtilities_eventGetEmblemColorByQuality_Parms), Z_Construct_UFunction_UAtlantaUtilities_GetEmblemColorByQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetEmblemColorByQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_GetEmblemColorByQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetEmblemColorByQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_GetEmblemColorByQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_GetEmblemColorByQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_GetEmblemQualityText_Statics
	{
		struct AtlantaUtilities_eventGetEmblemQualityText_Parms
		{
			EEmblemQuality emblemQuality;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_emblemQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_emblemQuality;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_emblemQuality_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetEmblemQualityText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventGetEmblemQualityText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_GetEmblemQualityText_Statics::NewProp_emblemQuality_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetEmblemQualityText_Statics::NewProp_emblemQuality = { "emblemQuality", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventGetEmblemQualityText_Parms, emblemQuality), Z_Construct_UEnum_DeadByDaylight_EEmblemQuality, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_GetEmblemQualityText_Statics::NewProp_emblemQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetEmblemQualityText_Statics::NewProp_emblemQuality_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetEmblemQualityText_Statics::NewProp_emblemQuality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_GetEmblemQualityText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetEmblemQualityText_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetEmblemQualityText_Statics::NewProp_emblemQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetEmblemQualityText_Statics::NewProp_emblemQuality_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_GetEmblemQualityText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_GetEmblemQualityText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "GetEmblemQualityText", nullptr, nullptr, sizeof(AtlantaUtilities_eventGetEmblemQualityText_Parms), Z_Construct_UFunction_UAtlantaUtilities_GetEmblemQualityText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetEmblemQualityText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_GetEmblemQualityText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetEmblemQualityText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_GetEmblemQualityText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_GetEmblemQualityText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_GetIconImageByPath_Statics
	{
		struct AtlantaUtilities_eventGetIconImageByPath_Parms
		{
			FString iconPath;
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_iconPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_iconPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetIconImageByPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventGetIconImageByPath_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_GetIconImageByPath_Statics::NewProp_iconPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetIconImageByPath_Statics::NewProp_iconPath = { "iconPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventGetIconImageByPath_Parms, iconPath), METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_GetIconImageByPath_Statics::NewProp_iconPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetIconImageByPath_Statics::NewProp_iconPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_GetIconImageByPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetIconImageByPath_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetIconImageByPath_Statics::NewProp_iconPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_GetIconImageByPath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_GetIconImageByPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "GetIconImageByPath", nullptr, nullptr, sizeof(AtlantaUtilities_eventGetIconImageByPath_Parms), Z_Construct_UFunction_UAtlantaUtilities_GetIconImageByPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetIconImageByPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_GetIconImageByPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetIconImageByPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_GetIconImageByPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_GetIconImageByPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_GetItemAvailabilityText_Statics
	{
		struct AtlantaUtilities_eventGetItemAvailabilityText_Parms
		{
			EItemAvailability availability;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_availability_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_availability;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_availability_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetItemAvailabilityText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventGetItemAvailabilityText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_GetItemAvailabilityText_Statics::NewProp_availability_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetItemAvailabilityText_Statics::NewProp_availability = { "availability", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventGetItemAvailabilityText_Parms, availability), Z_Construct_UEnum_DBDSharedTypes_EItemAvailability, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_GetItemAvailabilityText_Statics::NewProp_availability_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetItemAvailabilityText_Statics::NewProp_availability_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetItemAvailabilityText_Statics::NewProp_availability_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_GetItemAvailabilityText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetItemAvailabilityText_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetItemAvailabilityText_Statics::NewProp_availability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetItemAvailabilityText_Statics::NewProp_availability_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_GetItemAvailabilityText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_GetItemAvailabilityText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "GetItemAvailabilityText", nullptr, nullptr, sizeof(AtlantaUtilities_eventGetItemAvailabilityText_Parms), Z_Construct_UFunction_UAtlantaUtilities_GetItemAvailabilityText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetItemAvailabilityText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_GetItemAvailabilityText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetItemAvailabilityText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_GetItemAvailabilityText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_GetItemAvailabilityText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_GetItemRarityText_Statics
	{
		struct AtlantaUtilities_eventGetItemRarityText_Parms
		{
			EItemRarity rarity;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rarity_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_rarity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_rarity_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetItemRarityText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventGetItemRarityText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_GetItemRarityText_Statics::NewProp_rarity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetItemRarityText_Statics::NewProp_rarity = { "rarity", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventGetItemRarityText_Parms, rarity), Z_Construct_UEnum_DBDSharedTypes_EItemRarity, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_GetItemRarityText_Statics::NewProp_rarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetItemRarityText_Statics::NewProp_rarity_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetItemRarityText_Statics::NewProp_rarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_GetItemRarityText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetItemRarityText_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetItemRarityText_Statics::NewProp_rarity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetItemRarityText_Statics::NewProp_rarity_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_GetItemRarityText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_GetItemRarityText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "GetItemRarityText", nullptr, nullptr, sizeof(AtlantaUtilities_eventGetItemRarityText_Parms), Z_Construct_UFunction_UAtlantaUtilities_GetItemRarityText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetItemRarityText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_GetItemRarityText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetItemRarityText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_GetItemRarityText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_GetItemRarityText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_GetMapSpriteFromPath_Statics
	{
		struct AtlantaUtilities_eventGetMapSpriteFromPath_Parms
		{
			FString mapSpritePath;
			UPaperSprite* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mapSpritePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_mapSpritePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetMapSpriteFromPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventGetMapSpriteFromPath_Parms, ReturnValue), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_GetMapSpriteFromPath_Statics::NewProp_mapSpritePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetMapSpriteFromPath_Statics::NewProp_mapSpritePath = { "mapSpritePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventGetMapSpriteFromPath_Parms, mapSpritePath), METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_GetMapSpriteFromPath_Statics::NewProp_mapSpritePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetMapSpriteFromPath_Statics::NewProp_mapSpritePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_GetMapSpriteFromPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetMapSpriteFromPath_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetMapSpriteFromPath_Statics::NewProp_mapSpritePath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_GetMapSpriteFromPath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_GetMapSpriteFromPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "GetMapSpriteFromPath", nullptr, nullptr, sizeof(AtlantaUtilities_eventGetMapSpriteFromPath_Parms), Z_Construct_UFunction_UAtlantaUtilities_GetMapSpriteFromPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetMapSpriteFromPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_GetMapSpriteFromPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetMapSpriteFromPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_GetMapSpriteFromPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_GetMapSpriteFromPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_GetOfferingCategoryText_Statics
	{
		struct AtlantaUtilities_eventGetOfferingCategoryText_Parms
		{
			EOfferingCategory offeringCategory;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_offeringCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_offeringCategory;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_offeringCategory_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetOfferingCategoryText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventGetOfferingCategoryText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_GetOfferingCategoryText_Statics::NewProp_offeringCategory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetOfferingCategoryText_Statics::NewProp_offeringCategory = { "offeringCategory", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventGetOfferingCategoryText_Parms, offeringCategory), Z_Construct_UEnum_DeadByDaylight_EOfferingCategory, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_GetOfferingCategoryText_Statics::NewProp_offeringCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetOfferingCategoryText_Statics::NewProp_offeringCategory_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetOfferingCategoryText_Statics::NewProp_offeringCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_GetOfferingCategoryText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetOfferingCategoryText_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetOfferingCategoryText_Statics::NewProp_offeringCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetOfferingCategoryText_Statics::NewProp_offeringCategory_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_GetOfferingCategoryText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_GetOfferingCategoryText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "GetOfferingCategoryText", nullptr, nullptr, sizeof(AtlantaUtilities_eventGetOfferingCategoryText_Parms), Z_Construct_UFunction_UAtlantaUtilities_GetOfferingCategoryText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetOfferingCategoryText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_GetOfferingCategoryText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetOfferingCategoryText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_GetOfferingCategoryText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_GetOfferingCategoryText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_GetPaintColorByRarity_Statics
	{
		struct AtlantaUtilities_eventGetPaintColorByRarity_Parms
		{
			EItemRarity rarity;
			FColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rarity_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_rarity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_rarity_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetPaintColorByRarity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventGetPaintColorByRarity_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_GetPaintColorByRarity_Statics::NewProp_rarity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetPaintColorByRarity_Statics::NewProp_rarity = { "rarity", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventGetPaintColorByRarity_Parms, rarity), Z_Construct_UEnum_DBDSharedTypes_EItemRarity, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_GetPaintColorByRarity_Statics::NewProp_rarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetPaintColorByRarity_Statics::NewProp_rarity_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetPaintColorByRarity_Statics::NewProp_rarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_GetPaintColorByRarity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetPaintColorByRarity_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetPaintColorByRarity_Statics::NewProp_rarity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetPaintColorByRarity_Statics::NewProp_rarity_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_GetPaintColorByRarity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_GetPaintColorByRarity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "GetPaintColorByRarity", nullptr, nullptr, sizeof(AtlantaUtilities_eventGetPaintColorByRarity_Parms), Z_Construct_UFunction_UAtlantaUtilities_GetPaintColorByRarity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetPaintColorByRarity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_GetPaintColorByRarity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetPaintColorByRarity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_GetPaintColorByRarity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_GetPaintColorByRarity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_GetPlayerRoleText_Statics
	{
		struct AtlantaUtilities_eventGetPlayerRoleText_Parms
		{
			EPlayerRole playerRole;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerRole_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_playerRole;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_playerRole_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetPlayerRoleText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventGetPlayerRoleText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_GetPlayerRoleText_Statics::NewProp_playerRole_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetPlayerRoleText_Statics::NewProp_playerRole = { "playerRole", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventGetPlayerRoleText_Parms, playerRole), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_GetPlayerRoleText_Statics::NewProp_playerRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetPlayerRoleText_Statics::NewProp_playerRole_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetPlayerRoleText_Statics::NewProp_playerRole_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_GetPlayerRoleText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetPlayerRoleText_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetPlayerRoleText_Statics::NewProp_playerRole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetPlayerRoleText_Statics::NewProp_playerRole_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_GetPlayerRoleText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_GetPlayerRoleText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "GetPlayerRoleText", nullptr, nullptr, sizeof(AtlantaUtilities_eventGetPlayerRoleText_Parms), Z_Construct_UFunction_UAtlantaUtilities_GetPlayerRoleText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetPlayerRoleText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_GetPlayerRoleText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetPlayerRoleText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_GetPlayerRoleText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_GetPlayerRoleText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_GetPlayerRoleTextUppercase_Statics
	{
		struct AtlantaUtilities_eventGetPlayerRoleTextUppercase_Parms
		{
			EPlayerRole playerRole;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerRole_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_playerRole;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_playerRole_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetPlayerRoleTextUppercase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventGetPlayerRoleTextUppercase_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_GetPlayerRoleTextUppercase_Statics::NewProp_playerRole_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetPlayerRoleTextUppercase_Statics::NewProp_playerRole = { "playerRole", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventGetPlayerRoleTextUppercase_Parms, playerRole), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_GetPlayerRoleTextUppercase_Statics::NewProp_playerRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetPlayerRoleTextUppercase_Statics::NewProp_playerRole_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetPlayerRoleTextUppercase_Statics::NewProp_playerRole_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_GetPlayerRoleTextUppercase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetPlayerRoleTextUppercase_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetPlayerRoleTextUppercase_Statics::NewProp_playerRole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetPlayerRoleTextUppercase_Statics::NewProp_playerRole_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_GetPlayerRoleTextUppercase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_GetPlayerRoleTextUppercase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "GetPlayerRoleTextUppercase", nullptr, nullptr, sizeof(AtlantaUtilities_eventGetPlayerRoleTextUppercase_Parms), Z_Construct_UFunction_UAtlantaUtilities_GetPlayerRoleTextUppercase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetPlayerRoleTextUppercase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_GetPlayerRoleTextUppercase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetPlayerRoleTextUppercase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_GetPlayerRoleTextUppercase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_GetPlayerRoleTextUppercase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_GetSpriteFromFullPath_Statics
	{
		struct AtlantaUtilities_eventGetSpriteFromFullPath_Parms
		{
			FString fullSpritePath;
			UPaperSprite* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fullSpritePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_fullSpritePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetSpriteFromFullPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventGetSpriteFromFullPath_Parms, ReturnValue), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_GetSpriteFromFullPath_Statics::NewProp_fullSpritePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetSpriteFromFullPath_Statics::NewProp_fullSpritePath = { "fullSpritePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventGetSpriteFromFullPath_Parms, fullSpritePath), METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_GetSpriteFromFullPath_Statics::NewProp_fullSpritePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetSpriteFromFullPath_Statics::NewProp_fullSpritePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_GetSpriteFromFullPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetSpriteFromFullPath_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetSpriteFromFullPath_Statics::NewProp_fullSpritePath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_GetSpriteFromFullPath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_GetSpriteFromFullPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "GetSpriteFromFullPath", nullptr, nullptr, sizeof(AtlantaUtilities_eventGetSpriteFromFullPath_Parms), Z_Construct_UFunction_UAtlantaUtilities_GetSpriteFromFullPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetSpriteFromFullPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_GetSpriteFromFullPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetSpriteFromFullPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_GetSpriteFromFullPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_GetSpriteFromFullPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_GetSpriteFromPath_Statics
	{
		struct AtlantaUtilities_eventGetSpriteFromPath_Parms
		{
			FString fullDbPathToImage;
			FString constantDbPathToImageFolder;
			FString constantPathToSpriteFolder;
			UPaperSprite* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_constantPathToSpriteFolder_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_constantPathToSpriteFolder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_constantDbPathToImageFolder_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_constantDbPathToImageFolder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fullDbPathToImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_fullDbPathToImage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetSpriteFromPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventGetSpriteFromPath_Parms, ReturnValue), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_GetSpriteFromPath_Statics::NewProp_constantPathToSpriteFolder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetSpriteFromPath_Statics::NewProp_constantPathToSpriteFolder = { "constantPathToSpriteFolder", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventGetSpriteFromPath_Parms, constantPathToSpriteFolder), METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_GetSpriteFromPath_Statics::NewProp_constantPathToSpriteFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetSpriteFromPath_Statics::NewProp_constantPathToSpriteFolder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_GetSpriteFromPath_Statics::NewProp_constantDbPathToImageFolder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetSpriteFromPath_Statics::NewProp_constantDbPathToImageFolder = { "constantDbPathToImageFolder", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventGetSpriteFromPath_Parms, constantDbPathToImageFolder), METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_GetSpriteFromPath_Statics::NewProp_constantDbPathToImageFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetSpriteFromPath_Statics::NewProp_constantDbPathToImageFolder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_GetSpriteFromPath_Statics::NewProp_fullDbPathToImage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetSpriteFromPath_Statics::NewProp_fullDbPathToImage = { "fullDbPathToImage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventGetSpriteFromPath_Parms, fullDbPathToImage), METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_GetSpriteFromPath_Statics::NewProp_fullDbPathToImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetSpriteFromPath_Statics::NewProp_fullDbPathToImage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_GetSpriteFromPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetSpriteFromPath_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetSpriteFromPath_Statics::NewProp_constantPathToSpriteFolder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetSpriteFromPath_Statics::NewProp_constantDbPathToImageFolder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetSpriteFromPath_Statics::NewProp_fullDbPathToImage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_GetSpriteFromPath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_GetSpriteFromPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "GetSpriteFromPath", nullptr, nullptr, sizeof(AtlantaUtilities_eventGetSpriteFromPath_Parms), Z_Construct_UFunction_UAtlantaUtilities_GetSpriteFromPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetSpriteFromPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_GetSpriteFromPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetSpriteFromPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_GetSpriteFromPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_GetSpriteFromPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_GetStoreVersion_Statics
	{
		struct AtlantaUtilities_eventGetStoreVersion_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtlantaUtilities_GetStoreVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventGetStoreVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_GetStoreVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_GetStoreVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_GetStoreVersion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_GetStoreVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "GetStoreVersion", nullptr, nullptr, sizeof(AtlantaUtilities_eventGetStoreVersion_Parms), Z_Construct_UFunction_UAtlantaUtilities_GetStoreVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetStoreVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_GetStoreVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_GetStoreVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_GetStoreVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_GetStoreVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_IsInAtlantaTutorialLevel_Statics
	{
		struct AtlantaUtilities_eventIsInAtlantaTutorialLevel_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtlantaUtilities_IsInAtlantaTutorialLevel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtlantaUtilities_eventIsInAtlantaTutorialLevel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlantaUtilities_IsInAtlantaTutorialLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaUtilities_eventIsInAtlantaTutorialLevel_Parms), &Z_Construct_UFunction_UAtlantaUtilities_IsInAtlantaTutorialLevel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_IsInAtlantaTutorialLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_IsInAtlantaTutorialLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_IsInAtlantaTutorialLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_IsInAtlantaTutorialLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "IsInAtlantaTutorialLevel", nullptr, nullptr, sizeof(AtlantaUtilities_eventIsInAtlantaTutorialLevel_Parms), Z_Construct_UFunction_UAtlantaUtilities_IsInAtlantaTutorialLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_IsInAtlantaTutorialLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_IsInAtlantaTutorialLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_IsInAtlantaTutorialLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_IsInAtlantaTutorialLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_IsInAtlantaTutorialLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_IsPlayerInteractingWithActor_Statics
	{
		struct AtlantaUtilities_eventIsPlayerInteractingWithActor_Parms
		{
			ADBDPlayer* player;
			const AActor* actor;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtlantaUtilities_IsPlayerInteractingWithActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtlantaUtilities_eventIsPlayerInteractingWithActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlantaUtilities_IsPlayerInteractingWithActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaUtilities_eventIsPlayerInteractingWithActor_Parms), &Z_Construct_UFunction_UAtlantaUtilities_IsPlayerInteractingWithActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_IsPlayerInteractingWithActor_Statics::NewProp_actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtlantaUtilities_IsPlayerInteractingWithActor_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventIsPlayerInteractingWithActor_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_IsPlayerInteractingWithActor_Statics::NewProp_actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_IsPlayerInteractingWithActor_Statics::NewProp_actor_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtlantaUtilities_IsPlayerInteractingWithActor_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventIsPlayerInteractingWithActor_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_IsPlayerInteractingWithActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_IsPlayerInteractingWithActor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_IsPlayerInteractingWithActor_Statics::NewProp_actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_IsPlayerInteractingWithActor_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_IsPlayerInteractingWithActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_IsPlayerInteractingWithActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "IsPlayerInteractingWithActor", nullptr, nullptr, sizeof(AtlantaUtilities_eventIsPlayerInteractingWithActor_Parms), Z_Construct_UFunction_UAtlantaUtilities_IsPlayerInteractingWithActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_IsPlayerInteractingWithActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_IsPlayerInteractingWithActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_IsPlayerInteractingWithActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_IsPlayerInteractingWithActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_IsPlayerInteractingWithActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_IsTutorialEditorDebuggingEnabled_Statics
	{
		struct AtlantaUtilities_eventIsTutorialEditorDebuggingEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtlantaUtilities_IsTutorialEditorDebuggingEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtlantaUtilities_eventIsTutorialEditorDebuggingEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlantaUtilities_IsTutorialEditorDebuggingEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaUtilities_eventIsTutorialEditorDebuggingEnabled_Parms), &Z_Construct_UFunction_UAtlantaUtilities_IsTutorialEditorDebuggingEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_IsTutorialEditorDebuggingEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_IsTutorialEditorDebuggingEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_IsTutorialEditorDebuggingEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_IsTutorialEditorDebuggingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "IsTutorialEditorDebuggingEnabled", nullptr, nullptr, sizeof(AtlantaUtilities_eventIsTutorialEditorDebuggingEnabled_Parms), Z_Construct_UFunction_UAtlantaUtilities_IsTutorialEditorDebuggingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_IsTutorialEditorDebuggingEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_IsTutorialEditorDebuggingEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_IsTutorialEditorDebuggingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_IsTutorialEditorDebuggingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_IsTutorialEditorDebuggingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_LoadTextureByAsset_Statics
	{
		struct AtlantaUtilities_eventLoadTextureByAsset_Parms
		{
			FString path;
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtlantaUtilities_LoadTextureByAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventLoadTextureByAsset_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_LoadTextureByAsset_Statics::NewProp_path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtlantaUtilities_LoadTextureByAsset_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventLoadTextureByAsset_Parms, path), METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_LoadTextureByAsset_Statics::NewProp_path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_LoadTextureByAsset_Statics::NewProp_path_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_LoadTextureByAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_LoadTextureByAsset_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_LoadTextureByAsset_Statics::NewProp_path,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_LoadTextureByAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_LoadTextureByAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "LoadTextureByAsset", nullptr, nullptr, sizeof(AtlantaUtilities_eventLoadTextureByAsset_Parms), Z_Construct_UFunction_UAtlantaUtilities_LoadTextureByAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_LoadTextureByAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_LoadTextureByAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_LoadTextureByAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_LoadTextureByAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_LoadTextureByAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_MakeBrushFromSprite_Statics
	{
		struct AtlantaUtilities_eventMakeBrushFromSprite_Parms
		{
			UPaperSprite* sprite;
			FSlateBrush ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sprite;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtlantaUtilities_MakeBrushFromSprite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventMakeBrushFromSprite_Parms, ReturnValue), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtlantaUtilities_MakeBrushFromSprite_Statics::NewProp_sprite = { "sprite", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventMakeBrushFromSprite_Parms, sprite), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_MakeBrushFromSprite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_MakeBrushFromSprite_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_MakeBrushFromSprite_Statics::NewProp_sprite,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_MakeBrushFromSprite_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_MakeBrushFromSprite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "MakeBrushFromSprite", nullptr, nullptr, sizeof(AtlantaUtilities_eventMakeBrushFromSprite_Parms), Z_Construct_UFunction_UAtlantaUtilities_MakeBrushFromSprite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_MakeBrushFromSprite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_MakeBrushFromSprite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_MakeBrushFromSprite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_MakeBrushFromSprite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_MakeBrushFromSprite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_MakeBrushFromTexture_Statics
	{
		struct AtlantaUtilities_eventMakeBrushFromTexture_Parms
		{
			UTexture2D* texture;
			FSlateBrush ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_texture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtlantaUtilities_MakeBrushFromTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventMakeBrushFromTexture_Parms, ReturnValue), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtlantaUtilities_MakeBrushFromTexture_Statics::NewProp_texture = { "texture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventMakeBrushFromTexture_Parms, texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_MakeBrushFromTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_MakeBrushFromTexture_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_MakeBrushFromTexture_Statics::NewProp_texture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_MakeBrushFromTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_MakeBrushFromTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "MakeBrushFromTexture", nullptr, nullptr, sizeof(AtlantaUtilities_eventMakeBrushFromTexture_Parms), Z_Construct_UFunction_UAtlantaUtilities_MakeBrushFromTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_MakeBrushFromTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_MakeBrushFromTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_MakeBrushFromTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_MakeBrushFromTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_MakeBrushFromTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_SecondsToStringWithoutDecimals_Statics
	{
		struct AtlantaUtilities_eventSecondsToStringWithoutDecimals_Parms
		{
			int32 seconds;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_seconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_seconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtlantaUtilities_SecondsToStringWithoutDecimals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventSecondsToStringWithoutDecimals_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_SecondsToStringWithoutDecimals_Statics::NewProp_seconds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtlantaUtilities_SecondsToStringWithoutDecimals_Statics::NewProp_seconds = { "seconds", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventSecondsToStringWithoutDecimals_Parms, seconds), METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_SecondsToStringWithoutDecimals_Statics::NewProp_seconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_SecondsToStringWithoutDecimals_Statics::NewProp_seconds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_SecondsToStringWithoutDecimals_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_SecondsToStringWithoutDecimals_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_SecondsToStringWithoutDecimals_Statics::NewProp_seconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_SecondsToStringWithoutDecimals_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_SecondsToStringWithoutDecimals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "SecondsToStringWithoutDecimals", nullptr, nullptr, sizeof(AtlantaUtilities_eventSecondsToStringWithoutDecimals_Parms), Z_Construct_UFunction_UAtlantaUtilities_SecondsToStringWithoutDecimals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_SecondsToStringWithoutDecimals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_SecondsToStringWithoutDecimals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_SecondsToStringWithoutDecimals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_SecondsToStringWithoutDecimals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_SecondsToStringWithoutDecimals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_SetButtonStyle_Statics
	{
		struct AtlantaUtilities_eventSetButtonStyle_Parms
		{
			UButton* button;
			FSlateBrush brush;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_brush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_brush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_button_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_button;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_SetButtonStyle_Statics::NewProp_brush_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtlantaUtilities_SetButtonStyle_Statics::NewProp_brush = { "brush", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventSetButtonStyle_Parms, brush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_SetButtonStyle_Statics::NewProp_brush_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_SetButtonStyle_Statics::NewProp_brush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_SetButtonStyle_Statics::NewProp_button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtlantaUtilities_SetButtonStyle_Statics::NewProp_button = { "button", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventSetButtonStyle_Parms, button), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_SetButtonStyle_Statics::NewProp_button_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_SetButtonStyle_Statics::NewProp_button_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_SetButtonStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_SetButtonStyle_Statics::NewProp_brush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_SetButtonStyle_Statics::NewProp_button,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_SetButtonStyle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_SetButtonStyle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "SetButtonStyle", nullptr, nullptr, sizeof(AtlantaUtilities_eventSetButtonStyle_Parms), Z_Construct_UFunction_UAtlantaUtilities_SetButtonStyle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_SetButtonStyle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_SetButtonStyle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_SetButtonStyle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_SetButtonStyle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_SetButtonStyle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_SetImageBrush_Statics
	{
		struct AtlantaUtilities_eventSetImageBrush_Parms
		{
			UImage* image;
			UTexture2D* asset;
			bool bMatchSize;
		};
		static void NewProp_bMatchSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMatchSize;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_asset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_image_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_image;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtlantaUtilities_SetImageBrush_Statics::NewProp_bMatchSize_SetBit(void* Obj)
	{
		((AtlantaUtilities_eventSetImageBrush_Parms*)Obj)->bMatchSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlantaUtilities_SetImageBrush_Statics::NewProp_bMatchSize = { "bMatchSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaUtilities_eventSetImageBrush_Parms), &Z_Construct_UFunction_UAtlantaUtilities_SetImageBrush_Statics::NewProp_bMatchSize_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtlantaUtilities_SetImageBrush_Statics::NewProp_asset = { "asset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventSetImageBrush_Parms, asset), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_SetImageBrush_Statics::NewProp_image_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtlantaUtilities_SetImageBrush_Statics::NewProp_image = { "image", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventSetImageBrush_Parms, image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_SetImageBrush_Statics::NewProp_image_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_SetImageBrush_Statics::NewProp_image_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_SetImageBrush_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_SetImageBrush_Statics::NewProp_bMatchSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_SetImageBrush_Statics::NewProp_asset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_SetImageBrush_Statics::NewProp_image,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_SetImageBrush_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_SetImageBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "SetImageBrush", nullptr, nullptr, sizeof(AtlantaUtilities_eventSetImageBrush_Parms), Z_Construct_UFunction_UAtlantaUtilities_SetImageBrush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_SetImageBrush_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_SetImageBrush_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_SetImageBrush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_SetImageBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_SetImageBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_SetImageBrushFromPath_Statics
	{
		struct AtlantaUtilities_eventSetImageBrushFromPath_Parms
		{
			UImage* image;
			FString path;
			bool bMatchSize;
		};
		static void NewProp_bMatchSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMatchSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_path;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_image_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_image;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtlantaUtilities_SetImageBrushFromPath_Statics::NewProp_bMatchSize_SetBit(void* Obj)
	{
		((AtlantaUtilities_eventSetImageBrushFromPath_Parms*)Obj)->bMatchSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlantaUtilities_SetImageBrushFromPath_Statics::NewProp_bMatchSize = { "bMatchSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaUtilities_eventSetImageBrushFromPath_Parms), &Z_Construct_UFunction_UAtlantaUtilities_SetImageBrushFromPath_Statics::NewProp_bMatchSize_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_SetImageBrushFromPath_Statics::NewProp_path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtlantaUtilities_SetImageBrushFromPath_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventSetImageBrushFromPath_Parms, path), METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_SetImageBrushFromPath_Statics::NewProp_path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_SetImageBrushFromPath_Statics::NewProp_path_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_SetImageBrushFromPath_Statics::NewProp_image_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtlantaUtilities_SetImageBrushFromPath_Statics::NewProp_image = { "image", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventSetImageBrushFromPath_Parms, image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_SetImageBrushFromPath_Statics::NewProp_image_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_SetImageBrushFromPath_Statics::NewProp_image_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_SetImageBrushFromPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_SetImageBrushFromPath_Statics::NewProp_bMatchSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_SetImageBrushFromPath_Statics::NewProp_path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_SetImageBrushFromPath_Statics::NewProp_image,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_SetImageBrushFromPath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_SetImageBrushFromPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "SetImageBrushFromPath", nullptr, nullptr, sizeof(AtlantaUtilities_eventSetImageBrushFromPath_Parms), Z_Construct_UFunction_UAtlantaUtilities_SetImageBrushFromPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_SetImageBrushFromPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_SetImageBrushFromPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_SetImageBrushFromPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_SetImageBrushFromPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_SetImageBrushFromPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_SetImageBrushFromSpritePath_Statics
	{
		struct AtlantaUtilities_eventSetImageBrushFromSpritePath_Parms
		{
			UImage* image;
			FString path;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_path;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_image_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_image;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_SetImageBrushFromSpritePath_Statics::NewProp_path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtlantaUtilities_SetImageBrushFromSpritePath_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventSetImageBrushFromSpritePath_Parms, path), METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_SetImageBrushFromSpritePath_Statics::NewProp_path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_SetImageBrushFromSpritePath_Statics::NewProp_path_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_SetImageBrushFromSpritePath_Statics::NewProp_image_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtlantaUtilities_SetImageBrushFromSpritePath_Statics::NewProp_image = { "image", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventSetImageBrushFromSpritePath_Parms, image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_SetImageBrushFromSpritePath_Statics::NewProp_image_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_SetImageBrushFromSpritePath_Statics::NewProp_image_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_SetImageBrushFromSpritePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_SetImageBrushFromSpritePath_Statics::NewProp_path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_SetImageBrushFromSpritePath_Statics::NewProp_image,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_SetImageBrushFromSpritePath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_SetImageBrushFromSpritePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "SetImageBrushFromSpritePath", nullptr, nullptr, sizeof(AtlantaUtilities_eventSetImageBrushFromSpritePath_Parms), Z_Construct_UFunction_UAtlantaUtilities_SetImageBrushFromSpritePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_SetImageBrushFromSpritePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_SetImageBrushFromSpritePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_SetImageBrushFromSpritePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_SetImageBrushFromSpritePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_SetImageBrushFromSpritePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_SetImageSlateBrush_Statics
	{
		struct AtlantaUtilities_eventSetImageSlateBrush_Parms
		{
			UImage* image;
			FSlateBrush brush;
			bool bMatchSize;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bMatchSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMatchSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_brush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_brush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_image_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_image;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtlantaUtilities_SetImageSlateBrush_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtlantaUtilities_eventSetImageSlateBrush_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlantaUtilities_SetImageSlateBrush_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaUtilities_eventSetImageSlateBrush_Parms), &Z_Construct_UFunction_UAtlantaUtilities_SetImageSlateBrush_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAtlantaUtilities_SetImageSlateBrush_Statics::NewProp_bMatchSize_SetBit(void* Obj)
	{
		((AtlantaUtilities_eventSetImageSlateBrush_Parms*)Obj)->bMatchSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlantaUtilities_SetImageSlateBrush_Statics::NewProp_bMatchSize = { "bMatchSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaUtilities_eventSetImageSlateBrush_Parms), &Z_Construct_UFunction_UAtlantaUtilities_SetImageSlateBrush_Statics::NewProp_bMatchSize_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_SetImageSlateBrush_Statics::NewProp_brush_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtlantaUtilities_SetImageSlateBrush_Statics::NewProp_brush = { "brush", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventSetImageSlateBrush_Parms, brush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_SetImageSlateBrush_Statics::NewProp_brush_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_SetImageSlateBrush_Statics::NewProp_brush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_SetImageSlateBrush_Statics::NewProp_image_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtlantaUtilities_SetImageSlateBrush_Statics::NewProp_image = { "image", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaUtilities_eventSetImageSlateBrush_Parms, image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_SetImageSlateBrush_Statics::NewProp_image_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_SetImageSlateBrush_Statics::NewProp_image_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_SetImageSlateBrush_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_SetImageSlateBrush_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_SetImageSlateBrush_Statics::NewProp_bMatchSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_SetImageSlateBrush_Statics::NewProp_brush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_SetImageSlateBrush_Statics::NewProp_image,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_SetImageSlateBrush_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_SetImageSlateBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "SetImageSlateBrush", nullptr, nullptr, sizeof(AtlantaUtilities_eventSetImageSlateBrush_Parms), Z_Construct_UFunction_UAtlantaUtilities_SetImageSlateBrush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_SetImageSlateBrush_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_SetImageSlateBrush_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_SetImageSlateBrush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_SetImageSlateBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_SetImageSlateBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_ShouldSupportMultipleActiveActivatablePerks_Statics
	{
		struct AtlantaUtilities_eventShouldSupportMultipleActiveActivatablePerks_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtlantaUtilities_ShouldSupportMultipleActiveActivatablePerks_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtlantaUtilities_eventShouldSupportMultipleActiveActivatablePerks_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlantaUtilities_ShouldSupportMultipleActiveActivatablePerks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaUtilities_eventShouldSupportMultipleActiveActivatablePerks_Parms), &Z_Construct_UFunction_UAtlantaUtilities_ShouldSupportMultipleActiveActivatablePerks_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_ShouldSupportMultipleActiveActivatablePerks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_ShouldSupportMultipleActiveActivatablePerks_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_ShouldSupportMultipleActiveActivatablePerks_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_ShouldSupportMultipleActiveActivatablePerks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "ShouldSupportMultipleActiveActivatablePerks", nullptr, nullptr, sizeof(AtlantaUtilities_eventShouldSupportMultipleActiveActivatablePerks_Parms), Z_Construct_UFunction_UAtlantaUtilities_ShouldSupportMultipleActiveActivatablePerks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldSupportMultipleActiveActivatablePerks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_ShouldSupportMultipleActiveActivatablePerks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldSupportMultipleActiveActivatablePerks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_ShouldSupportMultipleActiveActivatablePerks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_ShouldSupportMultipleActiveActivatablePerks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaBackendBloodMarketData_Statics
	{
		struct AtlantaUtilities_eventShouldUseAtlantaBackendBloodMarketData_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaBackendBloodMarketData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtlantaUtilities_eventShouldUseAtlantaBackendBloodMarketData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaBackendBloodMarketData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaUtilities_eventShouldUseAtlantaBackendBloodMarketData_Parms), &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaBackendBloodMarketData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaBackendBloodMarketData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaBackendBloodMarketData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaBackendBloodMarketData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaBackendBloodMarketData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "ShouldUseAtlantaBackendBloodMarketData", nullptr, nullptr, sizeof(AtlantaUtilities_eventShouldUseAtlantaBackendBloodMarketData_Parms), Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaBackendBloodMarketData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaBackendBloodMarketData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaBackendBloodMarketData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaBackendBloodMarketData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaBackendBloodMarketData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaBackendBloodMarketData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaBloodweb_Statics
	{
		struct AtlantaUtilities_eventShouldUseAtlantaBloodweb_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaBloodweb_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtlantaUtilities_eventShouldUseAtlantaBloodweb_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaBloodweb_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaUtilities_eventShouldUseAtlantaBloodweb_Parms), &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaBloodweb_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaBloodweb_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaBloodweb_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaBloodweb_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaBloodweb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "ShouldUseAtlantaBloodweb", nullptr, nullptr, sizeof(AtlantaUtilities_eventShouldUseAtlantaBloodweb_Parms), Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaBloodweb_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaBloodweb_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaBloodweb_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaBloodweb_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaBloodweb()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaBloodweb_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaBundleFilterRules_Statics
	{
		struct AtlantaUtilities_eventShouldUseAtlantaBundleFilterRules_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaBundleFilterRules_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtlantaUtilities_eventShouldUseAtlantaBundleFilterRules_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaBundleFilterRules_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaUtilities_eventShouldUseAtlantaBundleFilterRules_Parms), &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaBundleFilterRules_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaBundleFilterRules_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaBundleFilterRules_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaBundleFilterRules_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaBundleFilterRules_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "ShouldUseAtlantaBundleFilterRules", nullptr, nullptr, sizeof(AtlantaUtilities_eventShouldUseAtlantaBundleFilterRules_Parms), Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaBundleFilterRules_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaBundleFilterRules_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaBundleFilterRules_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaBundleFilterRules_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaBundleFilterRules()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaBundleFilterRules_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCatalog_Statics
	{
		struct AtlantaUtilities_eventShouldUseAtlantaCatalog_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCatalog_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtlantaUtilities_eventShouldUseAtlantaCatalog_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCatalog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaUtilities_eventShouldUseAtlantaCatalog_Parms), &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCatalog_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCatalog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCatalog_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCatalog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCatalog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "ShouldUseAtlantaCatalog", nullptr, nullptr, sizeof(AtlantaUtilities_eventShouldUseAtlantaCatalog_Parms), Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCatalog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCatalog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCatalog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCatalog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCatalog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCatalog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCDNBucketChangelist_Statics
	{
		struct AtlantaUtilities_eventShouldUseAtlantaCDNBucketChangelist_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCDNBucketChangelist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtlantaUtilities_eventShouldUseAtlantaCDNBucketChangelist_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCDNBucketChangelist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaUtilities_eventShouldUseAtlantaCDNBucketChangelist_Parms), &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCDNBucketChangelist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCDNBucketChangelist_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCDNBucketChangelist_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCDNBucketChangelist_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCDNBucketChangelist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "ShouldUseAtlantaCDNBucketChangelist", nullptr, nullptr, sizeof(AtlantaUtilities_eventShouldUseAtlantaCDNBucketChangelist_Parms), Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCDNBucketChangelist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCDNBucketChangelist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCDNBucketChangelist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCDNBucketChangelist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCDNBucketChangelist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCDNBucketChangelist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCDNPatching_Statics
	{
		struct AtlantaUtilities_eventShouldUseAtlantaCDNPatching_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCDNPatching_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtlantaUtilities_eventShouldUseAtlantaCDNPatching_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCDNPatching_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaUtilities_eventShouldUseAtlantaCDNPatching_Parms), &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCDNPatching_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCDNPatching_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCDNPatching_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCDNPatching_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCDNPatching_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "ShouldUseAtlantaCDNPatching", nullptr, nullptr, sizeof(AtlantaUtilities_eventShouldUseAtlantaCDNPatching_Parms), Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCDNPatching_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCDNPatching_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCDNPatching_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCDNPatching_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCDNPatching()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCDNPatching_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCharacterProgression_Statics
	{
		struct AtlantaUtilities_eventShouldUseAtlantaCharacterProgression_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCharacterProgression_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtlantaUtilities_eventShouldUseAtlantaCharacterProgression_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCharacterProgression_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaUtilities_eventShouldUseAtlantaCharacterProgression_Parms), &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCharacterProgression_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCharacterProgression_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCharacterProgression_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCharacterProgression_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCharacterProgression_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "ShouldUseAtlantaCharacterProgression", nullptr, nullptr, sizeof(AtlantaUtilities_eventShouldUseAtlantaCharacterProgression_Parms), Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCharacterProgression_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCharacterProgression_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCharacterProgression_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCharacterProgression_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCharacterProgression()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCharacterProgression_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaContent_Statics
	{
		struct AtlantaUtilities_eventShouldUseAtlantaContent_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaContent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtlantaUtilities_eventShouldUseAtlantaContent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaContent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaUtilities_eventShouldUseAtlantaContent_Parms), &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaContent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaContent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaContent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaContent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "ShouldUseAtlantaContent", nullptr, nullptr, sizeof(AtlantaUtilities_eventShouldUseAtlantaContent_Parms), Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaContent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaContent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaContent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCurrencies_Statics
	{
		struct AtlantaUtilities_eventShouldUseAtlantaCurrencies_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCurrencies_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtlantaUtilities_eventShouldUseAtlantaCurrencies_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCurrencies_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaUtilities_eventShouldUseAtlantaCurrencies_Parms), &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCurrencies_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCurrencies_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCurrencies_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCurrencies_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCurrencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "ShouldUseAtlantaCurrencies", nullptr, nullptr, sizeof(AtlantaUtilities_eventShouldUseAtlantaCurrencies_Parms), Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCurrencies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCurrencies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCurrencies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCurrencies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCurrencies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCurrencies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCustomizedHudSettings_Statics
	{
		struct AtlantaUtilities_eventShouldUseAtlantaCustomizedHudSettings_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCustomizedHudSettings_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtlantaUtilities_eventShouldUseAtlantaCustomizedHudSettings_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCustomizedHudSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaUtilities_eventShouldUseAtlantaCustomizedHudSettings_Parms), &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCustomizedHudSettings_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCustomizedHudSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCustomizedHudSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCustomizedHudSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCustomizedHudSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "ShouldUseAtlantaCustomizedHudSettings", nullptr, nullptr, sizeof(AtlantaUtilities_eventShouldUseAtlantaCustomizedHudSettings_Parms), Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCustomizedHudSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCustomizedHudSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCustomizedHudSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCustomizedHudSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCustomizedHudSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCustomizedHudSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaDailyRewards_Statics
	{
		struct AtlantaUtilities_eventShouldUseAtlantaDailyRewards_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaDailyRewards_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtlantaUtilities_eventShouldUseAtlantaDailyRewards_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaDailyRewards_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaUtilities_eventShouldUseAtlantaDailyRewards_Parms), &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaDailyRewards_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaDailyRewards_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaDailyRewards_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaDailyRewards_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaDailyRewards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "ShouldUseAtlantaDailyRewards", nullptr, nullptr, sizeof(AtlantaUtilities_eventShouldUseAtlantaDailyRewards_Parms), Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaDailyRewards_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaDailyRewards_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaDailyRewards_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaDailyRewards_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaDailyRewards()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaDailyRewards_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaDreamworldFX_Statics
	{
		struct AtlantaUtilities_eventShouldUseAtlantaDreamworldFX_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaDreamworldFX_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtlantaUtilities_eventShouldUseAtlantaDreamworldFX_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaDreamworldFX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaUtilities_eventShouldUseAtlantaDreamworldFX_Parms), &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaDreamworldFX_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaDreamworldFX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaDreamworldFX_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaDreamworldFX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaDreamworldFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "ShouldUseAtlantaDreamworldFX", nullptr, nullptr, sizeof(AtlantaUtilities_eventShouldUseAtlantaDreamworldFX_Parms), Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaDreamworldFX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaDreamworldFX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaDreamworldFX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaDreamworldFX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaDreamworldFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaDreamworldFX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaEntity_Statics
	{
		struct AtlantaUtilities_eventShouldUseAtlantaEntity_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaEntity_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtlantaUtilities_eventShouldUseAtlantaEntity_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaEntity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaUtilities_eventShouldUseAtlantaEntity_Parms), &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaEntity_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaEntity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaEntity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaEntity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaEntity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "ShouldUseAtlantaEntity", nullptr, nullptr, sizeof(AtlantaUtilities_eventShouldUseAtlantaEntity_Parms), Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaEntity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaEntity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaEntity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaEntity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaEntity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaEntity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFearMarket_Statics
	{
		struct AtlantaUtilities_eventShouldUseAtlantaFearMarket_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFearMarket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtlantaUtilities_eventShouldUseAtlantaFearMarket_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFearMarket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaUtilities_eventShouldUseAtlantaFearMarket_Parms), &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFearMarket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFearMarket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFearMarket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFearMarket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFearMarket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "ShouldUseAtlantaFearMarket", nullptr, nullptr, sizeof(AtlantaUtilities_eventShouldUseAtlantaFearMarket_Parms), Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFearMarket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFearMarket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFearMarket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFearMarket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFearMarket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFearMarket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFixedMaps_Statics
	{
		struct AtlantaUtilities_eventShouldUseAtlantaFixedMaps_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFixedMaps_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtlantaUtilities_eventShouldUseAtlantaFixedMaps_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFixedMaps_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaUtilities_eventShouldUseAtlantaFixedMaps_Parms), &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFixedMaps_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFixedMaps_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFixedMaps_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFixedMaps_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFixedMaps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "ShouldUseAtlantaFixedMaps", nullptr, nullptr, sizeof(AtlantaUtilities_eventShouldUseAtlantaFixedMaps_Parms), Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFixedMaps_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFixedMaps_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFixedMaps_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFixedMaps_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFixedMaps()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFixedMaps_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFreeTickets_Statics
	{
		struct AtlantaUtilities_eventShouldUseAtlantaFreeTickets_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFreeTickets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtlantaUtilities_eventShouldUseAtlantaFreeTickets_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFreeTickets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaUtilities_eventShouldUseAtlantaFreeTickets_Parms), &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFreeTickets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFreeTickets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFreeTickets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFreeTickets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFreeTickets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "ShouldUseAtlantaFreeTickets", nullptr, nullptr, sizeof(AtlantaUtilities_eventShouldUseAtlantaFreeTickets_Parms), Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFreeTickets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFreeTickets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFreeTickets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFreeTickets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFreeTickets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFreeTickets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFriendList_Statics
	{
		struct AtlantaUtilities_eventShouldUseAtlantaFriendList_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFriendList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtlantaUtilities_eventShouldUseAtlantaFriendList_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFriendList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaUtilities_eventShouldUseAtlantaFriendList_Parms), &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFriendList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFriendList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFriendList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFriendList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFriendList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "ShouldUseAtlantaFriendList", nullptr, nullptr, sizeof(AtlantaUtilities_eventShouldUseAtlantaFriendList_Parms), Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFriendList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFriendList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFriendList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFriendList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFriendList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFriendList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaGameplayValues_Statics
	{
		struct AtlantaUtilities_eventShouldUseAtlantaGameplayValues_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaGameplayValues_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtlantaUtilities_eventShouldUseAtlantaGameplayValues_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaGameplayValues_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaUtilities_eventShouldUseAtlantaGameplayValues_Parms), &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaGameplayValues_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaGameplayValues_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaGameplayValues_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaGameplayValues_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaGameplayValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "ShouldUseAtlantaGameplayValues", nullptr, nullptr, sizeof(AtlantaUtilities_eventShouldUseAtlantaGameplayValues_Parms), Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaGameplayValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaGameplayValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaGameplayValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaGameplayValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaGameplayValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaGameplayValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaHudAttackJoystick_Statics
	{
		struct AtlantaUtilities_eventShouldUseAtlantaHudAttackJoystick_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaHudAttackJoystick_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtlantaUtilities_eventShouldUseAtlantaHudAttackJoystick_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaHudAttackJoystick_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaUtilities_eventShouldUseAtlantaHudAttackJoystick_Parms), &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaHudAttackJoystick_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaHudAttackJoystick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaHudAttackJoystick_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaHudAttackJoystick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaHudAttackJoystick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "ShouldUseAtlantaHudAttackJoystick", nullptr, nullptr, sizeof(AtlantaUtilities_eventShouldUseAtlantaHudAttackJoystick_Parms), Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaHudAttackJoystick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaHudAttackJoystick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaHudAttackJoystick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaHudAttackJoystick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaHudAttackJoystick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaHudAttackJoystick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaHudEditor_Statics
	{
		struct AtlantaUtilities_eventShouldUseAtlantaHudEditor_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaHudEditor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtlantaUtilities_eventShouldUseAtlantaHudEditor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaHudEditor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaUtilities_eventShouldUseAtlantaHudEditor_Parms), &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaHudEditor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaHudEditor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaHudEditor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaHudEditor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaHudEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "ShouldUseAtlantaHudEditor", nullptr, nullptr, sizeof(AtlantaUtilities_eventShouldUseAtlantaHudEditor_Parms), Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaHudEditor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaHudEditor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaHudEditor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaHudEditor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaHudEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaHudEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaItemAvailability_Statics
	{
		struct AtlantaUtilities_eventShouldUseAtlantaItemAvailability_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaItemAvailability_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtlantaUtilities_eventShouldUseAtlantaItemAvailability_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaItemAvailability_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaUtilities_eventShouldUseAtlantaItemAvailability_Parms), &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaItemAvailability_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaItemAvailability_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaItemAvailability_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaItemAvailability_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaItemAvailability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "ShouldUseAtlantaItemAvailability", nullptr, nullptr, sizeof(AtlantaUtilities_eventShouldUseAtlantaItemAvailability_Parms), Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaItemAvailability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaItemAvailability_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaItemAvailability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaItemAvailability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaItemAvailability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaItemAvailability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaKrakenContentVersion_Statics
	{
		struct AtlantaUtilities_eventShouldUseAtlantaKrakenContentVersion_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaKrakenContentVersion_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtlantaUtilities_eventShouldUseAtlantaKrakenContentVersion_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaKrakenContentVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaUtilities_eventShouldUseAtlantaKrakenContentVersion_Parms), &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaKrakenContentVersion_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaKrakenContentVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaKrakenContentVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaKrakenContentVersion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaKrakenContentVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "ShouldUseAtlantaKrakenContentVersion", nullptr, nullptr, sizeof(AtlantaUtilities_eventShouldUseAtlantaKrakenContentVersion_Parms), Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaKrakenContentVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaKrakenContentVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaKrakenContentVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaKrakenContentVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaKrakenContentVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaKrakenContentVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaLighting_Statics
	{
		struct AtlantaUtilities_eventShouldUseAtlantaLighting_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaLighting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtlantaUtilities_eventShouldUseAtlantaLighting_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaLighting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaUtilities_eventShouldUseAtlantaLighting_Parms), &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaLighting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaLighting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaLighting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaLighting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaLighting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "ShouldUseAtlantaLighting", nullptr, nullptr, sizeof(AtlantaUtilities_eventShouldUseAtlantaLighting_Parms), Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaLighting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaLighting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaLighting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaLighting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaLighting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaLighting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaMatchmaking_Statics
	{
		struct AtlantaUtilities_eventShouldUseAtlantaMatchmaking_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaMatchmaking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtlantaUtilities_eventShouldUseAtlantaMatchmaking_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaMatchmaking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaUtilities_eventShouldUseAtlantaMatchmaking_Parms), &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaMatchmaking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaMatchmaking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaMatchmaking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaMatchmaking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaMatchmaking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "ShouldUseAtlantaMatchmaking", nullptr, nullptr, sizeof(AtlantaUtilities_eventShouldUseAtlantaMatchmaking_Parms), Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaMatchmaking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaMatchmaking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaMatchmaking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaMatchmaking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaMatchmaking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaMatchmaking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaOutlines_Statics
	{
		struct AtlantaUtilities_eventShouldUseAtlantaOutlines_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaOutlines_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtlantaUtilities_eventShouldUseAtlantaOutlines_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaOutlines_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaUtilities_eventShouldUseAtlantaOutlines_Parms), &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaOutlines_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaOutlines_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaOutlines_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaOutlines_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaOutlines_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "ShouldUseAtlantaOutlines", nullptr, nullptr, sizeof(AtlantaUtilities_eventShouldUseAtlantaOutlines_Parms), Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaOutlines_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaOutlines_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaOutlines_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaOutlines_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaOutlines()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaOutlines_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaPurchasableOperations_Statics
	{
		struct AtlantaUtilities_eventShouldUseAtlantaPurchasableOperations_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaPurchasableOperations_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtlantaUtilities_eventShouldUseAtlantaPurchasableOperations_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaPurchasableOperations_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaUtilities_eventShouldUseAtlantaPurchasableOperations_Parms), &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaPurchasableOperations_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaPurchasableOperations_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaPurchasableOperations_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaPurchasableOperations_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaPurchasableOperations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "ShouldUseAtlantaPurchasableOperations", nullptr, nullptr, sizeof(AtlantaUtilities_eventShouldUseAtlantaPurchasableOperations_Parms), Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaPurchasableOperations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaPurchasableOperations_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaPurchasableOperations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaPurchasableOperations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaPurchasableOperations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaPurchasableOperations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaQualitySettings_Statics
	{
		struct AtlantaUtilities_eventShouldUseAtlantaQualitySettings_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaQualitySettings_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtlantaUtilities_eventShouldUseAtlantaQualitySettings_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaQualitySettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaUtilities_eventShouldUseAtlantaQualitySettings_Parms), &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaQualitySettings_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaQualitySettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaQualitySettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaQualitySettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaQualitySettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "ShouldUseAtlantaQualitySettings", nullptr, nullptr, sizeof(AtlantaUtilities_eventShouldUseAtlantaQualitySettings_Parms), Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaQualitySettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaQualitySettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaQualitySettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaQualitySettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaQualitySettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaQualitySettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaRank_Statics
	{
		struct AtlantaUtilities_eventShouldUseAtlantaRank_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaRank_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtlantaUtilities_eventShouldUseAtlantaRank_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaRank_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaUtilities_eventShouldUseAtlantaRank_Parms), &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaRank_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaRank_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaRank_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaRank_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaRank_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "ShouldUseAtlantaRank", nullptr, nullptr, sizeof(AtlantaUtilities_eventShouldUseAtlantaRank_Parms), Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaRank_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaRank_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaRank_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaRank_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaRank()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaRank_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaRituals_Statics
	{
		struct AtlantaUtilities_eventShouldUseAtlantaRituals_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaRituals_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtlantaUtilities_eventShouldUseAtlantaRituals_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaRituals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaUtilities_eventShouldUseAtlantaRituals_Parms), &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaRituals_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaRituals_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaRituals_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaRituals_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaRituals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "ShouldUseAtlantaRituals", nullptr, nullptr, sizeof(AtlantaUtilities_eventShouldUseAtlantaRituals_Parms), Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaRituals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaRituals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaRituals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaRituals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaRituals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaRituals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaStreamVideo_Statics
	{
		struct AtlantaUtilities_eventShouldUseAtlantaStreamVideo_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaStreamVideo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtlantaUtilities_eventShouldUseAtlantaStreamVideo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaStreamVideo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaUtilities_eventShouldUseAtlantaStreamVideo_Parms), &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaStreamVideo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaStreamVideo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaStreamVideo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaStreamVideo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaStreamVideo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "ShouldUseAtlantaStreamVideo", nullptr, nullptr, sizeof(AtlantaUtilities_eventShouldUseAtlantaStreamVideo_Parms), Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaStreamVideo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaStreamVideo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaStreamVideo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaStreamVideo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaStreamVideo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaStreamVideo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaUI_Statics
	{
		struct AtlantaUtilities_eventShouldUseAtlantaUI_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaUI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtlantaUtilities_eventShouldUseAtlantaUI_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaUtilities_eventShouldUseAtlantaUI_Parms), &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaUI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaUI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "ShouldUseAtlantaUI", nullptr, nullptr, sizeof(AtlantaUtilities_eventShouldUseAtlantaUI_Parms), Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_ShouldUseOfflineMatchHistory_Statics
	{
		struct AtlantaUtilities_eventShouldUseOfflineMatchHistory_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtlantaUtilities_ShouldUseOfflineMatchHistory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtlantaUtilities_eventShouldUseOfflineMatchHistory_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseOfflineMatchHistory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaUtilities_eventShouldUseOfflineMatchHistory_Parms), &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseOfflineMatchHistory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_ShouldUseOfflineMatchHistory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_ShouldUseOfflineMatchHistory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_ShouldUseOfflineMatchHistory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseOfflineMatchHistory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "ShouldUseOfflineMatchHistory", nullptr, nullptr, sizeof(AtlantaUtilities_eventShouldUseOfflineMatchHistory_Parms), Z_Construct_UFunction_UAtlantaUtilities_ShouldUseOfflineMatchHistory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseOfflineMatchHistory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseOfflineMatchHistory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseOfflineMatchHistory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_ShouldUseOfflineMatchHistory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_ShouldUseOfflineMatchHistory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaUtilities_ShouldUseQuickRoleSwitch_Statics
	{
		struct AtlantaUtilities_eventShouldUseQuickRoleSwitch_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtlantaUtilities_ShouldUseQuickRoleSwitch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtlantaUtilities_eventShouldUseQuickRoleSwitch_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseQuickRoleSwitch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaUtilities_eventShouldUseQuickRoleSwitch_Parms), &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseQuickRoleSwitch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaUtilities_ShouldUseQuickRoleSwitch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaUtilities_ShouldUseQuickRoleSwitch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaUtilities_ShouldUseQuickRoleSwitch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaUtilities_ShouldUseQuickRoleSwitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaUtilities, nullptr, "ShouldUseQuickRoleSwitch", nullptr, nullptr, sizeof(AtlantaUtilities_eventShouldUseQuickRoleSwitch_Parms), Z_Construct_UFunction_UAtlantaUtilities_ShouldUseQuickRoleSwitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseQuickRoleSwitch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseQuickRoleSwitch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaUtilities_ShouldUseQuickRoleSwitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaUtilities_ShouldUseQuickRoleSwitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaUtilities_ShouldUseQuickRoleSwitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAtlantaUtilities_NoRegister()
	{
		return UAtlantaUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UAtlantaUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtlantaUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtlantaUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtlantaUtilities_GetAlantaInteractionDescriptionText, "GetAlantaInteractionDescriptionText" }, // 1747107690
		{ &Z_Construct_UFunction_UAtlantaUtilities_GetAvailableInteractionOfType, "GetAvailableInteractionOfType" }, // 1316334719
		{ &Z_Construct_UFunction_UAtlantaUtilities_GetBackgroundColorByRarity, "GetBackgroundColorByRarity" }, // 4234688476
		{ &Z_Construct_UFunction_UAtlantaUtilities_GetControlsTunable, "GetControlsTunable" }, // 2705284278
		{ &Z_Construct_UFunction_UAtlantaUtilities_GetControlsTunableByRole, "GetControlsTunableByRole" }, // 1156907312
		{ &Z_Construct_UFunction_UAtlantaUtilities_GetCurrencyColor, "GetCurrencyColor" }, // 2939396082
		{ &Z_Construct_UFunction_UAtlantaUtilities_GetCurrencyUITexturePath, "GetCurrencyUITexturePath" }, // 2322313541
		{ &Z_Construct_UFunction_UAtlantaUtilities_GetCurrentInteraction, "GetCurrentInteraction" }, // 832729992
		{ &Z_Construct_UFunction_UAtlantaUtilities_GetCurrentInteractionOfType, "GetCurrentInteractionOfType" }, // 976964128
		{ &Z_Construct_UFunction_UAtlantaUtilities_GetCurrentOrAvailableInteractionOfType, "GetCurrentOrAvailableInteractionOfType" }, // 1837195477
		{ &Z_Construct_UFunction_UAtlantaUtilities_GetDifficultyLevelText, "GetDifficultyLevelText" }, // 2624385592
		{ &Z_Construct_UFunction_UAtlantaUtilities_GetEmblemColorByQuality, "GetEmblemColorByQuality" }, // 3276476303
		{ &Z_Construct_UFunction_UAtlantaUtilities_GetEmblemQualityText, "GetEmblemQualityText" }, // 2069986785
		{ &Z_Construct_UFunction_UAtlantaUtilities_GetIconImageByPath, "GetIconImageByPath" }, // 1175884853
		{ &Z_Construct_UFunction_UAtlantaUtilities_GetItemAvailabilityText, "GetItemAvailabilityText" }, // 771967067
		{ &Z_Construct_UFunction_UAtlantaUtilities_GetItemRarityText, "GetItemRarityText" }, // 435156660
		{ &Z_Construct_UFunction_UAtlantaUtilities_GetMapSpriteFromPath, "GetMapSpriteFromPath" }, // 488042541
		{ &Z_Construct_UFunction_UAtlantaUtilities_GetOfferingCategoryText, "GetOfferingCategoryText" }, // 1936106047
		{ &Z_Construct_UFunction_UAtlantaUtilities_GetPaintColorByRarity, "GetPaintColorByRarity" }, // 228377141
		{ &Z_Construct_UFunction_UAtlantaUtilities_GetPlayerRoleText, "GetPlayerRoleText" }, // 3405792548
		{ &Z_Construct_UFunction_UAtlantaUtilities_GetPlayerRoleTextUppercase, "GetPlayerRoleTextUppercase" }, // 1911618071
		{ &Z_Construct_UFunction_UAtlantaUtilities_GetSpriteFromFullPath, "GetSpriteFromFullPath" }, // 2839531072
		{ &Z_Construct_UFunction_UAtlantaUtilities_GetSpriteFromPath, "GetSpriteFromPath" }, // 3950311600
		{ &Z_Construct_UFunction_UAtlantaUtilities_GetStoreVersion, "GetStoreVersion" }, // 3198440862
		{ &Z_Construct_UFunction_UAtlantaUtilities_IsInAtlantaTutorialLevel, "IsInAtlantaTutorialLevel" }, // 3912326605
		{ &Z_Construct_UFunction_UAtlantaUtilities_IsPlayerInteractingWithActor, "IsPlayerInteractingWithActor" }, // 2276172989
		{ &Z_Construct_UFunction_UAtlantaUtilities_IsTutorialEditorDebuggingEnabled, "IsTutorialEditorDebuggingEnabled" }, // 422218300
		{ &Z_Construct_UFunction_UAtlantaUtilities_LoadTextureByAsset, "LoadTextureByAsset" }, // 3073408000
		{ &Z_Construct_UFunction_UAtlantaUtilities_MakeBrushFromSprite, "MakeBrushFromSprite" }, // 3337926656
		{ &Z_Construct_UFunction_UAtlantaUtilities_MakeBrushFromTexture, "MakeBrushFromTexture" }, // 647579950
		{ &Z_Construct_UFunction_UAtlantaUtilities_SecondsToStringWithoutDecimals, "SecondsToStringWithoutDecimals" }, // 1410901961
		{ &Z_Construct_UFunction_UAtlantaUtilities_SetButtonStyle, "SetButtonStyle" }, // 228754685
		{ &Z_Construct_UFunction_UAtlantaUtilities_SetImageBrush, "SetImageBrush" }, // 1746693286
		{ &Z_Construct_UFunction_UAtlantaUtilities_SetImageBrushFromPath, "SetImageBrushFromPath" }, // 2520553974
		{ &Z_Construct_UFunction_UAtlantaUtilities_SetImageBrushFromSpritePath, "SetImageBrushFromSpritePath" }, // 873582418
		{ &Z_Construct_UFunction_UAtlantaUtilities_SetImageSlateBrush, "SetImageSlateBrush" }, // 3880227686
		{ &Z_Construct_UFunction_UAtlantaUtilities_ShouldSupportMultipleActiveActivatablePerks, "ShouldSupportMultipleActiveActivatablePerks" }, // 4246998056
		{ &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaBackendBloodMarketData, "ShouldUseAtlantaBackendBloodMarketData" }, // 3995111497
		{ &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaBloodweb, "ShouldUseAtlantaBloodweb" }, // 335252358
		{ &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaBundleFilterRules, "ShouldUseAtlantaBundleFilterRules" }, // 3142325775
		{ &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCatalog, "ShouldUseAtlantaCatalog" }, // 1923936601
		{ &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCDNBucketChangelist, "ShouldUseAtlantaCDNBucketChangelist" }, // 790635782
		{ &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCDNPatching, "ShouldUseAtlantaCDNPatching" }, // 3998461206
		{ &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCharacterProgression, "ShouldUseAtlantaCharacterProgression" }, // 3890464666
		{ &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaContent, "ShouldUseAtlantaContent" }, // 1074975770
		{ &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCurrencies, "ShouldUseAtlantaCurrencies" }, // 1840252236
		{ &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaCustomizedHudSettings, "ShouldUseAtlantaCustomizedHudSettings" }, // 3396319402
		{ &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaDailyRewards, "ShouldUseAtlantaDailyRewards" }, // 1969065847
		{ &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaDreamworldFX, "ShouldUseAtlantaDreamworldFX" }, // 3308037941
		{ &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaEntity, "ShouldUseAtlantaEntity" }, // 1367666042
		{ &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFearMarket, "ShouldUseAtlantaFearMarket" }, // 571461695
		{ &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFixedMaps, "ShouldUseAtlantaFixedMaps" }, // 2971598784
		{ &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFreeTickets, "ShouldUseAtlantaFreeTickets" }, // 2286466134
		{ &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaFriendList, "ShouldUseAtlantaFriendList" }, // 4229740904
		{ &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaGameplayValues, "ShouldUseAtlantaGameplayValues" }, // 653375460
		{ &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaHudAttackJoystick, "ShouldUseAtlantaHudAttackJoystick" }, // 3634242399
		{ &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaHudEditor, "ShouldUseAtlantaHudEditor" }, // 3898460466
		{ &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaItemAvailability, "ShouldUseAtlantaItemAvailability" }, // 4270258005
		{ &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaKrakenContentVersion, "ShouldUseAtlantaKrakenContentVersion" }, // 584843777
		{ &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaLighting, "ShouldUseAtlantaLighting" }, // 3333601321
		{ &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaMatchmaking, "ShouldUseAtlantaMatchmaking" }, // 3166907187
		{ &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaOutlines, "ShouldUseAtlantaOutlines" }, // 3776969774
		{ &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaPurchasableOperations, "ShouldUseAtlantaPurchasableOperations" }, // 3195726342
		{ &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaQualitySettings, "ShouldUseAtlantaQualitySettings" }, // 741274436
		{ &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaRank, "ShouldUseAtlantaRank" }, // 1945064974
		{ &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaRituals, "ShouldUseAtlantaRituals" }, // 1111273875
		{ &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaStreamVideo, "ShouldUseAtlantaStreamVideo" }, // 3147711991
		{ &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseAtlantaUI, "ShouldUseAtlantaUI" }, // 2235079852
		{ &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseOfflineMatchHistory, "ShouldUseOfflineMatchHistory" }, // 59773570
		{ &Z_Construct_UFunction_UAtlantaUtilities_ShouldUseQuickRoleSwitch, "ShouldUseQuickRoleSwitch" }, // 3289666557
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaUtilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AtlantaUtilities.h" },
		{ "ModuleRelativePath", "Public/AtlantaUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtlantaUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtlantaUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtlantaUtilities_Statics::ClassParams = {
		&UAtlantaUtilities::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtlantaUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtlantaUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtlantaUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtlantaUtilities, 2212078110);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAtlantaUtilities>()
	{
		return UAtlantaUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtlantaUtilities(Z_Construct_UClass_UAtlantaUtilities, &UAtlantaUtilities::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAtlantaUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtlantaUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
