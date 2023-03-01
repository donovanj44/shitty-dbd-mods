// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_MagicFountain_generated_h
#error "MagicFountain.generated.h already included, missing '#pragma once' in MagicFountain.h"
#endif
#define DEADBYDAYLIGHT_MagicFountain_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_MagicFountain_h_10_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_MagicFountain_h_10_RPC_WRAPPERS \
	virtual bool IsCorrupted_Implementation() const; \
 \
	DECLARE_FUNCTION(execIsCorrupted);


#define DeadByDaylight_Source_DeadByDaylight_Public_MagicFountain_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool IsCorrupted_Implementation() const; \
 \
	DECLARE_FUNCTION(execIsCorrupted);


#define DeadByDaylight_Source_DeadByDaylight_Public_MagicFountain_h_10_EVENT_PARMS \
	struct MagicFountain_eventIsCorrupted_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MagicFountain_eventIsCorrupted_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_MagicFountain_h_10_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_MagicFountain_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMagicFountain(); \
	friend struct Z_Construct_UClass_AMagicFountain_Statics; \
public: \
	DECLARE_CLASS(AMagicFountain, AInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AMagicFountain) \
	virtual UObject* _getUObject() const override { return const_cast<AMagicFountain*>(this); }


#define DeadByDaylight_Source_DeadByDaylight_Public_MagicFountain_h_10_INCLASS \
private: \
	static void StaticRegisterNativesAMagicFountain(); \
	friend struct Z_Construct_UClass_AMagicFountain_Statics; \
public: \
	DECLARE_CLASS(AMagicFountain, AInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AMagicFountain) \
	virtual UObject* _getUObject() const override { return const_cast<AMagicFountain*>(this); }


#define DeadByDaylight_Source_DeadByDaylight_Public_MagicFountain_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMagicFountain(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMagicFountain) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMagicFountain); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMagicFountain); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMagicFountain(AMagicFountain&&); \
	NO_API AMagicFountain(const AMagicFountain&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_MagicFountain_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMagicFountain(AMagicFountain&&); \
	NO_API AMagicFountain(const AMagicFountain&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMagicFountain); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMagicFountain); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMagicFountain)


#define DeadByDaylight_Source_DeadByDaylight_Public_MagicFountain_h_10_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DeadByDaylight_Public_MagicFountain_h_8_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_MagicFountain_h_10_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_MagicFountain_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_MagicFountain_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_MagicFountain_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_MagicFountain_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_MagicFountain_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_MagicFountain_h_10_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_MagicFountain_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_MagicFountain_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_MagicFountain_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_MagicFountain_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_MagicFountain_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_MagicFountain_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_MagicFountain_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_MagicFountain_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class AMagicFountain>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_MagicFountain_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
