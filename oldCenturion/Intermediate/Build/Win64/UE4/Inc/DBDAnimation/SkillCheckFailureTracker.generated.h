// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
struct FGameEventData;
#ifdef DBDANIMATION_SkillCheckFailureTracker_generated_h
#error "SkillCheckFailureTracker.generated.h already included, missing '#pragma once' in SkillCheckFailureTracker.h"
#endif
#define DBDANIMATION_SkillCheckFailureTracker_generated_h

#define DeadByDaylight_Source_DBDAnimation_Public_SkillCheckFailureTracker_h_10_SPARSE_DATA
#define DeadByDaylight_Source_DBDAnimation_Public_SkillCheckFailureTracker_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnSkillCheckFailed); \
	DECLARE_FUNCTION(execResetSkillCheckFailed);


#define DeadByDaylight_Source_DBDAnimation_Public_SkillCheckFailureTracker_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnSkillCheckFailed); \
	DECLARE_FUNCTION(execResetSkillCheckFailed);


#define DeadByDaylight_Source_DBDAnimation_Public_SkillCheckFailureTracker_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkillCheckFailureTracker(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkillCheckFailureTracker) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkillCheckFailureTracker); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkillCheckFailureTracker); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkillCheckFailureTracker(USkillCheckFailureTracker&&); \
	NO_API USkillCheckFailureTracker(const USkillCheckFailureTracker&); \
public:


#define DeadByDaylight_Source_DBDAnimation_Public_SkillCheckFailureTracker_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkillCheckFailureTracker(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkillCheckFailureTracker(USkillCheckFailureTracker&&); \
	NO_API USkillCheckFailureTracker(const USkillCheckFailureTracker&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkillCheckFailureTracker); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkillCheckFailureTracker); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkillCheckFailureTracker)


#define DeadByDaylight_Source_DBDAnimation_Public_SkillCheckFailureTracker_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSkillCheckFailureTracker(); \
	friend struct Z_Construct_UClass_USkillCheckFailureTracker_Statics; \
public: \
	DECLARE_CLASS(USkillCheckFailureTracker, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDAnimation"), NO_API) \
	DECLARE_SERIALIZER(USkillCheckFailureTracker)


#define DeadByDaylight_Source_DBDAnimation_Public_SkillCheckFailureTracker_h_10_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Source_DBDAnimation_Public_SkillCheckFailureTracker_h_10_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Source_DBDAnimation_Public_SkillCheckFailureTracker_h_10_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDAnimation_Public_SkillCheckFailureTracker_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Source_DBDAnimation_Public_SkillCheckFailureTracker_h_10_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Source_DBDAnimation_Public_SkillCheckFailureTracker_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDAnimation_Public_SkillCheckFailureTracker_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISkillCheckFailureTracker() {} \
public: \
	typedef USkillCheckFailureTracker UClassType; \
	typedef ISkillCheckFailureTracker ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Source_DBDAnimation_Public_SkillCheckFailureTracker_h_10_INCLASS_IINTERFACE \
protected: \
	virtual ~ISkillCheckFailureTracker() {} \
public: \
	typedef USkillCheckFailureTracker UClassType; \
	typedef ISkillCheckFailureTracker ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Source_DBDAnimation_Public_SkillCheckFailureTracker_h_8_PROLOG
#define DeadByDaylight_Source_DBDAnimation_Public_SkillCheckFailureTracker_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDAnimation_Public_SkillCheckFailureTracker_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DBDAnimation_Public_SkillCheckFailureTracker_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDAnimation_Public_SkillCheckFailureTracker_h_10_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDAnimation_Public_SkillCheckFailureTracker_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDAnimation_Public_SkillCheckFailureTracker_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DBDAnimation_Public_SkillCheckFailureTracker_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDAnimation_Public_SkillCheckFailureTracker_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDANIMATION_API UClass* StaticClass<class USkillCheckFailureTracker>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDAnimation_Public_SkillCheckFailureTracker_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
