// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FVector;
#ifdef DBDBOTS_NavLinkProxy_Base_generated_h
#error "NavLinkProxy_Base.generated.h already included, missing '#pragma once' in NavLinkProxy_Base.h"
#endif
#define DBDBOTS_NavLinkProxy_Base_generated_h

#define DeadByDaylight_Source_DBDBots_Public_NavLinkProxy_Base_h_13_SPARSE_DATA
#define DeadByDaylight_Source_DBDBots_Public_NavLinkProxy_Base_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAutoAdjustSmartLinkPoints); \
	DECLARE_FUNCTION(execOnSmartLinkReachedCallback);


#define DeadByDaylight_Source_DBDBots_Public_NavLinkProxy_Base_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAutoAdjustSmartLinkPoints); \
	DECLARE_FUNCTION(execOnSmartLinkReachedCallback);


#define DeadByDaylight_Source_DBDBots_Public_NavLinkProxy_Base_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANavLinkProxy_Base(); \
	friend struct Z_Construct_UClass_ANavLinkProxy_Base_Statics; \
public: \
	DECLARE_CLASS(ANavLinkProxy_Base, ANavLinkProxy, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDBots"), NO_API) \
	DECLARE_SERIALIZER(ANavLinkProxy_Base)


#define DeadByDaylight_Source_DBDBots_Public_NavLinkProxy_Base_h_13_INCLASS \
private: \
	static void StaticRegisterNativesANavLinkProxy_Base(); \
	friend struct Z_Construct_UClass_ANavLinkProxy_Base_Statics; \
public: \
	DECLARE_CLASS(ANavLinkProxy_Base, ANavLinkProxy, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDBots"), NO_API) \
	DECLARE_SERIALIZER(ANavLinkProxy_Base)


#define DeadByDaylight_Source_DBDBots_Public_NavLinkProxy_Base_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANavLinkProxy_Base(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANavLinkProxy_Base) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANavLinkProxy_Base); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANavLinkProxy_Base); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANavLinkProxy_Base(ANavLinkProxy_Base&&); \
	NO_API ANavLinkProxy_Base(const ANavLinkProxy_Base&); \
public:


#define DeadByDaylight_Source_DBDBots_Public_NavLinkProxy_Base_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANavLinkProxy_Base(ANavLinkProxy_Base&&); \
	NO_API ANavLinkProxy_Base(const ANavLinkProxy_Base&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANavLinkProxy_Base); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANavLinkProxy_Base); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANavLinkProxy_Base)


#define DeadByDaylight_Source_DBDBots_Public_NavLinkProxy_Base_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___players() { return STRUCT_OFFSET(ANavLinkProxy_Base, _players); } \
	FORCEINLINE static uint32 __PPO___linkUsedByPlayers() { return STRUCT_OFFSET(ANavLinkProxy_Base, _linkUsedByPlayers); }


#define DeadByDaylight_Source_DBDBots_Public_NavLinkProxy_Base_h_11_PROLOG
#define DeadByDaylight_Source_DBDBots_Public_NavLinkProxy_Base_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDBots_Public_NavLinkProxy_Base_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDBots_Public_NavLinkProxy_Base_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DBDBots_Public_NavLinkProxy_Base_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDBots_Public_NavLinkProxy_Base_h_13_INCLASS \
	DeadByDaylight_Source_DBDBots_Public_NavLinkProxy_Base_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDBots_Public_NavLinkProxy_Base_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDBots_Public_NavLinkProxy_Base_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDBots_Public_NavLinkProxy_Base_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DBDBots_Public_NavLinkProxy_Base_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDBots_Public_NavLinkProxy_Base_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDBots_Public_NavLinkProxy_Base_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDBOTS_API UClass* StaticClass<class ANavLinkProxy_Base>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDBots_Public_NavLinkProxy_Base_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
