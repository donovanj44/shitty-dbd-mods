// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNITTESTUTILITIES_TestInterface_generated_h
#error "TestInterface.generated.h already included, missing '#pragma once' in TestInterface.h"
#endif
#define UNITTESTUTILITIES_TestInterface_generated_h

#define DeadByDaylight_Source_UnitTestUtilities_Public_TestInterface_h_8_SPARSE_DATA
#define DeadByDaylight_Source_UnitTestUtilities_Public_TestInterface_h_8_RPC_WRAPPERS
#define DeadByDaylight_Source_UnitTestUtilities_Public_TestInterface_h_8_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_UnitTestUtilities_Public_TestInterface_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTestInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTestInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTestInterface(UTestInterface&&); \
	NO_API UTestInterface(const UTestInterface&); \
public:


#define DeadByDaylight_Source_UnitTestUtilities_Public_TestInterface_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTestInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTestInterface(UTestInterface&&); \
	NO_API UTestInterface(const UTestInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTestInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestInterface)


#define DeadByDaylight_Source_UnitTestUtilities_Public_TestInterface_h_8_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTestInterface(); \
	friend struct Z_Construct_UClass_UTestInterface_Statics; \
public: \
	DECLARE_CLASS(UTestInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/UnitTestUtilities"), NO_API) \
	DECLARE_SERIALIZER(UTestInterface)


#define DeadByDaylight_Source_UnitTestUtilities_Public_TestInterface_h_8_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Source_UnitTestUtilities_Public_TestInterface_h_8_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Source_UnitTestUtilities_Public_TestInterface_h_8_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_UnitTestUtilities_Public_TestInterface_h_8_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Source_UnitTestUtilities_Public_TestInterface_h_8_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Source_UnitTestUtilities_Public_TestInterface_h_8_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_UnitTestUtilities_Public_TestInterface_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITestInterface() {} \
public: \
	typedef UTestInterface UClassType; \
	typedef ITestInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Source_UnitTestUtilities_Public_TestInterface_h_8_INCLASS_IINTERFACE \
protected: \
	virtual ~ITestInterface() {} \
public: \
	typedef UTestInterface UClassType; \
	typedef ITestInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Source_UnitTestUtilities_Public_TestInterface_h_6_PROLOG
#define DeadByDaylight_Source_UnitTestUtilities_Public_TestInterface_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_UnitTestUtilities_Public_TestInterface_h_8_SPARSE_DATA \
	DeadByDaylight_Source_UnitTestUtilities_Public_TestInterface_h_8_RPC_WRAPPERS \
	DeadByDaylight_Source_UnitTestUtilities_Public_TestInterface_h_8_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_UnitTestUtilities_Public_TestInterface_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_UnitTestUtilities_Public_TestInterface_h_8_SPARSE_DATA \
	DeadByDaylight_Source_UnitTestUtilities_Public_TestInterface_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_UnitTestUtilities_Public_TestInterface_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNITTESTUTILITIES_API UClass* StaticClass<class UTestInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_UnitTestUtilities_Public_TestInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
