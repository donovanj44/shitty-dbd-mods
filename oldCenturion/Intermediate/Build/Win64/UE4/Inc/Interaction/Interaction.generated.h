// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERACTION_Interaction_generated_h
#error "Interaction.generated.h already included, missing '#pragma once' in Interaction.h"
#endif
#define INTERACTION_Interaction_generated_h

#define DeadByDaylight_Source_Interaction_Public_Interaction_h_8_SPARSE_DATA
#define DeadByDaylight_Source_Interaction_Public_Interaction_h_8_RPC_WRAPPERS
#define DeadByDaylight_Source_Interaction_Public_Interaction_h_8_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_Interaction_Public_Interaction_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteraction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteraction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteraction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteraction(UInteraction&&); \
	NO_API UInteraction(const UInteraction&); \
public:


#define DeadByDaylight_Source_Interaction_Public_Interaction_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteraction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteraction(UInteraction&&); \
	NO_API UInteraction(const UInteraction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteraction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteraction)


#define DeadByDaylight_Source_Interaction_Public_Interaction_h_8_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteraction(); \
	friend struct Z_Construct_UClass_UInteraction_Statics; \
public: \
	DECLARE_CLASS(UInteraction, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Interaction"), NO_API) \
	DECLARE_SERIALIZER(UInteraction)


#define DeadByDaylight_Source_Interaction_Public_Interaction_h_8_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Source_Interaction_Public_Interaction_h_8_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Source_Interaction_Public_Interaction_h_8_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_Interaction_Public_Interaction_h_8_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Source_Interaction_Public_Interaction_h_8_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Source_Interaction_Public_Interaction_h_8_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_Interaction_Public_Interaction_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteraction() {} \
public: \
	typedef UInteraction UClassType; \
	typedef IInteraction ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Source_Interaction_Public_Interaction_h_8_INCLASS_IINTERFACE \
protected: \
	virtual ~IInteraction() {} \
public: \
	typedef UInteraction UClassType; \
	typedef IInteraction ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Source_Interaction_Public_Interaction_h_6_PROLOG
#define DeadByDaylight_Source_Interaction_Public_Interaction_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Interaction_Public_Interaction_h_8_SPARSE_DATA \
	DeadByDaylight_Source_Interaction_Public_Interaction_h_8_RPC_WRAPPERS \
	DeadByDaylight_Source_Interaction_Public_Interaction_h_8_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_Interaction_Public_Interaction_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Interaction_Public_Interaction_h_8_SPARSE_DATA \
	DeadByDaylight_Source_Interaction_Public_Interaction_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_Interaction_Public_Interaction_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTION_API UClass* StaticClass<class UInteraction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_Interaction_Public_Interaction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
