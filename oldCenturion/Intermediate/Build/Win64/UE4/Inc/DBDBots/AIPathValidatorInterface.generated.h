// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDBOTS_AIPathValidatorInterface_generated_h
#error "AIPathValidatorInterface.generated.h already included, missing '#pragma once' in AIPathValidatorInterface.h"
#endif
#define DBDBOTS_AIPathValidatorInterface_generated_h

#define DeadByDaylight_Source_DBDBots_Public_AIPathValidatorInterface_h_8_SPARSE_DATA
#define DeadByDaylight_Source_DBDBots_Public_AIPathValidatorInterface_h_8_RPC_WRAPPERS
#define DeadByDaylight_Source_DBDBots_Public_AIPathValidatorInterface_h_8_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_DBDBots_Public_AIPathValidatorInterface_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIPathValidatorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIPathValidatorInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIPathValidatorInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIPathValidatorInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIPathValidatorInterface(UAIPathValidatorInterface&&); \
	NO_API UAIPathValidatorInterface(const UAIPathValidatorInterface&); \
public:


#define DeadByDaylight_Source_DBDBots_Public_AIPathValidatorInterface_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIPathValidatorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIPathValidatorInterface(UAIPathValidatorInterface&&); \
	NO_API UAIPathValidatorInterface(const UAIPathValidatorInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIPathValidatorInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIPathValidatorInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIPathValidatorInterface)


#define DeadByDaylight_Source_DBDBots_Public_AIPathValidatorInterface_h_8_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAIPathValidatorInterface(); \
	friend struct Z_Construct_UClass_UAIPathValidatorInterface_Statics; \
public: \
	DECLARE_CLASS(UAIPathValidatorInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDBots"), NO_API) \
	DECLARE_SERIALIZER(UAIPathValidatorInterface)


#define DeadByDaylight_Source_DBDBots_Public_AIPathValidatorInterface_h_8_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Source_DBDBots_Public_AIPathValidatorInterface_h_8_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Source_DBDBots_Public_AIPathValidatorInterface_h_8_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDBots_Public_AIPathValidatorInterface_h_8_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Source_DBDBots_Public_AIPathValidatorInterface_h_8_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Source_DBDBots_Public_AIPathValidatorInterface_h_8_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDBots_Public_AIPathValidatorInterface_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAIPathValidatorInterface() {} \
public: \
	typedef UAIPathValidatorInterface UClassType; \
	typedef IAIPathValidatorInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Source_DBDBots_Public_AIPathValidatorInterface_h_8_INCLASS_IINTERFACE \
protected: \
	virtual ~IAIPathValidatorInterface() {} \
public: \
	typedef UAIPathValidatorInterface UClassType; \
	typedef IAIPathValidatorInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Source_DBDBots_Public_AIPathValidatorInterface_h_6_PROLOG
#define DeadByDaylight_Source_DBDBots_Public_AIPathValidatorInterface_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDBots_Public_AIPathValidatorInterface_h_8_SPARSE_DATA \
	DeadByDaylight_Source_DBDBots_Public_AIPathValidatorInterface_h_8_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDBots_Public_AIPathValidatorInterface_h_8_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDBots_Public_AIPathValidatorInterface_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDBots_Public_AIPathValidatorInterface_h_8_SPARSE_DATA \
	DeadByDaylight_Source_DBDBots_Public_AIPathValidatorInterface_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDBots_Public_AIPathValidatorInterface_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDBOTS_API UClass* StaticClass<class UAIPathValidatorInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDBots_Public_AIPathValidatorInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
