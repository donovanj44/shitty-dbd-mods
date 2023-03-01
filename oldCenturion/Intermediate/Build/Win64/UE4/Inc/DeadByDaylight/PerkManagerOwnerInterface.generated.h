// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_PerkManagerOwnerInterface_generated_h
#error "PerkManagerOwnerInterface.generated.h already included, missing '#pragma once' in PerkManagerOwnerInterface.h"
#endif
#define DEADBYDAYLIGHT_PerkManagerOwnerInterface_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_PerkManagerOwnerInterface_h_8_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_PerkManagerOwnerInterface_h_8_RPC_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_PerkManagerOwnerInterface_h_8_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_DeadByDaylight_Public_PerkManagerOwnerInterface_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPerkManagerOwnerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPerkManagerOwnerInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPerkManagerOwnerInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPerkManagerOwnerInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPerkManagerOwnerInterface(UPerkManagerOwnerInterface&&); \
	NO_API UPerkManagerOwnerInterface(const UPerkManagerOwnerInterface&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_PerkManagerOwnerInterface_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPerkManagerOwnerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPerkManagerOwnerInterface(UPerkManagerOwnerInterface&&); \
	NO_API UPerkManagerOwnerInterface(const UPerkManagerOwnerInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPerkManagerOwnerInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPerkManagerOwnerInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPerkManagerOwnerInterface)


#define DeadByDaylight_Source_DeadByDaylight_Public_PerkManagerOwnerInterface_h_8_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPerkManagerOwnerInterface(); \
	friend struct Z_Construct_UClass_UPerkManagerOwnerInterface_Statics; \
public: \
	DECLARE_CLASS(UPerkManagerOwnerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UPerkManagerOwnerInterface)


#define DeadByDaylight_Source_DeadByDaylight_Public_PerkManagerOwnerInterface_h_8_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Source_DeadByDaylight_Public_PerkManagerOwnerInterface_h_8_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Source_DeadByDaylight_Public_PerkManagerOwnerInterface_h_8_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_PerkManagerOwnerInterface_h_8_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Source_DeadByDaylight_Public_PerkManagerOwnerInterface_h_8_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Source_DeadByDaylight_Public_PerkManagerOwnerInterface_h_8_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_PerkManagerOwnerInterface_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPerkManagerOwnerInterface() {} \
public: \
	typedef UPerkManagerOwnerInterface UClassType; \
	typedef IPerkManagerOwnerInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Source_DeadByDaylight_Public_PerkManagerOwnerInterface_h_8_INCLASS_IINTERFACE \
protected: \
	virtual ~IPerkManagerOwnerInterface() {} \
public: \
	typedef UPerkManagerOwnerInterface UClassType; \
	typedef IPerkManagerOwnerInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Source_DeadByDaylight_Public_PerkManagerOwnerInterface_h_6_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_PerkManagerOwnerInterface_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_PerkManagerOwnerInterface_h_8_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_PerkManagerOwnerInterface_h_8_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_PerkManagerOwnerInterface_h_8_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_PerkManagerOwnerInterface_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_PerkManagerOwnerInterface_h_8_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_PerkManagerOwnerInterface_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_PerkManagerOwnerInterface_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UPerkManagerOwnerInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_PerkManagerOwnerInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
