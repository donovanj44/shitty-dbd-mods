// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEK23_TricksterCharacterVFXInterface_generated_h
#error "TricksterCharacterVFXInterface.generated.h already included, missing '#pragma once' in TricksterCharacterVFXInterface.h"
#endif
#define THEK23_TricksterCharacterVFXInterface_generated_h

#define DeadByDaylight_Source_TheK23_Public_TricksterCharacterVFXInterface_h_8_SPARSE_DATA
#define DeadByDaylight_Source_TheK23_Public_TricksterCharacterVFXInterface_h_8_RPC_WRAPPERS
#define DeadByDaylight_Source_TheK23_Public_TricksterCharacterVFXInterface_h_8_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_TheK23_Public_TricksterCharacterVFXInterface_h_8_EVENT_PARMS \
	struct TricksterCharacterVFXInterface_eventSetIsInCooldown_Parms \
	{ \
		bool isInCooldown; \
	}; \
	struct TricksterCharacterVFXInterface_eventSetIsSuperModeReady_Parms \
	{ \
		bool isSuperModeReady; \
	}; \
	struct TricksterCharacterVFXInterface_eventSetKnivesVisibility_Parms \
	{ \
		bool leftKnife; \
		bool rightKnife; \
	}; \
	struct TricksterCharacterVFXInterface_eventSetSuperModeActive_Parms \
	{ \
		bool active; \
	};


#define DeadByDaylight_Source_TheK23_Public_TricksterCharacterVFXInterface_h_8_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheK23_Public_TricksterCharacterVFXInterface_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTricksterCharacterVFXInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTricksterCharacterVFXInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTricksterCharacterVFXInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTricksterCharacterVFXInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTricksterCharacterVFXInterface(UTricksterCharacterVFXInterface&&); \
	NO_API UTricksterCharacterVFXInterface(const UTricksterCharacterVFXInterface&); \
public:


#define DeadByDaylight_Source_TheK23_Public_TricksterCharacterVFXInterface_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTricksterCharacterVFXInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTricksterCharacterVFXInterface(UTricksterCharacterVFXInterface&&); \
	NO_API UTricksterCharacterVFXInterface(const UTricksterCharacterVFXInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTricksterCharacterVFXInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTricksterCharacterVFXInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTricksterCharacterVFXInterface)


#define DeadByDaylight_Source_TheK23_Public_TricksterCharacterVFXInterface_h_8_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTricksterCharacterVFXInterface(); \
	friend struct Z_Construct_UClass_UTricksterCharacterVFXInterface_Statics; \
public: \
	DECLARE_CLASS(UTricksterCharacterVFXInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TheK23"), NO_API) \
	DECLARE_SERIALIZER(UTricksterCharacterVFXInterface)


#define DeadByDaylight_Source_TheK23_Public_TricksterCharacterVFXInterface_h_8_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Source_TheK23_Public_TricksterCharacterVFXInterface_h_8_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Source_TheK23_Public_TricksterCharacterVFXInterface_h_8_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK23_Public_TricksterCharacterVFXInterface_h_8_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Source_TheK23_Public_TricksterCharacterVFXInterface_h_8_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Source_TheK23_Public_TricksterCharacterVFXInterface_h_8_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK23_Public_TricksterCharacterVFXInterface_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITricksterCharacterVFXInterface() {} \
public: \
	typedef UTricksterCharacterVFXInterface UClassType; \
	typedef ITricksterCharacterVFXInterface ThisClass; \
	static void Execute_HideWeapon(UObject* O); \
	static void Execute_SetIsInCooldown(UObject* O, bool isInCooldown); \
	static void Execute_SetIsSuperModeReady(UObject* O, bool isSuperModeReady); \
	static void Execute_SetKnivesVisibility(UObject* O, bool leftKnife, bool rightKnife); \
	static void Execute_SetSuperModeActive(UObject* O, bool active); \
	static void Execute_ShowWeapon(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Source_TheK23_Public_TricksterCharacterVFXInterface_h_8_INCLASS_IINTERFACE \
protected: \
	virtual ~ITricksterCharacterVFXInterface() {} \
public: \
	typedef UTricksterCharacterVFXInterface UClassType; \
	typedef ITricksterCharacterVFXInterface ThisClass; \
	static void Execute_HideWeapon(UObject* O); \
	static void Execute_SetIsInCooldown(UObject* O, bool isInCooldown); \
	static void Execute_SetIsSuperModeReady(UObject* O, bool isSuperModeReady); \
	static void Execute_SetKnivesVisibility(UObject* O, bool leftKnife, bool rightKnife); \
	static void Execute_SetSuperModeActive(UObject* O, bool active); \
	static void Execute_ShowWeapon(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Source_TheK23_Public_TricksterCharacterVFXInterface_h_6_PROLOG \
	DeadByDaylight_Source_TheK23_Public_TricksterCharacterVFXInterface_h_8_EVENT_PARMS


#define DeadByDaylight_Source_TheK23_Public_TricksterCharacterVFXInterface_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK23_Public_TricksterCharacterVFXInterface_h_8_SPARSE_DATA \
	DeadByDaylight_Source_TheK23_Public_TricksterCharacterVFXInterface_h_8_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK23_Public_TricksterCharacterVFXInterface_h_8_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK23_Public_TricksterCharacterVFXInterface_h_8_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK23_Public_TricksterCharacterVFXInterface_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK23_Public_TricksterCharacterVFXInterface_h_8_SPARSE_DATA \
	DeadByDaylight_Source_TheK23_Public_TricksterCharacterVFXInterface_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK23_Public_TricksterCharacterVFXInterface_h_8_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK23_Public_TricksterCharacterVFXInterface_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK23_API UClass* StaticClass<class UTricksterCharacterVFXInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK23_Public_TricksterCharacterVFXInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
