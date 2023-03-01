// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ADBDPlayer;
enum class ESkillCheckCustomType : uint8;
#ifdef DBDCOMPETENCE_Solidarity_generated_h
#error "Solidarity.generated.h already included, missing '#pragma once' in Solidarity.h"
#endif
#define DBDCOMPETENCE_Solidarity_generated_h

#define DeadByDaylight_Source_DBDCompetence_Public_Solidarity_h_14_SPARSE_DATA
#define DeadByDaylight_Source_DBDCompetence_Public_Solidarity_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_OnHealthChargeApplied); \
	DECLARE_FUNCTION(execAuthority_OnSkillCheckResponse);


#define DeadByDaylight_Source_DBDCompetence_Public_Solidarity_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_OnHealthChargeApplied); \
	DECLARE_FUNCTION(execAuthority_OnSkillCheckResponse);


#define DeadByDaylight_Source_DBDCompetence_Public_Solidarity_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSolidarity(); \
	friend struct Z_Construct_UClass_USolidarity_Statics; \
public: \
	DECLARE_CLASS(USolidarity, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDCompetence"), NO_API) \
	DECLARE_SERIALIZER(USolidarity)


#define DeadByDaylight_Source_DBDCompetence_Public_Solidarity_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSolidarity(); \
	friend struct Z_Construct_UClass_USolidarity_Statics; \
public: \
	DECLARE_CLASS(USolidarity, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDCompetence"), NO_API) \
	DECLARE_SERIALIZER(USolidarity)


#define DeadByDaylight_Source_DBDCompetence_Public_Solidarity_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USolidarity(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USolidarity) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USolidarity); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USolidarity); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USolidarity(USolidarity&&); \
	NO_API USolidarity(const USolidarity&); \
public:


#define DeadByDaylight_Source_DBDCompetence_Public_Solidarity_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USolidarity(USolidarity&&); \
	NO_API USolidarity(const USolidarity&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USolidarity); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USolidarity); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USolidarity)


#define DeadByDaylight_Source_DBDCompetence_Public_Solidarity_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___allowMedkit() { return STRUCT_OFFSET(USolidarity, _allowMedkit); } \
	FORCEINLINE static uint32 __PPO___healerHPSlot() { return STRUCT_OFFSET(USolidarity, _healerHPSlot); } \
	FORCEINLINE static uint32 __PPO___targetHPSlot() { return STRUCT_OFFSET(USolidarity, _targetHPSlot); } \
	FORCEINLINE static uint32 __PPO___healOtherInteraction() { return STRUCT_OFFSET(USolidarity, _healOtherInteraction); }


#define DeadByDaylight_Source_DBDCompetence_Public_Solidarity_h_12_PROLOG
#define DeadByDaylight_Source_DBDCompetence_Public_Solidarity_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDCompetence_Public_Solidarity_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDCompetence_Public_Solidarity_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DBDCompetence_Public_Solidarity_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDCompetence_Public_Solidarity_h_14_INCLASS \
	DeadByDaylight_Source_DBDCompetence_Public_Solidarity_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDCompetence_Public_Solidarity_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDCompetence_Public_Solidarity_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDCompetence_Public_Solidarity_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DBDCompetence_Public_Solidarity_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDCompetence_Public_Solidarity_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDCompetence_Public_Solidarity_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDCOMPETENCE_API UClass* StaticClass<class USolidarity>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDCompetence_Public_Solidarity_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
