// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInteractionDefinition;
class ADBDPlayer;
enum class EInputInteractionType : uint8;
enum class EItemRarity : uint8;
struct FColor;
enum class EPlayerRole : uint8;
enum class ECurrencyType : uint8;
struct FSlateColor;
enum class EAIDifficultyLevel : uint8;
enum class EEmblemQuality : uint8;
class UTexture2D;
enum class EItemAvailability : uint8;
class UPaperSprite;
enum class EOfferingCategory : uint8;
class AActor;
struct FSlateBrush;
class UButton;
class UImage;
#ifdef DEADBYDAYLIGHT_AtlantaUtilities_generated_h
#error "AtlantaUtilities.generated.h already included, missing '#pragma once' in AtlantaUtilities.h"
#endif
#define DEADBYDAYLIGHT_AtlantaUtilities_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_AtlantaUtilities_h_27_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_AtlantaUtilities_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAlantaInteractionDescriptionText); \
	DECLARE_FUNCTION(execGetAvailableInteractionOfType); \
	DECLARE_FUNCTION(execGetBackgroundColorByRarity); \
	DECLARE_FUNCTION(execGetControlsTunable); \
	DECLARE_FUNCTION(execGetControlsTunableByRole); \
	DECLARE_FUNCTION(execGetCurrencyColor); \
	DECLARE_FUNCTION(execGetCurrencyUITexturePath); \
	DECLARE_FUNCTION(execGetCurrentInteraction); \
	DECLARE_FUNCTION(execGetCurrentInteractionOfType); \
	DECLARE_FUNCTION(execGetCurrentOrAvailableInteractionOfType); \
	DECLARE_FUNCTION(execGetDifficultyLevelText); \
	DECLARE_FUNCTION(execGetEmblemColorByQuality); \
	DECLARE_FUNCTION(execGetEmblemQualityText); \
	DECLARE_FUNCTION(execGetIconImageByPath); \
	DECLARE_FUNCTION(execGetItemAvailabilityText); \
	DECLARE_FUNCTION(execGetItemRarityText); \
	DECLARE_FUNCTION(execGetMapSpriteFromPath); \
	DECLARE_FUNCTION(execGetOfferingCategoryText); \
	DECLARE_FUNCTION(execGetPaintColorByRarity); \
	DECLARE_FUNCTION(execGetPlayerRoleText); \
	DECLARE_FUNCTION(execGetPlayerRoleTextUppercase); \
	DECLARE_FUNCTION(execGetSpriteFromFullPath); \
	DECLARE_FUNCTION(execGetSpriteFromPath); \
	DECLARE_FUNCTION(execGetStoreVersion); \
	DECLARE_FUNCTION(execIsInAtlantaTutorialLevel); \
	DECLARE_FUNCTION(execIsPlayerInteractingWithActor); \
	DECLARE_FUNCTION(execIsTutorialEditorDebuggingEnabled); \
	DECLARE_FUNCTION(execLoadTextureByAsset); \
	DECLARE_FUNCTION(execMakeBrushFromSprite); \
	DECLARE_FUNCTION(execMakeBrushFromTexture); \
	DECLARE_FUNCTION(execSecondsToStringWithoutDecimals); \
	DECLARE_FUNCTION(execSetButtonStyle); \
	DECLARE_FUNCTION(execSetImageBrush); \
	DECLARE_FUNCTION(execSetImageBrushFromPath); \
	DECLARE_FUNCTION(execSetImageBrushFromSpritePath); \
	DECLARE_FUNCTION(execSetImageSlateBrush); \
	DECLARE_FUNCTION(execShouldSupportMultipleActiveActivatablePerks); \
	DECLARE_FUNCTION(execShouldUseAtlantaBackendBloodMarketData); \
	DECLARE_FUNCTION(execShouldUseAtlantaBloodweb); \
	DECLARE_FUNCTION(execShouldUseAtlantaBundleFilterRules); \
	DECLARE_FUNCTION(execShouldUseAtlantaCatalog); \
	DECLARE_FUNCTION(execShouldUseAtlantaCDNBucketChangelist); \
	DECLARE_FUNCTION(execShouldUseAtlantaCDNPatching); \
	DECLARE_FUNCTION(execShouldUseAtlantaCharacterProgression); \
	DECLARE_FUNCTION(execShouldUseAtlantaContent); \
	DECLARE_FUNCTION(execShouldUseAtlantaCurrencies); \
	DECLARE_FUNCTION(execShouldUseAtlantaCustomizedHudSettings); \
	DECLARE_FUNCTION(execShouldUseAtlantaDailyRewards); \
	DECLARE_FUNCTION(execShouldUseAtlantaDreamworldFX); \
	DECLARE_FUNCTION(execShouldUseAtlantaEntity); \
	DECLARE_FUNCTION(execShouldUseAtlantaFearMarket); \
	DECLARE_FUNCTION(execShouldUseAtlantaFixedMaps); \
	DECLARE_FUNCTION(execShouldUseAtlantaFreeTickets); \
	DECLARE_FUNCTION(execShouldUseAtlantaFriendList); \
	DECLARE_FUNCTION(execShouldUseAtlantaGameplayValues); \
	DECLARE_FUNCTION(execShouldUseAtlantaHudAttackJoystick); \
	DECLARE_FUNCTION(execShouldUseAtlantaHudEditor); \
	DECLARE_FUNCTION(execShouldUseAtlantaItemAvailability); \
	DECLARE_FUNCTION(execShouldUseAtlantaKrakenContentVersion); \
	DECLARE_FUNCTION(execShouldUseAtlantaLighting); \
	DECLARE_FUNCTION(execShouldUseAtlantaMatchmaking); \
	DECLARE_FUNCTION(execShouldUseAtlantaOutlines); \
	DECLARE_FUNCTION(execShouldUseAtlantaPurchasableOperations); \
	DECLARE_FUNCTION(execShouldUseAtlantaQualitySettings); \
	DECLARE_FUNCTION(execShouldUseAtlantaRank); \
	DECLARE_FUNCTION(execShouldUseAtlantaRituals); \
	DECLARE_FUNCTION(execShouldUseAtlantaStreamVideo); \
	DECLARE_FUNCTION(execShouldUseAtlantaUI); \
	DECLARE_FUNCTION(execShouldUseOfflineMatchHistory); \
	DECLARE_FUNCTION(execShouldUseQuickRoleSwitch);


