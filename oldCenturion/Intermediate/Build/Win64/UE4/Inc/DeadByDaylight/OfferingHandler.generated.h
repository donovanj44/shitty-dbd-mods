// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_OfferingHandler_generated_h
#error "OfferingHandler.generated.h already included, missing '#pragma once' in OfferingHandler.h"
#endif
#define DEADBYDAYLIGHT_OfferingHandler_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_OfferingHandler_h_10_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_OfferingHandler_h_10_RPC_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_OfferingHandler_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_DeadByDaylight_Public_OfferingHandler_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOfferingHandler(); \
	friend struct Z_Construct_UClass_UOfferingHandler_Statics; \
public: \
	DECLARE_CLASS(UOfferingHandler, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UOfferingHandler) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_levelPerkIDs=NETFIELD_REP_START, \
		NETFIELD_REP_END=_levelPerkIDs	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UOfferingHandler) \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_OfferingHandler_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUOfferingHandler(); \
	friend struct Z_Construct_UClass_UOfferingHandler_Statics; \
public: \
	DECLARE_CLASS(UOfferingHandler, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UOfferingHandler) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_levelPerkIDs=NETFIELD_REP_START, \
		NETFIELD_REP_END=_levelPerkIDs	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UOfferingHandler) \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_OfferingHandler_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOfferingHandler(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOfferingHandler) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOfferingHandler); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOfferingHandler); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOfferingHandler(UOfferingHandler&&); \
	NO_API UOfferingHandler(const UOfferingHandler&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_OfferingHandler_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOfferingHandler(UOfferingHandler&&); \
	NO_API UOfferingHandler(const UOfferingHandler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOfferingHandler); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOfferingHandler); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOfferingHandler)


#define DeadByDaylight_Source_DeadByDaylight_Public_OfferingHandler_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___gameInstance() { return STRUCT_OFFSET(UOfferingHandler, _gameInstance); } \
	FORCEINLINE static uint32 __PPO___levelPerkIDs() { return STRUCT_OFFSET(UOfferingHandler, _levelPerkIDs); }


#define DeadByDaylight_Source_DeadByDaylight_Public_OfferingHandler_h_8_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_OfferingHandler_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_OfferingHandler_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_OfferingHandler_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_OfferingHandler_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_OfferingHandler_h_10_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_OfferingHandler_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_OfferingHandler_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_OfferingHandler_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_OfferingHandler_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_OfferingHandler_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_OfferingHandler_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_OfferingHandler_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UOfferingHandler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_OfferingHandler_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
