// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameEventData;
#ifdef DBDCOMPETENCE_OnEventBaseAddon_generated_h
#error "OnEventBaseAddon.generated.h already included, missing '#pragma once' in OnEventBaseAddon.h"
#endif
#define DBDCOMPETENCE_OnEventBaseAddon_generated_h

#define DeadByDaylight_Source_DBDCompetence_Public_OnEventBaseAddon_h_10_SPARSE_DATA
#define DeadByDaylight_Source_DBDCompetence_Public_OnEventBaseAddon_h_10_RPC_WRAPPERS
#define DeadByDaylight_Source_DBDCompetence_Public_OnEventBaseAddon_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_DBDCompetence_Public_OnEventBaseAddon_h_10_EVENT_PARMS \
	struct OnEventBaseAddon_eventOnEventFired_Parms \
	{ \
		FGameEventData gameEventData; \
	};


#define DeadByDaylight_Source_DBDCompetence_Public_OnEventBaseAddon_h_10_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DBDCompetence_Public_OnEventBaseAddon_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnEventBaseAddon(); \
	friend struct Z_Construct_UClass_UOnEventBaseAddon_Statics; \
public: \
	DECLARE_CLASS(UOnEventBaseAddon, UItemAddon, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDCompetence"), NO_API) \
	DECLARE_SERIALIZER(UOnEventBaseAddon)


#define DeadByDaylight_Source_DBDCompetence_Public_OnEventBaseAddon_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUOnEventBaseAddon(); \
	friend struct Z_Construct_UClass_UOnEventBaseAddon_Statics; \
public: \
	DECLARE_CLASS(UOnEventBaseAddon, UItemAddon, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDCompetence"), NO_API) \
	DECLARE_SERIALIZER(UOnEventBaseAddon)


#define DeadByDaylight_Source_DBDCompetence_Public_OnEventBaseAddon_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnEventBaseAddon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnEventBaseAddon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnEventBaseAddon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnEventBaseAddon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnEventBaseAddon(UOnEventBaseAddon&&); \
	NO_API UOnEventBaseAddon(const UOnEventBaseAddon&); \
public:


#define DeadByDaylight_Source_DBDCompetence_Public_OnEventBaseAddon_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnEventBaseAddon(UOnEventBaseAddon&&); \
	NO_API UOnEventBaseAddon(const UOnEventBaseAddon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnEventBaseAddon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnEventBaseAddon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOnEventBaseAddon)


#define DeadByDaylight_Source_DBDCompetence_Public_OnEventBaseAddon_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___eventToListenTo() { return STRUCT_OFFSET(UOnEventBaseAddon, _eventToListenTo); }


#define DeadByDaylight_Source_DBDCompetence_Public_OnEventBaseAddon_h_8_PROLOG \
	DeadByDaylight_Source_DBDCompetence_Public_OnEventBaseAddon_h_10_EVENT_PARMS


#define DeadByDaylight_Source_DBDCompetence_Public_OnEventBaseAddon_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDCompetence_Public_OnEventBaseAddon_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDCompetence_Public_OnEventBaseAddon_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DBDCompetence_Public_OnEventBaseAddon_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDCompetence_Public_OnEventBaseAddon_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DBDCompetence_Public_OnEventBaseAddon_h_10_INCLASS \
	DeadByDaylight_Source_DBDCompetence_Public_OnEventBaseAddon_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDCompetence_Public_OnEventBaseAddon_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDCompetence_Public_OnEventBaseAddon_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDCompetence_Public_OnEventBaseAddon_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DBDCompetence_Public_OnEventBaseAddon_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDCompetence_Public_OnEventBaseAddon_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DBDCompetence_Public_OnEventBaseAddon_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDCompetence_Public_OnEventBaseAddon_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDCOMPETENCE_API UClass* StaticClass<class UOnEventBaseAddon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDCompetence_Public_OnEventBaseAddon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
