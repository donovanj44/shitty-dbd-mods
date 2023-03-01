// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
#ifdef THETWINS_PossessPlayer_generated_h
#error "PossessPlayer.generated.h already included, missing '#pragma once' in PossessPlayer.h"
#endif
#define THETWINS_PossessPlayer_generated_h

#define DeadByDaylight_Source_TheTwins_Public_PossessPlayer_h_11_SPARSE_DATA
#define DeadByDaylight_Source_TheTwins_Public_PossessPlayer_h_11_RPC_WRAPPERS
#define DeadByDaylight_Source_TheTwins_Public_PossessPlayer_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_TheTwins_Public_PossessPlayer_h_11_EVENT_PARMS \
	struct PossessPlayer_eventCosmetic_OnPossessCancelled_Parms \
	{ \
		ADBDPlayer* player; \
	}; \
	struct PossessPlayer_eventCosmetic_OnPossessStart_Parms \
	{ \
		ADBDPlayer* player; \
	};


#define DeadByDaylight_Source_TheTwins_Public_PossessPlayer_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheTwins_Public_PossessPlayer_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPossessPlayer(); \
	friend struct Z_Construct_UClass_UPossessPlayer_Statics; \
public: \
	DECLARE_CLASS(UPossessPlayer, UChargeableInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheTwins"), NO_API) \
	DECLARE_SERIALIZER(UPossessPlayer)


#define DeadByDaylight_Source_TheTwins_Public_PossessPlayer_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUPossessPlayer(); \
	friend struct Z_Construct_UClass_UPossessPlayer_Statics; \
public: \
	DECLARE_CLASS(UPossessPlayer, UChargeableInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheTwins"), NO_API) \
	DECLARE_SERIALIZER(UPossessPlayer)


#define DeadByDaylight_Source_TheTwins_Public_PossessPlayer_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPossessPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPossessPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPossessPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPossessPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPossessPlayer(UPossessPlayer&&); \
	NO_API UPossessPlayer(const UPossessPlayer&); \
public:


#define DeadByDaylight_Source_TheTwins_Public_PossessPlayer_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPossessPlayer(UPossessPlayer&&); \
	NO_API UPossessPlayer(const UPossessPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPossessPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPossessPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPossessPlayer)


#define DeadByDaylight_Source_TheTwins_Public_PossessPlayer_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___possessThePlayerMaxCharge() { return STRUCT_OFFSET(UPossessPlayer, _possessThePlayerMaxCharge); }


#define DeadByDaylight_Source_TheTwins_Public_PossessPlayer_h_9_PROLOG \
	DeadByDaylight_Source_TheTwins_Public_PossessPlayer_h_11_EVENT_PARMS


#define DeadByDaylight_Source_TheTwins_Public_PossessPlayer_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheTwins_Public_PossessPlayer_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheTwins_Public_PossessPlayer_h_11_SPARSE_DATA \
	DeadByDaylight_Source_TheTwins_Public_PossessPlayer_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_TheTwins_Public_PossessPlayer_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheTwins_Public_PossessPlayer_h_11_INCLASS \
	DeadByDaylight_Source_TheTwins_Public_PossessPlayer_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheTwins_Public_PossessPlayer_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheTwins_Public_PossessPlayer_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheTwins_Public_PossessPlayer_h_11_SPARSE_DATA \
	DeadByDaylight_Source_TheTwins_Public_PossessPlayer_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheTwins_Public_PossessPlayer_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheTwins_Public_PossessPlayer_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheTwins_Public_PossessPlayer_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THETWINS_API UClass* StaticClass<class UPossessPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheTwins_Public_PossessPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
