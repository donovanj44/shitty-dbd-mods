// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_PushableInterface_generated_h
#error "PushableInterface.generated.h already included, missing '#pragma once' in PushableInterface.h"
#endif
#define DEADBYDAYLIGHT_PushableInterface_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_PushableInterface_h_8_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_PushableInterface_h_8_RPC_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_PushableInterface_h_8_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_DeadByDaylight_Public_PushableInterface_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DEADBYDAYLIGHT_API UPushableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPushableInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DEADBYDAYLIGHT_API, UPushableInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPushableInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DEADBYDAYLIGHT_API UPushableInterface(UPushableInterface&&); \
	DEADBYDAYLIGHT_API UPushableInterface(const UPushableInterface&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_PushableInterface_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DEADBYDAYLIGHT_API UPushableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DEADBYDAYLIGHT_API UPushableInterface(UPushableInterface&&); \
	DEADBYDAYLIGHT_API UPushableInterface(const UPushableInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DEADBYDAYLIGHT_API, UPushableInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPushableInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPushableInterface)


#define DeadByDaylight_Source_DeadByDaylight_Public_PushableInterface_h_8_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPushableInterface(); \
	friend struct Z_Construct_UClass_UPushableInterface_Statics; \
public: \
	DECLARE_CLASS(UPushableInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), DEADBYDAYLIGHT_API) \
	DECLARE_SERIALIZER(UPushableInterface)


#define DeadByDaylight_Source_DeadByDaylight_Public_PushableInterface_h_8_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Source_DeadByDaylight_Public_PushableInterface_h_8_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Source_DeadByDaylight_Public_PushableInterface_h_8_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_PushableInterface_h_8_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Source_DeadByDaylight_Public_PushableInterface_h_8_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Source_DeadByDaylight_Public_PushableInterface_h_8_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_PushableInterface_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPushableInterface() {} \
public: \
	typedef UPushableInterface UClassType; \
	typedef IPushableInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Source_DeadByDaylight_Public_PushableInterface_h_8_INCLASS_IINTERFACE \
protected: \
	virtual ~IPushableInterface() {} \
public: \
	typedef UPushableInterface UClassType; \
	typedef IPushableInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Source_DeadByDaylight_Public_PushableInterface_h_6_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_PushableInterface_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_PushableInterface_h_8_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_PushableInterface_h_8_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_PushableInterface_h_8_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_PushableInterface_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_PushableInterface_h_8_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_PushableInterface_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_PushableInterface_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UPushableInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_PushableInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
