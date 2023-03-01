// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIGNIFICANCEUTILITIES_CharacterOptimizer_generated_h
#error "CharacterOptimizer.generated.h already included, missing '#pragma once' in CharacterOptimizer.h"
#endif
#define SIGNIFICANCEUTILITIES_CharacterOptimizer_generated_h

#define DeadByDaylight_Source_SignificanceUtilities_Public_CharacterOptimizer_h_11_SPARSE_DATA
#define DeadByDaylight_Source_SignificanceUtilities_Public_CharacterOptimizer_h_11_RPC_WRAPPERS
#define DeadByDaylight_Source_SignificanceUtilities_Public_CharacterOptimizer_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_SignificanceUtilities_Public_CharacterOptimizer_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterOptimizer(); \
	friend struct Z_Construct_UClass_UCharacterOptimizer_Statics; \
public: \
	DECLARE_CLASS(UCharacterOptimizer, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SignificanceUtilities"), NO_API) \
	DECLARE_SERIALIZER(UCharacterOptimizer) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_dependentActorsToCheckSignficance=NETFIELD_REP_START, \
		NETFIELD_REP_END=_dependentActorsToCheckSignficance	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_SignificanceUtilities_Public_CharacterOptimizer_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUCharacterOptimizer(); \
	friend struct Z_Construct_UClass_UCharacterOptimizer_Statics; \
public: \
	DECLARE_CLASS(UCharacterOptimizer, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SignificanceUtilities"), NO_API) \
	DECLARE_SERIALIZER(UCharacterOptimizer) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_dependentActorsToCheckSignficance=NETFIELD_REP_START, \
		NETFIELD_REP_END=_dependentActorsToCheckSignficance	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_SignificanceUtilities_Public_CharacterOptimizer_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterOptimizer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterOptimizer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterOptimizer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterOptimizer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterOptimizer(UCharacterOptimizer&&); \
	NO_API UCharacterOptimizer(const UCharacterOptimizer&); \
public:


#define DeadByDaylight_Source_SignificanceUtilities_Public_CharacterOptimizer_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterOptimizer(UCharacterOptimizer&&); \
	NO_API UCharacterOptimizer(const UCharacterOptimizer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterOptimizer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterOptimizer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCharacterOptimizer)


#define DeadByDaylight_Source_SignificanceUtilities_Public_CharacterOptimizer_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___characterMovementTickRateWhenInsignificant() { return STRUCT_OFFSET(UCharacterOptimizer, _characterMovementTickRateWhenInsignificant); } \
	FORCEINLINE static uint32 __PPO___skeletalMeshTickRateWhenInsignificant() { return STRUCT_OFFSET(UCharacterOptimizer, _skeletalMeshTickRateWhenInsignificant); } \
	FORCEINLINE static uint32 __PPO___dependentActorsToCheckSignficance() { return STRUCT_OFFSET(UCharacterOptimizer, _dependentActorsToCheckSignficance); }


#define DeadByDaylight_Source_SignificanceUtilities_Public_CharacterOptimizer_h_9_PROLOG
#define DeadByDaylight_Source_SignificanceUtilities_Public_CharacterOptimizer_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_SignificanceUtilities_Public_CharacterOptimizer_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_SignificanceUtilities_Public_CharacterOptimizer_h_11_SPARSE_DATA \
	DeadByDaylight_Source_SignificanceUtilities_Public_CharacterOptimizer_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_SignificanceUtilities_Public_CharacterOptimizer_h_11_INCLASS \
	DeadByDaylight_Source_SignificanceUtilities_Public_CharacterOptimizer_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_SignificanceUtilities_Public_CharacterOptimizer_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_SignificanceUtilities_Public_CharacterOptimizer_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_SignificanceUtilities_Public_CharacterOptimizer_h_11_SPARSE_DATA \
	DeadByDaylight_Source_SignificanceUtilities_Public_CharacterOptimizer_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_SignificanceUtilities_Public_CharacterOptimizer_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_SignificanceUtilities_Public_CharacterOptimizer_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIGNIFICANCEUTILITIES_API UClass* StaticClass<class UCharacterOptimizer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_SignificanceUtilities_Public_CharacterOptimizer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
