// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EOfferingAnimState : uint8;
#ifdef DEADBYDAYLIGHT_OfferingCard_generated_h
#error "OfferingCard.generated.h already included, missing '#pragma once' in OfferingCard.h"
#endif
#define DEADBYDAYLIGHT_OfferingCard_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_OfferingCard_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_OfferingCard_h_11_RPC_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_OfferingCard_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_DeadByDaylight_Public_OfferingCard_h_11_EVENT_PARMS \
	struct OfferingCard_eventPlayAnim_Parms \
	{ \
		EOfferingAnimState state; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_OfferingCard_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_OfferingCard_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOfferingCard(); \
	friend struct Z_Construct_UClass_AOfferingCard_Statics; \
public: \
	DECLARE_CLASS(AOfferingCard, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AOfferingCard)


#define DeadByDaylight_Source_DeadByDaylight_Public_OfferingCard_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAOfferingCard(); \
	friend struct Z_Construct_UClass_AOfferingCard_Statics; \
public: \
	DECLARE_CLASS(AOfferingCard, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AOfferingCard)


#define DeadByDaylight_Source_DeadByDaylight_Public_OfferingCard_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOfferingCard(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOfferingCard) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOfferingCard); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOfferingCard); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOfferingCard(AOfferingCard&&); \
	NO_API AOfferingCard(const AOfferingCard&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_OfferingCard_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOfferingCard(AOfferingCard&&); \
	NO_API AOfferingCard(const AOfferingCard&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOfferingCard); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOfferingCard); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOfferingCard)


#define DeadByDaylight_Source_DeadByDaylight_Public_OfferingCard_h_11_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DeadByDaylight_Public_OfferingCard_h_9_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_OfferingCard_h_11_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_OfferingCard_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_OfferingCard_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_OfferingCard_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_OfferingCard_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_OfferingCard_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_OfferingCard_h_11_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_OfferingCard_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_OfferingCard_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_OfferingCard_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_OfferingCard_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_OfferingCard_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_OfferingCard_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_OfferingCard_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_OfferingCard_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class AOfferingCard>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_OfferingCard_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
