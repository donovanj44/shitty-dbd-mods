// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
#ifdef DEADBYDAYLIGHT_ItemPerformedInteraction_generated_h
#error "ItemPerformedInteraction.generated.h already included, missing '#pragma once' in ItemPerformedInteraction.h"
#endif
#define DEADBYDAYLIGHT_ItemPerformedInteraction_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_ItemPerformedInteraction_h_10_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_ItemPerformedInteraction_h_10_RPC_WRAPPERS \
	virtual bool IsInteractionPerformedWithItem_Implementation(ADBDPlayer* instigator) { return false; }; \
 \
	DECLARE_FUNCTION(execIsInteractionPerformedWithItem);


#define DeadByDaylight_Source_DeadByDaylight_Public_ItemPerformedInteraction_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool IsInteractionPerformedWithItem_Implementation(ADBDPlayer* instigator) { return false; }; \
 \
	DECLARE_FUNCTION(execIsInteractionPerformedWithItem);


#define DeadByDaylight_Source_DeadByDaylight_Public_ItemPerformedInteraction_h_10_EVENT_PARMS \
	struct ItemPerformedInteraction_eventIsInteractionPerformedWithItem_Parms \
	{ \
		ADBDPlayer* instigator; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ItemPerformedInteraction_eventIsInteractionPerformedWithItem_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_ItemPerformedInteraction_h_10_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_ItemPerformedInteraction_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DEADBYDAYLIGHT_API UItemPerformedInteraction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemPerformedInteraction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DEADBYDAYLIGHT_API, UItemPerformedInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemPerformedInteraction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DEADBYDAYLIGHT_API UItemPerformedInteraction(UItemPerformedInteraction&&); \
	DEADBYDAYLIGHT_API UItemPerformedInteraction(const UItemPerformedInteraction&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_ItemPerformedInteraction_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DEADBYDAYLIGHT_API UItemPerformedInteraction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DEADBYDAYLIGHT_API UItemPerformedInteraction(UItemPerformedInteraction&&); \
	DEADBYDAYLIGHT_API UItemPerformedInteraction(const UItemPerformedInteraction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DEADBYDAYLIGHT_API, UItemPerformedInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemPerformedInteraction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemPerformedInteraction)


#define DeadByDaylight_Source_DeadByDaylight_Public_ItemPerformedInteraction_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUItemPerformedInteraction(); \
	friend struct Z_Construct_UClass_UItemPerformedInteraction_Statics; \
public: \
	DECLARE_CLASS(UItemPerformedInteraction, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), DEADBYDAYLIGHT_API) \
	DECLARE_SERIALIZER(UItemPerformedInteraction)


#define DeadByDaylight_Source_DeadByDaylight_Public_ItemPerformedInteraction_h_10_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Source_DeadByDaylight_Public_ItemPerformedInteraction_h_10_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Source_DeadByDaylight_Public_ItemPerformedInteraction_h_10_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_ItemPerformedInteraction_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Source_DeadByDaylight_Public_ItemPerformedInteraction_h_10_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Source_DeadByDaylight_Public_ItemPerformedInteraction_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_ItemPerformedInteraction_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IItemPerformedInteraction() {} \
public: \
	typedef UItemPerformedInteraction UClassType; \
	typedef IItemPerformedInteraction ThisClass; \
	static bool Execute_IsInteractionPerformedWithItem(UObject* O, ADBDPlayer* instigator); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Source_DeadByDaylight_Public_ItemPerformedInteraction_h_10_INCLASS_IINTERFACE \
protected: \
	virtual ~IItemPerformedInteraction() {} \
public: \
	typedef UItemPerformedInteraction UClassType; \
	typedef IItemPerformedInteraction ThisClass; \
	static bool Execute_IsInteractionPerformedWithItem(UObject* O, ADBDPlayer* instigator); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Source_DeadByDaylight_Public_ItemPerformedInteraction_h_8_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_ItemPerformedInteraction_h_10_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_ItemPerformedInteraction_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_ItemPerformedInteraction_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_ItemPerformedInteraction_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_ItemPerformedInteraction_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_ItemPerformedInteraction_h_10_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_ItemPerformedInteraction_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_ItemPerformedInteraction_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_ItemPerformedInteraction_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_ItemPerformedInteraction_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_ItemPerformedInteraction_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UItemPerformedInteraction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ItemPerformedInteraction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
