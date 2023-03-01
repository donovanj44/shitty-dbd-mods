// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
class ACamperPlayer;
#ifdef THEK24_K24WhipAttack_generated_h
#error "K24WhipAttack.generated.h already included, missing '#pragma once' in K24WhipAttack.h"
#endif
#define THEK24_K24WhipAttack_generated_h

#define DeadByDaylight_Source_TheK24_Public_K24WhipAttack_h_11_SPARSE_DATA
#define DeadByDaylight_Source_TheK24_Public_K24WhipAttack_h_11_RPC_WRAPPERS \
	virtual void Client_ContaminationResult_Implementation(ADBDPlayer* target, bool isValid); \
	virtual void Server_ContaminatePlayer_Implementation(ACamperPlayer* target, const float targetLocationTimestamp); \
 \
	DECLARE_FUNCTION(execClient_ContaminationResult); \
	DECLARE_FUNCTION(execServer_ContaminatePlayer);


#define DeadByDaylight_Source_TheK24_Public_K24WhipAttack_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Client_ContaminationResult_Implementation(ADBDPlayer* target, bool isValid); \
	virtual void Server_ContaminatePlayer_Implementation(ACamperPlayer* target, const float targetLocationTimestamp); \
 \
	DECLARE_FUNCTION(execClient_ContaminationResult); \
	DECLARE_FUNCTION(execServer_ContaminatePlayer);


#define DeadByDaylight_Source_TheK24_Public_K24WhipAttack_h_11_EVENT_PARMS \
	struct K24WhipAttack_eventClient_ContaminationResult_Parms \
	{ \
		ADBDPlayer* target; \
		bool isValid; \
	}; \
	struct K24WhipAttack_eventServer_ContaminatePlayer_Parms \
	{ \
		ACamperPlayer* target; \
		float targetLocationTimestamp; \
	};


#define DeadByDaylight_Source_TheK24_Public_K24WhipAttack_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheK24_Public_K24WhipAttack_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUK24WhipAttack(); \
	friend struct Z_Construct_UClass_UK24WhipAttack_Statics; \
public: \
	DECLARE_CLASS(UK24WhipAttack, UPounceAttack, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK24"), NO_API) \
	DECLARE_SERIALIZER(UK24WhipAttack)


#define DeadByDaylight_Source_TheK24_Public_K24WhipAttack_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUK24WhipAttack(); \
	friend struct Z_Construct_UClass_UK24WhipAttack_Statics; \
public: \
	DECLARE_CLASS(UK24WhipAttack, UPounceAttack, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK24"), NO_API) \
	DECLARE_SERIALIZER(UK24WhipAttack)


#define DeadByDaylight_Source_TheK24_Public_K24WhipAttack_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UK24WhipAttack(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK24WhipAttack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK24WhipAttack); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK24WhipAttack); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK24WhipAttack(UK24WhipAttack&&); \
	NO_API UK24WhipAttack(const UK24WhipAttack&); \
public:


#define DeadByDaylight_Source_TheK24_Public_K24WhipAttack_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK24WhipAttack(UK24WhipAttack&&); \
	NO_API UK24WhipAttack(const UK24WhipAttack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK24WhipAttack); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK24WhipAttack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UK24WhipAttack)


#define DeadByDaylight_Source_TheK24_Public_K24WhipAttack_h_11_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_TheK24_Public_K24WhipAttack_h_9_PROLOG \
	DeadByDaylight_Source_TheK24_Public_K24WhipAttack_h_11_EVENT_PARMS


#define DeadByDaylight_Source_TheK24_Public_K24WhipAttack_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK24_Public_K24WhipAttack_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK24_Public_K24WhipAttack_h_11_SPARSE_DATA \
	DeadByDaylight_Source_TheK24_Public_K24WhipAttack_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK24_Public_K24WhipAttack_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK24_Public_K24WhipAttack_h_11_INCLASS \
	DeadByDaylight_Source_TheK24_Public_K24WhipAttack_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK24_Public_K24WhipAttack_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK24_Public_K24WhipAttack_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK24_Public_K24WhipAttack_h_11_SPARSE_DATA \
	DeadByDaylight_Source_TheK24_Public_K24WhipAttack_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK24_Public_K24WhipAttack_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK24_Public_K24WhipAttack_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK24_Public_K24WhipAttack_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK24_API UClass* StaticClass<class UK24WhipAttack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK24_Public_K24WhipAttack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
