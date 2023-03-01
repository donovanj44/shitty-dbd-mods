// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEK25_LamentConfigurationPlayerAnalyticsComponent_generated_h
#error "LamentConfigurationPlayerAnalyticsComponent.generated.h already included, missing '#pragma once' in LamentConfigurationPlayerAnalyticsComponent.h"
#endif
#define THEK25_LamentConfigurationPlayerAnalyticsComponent_generated_h

#define DeadByDaylight_Source_TheK25_Public_LamentConfigurationPlayerAnalyticsComponent_h_9_SPARSE_DATA
#define DeadByDaylight_Source_TheK25_Public_LamentConfigurationPlayerAnalyticsComponent_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_AnalyticsCount);


#define DeadByDaylight_Source_TheK25_Public_LamentConfigurationPlayerAnalyticsComponent_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_AnalyticsCount);


#define DeadByDaylight_Source_TheK25_Public_LamentConfigurationPlayerAnalyticsComponent_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULamentConfigurationPlayerAnalyticsComponent(); \
	friend struct Z_Construct_UClass_ULamentConfigurationPlayerAnalyticsComponent_Statics; \
public: \
	DECLARE_CLASS(ULamentConfigurationPlayerAnalyticsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK25"), NO_API) \
	DECLARE_SERIALIZER(ULamentConfigurationPlayerAnalyticsComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_analyticsCount=NETFIELD_REP_START, \
		_possessionAnalytics, \
		NETFIELD_REP_END=_possessionAnalytics	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK25_Public_LamentConfigurationPlayerAnalyticsComponent_h_9_INCLASS \
private: \
	static void StaticRegisterNativesULamentConfigurationPlayerAnalyticsComponent(); \
	friend struct Z_Construct_UClass_ULamentConfigurationPlayerAnalyticsComponent_Statics; \
public: \
	DECLARE_CLASS(ULamentConfigurationPlayerAnalyticsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK25"), NO_API) \
	DECLARE_SERIALIZER(ULamentConfigurationPlayerAnalyticsComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_analyticsCount=NETFIELD_REP_START, \
		_possessionAnalytics, \
		NETFIELD_REP_END=_possessionAnalytics	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK25_Public_LamentConfigurationPlayerAnalyticsComponent_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULamentConfigurationPlayerAnalyticsComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULamentConfigurationPlayerAnalyticsComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULamentConfigurationPlayerAnalyticsComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULamentConfigurationPlayerAnalyticsComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULamentConfigurationPlayerAnalyticsComponent(ULamentConfigurationPlayerAnalyticsComponent&&); \
	NO_API ULamentConfigurationPlayerAnalyticsComponent(const ULamentConfigurationPlayerAnalyticsComponent&); \
public:


#define DeadByDaylight_Source_TheK25_Public_LamentConfigurationPlayerAnalyticsComponent_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULamentConfigurationPlayerAnalyticsComponent(ULamentConfigurationPlayerAnalyticsComponent&&); \
	NO_API ULamentConfigurationPlayerAnalyticsComponent(const ULamentConfigurationPlayerAnalyticsComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULamentConfigurationPlayerAnalyticsComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULamentConfigurationPlayerAnalyticsComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULamentConfigurationPlayerAnalyticsComponent)


#define DeadByDaylight_Source_TheK25_Public_LamentConfigurationPlayerAnalyticsComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___analyticsCount() { return STRUCT_OFFSET(ULamentConfigurationPlayerAnalyticsComponent, _analyticsCount); } \
	FORCEINLINE static uint32 __PPO___possessionAnalytics() { return STRUCT_OFFSET(ULamentConfigurationPlayerAnalyticsComponent, _possessionAnalytics); }


#define DeadByDaylight_Source_TheK25_Public_LamentConfigurationPlayerAnalyticsComponent_h_7_PROLOG
#define DeadByDaylight_Source_TheK25_Public_LamentConfigurationPlayerAnalyticsComponent_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK25_Public_LamentConfigurationPlayerAnalyticsComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK25_Public_LamentConfigurationPlayerAnalyticsComponent_h_9_SPARSE_DATA \
	DeadByDaylight_Source_TheK25_Public_LamentConfigurationPlayerAnalyticsComponent_h_9_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_LamentConfigurationPlayerAnalyticsComponent_h_9_INCLASS \
	DeadByDaylight_Source_TheK25_Public_LamentConfigurationPlayerAnalyticsComponent_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK25_Public_LamentConfigurationPlayerAnalyticsComponent_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK25_Public_LamentConfigurationPlayerAnalyticsComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK25_Public_LamentConfigurationPlayerAnalyticsComponent_h_9_SPARSE_DATA \
	DeadByDaylight_Source_TheK25_Public_LamentConfigurationPlayerAnalyticsComponent_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK25_Public_LamentConfigurationPlayerAnalyticsComponent_h_9_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK25_Public_LamentConfigurationPlayerAnalyticsComponent_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK25_API UClass* StaticClass<class ULamentConfigurationPlayerAnalyticsComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK25_Public_LamentConfigurationPlayerAnalyticsComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
