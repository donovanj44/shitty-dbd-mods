// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGenerator;
class ADBDPlayer;
#ifdef THEK24_RookieSpirit_generated_h
#error "RookieSpirit.generated.h already included, missing '#pragma once' in RookieSpirit.h"
#endif
#define THEK24_RookieSpirit_generated_h

#define DeadByDaylight_Source_TheK24_Public_RookieSpirit_h_11_SPARSE_DATA
#define DeadByDaylight_Source_TheK24_Public_RookieSpirit_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleGeneratorIsDamagedChanged); \
	DECLARE_FUNCTION(execOnRep_NumberOfGreatSkillChecksOnGeneratorRepair);


#define DeadByDaylight_Source_TheK24_Public_RookieSpirit_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleGeneratorIsDamagedChanged); \
	DECLARE_FUNCTION(execOnRep_NumberOfGreatSkillChecksOnGeneratorRepair);


#define DeadByDaylight_Source_TheK24_Public_RookieSpirit_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURookieSpirit(); \
	friend struct Z_Construct_UClass_URookieSpirit_Statics; \
public: \
	DECLARE_CLASS(URookieSpirit, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK24"), NO_API) \
	DECLARE_SERIALIZER(URookieSpirit) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_numberOfGreatSkillChecksOnGeneratorRepair=NETFIELD_REP_START, \
		NETFIELD_REP_END=_numberOfGreatSkillChecksOnGeneratorRepair	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK24_Public_RookieSpirit_h_11_INCLASS \
private: \
	static void StaticRegisterNativesURookieSpirit(); \
	friend struct Z_Construct_UClass_URookieSpirit_Statics; \
public: \
	DECLARE_CLASS(URookieSpirit, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK24"), NO_API) \
	DECLARE_SERIALIZER(URookieSpirit) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_numberOfGreatSkillChecksOnGeneratorRepair=NETFIELD_REP_START, \
		NETFIELD_REP_END=_numberOfGreatSkillChecksOnGeneratorRepair	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK24_Public_RookieSpirit_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URookieSpirit(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URookieSpirit) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URookieSpirit); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URookieSpirit); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URookieSpirit(URookieSpirit&&); \
	NO_API URookieSpirit(const URookieSpirit&); \
public:


#define DeadByDaylight_Source_TheK24_Public_RookieSpirit_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URookieSpirit(URookieSpirit&&); \
	NO_API URookieSpirit(const URookieSpirit&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URookieSpirit); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URookieSpirit); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URookieSpirit)


#define DeadByDaylight_Source_TheK24_Public_RookieSpirit_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___numberOfGreatSkillChecksOnGeneratorRepair() { return STRUCT_OFFSET(URookieSpirit, _numberOfGreatSkillChecksOnGeneratorRepair); } \
	FORCEINLINE static uint32 __PPO___numberOfGeneratorRepairGreatSkillChecksRequired() { return STRUCT_OFFSET(URookieSpirit, _numberOfGeneratorRepairGreatSkillChecksRequired); }


#define DeadByDaylight_Source_TheK24_Public_RookieSpirit_h_9_PROLOG
#define DeadByDaylight_Source_TheK24_Public_RookieSpirit_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK24_Public_RookieSpirit_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK24_Public_RookieSpirit_h_11_SPARSE_DATA \
	DeadByDaylight_Source_TheK24_Public_RookieSpirit_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK24_Public_RookieSpirit_h_11_INCLASS \
	DeadByDaylight_Source_TheK24_Public_RookieSpirit_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK24_Public_RookieSpirit_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK24_Public_RookieSpirit_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK24_Public_RookieSpirit_h_11_SPARSE_DATA \
	DeadByDaylight_Source_TheK24_Public_RookieSpirit_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK24_Public_RookieSpirit_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK24_Public_RookieSpirit_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK24_API UClass* StaticClass<class URookieSpirit>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK24_Public_RookieSpirit_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
