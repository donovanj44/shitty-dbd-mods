// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCharmSpawnerComponent;
enum class EItemHandPosition : uint8;
class AActor;
enum class ECustomizationCategory : uint8;
#ifdef DEADBYDAYLIGHT_DBDMenuPlayer_generated_h
#error "DBDMenuPlayer.generated.h already included, missing '#pragma once' in DBDMenuPlayer.h"
#endif
#define DEADBYDAYLIGHT_DBDMenuPlayer_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_DBDMenuPlayer_h_16_DELEGATE \
static inline void FDBDMenuPlayerOnItemEquipped_DelegateWrapper(const FMulticastScriptDelegate& DBDMenuPlayerOnItemEquipped) \
{ \
	DBDMenuPlayerOnItemEquipped.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDMenuPlayer_h_20_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDMenuPlayer_h_20_RPC_WRAPPERS \
	virtual void BeginDestroySequence_Internal_Implementation(); \
	virtual UCharmSpawnerComponent* GetCharmSpawnerComponent_Implementation(); \
 \
	DECLARE_FUNCTION(execBeginDestroySequence_Internal); \
	DECLARE_FUNCTION(execGetCharmSpawnerComponent); \
	DECLARE_FUNCTION(execGetHandPosition); \
	DECLARE_FUNCTION(execShouldApplyPositionOffset); \
	DECLARE_FUNCTION(execShouldShowSpawnAnimation); \
	DECLARE_FUNCTION(execWrappedOnDestroyed);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDMenuPlayer_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void BeginDestroySequence_Internal_Implementation(); \
	virtual UCharmSpawnerComponent* GetCharmSpawnerComponent_Implementation(); \
 \
	DECLARE_FUNCTION(execBeginDestroySequence_Internal); \
	DECLARE_FUNCTION(execGetCharmSpawnerComponent); \
	DECLARE_FUNCTION(execGetHandPosition); \
	DECLARE_FUNCTION(execShouldApplyPositionOffset); \
	DECLARE_FUNCTION(execShouldShowSpawnAnimation); \
	DECLARE_FUNCTION(execWrappedOnDestroyed);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDMenuPlayer_h_20_EVENT_PARMS \
	struct DBDMenuPlayer_eventGetCharmSpawnerComponent_Parms \
	{ \
		UCharmSpawnerComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		DBDMenuPlayer_eventGetCharmSpawnerComponent_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct DBDMenuPlayer_eventIsInMenuPlayer_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		DBDMenuPlayer_eventIsInMenuPlayer_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct DBDMenuPlayer_eventOnCustomizationTransactionCompleted_Parms \
	{ \
		ECustomizationCategory category; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDMenuPlayer_h_20_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDMenuPlayer_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADBDMenuPlayer(); \
	friend struct Z_Construct_UClass_ADBDMenuPlayer_Statics; \
public: \
	DECLARE_CLASS(ADBDMenuPlayer, ADBDBasePlayer, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ADBDMenuPlayer) \
	virtual UObject* _getUObject() const override { return const_cast<ADBDMenuPlayer*>(this); }


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDMenuPlayer_h_20_INCLASS \
private: \
	static void StaticRegisterNativesADBDMenuPlayer(); \
	friend struct Z_Construct_UClass_ADBDMenuPlayer_Statics; \
public: \
	DECLARE_CLASS(ADBDMenuPlayer, ADBDBasePlayer, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ADBDMenuPlayer) \
	virtual UObject* _getUObject() const override { return const_cast<ADBDMenuPlayer*>(this); }


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDMenuPlayer_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADBDMenuPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADBDMenuPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADBDMenuPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADBDMenuPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADBDMenuPlayer(ADBDMenuPlayer&&); \
	NO_API ADBDMenuPlayer(const ADBDMenuPlayer&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDMenuPlayer_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADBDMenuPlayer(ADBDMenuPlayer&&); \
	NO_API ADBDMenuPlayer(const ADBDMenuPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADBDMenuPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADBDMenuPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADBDMenuPlayer)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDMenuPlayer_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DarkMaterial() { return STRUCT_OFFSET(ADBDMenuPlayer, DarkMaterial); } \
	FORCEINLINE static uint32 __PPO___handPosition() { return STRUCT_OFFSET(ADBDMenuPlayer, _handPosition); } \
	FORCEINLINE static uint32 __PPO__ItemMesh() { return STRUCT_OFFSET(ADBDMenuPlayer, ItemMesh); } \
	FORCEINLINE static uint32 __PPO__MaterialHelper() { return STRUCT_OFFSET(ADBDMenuPlayer, MaterialHelper); } \
	FORCEINLINE static uint32 __PPO___equippedItemName() { return STRUCT_OFFSET(ADBDMenuPlayer, _equippedItemName); }


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDMenuPlayer_h_18_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDMenuPlayer_h_20_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDMenuPlayer_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDMenuPlayer_h_20_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDMenuPlayer_h_20_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDMenuPlayer_h_20_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDMenuPlayer_h_20_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDMenuPlayer_h_20_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDMenuPlayer_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDMenuPlayer_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDMenuPlayer_h_20_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDMenuPlayer_h_20_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDMenuPlayer_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDMenuPlayer_h_20_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDMenuPlayer_h_20_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDMenuPlayer_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class ADBDMenuPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_DBDMenuPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
