// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef THEEXECUTIONER_Tormentor_generated_h
#error "Tormentor.generated.h already included, missing '#pragma once' in Tormentor.h"
#endif
#define THEEXECUTIONER_Tormentor_generated_h

#define DeadByDaylight_Source_TheExecutioner_Public_Tormentor_h_9_SPARSE_DATA
#define DeadByDaylight_Source_TheExecutioner_Public_Tormentor_h_9_RPC_WRAPPERS
#define DeadByDaylight_Source_TheExecutioner_Public_Tormentor_h_9_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_TheExecutioner_Public_Tormentor_h_9_EVENT_PARMS \
	struct Tormentor_eventGetTormentTrailAttackSpawnPoint_Parms \
	{ \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Tormentor_eventGetTormentTrailAttackSpawnPoint_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct Tormentor_eventGetTormentTrailSpawnPoint_Parms \
	{ \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Tormentor_eventGetTormentTrailSpawnPoint_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	};


#define DeadByDaylight_Source_TheExecutioner_Public_Tormentor_h_9_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheExecutioner_Public_Tormentor_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	THEEXECUTIONER_API UTormentor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTormentor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(THEEXECUTIONER_API, UTormentor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTormentor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	THEEXECUTIONER_API UTormentor(UTormentor&&); \
	THEEXECUTIONER_API UTormentor(const UTormentor&); \
public:


#define DeadByDaylight_Source_TheExecutioner_Public_Tormentor_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	THEEXECUTIONER_API UTormentor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	THEEXECUTIONER_API UTormentor(UTormentor&&); \
	THEEXECUTIONER_API UTormentor(const UTormentor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(THEEXECUTIONER_API, UTormentor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTormentor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTormentor)


#define DeadByDaylight_Source_TheExecutioner_Public_Tormentor_h_9_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTormentor(); \
	friend struct Z_Construct_UClass_UTormentor_Statics; \
public: \
	DECLARE_CLASS(UTormentor, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TheExecutioner"), THEEXECUTIONER_API) \
	DECLARE_SERIALIZER(UTormentor)


#define DeadByDaylight_Source_TheExecutioner_Public_Tormentor_h_9_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Source_TheExecutioner_Public_Tormentor_h_9_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Source_TheExecutioner_Public_Tormentor_h_9_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheExecutioner_Public_Tormentor_h_9_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Source_TheExecutioner_Public_Tormentor_h_9_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Source_TheExecutioner_Public_Tormentor_h_9_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheExecutioner_Public_Tormentor_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITormentor() {} \
public: \
	typedef UTormentor UClassType; \
	typedef ITormentor ThisClass; \
	static FVector Execute_GetTormentTrailAttackSpawnPoint(UObject* O); \
	static FVector Execute_GetTormentTrailSpawnPoint(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Source_TheExecutioner_Public_Tormentor_h_9_INCLASS_IINTERFACE \
protected: \
	virtual ~ITormentor() {} \
public: \
	typedef UTormentor UClassType; \
	typedef ITormentor ThisClass; \
	static FVector Execute_GetTormentTrailAttackSpawnPoint(UObject* O); \
	static FVector Execute_GetTormentTrailSpawnPoint(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Source_TheExecutioner_Public_Tormentor_h_7_PROLOG \
	DeadByDaylight_Source_TheExecutioner_Public_Tormentor_h_9_EVENT_PARMS


#define DeadByDaylight_Source_TheExecutioner_Public_Tormentor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheExecutioner_Public_Tormentor_h_9_SPARSE_DATA \
	DeadByDaylight_Source_TheExecutioner_Public_Tormentor_h_9_RPC_WRAPPERS \
	DeadByDaylight_Source_TheExecutioner_Public_Tormentor_h_9_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheExecutioner_Public_Tormentor_h_9_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheExecutioner_Public_Tormentor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheExecutioner_Public_Tormentor_h_9_SPARSE_DATA \
	DeadByDaylight_Source_TheExecutioner_Public_Tormentor_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheExecutioner_Public_Tormentor_h_9_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheExecutioner_Public_Tormentor_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEEXECUTIONER_API UClass* StaticClass<class UTormentor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheExecutioner_Public_Tormentor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
