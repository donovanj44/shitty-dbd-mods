// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECamperDamageState : uint8;
#ifdef DBDCOMPETENCE_LuckyBreak_generated_h
#error "LuckyBreak.generated.h already included, missing '#pragma once' in LuckyBreak.h"
#endif
#define DBDCOMPETENCE_LuckyBreak_generated_h

#define DeadByDaylight_Source_DBDCompetence_Public_LuckyBreak_h_9_SPARSE_DATA
#define DeadByDaylight_Source_DBDCompetence_Public_LuckyBreak_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execActivationTimerEnded); \
	DECLARE_FUNCTION(execOnDamageStateChanged);


#define DeadByDaylight_Source_DBDCompetence_Public_LuckyBreak_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execActivationTimerEnded); \
	DECLARE_FUNCTION(execOnDamageStateChanged);


#define DeadByDaylight_Source_DBDCompetence_Public_LuckyBreak_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULuckyBreak(); \
	friend struct Z_Construct_UClass_ULuckyBreak_Statics; \
public: \
	DECLARE_CLASS(ULuckyBreak, UPerk, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDCompetence"), NO_API) \
	DECLARE_SERIALIZER(ULuckyBreak)


#define DeadByDaylight_Source_DBDCompetence_Public_LuckyBreak_h_9_INCLASS \
private: \
	static void StaticRegisterNativesULuckyBreak(); \
	friend struct Z_Construct_UClass_ULuckyBreak_Statics; \
public: \
	DECLARE_CLASS(ULuckyBreak, UPerk, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDCompetence"), NO_API) \
	DECLARE_SERIALIZER(ULuckyBreak)


#define DeadByDaylight_Source_DBDCompetence_Public_LuckyBreak_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULuckyBreak(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULuckyBreak) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULuckyBreak); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULuckyBreak); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULuckyBreak(ULuckyBreak&&); \
	NO_API ULuckyBreak(const ULuckyBreak&); \
public:


#define DeadByDaylight_Source_DBDCompetence_Public_LuckyBreak_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULuckyBreak(ULuckyBreak&&); \
	NO_API ULuckyBreak(const ULuckyBreak&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULuckyBreak); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULuckyBreak); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULuckyBreak)


#define DeadByDaylight_Source_DBDCompetence_Public_LuckyBreak_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___activationTime() { return STRUCT_OFFSET(ULuckyBreak, _activationTime); }


#define DeadByDaylight_Source_DBDCompetence_Public_LuckyBreak_h_7_PROLOG
#define DeadByDaylight_Source_DBDCompetence_Public_LuckyBreak_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDCompetence_Public_LuckyBreak_h_9_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDCompetence_Public_LuckyBreak_h_9_SPARSE_DATA \
	DeadByDaylight_Source_DBDCompetence_Public_LuckyBreak_h_9_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDCompetence_Public_LuckyBreak_h_9_INCLASS \
	DeadByDaylight_Source_DBDCompetence_Public_LuckyBreak_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDCompetence_Public_LuckyBreak_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDCompetence_Public_LuckyBreak_h_9_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDCompetence_Public_LuckyBreak_h_9_SPARSE_DATA \
	DeadByDaylight_Source_DBDCompetence_Public_LuckyBreak_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDCompetence_Public_LuckyBreak_h_9_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDCompetence_Public_LuckyBreak_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDCOMPETENCE_API UClass* StaticClass<class ULuckyBreak>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDCompetence_Public_LuckyBreak_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
