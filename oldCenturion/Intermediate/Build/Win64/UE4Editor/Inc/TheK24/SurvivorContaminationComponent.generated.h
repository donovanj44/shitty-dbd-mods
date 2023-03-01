// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EContaminator : uint8;
#ifdef THEK24_SurvivorContaminationComponent_generated_h
#error "SurvivorContaminationComponent.generated.h already included, missing '#pragma once' in SurvivorContaminationComponent.h"
#endif
#define THEK24_SurvivorContaminationComponent_generated_h

#define DeadByDaylight_Source_TheK24_Public_SurvivorContaminationComponent_h_17_SPARSE_DATA
#define DeadByDaylight_Source_TheK24_Public_SurvivorContaminationComponent_h_17_RPC_WRAPPERS \
	virtual void Multicast_OnContaminated_Cosmetic_Implementation(EContaminator contaminator); \
 \
	DECLARE_FUNCTION(execIsContaminated); \
	DECLARE_FUNCTION(execMulticast_OnContaminated_Cosmetic); \
	DECLARE_FUNCTION(execOnRep_InjectSerumInteractions); \
	DECLARE_FUNCTION(execOnRep_IsContaminated);


#define DeadByDaylight_Source_TheK24_Public_SurvivorContaminationComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_OnContaminated_Cosmetic_Implementation(EContaminator contaminator); \
 \
	DECLARE_FUNCTION(execIsContaminated); \
	DECLARE_FUNCTION(execMulticast_OnContaminated_Cosmetic); \
	DECLARE_FUNCTION(execOnRep_InjectSerumInteractions); \
	DECLARE_FUNCTION(execOnRep_IsContaminated);


#define DeadByDaylight_Source_TheK24_Public_SurvivorContaminationComponent_h_17_EVENT_PARMS \
	struct SurvivorContaminationComponent_eventMulticast_OnContaminated_Cosmetic_Parms \
	{ \
		EContaminator contaminator; \
	}; \
	struct SurvivorContaminationComponent_eventOnContaminated_Cosmetic_Parms \
	{ \
		EContaminator contaminator; \
	};


#define DeadByDaylight_Source_TheK24_Public_SurvivorContaminationComponent_h_17_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheK24_Public_SurvivorContaminationComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSurvivorContaminationComponent(); \
	friend struct Z_Construct_UClass_USurvivorContaminationComponent_Statics; \
public: \
	DECLARE_CLASS(USurvivorContaminationComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK24"), NO_API) \
	DECLARE_SERIALIZER(USurvivorContaminationComponent) \
	virtual UObject* _getUObject() const override { return const_cast<USurvivorContaminationComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isContaminated=NETFIELD_REP_START, \
		_injectSerumChargeable, \
		_injectSerumInteractions, \
		NETFIELD_REP_END=_injectSerumInteractions	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK24_Public_SurvivorContaminationComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUSurvivorContaminationComponent(); \
	friend struct Z_Construct_UClass_USurvivorContaminationComponent_Statics; \
public: \
	DECLARE_CLASS(USurvivorContaminationComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK24"), NO_API) \
	DECLARE_SERIALIZER(USurvivorContaminationComponent) \
	virtual UObject* _getUObject() const override { return const_cast<USurvivorContaminationComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isContaminated=NETFIELD_REP_START, \
		_injectSerumChargeable, \
		_injectSerumInteractions, \
		NETFIELD_REP_END=_injectSerumInteractions	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK24_Public_SurvivorContaminationComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USurvivorContaminationComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USurvivorContaminationComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USurvivorContaminationComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USurvivorContaminationComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USurvivorContaminationComponent(USurvivorContaminationComponent&&); \
	NO_API USurvivorContaminationComponent(const USurvivorContaminationComponent&); \
public:


#define DeadByDaylight_Source_TheK24_Public_SurvivorContaminationComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USurvivorContaminationComponent(USurvivorContaminationComponent&&); \
	NO_API USurvivorContaminationComponent(const USurvivorContaminationComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USurvivorContaminationComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USurvivorContaminationComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USurvivorContaminationComponent)


#define DeadByDaylight_Source_TheK24_Public_SurvivorContaminationComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___isContaminated() { return STRUCT_OFFSET(USurvivorContaminationComponent, _isContaminated); } \
	FORCEINLINE static uint32 __PPO___injectSerumChargeable() { return STRUCT_OFFSET(USurvivorContaminationComponent, _injectSerumChargeable); } \
	FORCEINLINE static uint32 __PPO___injectSerumSecondsToCharge() { return STRUCT_OFFSET(USurvivorContaminationComponent, _injectSerumSecondsToCharge); } \
	FORCEINLINE static uint32 __PPO___contaminationHinderedSeconds() { return STRUCT_OFFSET(USurvivorContaminationComponent, _contaminationHinderedSeconds); } \
	FORCEINLINE static uint32 __PPO___contaminationHinderedValue() { return STRUCT_OFFSET(USurvivorContaminationComponent, _contaminationHinderedValue); } \
	FORCEINLINE static uint32 __PPO___injectSerumInteractionsClasses() { return STRUCT_OFFSET(USurvivorContaminationComponent, _injectSerumInteractionsClasses); } \
	FORCEINLINE static uint32 __PPO___injectSerumInteractions() { return STRUCT_OFFSET(USurvivorContaminationComponent, _injectSerumInteractions); }


#define DeadByDaylight_Source_TheK24_Public_SurvivorContaminationComponent_h_15_PROLOG \
	DeadByDaylight_Source_TheK24_Public_SurvivorContaminationComponent_h_17_EVENT_PARMS


#define DeadByDaylight_Source_TheK24_Public_SurvivorContaminationComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK24_Public_SurvivorContaminationComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK24_Public_SurvivorContaminationComponent_h_17_SPARSE_DATA \
	DeadByDaylight_Source_TheK24_Public_SurvivorContaminationComponent_h_17_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK24_Public_SurvivorContaminationComponent_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK24_Public_SurvivorContaminationComponent_h_17_INCLASS \
	DeadByDaylight_Source_TheK24_Public_SurvivorContaminationComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK24_Public_SurvivorContaminationComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK24_Public_SurvivorContaminationComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK24_Public_SurvivorContaminationComponent_h_17_SPARSE_DATA \
	DeadByDaylight_Source_TheK24_Public_SurvivorContaminationComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK24_Public_SurvivorContaminationComponent_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK24_Public_SurvivorContaminationComponent_h_17_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK24_Public_SurvivorContaminationComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK24_API UClass* StaticClass<class USurvivorContaminationComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK24_Public_SurvivorContaminationComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
