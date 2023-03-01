// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef DEADBYDAYLIGHT_Fadeable_generated_h
#error "Fadeable.generated.h already included, missing '#pragma once' in Fadeable.h"
#endif
#define DEADBYDAYLIGHT_Fadeable_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_Fadeable_h_10_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_Fadeable_h_10_RPC_WRAPPERS \
	virtual void OnAlphaChanged_Implementation(float newAlpha, AActor* other) {}; \
	virtual void OnFadeBegin_Implementation(AActor* other) {}; \
	virtual void OnFadeEnd_Implementation(AActor* other) {}; \
 \
	DECLARE_FUNCTION(execOnAlphaChanged); \
	DECLARE_FUNCTION(execOnFadeBegin); \
	DECLARE_FUNCTION(execOnFadeEnd);


#define DeadByDaylight_Source_DeadByDaylight_Public_Fadeable_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnAlphaChanged_Implementation(float newAlpha, AActor* other) {}; \
	virtual void OnFadeBegin_Implementation(AActor* other) {}; \
	virtual void OnFadeEnd_Implementation(AActor* other) {}; \
 \
	DECLARE_FUNCTION(execOnAlphaChanged); \
	DECLARE_FUNCTION(execOnFadeBegin); \
	DECLARE_FUNCTION(execOnFadeEnd);


#define DeadByDaylight_Source_DeadByDaylight_Public_Fadeable_h_10_EVENT_PARMS \
	struct Fadeable_eventOnAlphaChanged_Parms \
	{ \
		float newAlpha; \
		AActor* other; \
	}; \
	struct Fadeable_eventOnFadeBegin_Parms \
	{ \
		AActor* other; \
	}; \
	struct Fadeable_eventOnFadeEnd_Parms \
	{ \
		AActor* other; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_Fadeable_h_10_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_Fadeable_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFadeable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFadeable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFadeable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFadeable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFadeable(UFadeable&&); \
	NO_API UFadeable(const UFadeable&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_Fadeable_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFadeable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFadeable(UFadeable&&); \
	NO_API UFadeable(const UFadeable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFadeable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFadeable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFadeable)


#define DeadByDaylight_Source_DeadByDaylight_Public_Fadeable_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUFadeable(); \
	friend struct Z_Construct_UClass_UFadeable_Statics; \
public: \
	DECLARE_CLASS(UFadeable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UFadeable)


#define DeadByDaylight_Source_DeadByDaylight_Public_Fadeable_h_10_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Source_DeadByDaylight_Public_Fadeable_h_10_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Source_DeadByDaylight_Public_Fadeable_h_10_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_Fadeable_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Source_DeadByDaylight_Public_Fadeable_h_10_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Source_DeadByDaylight_Public_Fadeable_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_Fadeable_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IFadeable() {} \
public: \
	typedef UFadeable UClassType; \
	typedef IFadeable ThisClass; \
	static void Execute_OnAlphaChanged(UObject* O, float newAlpha, AActor* other); \
	static void Execute_OnFadeBegin(UObject* O, AActor* other); \
	static void Execute_OnFadeEnd(UObject* O, AActor* other); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Source_DeadByDaylight_Public_Fadeable_h_10_INCLASS_IINTERFACE \
protected: \
	virtual ~IFadeable() {} \
public: \
	typedef UFadeable UClassType; \
	typedef IFadeable ThisClass; \
	static void Execute_OnAlphaChanged(UObject* O, float newAlpha, AActor* other); \
	static void Execute_OnFadeBegin(UObject* O, AActor* other); \
	static void Execute_OnFadeEnd(UObject* O, AActor* other); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Source_DeadByDaylight_Public_Fadeable_h_8_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_Fadeable_h_10_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_Fadeable_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_Fadeable_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_Fadeable_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_Fadeable_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_Fadeable_h_10_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_Fadeable_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_Fadeable_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_Fadeable_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_Fadeable_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_Fadeable_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UFadeable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_Fadeable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