#define DeadByDaylight_Source_DeadByDaylight_Public_AtlantaUtilities_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAlantaInteractionDescriptionText); \
	DECLARE_FUNCTION(execGetAvailableInteractionOfType); \
	DECLARE_FUNCTION(execGetBackgroundColorByRarity); \
	DECLARE_FUNCTION(execGetControlsTunable); \
	DECLARE_FUNCTION(execGetControlsTunableByRole); \
	DECLARE_FUNCTION(execGetCurrencyColor); \
	DECLARE_FUNCTION(execGetCurrencyUITexturePath); \
	DECLARE_FUNCTION(execGetCurrentInteraction); \
	DECLARE_FUNCTION(execGetCurrentInteractionOfType); \
	DECLARE_FUNCTION(execGetCurrentOrAvailableInteractionOfType); \
	DECLARE_FUNCTION(execGetDifficultyLevelText); \
	DECLARE_FUNCTION(execGetEmblemColorByQuality); \
	DECLARE_FUNCTION(execGetEmblemQualityText); \
	DECLARE_FUNCTION(execGetIconImageByPath); \
	DECLARE_FUNCTION(execGetItemAvailabilityText); \
	DECLARE_FUNCTION(execGetItemRarityText); \
	DECLARE_FUNCTION(execGetMapSpriteFromPath); \
	DECLARE_FUNCTION(execGetOfferingCategoryText); \
	DECLARE_FUNCTION(execGetPaintColorByRarity); \
	DECLARE_FUNCTION(execGetPlayerRoleText); \
	DECLARE_FUNCTION(execGetPlayerRoleTextUppercase); \
	DECLARE_FUNCTION(execGetSpriteFromFullPath); \
	DECLARE_FUNCTION(execGetSpriteFromPath); \
	DECLARE_FUNCTION(execGetStoreVersion); \
	DECLARE_FUNCTION(execIsInAtlantaTutorialLevel); \
	DECLARE_FUNCTION(execIsPlayerInteractingWithActor); \
	DECLARE_FUNCTION(execIsTutorialEditorDebuggingEnabled); \
	DECLARE_FUNCTION(execLoadTextureByAsset); \
	DECLARE_FUNCTION(execMakeBrushFromSprite); \
	DECLARE_FUNCTION(execMakeBrushFromTexture); \
	DECLARE_FUNCTION(execSecondsToStringWithoutDecimals); \
	DECLARE_FUNCTION(execSetButtonStyle); \
	DECLARE_FUNCTION(execSetImageBrush); \
	DECLARE_FUNCTION(execSetImageBrushFromPath); \
	DECLARE_FUNCTION(execSetImageBrushFromSpritePath); \
	DECLARE_FUNCTION(execSetImageSlateBrush); \
	DECLARE_FUNCTION(execShouldSupportMultipleActiveActivatablePerks); \
	DECLARE_FUNCTION(execShouldUseAtlantaBackendBloodMarketData); \
	DECLARE_FUNCTION(execShouldUseAtlantaBloodweb); \
	DECLARE_FUNCTION(execShouldUseAtlantaBundleFilterRules); \
	DECLARE_FUNCTION(execShouldUseAtlantaCatalog); \
	DECLARE_FUNCTION(execShouldUseAtlantaCDNBucketChangelist); \
	DECLARE_FUNCTION(execShouldUseAtlantaCDNPatching); \
	DECLARE_FUNCTION(execShouldUseAtlantaCharacterProgression); \
	DECLARE_FUNCTION(execShouldUseAtlantaContent); \
	DECLARE_FUNCTION(execShouldUseAtlantaCurrencies); \
	DECLARE_FUNCTION(execShouldUseAtlantaCustomizedHudSettings); \
	DECLARE_FUNCTION(execShouldUseAtlantaDailyRewards); \
	DECLARE_FUNCTION(execShouldUseAtlantaDreamworldFX); \
	DECLARE_FUNCTION(execShouldUseAtlantaEntity); \
	DECLARE_FUNCTION(execShouldUseAtlantaFearMarket); \
	DECLARE_FUNCTION(execShouldUseAtlantaFixedMaps); \
	DECLARE_FUNCTION(execShouldUseAtlantaFreeTickets); \
	DECLARE_FUNCTION(execShouldUseAtlantaFriendList); \
	DECLARE_FUNCTION(execShouldUseAtlantaGameplayValues); \
	DECLARE_FUNCTION(execShouldUseAtlantaHudAttackJoystick); \
	DECLARE_FUNCTION(execShouldUseAtlantaHudEditor); \
	DECLARE_FUNCTION(execShouldUseAtlantaItemAvailability); \
	DECLARE_FUNCTION(execShouldUseAtlantaKrakenContentVersion); \
	DECLARE_FUNCTION(execShouldUseAtlantaLighting); \
	DECLARE_FUNCTION(execShouldUseAtlantaMatchmaking); \
	DECLARE_FUNCTION(execShouldUseAtlantaOutlines); \
	DECLARE_FUNCTION(execShouldUseAtlantaPurchasableOperations); \
	DECLARE_FUNCTION(execShouldUseAtlantaQualitySettings); \
	DECLARE_FUNCTION(execShouldUseAtlantaRank); \
	DECLARE_FUNCTION(execShouldUseAtlantaRituals); \
	DECLARE_FUNCTION(execShouldUseAtlantaStreamVideo); \
	DECLARE_FUNCTION(execShouldUseAtlantaUI); \
	DECLARE_FUNCTION(execShouldUseOfflineMatchHistory); \
	DECLARE_FUNCTION(execShouldUseQuickRoleSwitch);


