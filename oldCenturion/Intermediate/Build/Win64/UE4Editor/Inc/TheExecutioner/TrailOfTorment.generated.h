// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGenerator;
#ifdef THEEXECUTIONER_TrailOfTorment_generated_h
#error "TrailOfTorment.generated.h already included, missing '#pragma once' in TrailOfTorment.h"
#endif
#define THEEXECUTIONER_TrailOfTorment_generated_h

#define DeadByDaylight_Source_TheExecutioner_Public_TrailOfTorment_h_11_SPARSE_DATA
#define DeadByDaylight_Source_TheExecutioner_Public_TrailOfTorment_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_HighlightGenerator);


#define DeadByDaylight_Source_TheExecutioner_Public_TrailOfTorment_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_HighlightGenerator);


#define DeadByDaylight_Source_TheExecutioner_Public_TrailOfTorment_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTrailOfTorment(); \
	friend struct Z_Construct_UClass_UTrailOfTorment_Statics; \
public: \
	DECLARE_CLASS(UTrailOfTorment, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheExecutioner"), NO_API) \
	DECLARE_SERIALIZER(UTrailOfTorment) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isPerkActivated=NETFIELD_REP_START, \
		_highlightedGenerator, \
		NETFIELD_REP_END=_highlightedGenerator	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheExecutioner_Public_TrailOfTorment_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUTrailOfTorment(); \
	friend struct Z_Construct_UClass_UTrailOfTorment_Statics; \
public: \
	DECLARE_CLASS(UTrailOfTorment, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheExecutioner"), NO_API) \
	DECLARE_SERIALIZER(UTrailOfTorment) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isPerkActivated=NETFIELD_REP_START, \
		_highlightedGenerator, \
		NETFIELD_REP_END=_highlightedGenerator	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheExecutioner_Public_TrailOfTorment_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTrailOfTorment(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTrailOfTorment) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTrailOfTorment); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTrailOfTorment); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTrailOfTorment(UTrailOfTorment&&); \
	NO_API UTrailOfTorment(const UTrailOfTorment&); \
public:


#define DeadByDaylight_Source_TheExecutioner_Public_TrailOfTorment_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTrailOfTorment(UTrailOfTorment&&); \
	NO_API UTrailOfTorment(const UTrailOfTorment&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTrailOfTorment); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTrailOfTorment); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTrailOfTorment)


#define DeadByDaylight_Source_TheExecutioner_Public_TrailOfTorment_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___cooldownDuration() { return STRUCT_OFFSET(UTrailOfTorment, _cooldownDuration); } \
	FORCEINLINE static uint32 __PPO___highlightPriority() { return STRUCT_OFFSET(UTrailOfTorment, _highlightPriority); } \
	FORCEINLINE static uint32 __PPO___isPerkActivated() { return STRUCT_OFFSET(UTrailOfTorment, _isPerkActivated); } \
	FORCEINLINE static uint32 __PPO___highlightedGenerator() { return STRUCT_OFFSET(UTrailOfTorment, _highlightedGenerator); } \
	FORCEINLINE static uint32 __PPO___statusEffect() { return STRUCT_OFFSET(UTrailOfTorment, _statusEffect); }


#define DeadByDaylight_Source_TheExecutioner_Public_TrailOfTorment_h_9_PROLOG
#define DeadByDaylight_Source_TheExecutioner_Public_TrailOfTorment_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheExecutioner_Public_TrailOfTorment_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheExecutioner_Public_TrailOfTorment_h_11_SPARSE_DATA \
	DeadByDaylight_Source_TheExecutioner_Public_TrailOfTorment_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_TheExecutioner_Public_TrailOfTorment_h_11_INCLASS \
	DeadByDaylight_Source_TheExecutioner_Public_TrailOfTorment_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheExecutioner_Public_TrailOfTorment_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheExecutioner_Public_TrailOfTorment_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheExecutioner_Public_TrailOfTorment_h_11_SPARSE_DATA \
	DeadByDaylight_Source_TheExecutioner_Public_TrailOfTorment_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheExecutioner_Public_TrailOfTorment_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheExecutioner_Public_TrailOfTorment_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEEXECUTIONER_API UClass* StaticClass<class UTrailOfTorment>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheExecutioner_Public_TrailOfTorment_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
