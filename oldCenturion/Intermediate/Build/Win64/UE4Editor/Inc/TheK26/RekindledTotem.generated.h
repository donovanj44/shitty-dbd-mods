// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ATotem;
enum class ETotemState : uint8;
#ifdef THEK26_RekindledTotem_generated_h
#error "RekindledTotem.generated.h already included, missing '#pragma once' in RekindledTotem.h"
#endif
#define THEK26_RekindledTotem_generated_h

#define DeadByDaylight_Source_TheK26_Public_RekindledTotem_h_16_SPARSE_DATA
#define DeadByDaylight_Source_TheK26_Public_RekindledTotem_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnParentTotemEndPlay);


#define DeadByDaylight_Source_TheK26_Public_RekindledTotem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnParentTotemEndPlay);


#define DeadByDaylight_Source_TheK26_Public_RekindledTotem_h_16_EVENT_PARMS \
	struct RekindledTotem_eventCleanseTotem_Parms \
	{ \
		ATotem* totem; \
		ETotemState oldTotemState; \
	}; \
	struct RekindledTotem_eventCosmetic_HideShadowTotem_Parms \
	{ \
		bool instant; \
	}; \
	struct RekindledTotem_eventCosmetic_ShowShadowTotem_Parms \
	{ \
		bool instant; \
	}; \
	struct RekindledTotem_eventRebuildTotem_Parms \
	{ \
		ATotem* totem; \
	};


#define DeadByDaylight_Source_TheK26_Public_RekindledTotem_h_16_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheK26_Public_RekindledTotem_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARekindledTotem(); \
	friend struct Z_Construct_UClass_ARekindledTotem_Statics; \
public: \
	DECLARE_CLASS(ARekindledTotem, AStaticMeshActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK26"), NO_API) \
	DECLARE_SERIALIZER(ARekindledTotem)


#define DeadByDaylight_Source_TheK26_Public_RekindledTotem_h_16_INCLASS \
private: \
	static void StaticRegisterNativesARekindledTotem(); \
	friend struct Z_Construct_UClass_ARekindledTotem_Statics; \
public: \
	DECLARE_CLASS(ARekindledTotem, AStaticMeshActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK26"), NO_API) \
	DECLARE_SERIALIZER(ARekindledTotem)


#define DeadByDaylight_Source_TheK26_Public_RekindledTotem_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARekindledTotem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARekindledTotem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARekindledTotem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARekindledTotem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARekindledTotem(ARekindledTotem&&); \
	NO_API ARekindledTotem(const ARekindledTotem&); \
public:


#define DeadByDaylight_Source_TheK26_Public_RekindledTotem_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARekindledTotem(ARekindledTotem&&); \
	NO_API ARekindledTotem(const ARekindledTotem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARekindledTotem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARekindledTotem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARekindledTotem)


#define DeadByDaylight_Source_TheK26_Public_RekindledTotem_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___auraColor() { return STRUCT_OFFSET(ARekindledTotem, _auraColor); } \
	FORCEINLINE static uint32 __PPO___outlineStrategy() { return STRUCT_OFFSET(ARekindledTotem, _outlineStrategy); } \
	FORCEINLINE static uint32 __PPO___outlineComponent() { return STRUCT_OFFSET(ARekindledTotem, _outlineComponent); }


#define DeadByDaylight_Source_TheK26_Public_RekindledTotem_h_14_PROLOG \
	DeadByDaylight_Source_TheK26_Public_RekindledTotem_h_16_EVENT_PARMS


#define DeadByDaylight_Source_TheK26_Public_RekindledTotem_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK26_Public_RekindledTotem_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK26_Public_RekindledTotem_h_16_SPARSE_DATA \
	DeadByDaylight_Source_TheK26_Public_RekindledTotem_h_16_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK26_Public_RekindledTotem_h_16_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK26_Public_RekindledTotem_h_16_INCLASS \
	DeadByDaylight_Source_TheK26_Public_RekindledTotem_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK26_Public_RekindledTotem_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK26_Public_RekindledTotem_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK26_Public_RekindledTotem_h_16_SPARSE_DATA \
	DeadByDaylight_Source_TheK26_Public_RekindledTotem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK26_Public_RekindledTotem_h_16_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK26_Public_RekindledTotem_h_16_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK26_Public_RekindledTotem_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK26_API UClass* StaticClass<class ARekindledTotem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK26_Public_RekindledTotem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