#define DeadByDaylight_Source_DeadByDaylight_Public_AtlantaUtilities_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtlantaUtilities(); \
	friend struct Z_Construct_UClass_UAtlantaUtilities_Statics; \
public: \
	DECLARE_CLASS(UAtlantaUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UAtlantaUtilities)


#define DeadByDaylight_Source_DeadByDaylight_Public_AtlantaUtilities_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUAtlantaUtilities(); \
	friend struct Z_Construct_UClass_UAtlantaUtilities_Statics; \
public: \
	DECLARE_CLASS(UAtlantaUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UAtlantaUtilities)


#define DeadByDaylight_Source_DeadByDaylight_Public_AtlantaUtilities_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtlantaUtilities(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtlantaUtilities) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtlantaUtilities); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtlantaUtilities); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtlantaUtilities(UAtlantaUtilities&&); \
	NO_API UAtlantaUtilities(const UAtlantaUtilities&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_AtlantaUtilities_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtlantaUtilities(UAtlantaUtilities&&); \
	NO_API UAtlantaUtilities(const UAtlantaUtilities&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtlantaUtilities); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtlantaUtilities); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAtlantaUtilities)


#define DeadByDaylight_Source_DeadByDaylight_Public_AtlantaUtilities_h_27_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DeadByDaylight_Public_AtlantaUtilities_h_25_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_AtlantaUtilities_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_AtlantaUtilities_h_27_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_AtlantaUtilities_h_27_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_AtlantaUtilities_h_27_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_AtlantaUtilities_h_27_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_AtlantaUtilities_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_AtlantaUtilities_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_AtlantaUtilities_h_27_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_AtlantaUtilities_h_27_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_AtlantaUtilities_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_AtlantaUtilities_h_27_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_AtlantaUtilities_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UAtlantaUtilities>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_AtlantaUtilities_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
