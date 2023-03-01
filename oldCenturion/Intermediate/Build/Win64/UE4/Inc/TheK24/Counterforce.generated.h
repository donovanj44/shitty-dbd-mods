// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ATotem;
#ifdef THEK24_Counterforce_generated_h
#error "Counterforce.generated.h already included, missing '#pragma once' in Counterforce.h"
#endif
#define THEK24_Counterforce_generated_h

#define DeadByDaylight_Source_TheK24_Public_Counterforce_h_10_SPARSE_DATA
#define DeadByDaylight_Source_TheK24_Public_Counterforce_h_10_RPC_WRAPPERS \
	virtual void Multicast_ShowTotemAura_Implementation(ATotem* totem); \
 \
	DECLARE_FUNCTION(execMulticast_ShowTotemAura);


#define DeadByDaylight_Source_TheK24_Public_Counterforce_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_ShowTotemAura_Implementation(ATotem* totem); \
 \
	DECLARE_FUNCTION(execMulticast_ShowTotemAura);


#define DeadByDaylight_Source_TheK24_Public_Counterforce_h_10_EVENT_PARMS \
	struct Counterforce_eventMulticast_ShowTotemAura_Parms \
	{ \
		ATotem* totem; \
	};


#define DeadByDaylight_Source_TheK24_Public_Counterforce_h_10_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheK24_Public_Counterforce_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCounterforce(); \
	friend struct Z_Construct_UClass_UCounterforce_Statics; \
public: \
	DECLARE_CLASS(UCounterforce, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK24"), NO_API) \
	DECLARE_SERIALIZER(UCounterforce)


#define DeadByDaylight_Source_TheK24_Public_Counterforce_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUCounterforce(); \
	friend struct Z_Construct_UClass_UCounterforce_Statics; \
public: \
	DECLARE_CLASS(UCounterforce, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK24"), NO_API) \
	DECLARE_SERIALIZER(UCounterforce)


#define DeadByDaylight_Source_TheK24_Public_Counterforce_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCounterforce(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCounterforce) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCounterforce); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCounterforce); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCounterforce(UCounterforce&&); \
	NO_API UCounterforce(const UCounterforce&); \
public:


#define DeadByDaylight_Source_TheK24_Public_Counterforce_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCounterforce(UCounterforce&&); \
	NO_API UCounterforce(const UCounterforce&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCounterforce); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCounterforce); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCounterforce)


#define DeadByDaylight_Source_TheK24_Public_Counterforce_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___totemAuraVisibleDuration() { return STRUCT_OFFSET(UCounterforce, _totemAuraVisibleDuration); } \
	FORCEINLINE static uint32 __PPO___startingTotemCleanseSpeedBonus() { return STRUCT_OFFSET(UCounterforce, _startingTotemCleanseSpeedBonus); } \
	FORCEINLINE static uint32 __PPO___stackableTotemCleanseSpeedBonus() { return STRUCT_OFFSET(UCounterforce, _stackableTotemCleanseSpeedBonus); }


#define DeadByDaylight_Source_TheK24_Public_Counterforce_h_8_PROLOG \
	DeadByDaylight_Source_TheK24_Public_Counterforce_h_10_EVENT_PARMS


#define DeadByDaylight_Source_TheK24_Public_Counterforce_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK24_Public_Counterforce_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK24_Public_Counterforce_h_10_SPARSE_DATA \
	DeadByDaylight_Source_TheK24_Public_Counterforce_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK24_Public_Counterforce_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK24_Public_Counterforce_h_10_INCLASS \
	DeadByDaylight_Source_TheK24_Public_Counterforce_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK24_Public_Counterforce_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK24_Public_Counterforce_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK24_Public_Counterforce_h_10_SPARSE_DATA \
	DeadByDaylight_Source_TheK24_Public_Counterforce_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK24_Public_Counterforce_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK24_Public_Counterforce_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK24_Public_Counterforce_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK24_API UClass* StaticClass<class UCounterforce>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK24_Public_Counterforce_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
