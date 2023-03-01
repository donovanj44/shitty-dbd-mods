// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPerkInteractionObjectType : uint8;
class AActor;
class ACamperPlayer;
#ifdef THETWINS_Hoarder_generated_h
#error "Hoarder.generated.h already included, missing '#pragma once' in Hoarder.h"
#endif
#define THETWINS_Hoarder_generated_h

#define DeadByDaylight_Source_TheTwins_Public_Hoarder_h_13_SPARSE_DATA
#define DeadByDaylight_Source_TheTwins_Public_Hoarder_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBubbleIndicatorLifetime);


#define DeadByDaylight_Source_TheTwins_Public_Hoarder_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBubbleIndicatorLifetime);


#define DeadByDaylight_Source_TheTwins_Public_Hoarder_h_13_EVENT_PARMS \
	struct Hoarder_eventLocal_ThrowBubbleIndicator_Parms \
	{ \
		EPerkInteractionObjectType camperInteractionType; \
		const AActor* objectActor; \
		const ACamperPlayer* interactingCamperPlayer; \
	};


#define DeadByDaylight_Source_TheTwins_Public_Hoarder_h_13_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheTwins_Public_Hoarder_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoarder(); \
	friend struct Z_Construct_UClass_UHoarder_Statics; \
public: \
	DECLARE_CLASS(UHoarder, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheTwins"), NO_API) \
	DECLARE_SERIALIZER(UHoarder)


#define DeadByDaylight_Source_TheTwins_Public_Hoarder_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUHoarder(); \
	friend struct Z_Construct_UClass_UHoarder_Statics; \
public: \
	DECLARE_CLASS(UHoarder, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheTwins"), NO_API) \
	DECLARE_SERIALIZER(UHoarder)


#define DeadByDaylight_Source_TheTwins_Public_Hoarder_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoarder(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoarder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoarder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoarder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoarder(UHoarder&&); \
	NO_API UHoarder(const UHoarder&); \
public:


#define DeadByDaylight_Source_TheTwins_Public_Hoarder_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoarder(UHoarder&&); \
	NO_API UHoarder(const UHoarder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoarder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoarder); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHoarder)


#define DeadByDaylight_Source_TheTwins_Public_Hoarder_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___chests() { return STRUCT_OFFSET(UHoarder, _chests); } \
	FORCEINLINE static uint32 __PPO___camperInteractItemPickupRevealRange() { return STRUCT_OFFSET(UHoarder, _camperInteractItemPickupRevealRange); } \
	FORCEINLINE static uint32 __PPO___extraChestsSpawned() { return STRUCT_OFFSET(UHoarder, _extraChestsSpawned); } \
	FORCEINLINE static uint32 __PPO___bubbleIndicatorLifetime() { return STRUCT_OFFSET(UHoarder, _bubbleIndicatorLifetime); } \
	FORCEINLINE static uint32 __PPO___showUniqueChestVisualPerState() { return STRUCT_OFFSET(UHoarder, _showUniqueChestVisualPerState); }


#define DeadByDaylight_Source_TheTwins_Public_Hoarder_h_11_PROLOG \
	DeadByDaylight_Source_TheTwins_Public_Hoarder_h_13_EVENT_PARMS


#define DeadByDaylight_Source_TheTwins_Public_Hoarder_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheTwins_Public_Hoarder_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheTwins_Public_Hoarder_h_13_SPARSE_DATA \
	DeadByDaylight_Source_TheTwins_Public_Hoarder_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_TheTwins_Public_Hoarder_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheTwins_Public_Hoarder_h_13_INCLASS \
	DeadByDaylight_Source_TheTwins_Public_Hoarder_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheTwins_Public_Hoarder_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheTwins_Public_Hoarder_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheTwins_Public_Hoarder_h_13_SPARSE_DATA \
	DeadByDaylight_Source_TheTwins_Public_Hoarder_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheTwins_Public_Hoarder_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheTwins_Public_Hoarder_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheTwins_Public_Hoarder_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THETWINS_API UClass* StaticClass<class UHoarder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheTwins_Public_Hoarder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
