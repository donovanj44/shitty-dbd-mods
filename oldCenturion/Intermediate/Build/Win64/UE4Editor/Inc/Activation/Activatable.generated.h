// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACTIVATION_Activatable_generated_h
#error "Activatable.generated.h already included, missing '#pragma once' in Activatable.h"
#endif
#define ACTIVATION_Activatable_generated_h

#define DeadByDaylight_Source_Activation_Public_Activatable_h_8_SPARSE_DATA
#define DeadByDaylight_Source_Activation_Public_Activatable_h_8_RPC_WRAPPERS
#define DeadByDaylight_Source_Activation_Public_Activatable_h_8_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_Activation_Public_Activatable_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActivatable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActivatable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActivatable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActivatable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActivatable(UActivatable&&); \
	NO_API UActivatable(const UActivatable&); \
public:


#define DeadByDaylight_Source_Activation_Public_Activatable_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActivatable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActivatable(UActivatable&&); \
	NO_API UActivatable(const UActivatable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActivatable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActivatable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActivatable)


#define DeadByDaylight_Source_Activation_Public_Activatable_h_8_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUActivatable(); \
	friend struct Z_Construct_UClass_UActivatable_Statics; \
public: \
	DECLARE_CLASS(UActivatable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Activation"), NO_API) \
	DECLARE_SERIALIZER(UActivatable)


#define DeadByDaylight_Source_Activation_Public_Activatable_h_8_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Source_Activation_Public_Activatable_h_8_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Source_Activation_Public_Activatable_h_8_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_Activation_Public_Activatable_h_8_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Source_Activation_Public_Activatable_h_8_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Source_Activation_Public_Activatable_h_8_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_Activation_Public_Activatable_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IActivatable() {} \
public: \
	typedef UActivatable UClassType; \
	typedef IActivatable ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Source_Activation_Public_Activatable_h_8_INCLASS_IINTERFACE \
protected: \
	virtual ~IActivatable() {} \
public: \
	typedef UActivatable UClassType; \
	typedef IActivatable ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Source_Activation_Public_Activatable_h_6_PROLOG
#define DeadByDaylight_Source_Activation_Public_Activatable_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Activation_Public_Activatable_h_8_SPARSE_DATA \
	DeadByDaylight_Source_Activation_Public_Activatable_h_8_RPC_WRAPPERS \
	DeadByDaylight_Source_Activation_Public_Activatable_h_8_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_Activation_Public_Activatable_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Activation_Public_Activatable_h_8_SPARSE_DATA \
	DeadByDaylight_Source_Activation_Public_Activatable_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_Activation_Public_Activatable_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIVATION_API UClass* StaticClass<class UActivatable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_Activation_Public_Activatable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
