// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMPETENCE_ModifierProvider_generated_h
#error "ModifierProvider.generated.h already included, missing '#pragma once' in ModifierProvider.h"
#endif
#define COMPETENCE_ModifierProvider_generated_h

#define DeadByDaylight_Source_Competence_Public_ModifierProvider_h_8_SPARSE_DATA
#define DeadByDaylight_Source_Competence_Public_ModifierProvider_h_8_RPC_WRAPPERS
#define DeadByDaylight_Source_Competence_Public_ModifierProvider_h_8_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_Competence_Public_ModifierProvider_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModifierProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModifierProvider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModifierProvider); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModifierProvider); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UModifierProvider(UModifierProvider&&); \
	NO_API UModifierProvider(const UModifierProvider&); \
public:


#define DeadByDaylight_Source_Competence_Public_ModifierProvider_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModifierProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UModifierProvider(UModifierProvider&&); \
	NO_API UModifierProvider(const UModifierProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModifierProvider); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModifierProvider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModifierProvider)


#define DeadByDaylight_Source_Competence_Public_ModifierProvider_h_8_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUModifierProvider(); \
	friend struct Z_Construct_UClass_UModifierProvider_Statics; \
public: \
	DECLARE_CLASS(UModifierProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Competence"), NO_API) \
	DECLARE_SERIALIZER(UModifierProvider)


#define DeadByDaylight_Source_Competence_Public_ModifierProvider_h_8_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Source_Competence_Public_ModifierProvider_h_8_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Source_Competence_Public_ModifierProvider_h_8_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_Competence_Public_ModifierProvider_h_8_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Source_Competence_Public_ModifierProvider_h_8_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Source_Competence_Public_ModifierProvider_h_8_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_Competence_Public_ModifierProvider_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IModifierProvider() {} \
public: \
	typedef UModifierProvider UClassType; \
	typedef IModifierProvider ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Source_Competence_Public_ModifierProvider_h_8_INCLASS_IINTERFACE \
protected: \
	virtual ~IModifierProvider() {} \
public: \
	typedef UModifierProvider UClassType; \
	typedef IModifierProvider ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Source_Competence_Public_ModifierProvider_h_6_PROLOG
#define DeadByDaylight_Source_Competence_Public_ModifierProvider_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Competence_Public_ModifierProvider_h_8_SPARSE_DATA \
	DeadByDaylight_Source_Competence_Public_ModifierProvider_h_8_RPC_WRAPPERS \
	DeadByDaylight_Source_Competence_Public_ModifierProvider_h_8_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_Competence_Public_ModifierProvider_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Competence_Public_ModifierProvider_h_8_SPARSE_DATA \
	DeadByDaylight_Source_Competence_Public_ModifierProvider_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_Competence_Public_ModifierProvider_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPETENCE_API UClass* StaticClass<class UModifierProvider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_Competence_Public_ModifierProvider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
