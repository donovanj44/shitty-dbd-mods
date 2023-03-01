// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAkComponent;
class UCustomizedAudioComponent;
struct FGameplayTagContainer;
struct FVector;
struct FRotator;
#ifdef DEADBYDAYLIGHT_DBDBasePlayer_generated_h
#error "DBDBasePlayer.generated.h already included, missing '#pragma once' in DBDBasePlayer.h"
#endif
#define DEADBYDAYLIGHT_DBDBasePlayer_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_DBDBasePlayer_h_14_DELEGATE \
static inline void FDBDBasePlayerOnCustomizationChanged_DelegateWrapper(const FMulticastScriptDelegate& DBDBasePlayerOnCustomizationChanged) \
{ \
	DBDBasePlayerOnCustomizationChanged.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDBasePlayer_h_18_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDBasePlayer_h_18_RPC_WRAPPERS \
	virtual void Multicast_SwapCosmetics_Implementation(FName cosmeticId); \
 \
	DECLARE_FUNCTION(execDBD_SwapCosmetics); \
	DECLARE_FUNCTION(execGetAudioComponent); \
	DECLARE_FUNCTION(execGetCharacterIndex); \
	DECLARE_FUNCTION(execGetCharacterName); \
	DECLARE_FUNCTION(execGetCustomizedAudio); \
	DECLARE_FUNCTION(execGetLeftFootAudioSurfaceName); \
	DECLARE_FUNCTION(execGetLeftFootSurfaceType); \
	DECLARE_FUNCTION(execGetRightFootAudioSurfaceName); \
	DECLARE_FUNCTION(execGetRightFootSurfaceType); \
	DECLARE_FUNCTION(execGetSemanticTag); \
	DECLARE_FUNCTION(execGetShowBlindDebugInfo); \
	DECLARE_FUNCTION(execMulticast_SwapCosmetics); \
	DECLARE_FUNCTION(execTeleportWithClothHandling);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDBasePlayer_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_SwapCosmetics_Implementation(FName cosmeticId); \
 \
	DECLARE_FUNCTION(execDBD_SwapCosmetics); \
	DECLARE_FUNCTION(execGetAudioComponent); \
	DECLARE_FUNCTION(execGetCharacterIndex); \
	DECLARE_FUNCTION(execGetCharacterName); \
	DECLARE_FUNCTION(execGetCustomizedAudio); \
	DECLARE_FUNCTION(execGetLeftFootAudioSurfaceName); \
	DECLARE_FUNCTION(execGetLeftFootSurfaceType); \
	DECLARE_FUNCTION(execGetRightFootAudioSurfaceName); \
	DECLARE_FUNCTION(execGetRightFootSurfaceType); \
	DECLARE_FUNCTION(execGetSemanticTag); \
	DECLARE_FUNCTION(execGetShowBlindDebugInfo); \
	DECLARE_FUNCTION(execMulticast_SwapCosmetics); \
	DECLARE_FUNCTION(execTeleportWithClothHandling);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDBasePlayer_h_18_EVENT_PARMS \
	struct DBDBasePlayer_eventMulticast_SwapCosmetics_Parms \
	{ \
		FName cosmeticId; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDBasePlayer_h_18_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDBasePlayer_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADBDBasePlayer(); \
	friend struct Z_Construct_UClass_ADBDBasePlayer_Statics; \
public: \
	DECLARE_CLASS(ADBDBasePlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ADBDBasePlayer)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDBasePlayer_h_18_INCLASS \
private: \
	static void StaticRegisterNativesADBDBasePlayer(); \
	friend struct Z_Construct_UClass_ADBDBasePlayer_Statics; \
public: \
	DECLARE_CLASS(ADBDBasePlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ADBDBasePlayer)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDBasePlayer_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADBDBasePlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADBDBasePlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADBDBasePlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADBDBasePlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADBDBasePlayer(ADBDBasePlayer&&); \
	NO_API ADBDBasePlayer(const ADBDBasePlayer&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDBasePlayer_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADBDBasePlayer(ADBDBasePlayer&&); \
	NO_API ADBDBasePlayer(const ADBDBasePlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADBDBasePlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADBDBasePlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADBDBasePlayer)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDBasePlayer_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___semanticGameplayTags() { return STRUCT_OFFSET(ADBDBasePlayer, _semanticGameplayTags); } \
	FORCEINLINE static uint32 __PPO___leftFootGroundDetector() { return STRUCT_OFFSET(ADBDBasePlayer, _leftFootGroundDetector); } \
	FORCEINLINE static uint32 __PPO___rightFootGroundDetector() { return STRUCT_OFFSET(ADBDBasePlayer, _rightFootGroundDetector); } \
	FORCEINLINE static uint32 __PPO___characterIndex() { return STRUCT_OFFSET(ADBDBasePlayer, _characterIndex); }


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDBasePlayer_h_16_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDBasePlayer_h_18_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDBasePlayer_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDBasePlayer_h_18_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDBasePlayer_h_18_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDBasePlayer_h_18_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDBasePlayer_h_18_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDBasePlayer_h_18_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDBasePlayer_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDBasePlayer_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDBasePlayer_h_18_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDBasePlayer_h_18_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDBasePlayer_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDBasePlayer_h_18_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDBasePlayer_h_18_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDBasePlayer_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class ADBDBasePlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_DBDBasePlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
