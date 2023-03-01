// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AConjoinedTwin;
#ifdef THETWINS_TwinBaseAddon_generated_h
#error "TwinBaseAddon.generated.h already included, missing '#pragma once' in TwinBaseAddon.h"
#endif
#define THETWINS_TwinBaseAddon_generated_h

#define DeadByDaylight_Source_TheTwins_Public_TwinBaseAddon_h_10_SPARSE_DATA
#define DeadByDaylight_Source_TheTwins_Public_TwinBaseAddon_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_OnTwinSet);


#define DeadByDaylight_Source_TheTwins_Public_TwinBaseAddon_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_OnTwinSet);


#define DeadByDaylight_Source_TheTwins_Public_TwinBaseAddon_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTwinBaseAddon(); \
	friend struct Z_Construct_UClass_UTwinBaseAddon_Statics; \
public: \
	DECLARE_CLASS(UTwinBaseAddon, UItemAddon, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheTwins"), NO_API) \
	DECLARE_SERIALIZER(UTwinBaseAddon)


#define DeadByDaylight_Source_TheTwins_Public_TwinBaseAddon_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUTwinBaseAddon(); \
	friend struct Z_Construct_UClass_UTwinBaseAddon_Statics; \
public: \
	DECLARE_CLASS(UTwinBaseAddon, UItemAddon, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheTwins"), NO_API) \
	DECLARE_SERIALIZER(UTwinBaseAddon)


#define DeadByDaylight_Source_TheTwins_Public_TwinBaseAddon_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTwinBaseAddon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTwinBaseAddon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTwinBaseAddon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTwinBaseAddon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTwinBaseAddon(UTwinBaseAddon&&); \
	NO_API UTwinBaseAddon(const UTwinBaseAddon&); \
public:


#define DeadByDaylight_Source_TheTwins_Public_TwinBaseAddon_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTwinBaseAddon(UTwinBaseAddon&&); \
	NO_API UTwinBaseAddon(const UTwinBaseAddon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTwinBaseAddon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTwinBaseAddon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTwinBaseAddon)


#define DeadByDaylight_Source_TheTwins_Public_TwinBaseAddon_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___statusEffectID() { return STRUCT_OFFSET(UTwinBaseAddon, _statusEffectID); } \
	FORCEINLINE static uint32 __PPO___customParam() { return STRUCT_OFFSET(UTwinBaseAddon, _customParam); }


#define DeadByDaylight_Source_TheTwins_Public_TwinBaseAddon_h_8_PROLOG
#define DeadByDaylight_Source_TheTwins_Public_TwinBaseAddon_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheTwins_Public_TwinBaseAddon_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheTwins_Public_TwinBaseAddon_h_10_SPARSE_DATA \
	DeadByDaylight_Source_TheTwins_Public_TwinBaseAddon_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_TheTwins_Public_TwinBaseAddon_h_10_INCLASS \
	DeadByDaylight_Source_TheTwins_Public_TwinBaseAddon_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheTwins_Public_TwinBaseAddon_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheTwins_Public_TwinBaseAddon_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheTwins_Public_TwinBaseAddon_h_10_SPARSE_DATA \
	DeadByDaylight_Source_TheTwins_Public_TwinBaseAddon_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheTwins_Public_TwinBaseAddon_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheTwins_Public_TwinBaseAddon_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THETWINS_API UClass* StaticClass<class UTwinBaseAddon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheTwins_Public_TwinBaseAddon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
