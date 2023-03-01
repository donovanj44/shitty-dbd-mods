// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACamperPlayer;
#ifdef DBDCOMPETENCE_YamaokaFamilyCrest_generated_h
#error "YamaokaFamilyCrest.generated.h already included, missing '#pragma once' in YamaokaFamilyCrest.h"
#endif
#define DBDCOMPETENCE_YamaokaFamilyCrest_generated_h

#define DeadByDaylight_Source_DBDCompetence_Public_YamaokaFamilyCrest_h_10_SPARSE_DATA
#define DeadByDaylight_Source_DBDCompetence_Public_YamaokaFamilyCrest_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_AddonActivationCount);


#define DeadByDaylight_Source_DBDCompetence_Public_YamaokaFamilyCrest_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_AddonActivationCount);


#define DeadByDaylight_Source_DBDCompetence_Public_YamaokaFamilyCrest_h_10_EVENT_PARMS \
	struct YamaokaFamilyCrest_eventRevealSurvivor_Parms \
	{ \
		ACamperPlayer* survivorToReveal; \
	};


#define DeadByDaylight_Source_DBDCompetence_Public_YamaokaFamilyCrest_h_10_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DBDCompetence_Public_YamaokaFamilyCrest_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUYamaokaFamilyCrest(); \
	friend struct Z_Construct_UClass_UYamaokaFamilyCrest_Statics; \
public: \
	DECLARE_CLASS(UYamaokaFamilyCrest, UItemAddon, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDCompetence"), NO_API) \
	DECLARE_SERIALIZER(UYamaokaFamilyCrest) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_survivorsToReveal=NETFIELD_REP_START, \
		_addonActivationCount, \
		NETFIELD_REP_END=_addonActivationCount	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DBDCompetence_Public_YamaokaFamilyCrest_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUYamaokaFamilyCrest(); \
	friend struct Z_Construct_UClass_UYamaokaFamilyCrest_Statics; \
public: \
	DECLARE_CLASS(UYamaokaFamilyCrest, UItemAddon, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDCompetence"), NO_API) \
	DECLARE_SERIALIZER(UYamaokaFamilyCrest) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_survivorsToReveal=NETFIELD_REP_START, \
		_addonActivationCount, \
		NETFIELD_REP_END=_addonActivationCount	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DBDCompetence_Public_YamaokaFamilyCrest_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UYamaokaFamilyCrest(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UYamaokaFamilyCrest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UYamaokaFamilyCrest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UYamaokaFamilyCrest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UYamaokaFamilyCrest(UYamaokaFamilyCrest&&); \
	NO_API UYamaokaFamilyCrest(const UYamaokaFamilyCrest&); \
public:


#define DeadByDaylight_Source_DBDCompetence_Public_YamaokaFamilyCrest_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UYamaokaFamilyCrest(UYamaokaFamilyCrest&&); \
	NO_API UYamaokaFamilyCrest(const UYamaokaFamilyCrest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UYamaokaFamilyCrest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UYamaokaFamilyCrest); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UYamaokaFamilyCrest)


#define DeadByDaylight_Source_DBDCompetence_Public_YamaokaFamilyCrest_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___revealDuration() { return STRUCT_OFFSET(UYamaokaFamilyCrest, _revealDuration); } \
	FORCEINLINE static uint32 __PPO___revealRange() { return STRUCT_OFFSET(UYamaokaFamilyCrest, _revealRange); } \
	FORCEINLINE static uint32 __PPO___survivorsToReveal() { return STRUCT_OFFSET(UYamaokaFamilyCrest, _survivorsToReveal); } \
	FORCEINLINE static uint32 __PPO___addonActivationCount() { return STRUCT_OFFSET(UYamaokaFamilyCrest, _addonActivationCount); }


#define DeadByDaylight_Source_DBDCompetence_Public_YamaokaFamilyCrest_h_8_PROLOG \
	DeadByDaylight_Source_DBDCompetence_Public_YamaokaFamilyCrest_h_10_EVENT_PARMS


#define DeadByDaylight_Source_DBDCompetence_Public_YamaokaFamilyCrest_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDCompetence_Public_YamaokaFamilyCrest_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDCompetence_Public_YamaokaFamilyCrest_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DBDCompetence_Public_YamaokaFamilyCrest_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDCompetence_Public_YamaokaFamilyCrest_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DBDCompetence_Public_YamaokaFamilyCrest_h_10_INCLASS \
	DeadByDaylight_Source_DBDCompetence_Public_YamaokaFamilyCrest_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDCompetence_Public_YamaokaFamilyCrest_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDCompetence_Public_YamaokaFamilyCrest_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDCompetence_Public_YamaokaFamilyCrest_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DBDCompetence_Public_YamaokaFamilyCrest_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDCompetence_Public_YamaokaFamilyCrest_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DBDCompetence_Public_YamaokaFamilyCrest_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDCompetence_Public_YamaokaFamilyCrest_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDCOMPETENCE_API UClass* StaticClass<class UYamaokaFamilyCrest>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDCompetence_Public_YamaokaFamilyCrest_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
