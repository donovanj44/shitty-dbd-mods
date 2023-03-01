// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEK25_K25P02_generated_h
#error "K25P02.generated.h already included, missing '#pragma once' in K25P02.h"
#endif
#define THEK25_K25P02_generated_h

#define DeadByDaylight_Source_TheK25_Public_K25P02_h_12_SPARSE_DATA
#define DeadByDaylight_Source_TheK25_Public_K25P02_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_CursedSurvivors);


#define DeadByDaylight_Source_TheK25_Public_K25P02_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_CursedSurvivors);


#define DeadByDaylight_Source_TheK25_Public_K25P02_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUK25P02(); \
	friend struct Z_Construct_UClass_UK25P02_Statics; \
public: \
	DECLARE_CLASS(UK25P02, UHexPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK25"), NO_API) \
	DECLARE_SERIALIZER(UK25P02) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_cursedSurvivors=NETFIELD_REP_START, \
		NETFIELD_REP_END=_cursedSurvivors	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK25_Public_K25P02_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUK25P02(); \
	friend struct Z_Construct_UClass_UK25P02_Statics; \
public: \
	DECLARE_CLASS(UK25P02, UHexPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK25"), NO_API) \
	DECLARE_SERIALIZER(UK25P02) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_cursedSurvivors=NETFIELD_REP_START, \
		NETFIELD_REP_END=_cursedSurvivors	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK25_Public_K25P02_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UK25P02(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK25P02) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK25P02); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK25P02); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK25P02(UK25P02&&); \
	NO_API UK25P02(const UK25P02&); \
public:


#define DeadByDaylight_Source_TheK25_Public_K25P02_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK25P02(UK25P02&&); \
	NO_API UK25P02(const UK25P02&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK25P02); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK25P02); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UK25P02)


#define DeadByDaylight_Source_TheK25_Public_K25P02_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___totemAuraRevealRadius() { return STRUCT_OFFSET(UK25P02, _totemAuraRevealRadius); } \
	FORCEINLINE static uint32 __PPO___totemBlockerHasLifetime() { return STRUCT_OFFSET(UK25P02, _totemBlockerHasLifetime); } \
	FORCEINLINE static uint32 __PPO___totemBlockerDuration() { return STRUCT_OFFSET(UK25P02, _totemBlockerDuration); } \
	FORCEINLINE static uint32 __PPO___cursedSurvivors() { return STRUCT_OFFSET(UK25P02, _cursedSurvivors); } \
	FORCEINLINE static uint32 __PPO___hookedSurvivors() { return STRUCT_OFFSET(UK25P02, _hookedSurvivors); } \
	FORCEINLINE static uint32 __PPO___previouslyBoundTotems() { return STRUCT_OFFSET(UK25P02, _previouslyBoundTotems); } \
	FORCEINLINE static uint32 __PPO___lastPlayerTotemPair() { return STRUCT_OFFSET(UK25P02, _lastPlayerTotemPair); }


#define DeadByDaylight_Source_TheK25_Public_K25P02_h_10_PROLOG
#define DeadByDaylight_Source_TheK25_Public_K25P02_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK25_Public_K25P02_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK25_Public_K25P02_h_12_SPARSE_DATA \
	DeadByDaylight_Source_TheK25_Public_K25P02_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_K25P02_h_12_INCLASS \
	DeadByDaylight_Source_TheK25_Public_K25P02_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK25_Public_K25P02_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK25_Public_K25P02_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK25_Public_K25P02_h_12_SPARSE_DATA \
	DeadByDaylight_Source_TheK25_Public_K25P02_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK25_Public_K25P02_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK25_Public_K25P02_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK25_API UClass* StaticClass<class UK25P02>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK25_Public_K25P02_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
