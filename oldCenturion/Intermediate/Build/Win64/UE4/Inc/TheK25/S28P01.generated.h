// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEK25_S28P01_generated_h
#error "S28P01.generated.h already included, missing '#pragma once' in S28P01.h"
#endif
#define THEK25_S28P01_generated_h

#define DeadByDaylight_Source_TheK25_Public_S28P01_h_11_SPARSE_DATA
#define DeadByDaylight_Source_TheK25_Public_S28P01_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_IsInteractionOngoing); \
	DECLARE_FUNCTION(execOnRep_IsPerkActive); \
	DECLARE_FUNCTION(execOnRep_S28P01ChargeableComponent);


#define DeadByDaylight_Source_TheK25_Public_S28P01_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_IsInteractionOngoing); \
	DECLARE_FUNCTION(execOnRep_IsPerkActive); \
	DECLARE_FUNCTION(execOnRep_S28P01ChargeableComponent);


#define DeadByDaylight_Source_TheK25_Public_S28P01_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUS28P01(); \
	friend struct Z_Construct_UClass_US28P01_Statics; \
public: \
	DECLARE_CLASS(US28P01, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK25"), NO_API) \
	DECLARE_SERIALIZER(US28P01) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_S28P01ChargeableComponent=NETFIELD_REP_START, \
		_isPerkActive, \
		_isInteractionOngoing, \
		NETFIELD_REP_END=_isInteractionOngoing	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK25_Public_S28P01_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUS28P01(); \
	friend struct Z_Construct_UClass_US28P01_Statics; \
public: \
	DECLARE_CLASS(US28P01, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK25"), NO_API) \
	DECLARE_SERIALIZER(US28P01) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_S28P01ChargeableComponent=NETFIELD_REP_START, \
		_isPerkActive, \
		_isInteractionOngoing, \
		NETFIELD_REP_END=_isInteractionOngoing	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK25_Public_S28P01_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API US28P01(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(US28P01) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, US28P01); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(US28P01); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API US28P01(US28P01&&); \
	NO_API US28P01(const US28P01&); \
public:


#define DeadByDaylight_Source_TheK25_Public_S28P01_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API US28P01(US28P01&&); \
	NO_API US28P01(const US28P01&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, US28P01); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(US28P01); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(US28P01)


#define DeadByDaylight_Source_TheK25_Public_S28P01_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___auraRevealDuration() { return STRUCT_OFFSET(US28P01, _auraRevealDuration); } \
	FORCEINLINE static uint32 __PPO___auraRevealRange() { return STRUCT_OFFSET(US28P01, _auraRevealRange); } \
	FORCEINLINE static uint32 __PPO___S28P01ChargeableComponent() { return STRUCT_OFFSET(US28P01, _S28P01ChargeableComponent); } \
	FORCEINLINE static uint32 __PPO___isPerkActive() { return STRUCT_OFFSET(US28P01, _isPerkActive); } \
	FORCEINLINE static uint32 __PPO___isInteractionOngoing() { return STRUCT_OFFSET(US28P01, _isInteractionOngoing); } \
	FORCEINLINE static uint32 __PPO___playerOwner() { return STRUCT_OFFSET(US28P01, _playerOwner); }


#define DeadByDaylight_Source_TheK25_Public_S28P01_h_9_PROLOG
#define DeadByDaylight_Source_TheK25_Public_S28P01_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK25_Public_S28P01_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK25_Public_S28P01_h_11_SPARSE_DATA \
	DeadByDaylight_Source_TheK25_Public_S28P01_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_S28P01_h_11_INCLASS \
	DeadByDaylight_Source_TheK25_Public_S28P01_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK25_Public_S28P01_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK25_Public_S28P01_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK25_Public_S28P01_h_11_SPARSE_DATA \
	DeadByDaylight_Source_TheK25_Public_S28P01_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK25_Public_S28P01_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK25_Public_S28P01_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK25_API UClass* StaticClass<class US28P01>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK25_Public_S28P01_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
