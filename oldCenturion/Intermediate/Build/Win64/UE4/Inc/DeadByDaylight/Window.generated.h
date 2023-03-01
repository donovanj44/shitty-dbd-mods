// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
class UAkComponent;
class UChildActorComponent;
class UMaterialHelper;
class UInteractionDefinition;
#ifdef DEADBYDAYLIGHT_Window_generated_h
#error "Window.generated.h already included, missing '#pragma once' in Window.h"
#endif
#define DEADBYDAYLIGHT_Window_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_Window_h_21_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_Window_h_21_RPC_WRAPPERS \
	virtual UAkComponent* GetAudioComponent_Implementation() const; \
	virtual UChildActorComponent* GetEntityAssets_Implementation() const; \
	virtual UMaterialHelper* GetMaterialHelper_Implementation() const; \
 \
	DECLARE_FUNCTION(execAuthority_OnVaultInternal); \
	DECLARE_FUNCTION(execAuthority_SetBlockedByLevel); \
	DECLARE_FUNCTION(execForceBlockLocalWindowInteraction); \
	DECLARE_FUNCTION(execGetAudioComponent); \
	DECLARE_FUNCTION(execGetBlockedByLevel); \
	DECLARE_FUNCTION(execGetEntityAssets); \
	DECLARE_FUNCTION(execGetMaterialHelper); \
	DECLARE_FUNCTION(execIsWindowVaultBlockedFor); \
	DECLARE_FUNCTION(execIsWindowVaultBlockedForAnyPlayer); \
	DECLARE_FUNCTION(execNotifyOnFastVault); \
	DECLARE_FUNCTION(execOnLocallyObservedChanged); \
	DECLARE_FUNCTION(execOnRep_blockedByLevel);


#define DeadByDaylight_Source_DeadByDaylight_Public_Window_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual UAkComponent* GetAudioComponent_Implementation() const; \
	virtual UChildActorComponent* GetEntityAssets_Implementation() const; \
	virtual UMaterialHelper* GetMaterialHelper_Implementation() const; \
 \
	DECLARE_FUNCTION(execAuthority_OnVaultInternal); \
	DECLARE_FUNCTION(execAuthority_SetBlockedByLevel); \
	DECLARE_FUNCTION(execForceBlockLocalWindowInteraction); \
	DECLARE_FUNCTION(execGetAudioComponent); \
	DECLARE_FUNCTION(execGetBlockedByLevel); \
	DECLARE_FUNCTION(execGetEntityAssets); \
	DECLARE_FUNCTION(execGetMaterialHelper); \
	DECLARE_FUNCTION(execIsWindowVaultBlockedFor); \
	DECLARE_FUNCTION(execIsWindowVaultBlockedForAnyPlayer); \
	DECLARE_FUNCTION(execNotifyOnFastVault); \
	DECLARE_FUNCTION(execOnLocallyObservedChanged); \
	DECLARE_FUNCTION(execOnRep_blockedByLevel);


#define DeadByDaylight_Source_DeadByDaylight_Public_Window_h_21_EVENT_PARMS \
	struct Window_eventGetAudioComponent_Parms \
	{ \
		UAkComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Window_eventGetAudioComponent_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct Window_eventGetEntityAssets_Parms \
	{ \
		UChildActorComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Window_eventGetEntityAssets_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct Window_eventGetMaterialHelper_Parms \
	{ \
		UMaterialHelper* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Window_eventGetMaterialHelper_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct Window_eventOnFastVault_Parms \
	{ \
		ADBDPlayer* player; \
		UInteractionDefinition* interaction; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_Window_h_21_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_Window_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWindow(); \
	friend struct Z_Construct_UClass_AWindow_Statics; \
public: \
	DECLARE_CLASS(AWindow, AInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AWindow) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isBlockedByLevel=NETFIELD_REP_START, \
		NETFIELD_REP_END=_isBlockedByLevel	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_Window_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAWindow(); \
	friend struct Z_Construct_UClass_AWindow_Statics; \
public: \
	DECLARE_CLASS(AWindow, AInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AWindow) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isBlockedByLevel=NETFIELD_REP_START, \
		NETFIELD_REP_END=_isBlockedByLevel	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_Window_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWindow(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWindow) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWindow); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWindow); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWindow(AWindow&&); \
	NO_API AWindow(const AWindow&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_Window_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWindow(AWindow&&); \
	NO_API AWindow(const AWindow&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWindow); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWindow); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWindow)


#define DeadByDaylight_Source_DeadByDaylight_Public_Window_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NativeSmokeOtherIndicatorData() { return STRUCT_OFFSET(AWindow, NativeSmokeOtherIndicatorData); } \
	FORCEINLINE static uint32 __PPO__NativeEntityIndicatorData() { return STRUCT_OFFSET(AWindow, NativeEntityIndicatorData); } \
	FORCEINLINE static uint32 __PPO__NativeSmokeSelfIndicatorData() { return STRUCT_OFFSET(AWindow, NativeSmokeSelfIndicatorData); } \
	FORCEINLINE static uint32 __PPO___isBlockedByLevel() { return STRUCT_OFFSET(AWindow, _isBlockedByLevel); } \
	FORCEINLINE static uint32 __PPO___entityAssets() { return STRUCT_OFFSET(AWindow, _entityAssets); } \
	FORCEINLINE static uint32 __PPO___materialHelper() { return STRUCT_OFFSET(AWindow, _materialHelper); } \
	FORCEINLINE static uint32 __PPO___akAudioWindow() { return STRUCT_OFFSET(AWindow, _akAudioWindow); } \
	FORCEINLINE static uint32 __PPO__akAudioEventWindowsBlocStart() { return STRUCT_OFFSET(AWindow, akAudioEventWindowsBlocStart); } \
	FORCEINLINE static uint32 __PPO__akAudioEventWindowsBlocStop() { return STRUCT_OFFSET(AWindow, akAudioEventWindowsBlocStop); } \
	FORCEINLINE static uint32 __PPO___survivorVaultData() { return STRUCT_OFFSET(AWindow, _survivorVaultData); } \
	FORCEINLINE static uint32 __PPO___localPlayerTracker() { return STRUCT_OFFSET(AWindow, _localPlayerTracker); } \
	FORCEINLINE static uint32 __PPO___blockableComponent() { return STRUCT_OFFSET(AWindow, _blockableComponent); } \
	FORCEINLINE static uint32 __PPO___navEvadeLoopComponent() { return STRUCT_OFFSET(AWindow, _navEvadeLoopComponent); }


#define DeadByDaylight_Source_DeadByDaylight_Public_Window_h_19_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_Window_h_21_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_Window_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_Window_h_21_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_Window_h_21_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_Window_h_21_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_Window_h_21_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_Window_h_21_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_Window_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_Window_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_Window_h_21_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_Window_h_21_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_Window_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_Window_h_21_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_Window_h_21_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_Window_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class AWindow>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_Window_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
