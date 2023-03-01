// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UChargerComponent;
#ifdef DEADBYDAYLIGHT_ToolBoxInterface_generated_h
#error "ToolBoxInterface.generated.h already included, missing '#pragma once' in ToolBoxInterface.h"
#endif
#define DEADBYDAYLIGHT_ToolBoxInterface_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_ToolBoxInterface_h_10_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_ToolBoxInterface_h_10_RPC_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_ToolBoxInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_DeadByDaylight_Public_ToolBoxInterface_h_10_EVENT_PARMS \
	struct ToolBoxInterface_eventGetChargerComponent_Parms \
	{ \
		UChargerComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ToolBoxInterface_eventGetChargerComponent_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_ToolBoxInterface_h_10_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_ToolBoxInterface_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DEADBYDAYLIGHT_API UToolBoxInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UToolBoxInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DEADBYDAYLIGHT_API, UToolBoxInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToolBoxInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DEADBYDAYLIGHT_API UToolBoxInterface(UToolBoxInterface&&); \
	DEADBYDAYLIGHT_API UToolBoxInterface(const UToolBoxInterface&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_ToolBoxInterface_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DEADBYDAYLIGHT_API UToolBoxInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DEADBYDAYLIGHT_API UToolBoxInterface(UToolBoxInterface&&); \
	DEADBYDAYLIGHT_API UToolBoxInterface(const UToolBoxInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DEADBYDAYLIGHT_API, UToolBoxInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToolBoxInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UToolBoxInterface)


#define DeadByDaylight_Source_DeadByDaylight_Public_ToolBoxInterface_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUToolBoxInterface(); \
	friend struct Z_Construct_UClass_UToolBoxInterface_Statics; \
public: \
	DECLARE_CLASS(UToolBoxInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), DEADBYDAYLIGHT_API) \
	DECLARE_SERIALIZER(UToolBoxInterface)


#define DeadByDaylight_Source_DeadByDaylight_Public_ToolBoxInterface_h_10_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Source_DeadByDaylight_Public_ToolBoxInterface_h_10_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Source_DeadByDaylight_Public_ToolBoxInterface_h_10_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_ToolBoxInterface_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Source_DeadByDaylight_Public_ToolBoxInterface_h_10_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Source_DeadByDaylight_Public_ToolBoxInterface_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_ToolBoxInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IToolBoxInterface() {} \
public: \
	typedef UToolBoxInterface UClassType; \
	typedef IToolBoxInterface ThisClass; \
	static UChargerComponent* Execute_GetChargerComponent(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Source_DeadByDaylight_Public_ToolBoxInterface_h_10_INCLASS_IINTERFACE \
protected: \
	virtual ~IToolBoxInterface() {} \
public: \
	typedef UToolBoxInterface UClassType; \
	typedef IToolBoxInterface ThisClass; \
	static UChargerComponent* Execute_GetChargerComponent(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Source_DeadByDaylight_Public_ToolBoxInterface_h_8_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_ToolBoxInterface_h_10_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_ToolBoxInterface_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_ToolBoxInterface_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_ToolBoxInterface_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_ToolBoxInterface_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_ToolBoxInterface_h_10_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_ToolBoxInterface_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_ToolBoxInterface_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_ToolBoxInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_ToolBoxInterface_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_ToolBoxInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UToolBoxInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ToolBoxInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
