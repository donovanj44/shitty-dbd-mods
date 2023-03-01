// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FRotator;
class UStaticMeshComponent;
#ifdef DEADBYDAYLIGHT_ObjectPlacerComponent_generated_h
#error "ObjectPlacerComponent.generated.h already included, missing '#pragma once' in ObjectPlacerComponent.h"
#endif
#define DEADBYDAYLIGHT_ObjectPlacerComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_ObjectPlacerComponent_h_14_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_ObjectPlacerComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execActivateObjectPlacement); \
	DECLARE_FUNCTION(execGetObjectPlacementLocation); \
	DECLARE_FUNCTION(execGetObjectPlacementRotation); \
	DECLARE_FUNCTION(execIsPlacementValid); \
	DECLARE_FUNCTION(execSetIndicatorOffsetX); \
	DECLARE_FUNCTION(execSetIndicatorOffsetY); \
	DECLARE_FUNCTION(execSetObjectMesh);


#define DeadByDaylight_Source_DeadByDaylight_Public_ObjectPlacerComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execActivateObjectPlacement); \
	DECLARE_FUNCTION(execGetObjectPlacementLocation); \
	DECLARE_FUNCTION(execGetObjectPlacementRotation); \
	DECLARE_FUNCTION(execIsPlacementValid); \
	DECLARE_FUNCTION(execSetIndicatorOffsetX); \
	DECLARE_FUNCTION(execSetIndicatorOffsetY); \
	DECLARE_FUNCTION(execSetObjectMesh);


#define DeadByDaylight_Source_DeadByDaylight_Public_ObjectPlacerComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectPlacerComponent(); \
	friend struct Z_Construct_UClass_UObjectPlacerComponent_Statics; \
public: \
	DECLARE_CLASS(UObjectPlacerComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UObjectPlacerComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_ObjectPlacerComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUObjectPlacerComponent(); \
	friend struct Z_Construct_UClass_UObjectPlacerComponent_Statics; \
public: \
	DECLARE_CLASS(UObjectPlacerComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UObjectPlacerComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_ObjectPlacerComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UObjectPlacerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectPlacerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectPlacerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectPlacerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UObjectPlacerComponent(UObjectPlacerComponent&&); \
	NO_API UObjectPlacerComponent(const UObjectPlacerComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_ObjectPlacerComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UObjectPlacerComponent(UObjectPlacerComponent&&); \
	NO_API UObjectPlacerComponent(const UObjectPlacerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectPlacerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectPlacerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UObjectPlacerComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_ObjectPlacerComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___objectMesh() { return STRUCT_OFFSET(UObjectPlacerComponent, _objectMesh); } \
	FORCEINLINE static uint32 __PPO___socketName() { return STRUCT_OFFSET(UObjectPlacerComponent, _socketName); } \
	FORCEINLINE static uint32 __PPO___indicatorOffsetY() { return STRUCT_OFFSET(UObjectPlacerComponent, _indicatorOffsetY); } \
	FORCEINLINE static uint32 __PPO___indicatorOffsetX() { return STRUCT_OFFSET(UObjectPlacerComponent, _indicatorOffsetX); } \
	FORCEINLINE static uint32 __PPO___itemObjectId() { return STRUCT_OFFSET(UObjectPlacerComponent, _itemObjectId); } \
	FORCEINLINE static uint32 __PPO___showIndicator() { return STRUCT_OFFSET(UObjectPlacerComponent, _showIndicator); } \
	FORCEINLINE static uint32 __PPO___stayActiveWhileItemInUse() { return STRUCT_OFFSET(UObjectPlacerComponent, _stayActiveWhileItemInUse); } \
	FORCEINLINE static uint32 __PPO___objectPlacementUpdateStrategy() { return STRUCT_OFFSET(UObjectPlacerComponent, _objectPlacementUpdateStrategy); } \
	FORCEINLINE static uint32 __PPO___objectPlacementValidationStrategy() { return STRUCT_OFFSET(UObjectPlacerComponent, _objectPlacementValidationStrategy); }


#define DeadByDaylight_Source_DeadByDaylight_Public_ObjectPlacerComponent_h_12_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_ObjectPlacerComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_ObjectPlacerComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_ObjectPlacerComponent_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_ObjectPlacerComponent_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_ObjectPlacerComponent_h_14_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_ObjectPlacerComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_ObjectPlacerComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_ObjectPlacerComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_ObjectPlacerComponent_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_ObjectPlacerComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_ObjectPlacerComponent_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_ObjectPlacerComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UObjectPlacerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ObjectPlacerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
