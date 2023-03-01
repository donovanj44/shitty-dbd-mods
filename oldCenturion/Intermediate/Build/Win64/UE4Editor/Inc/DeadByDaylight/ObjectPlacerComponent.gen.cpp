// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ObjectPlacerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectPlacerComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UObjectPlacerComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UObjectPlacerComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UObjectPlacementValidationStrategy_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UObjectPlacementUpdateStrategy_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UObjectPlacerComponent::execActivateObjectPlacement)
	{
		P_GET_UBOOL(Z_Param_active);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateObjectPlacement(Z_Param_active);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjectPlacerComponent::execGetObjectPlacementLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetObjectPlacementLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjectPlacerComponent::execGetObjectPlacementRotation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetObjectPlacementRotation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjectPlacerComponent::execIsPlacementValid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlacementValid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjectPlacerComponent::execSetIndicatorOffsetX)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIndicatorOffsetX(Z_Param_x);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjectPlacerComponent::execSetIndicatorOffsetY)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_y);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIndicatorOffsetY(Z_Param_y);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjectPlacerComponent::execSetObjectMesh)
	{
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_objectMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetObjectMesh(Z_Param_objectMesh);
		P_NATIVE_END;
	}
	void UObjectPlacerComponent::StaticRegisterNativesUObjectPlacerComponent()
	{
		UClass* Class = UObjectPlacerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateObjectPlacement", &UObjectPlacerComponent::execActivateObjectPlacement },
			{ "GetObjectPlacementLocation", &UObjectPlacerComponent::execGetObjectPlacementLocation },
			{ "GetObjectPlacementRotation", &UObjectPlacerComponent::execGetObjectPlacementRotation },
			{ "IsPlacementValid", &UObjectPlacerComponent::execIsPlacementValid },
			{ "SetIndicatorOffsetX", &UObjectPlacerComponent::execSetIndicatorOffsetX },
			{ "SetIndicatorOffsetY", &UObjectPlacerComponent::execSetIndicatorOffsetY },
			{ "SetObjectMesh", &UObjectPlacerComponent::execSetObjectMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UObjectPlacerComponent_ActivateObjectPlacement_Statics
	{
		struct ObjectPlacerComponent_eventActivateObjectPlacement_Parms
		{
			bool active;
		};
		static void NewProp_active_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_active;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UObjectPlacerComponent_ActivateObjectPlacement_Statics::NewProp_active_SetBit(void* Obj)
	{
		((ObjectPlacerComponent_eventActivateObjectPlacement_Parms*)Obj)->active = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UObjectPlacerComponent_ActivateObjectPlacement_Statics::NewProp_active = { "active", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ObjectPlacerComponent_eventActivateObjectPlacement_Parms), &Z_Construct_UFunction_UObjectPlacerComponent_ActivateObjectPlacement_Statics::NewProp_active_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectPlacerComponent_ActivateObjectPlacement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectPlacerComponent_ActivateObjectPlacement_Statics::NewProp_active,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectPlacerComponent_ActivateObjectPlacement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectPlacerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectPlacerComponent_ActivateObjectPlacement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectPlacerComponent, nullptr, "ActivateObjectPlacement", nullptr, nullptr, sizeof(ObjectPlacerComponent_eventActivateObjectPlacement_Parms), Z_Construct_UFunction_UObjectPlacerComponent_ActivateObjectPlacement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPlacerComponent_ActivateObjectPlacement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectPlacerComponent_ActivateObjectPlacement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPlacerComponent_ActivateObjectPlacement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectPlacerComponent_ActivateObjectPlacement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjectPlacerComponent_ActivateObjectPlacement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjectPlacerComponent_GetObjectPlacementLocation_Statics
	{
		struct ObjectPlacerComponent_eventGetObjectPlacementLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UObjectPlacerComponent_GetObjectPlacementLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectPlacerComponent_eventGetObjectPlacementLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectPlacerComponent_GetObjectPlacementLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectPlacerComponent_GetObjectPlacementLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectPlacerComponent_GetObjectPlacementLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectPlacerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectPlacerComponent_GetObjectPlacementLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectPlacerComponent, nullptr, "GetObjectPlacementLocation", nullptr, nullptr, sizeof(ObjectPlacerComponent_eventGetObjectPlacementLocation_Parms), Z_Construct_UFunction_UObjectPlacerComponent_GetObjectPlacementLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPlacerComponent_GetObjectPlacementLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectPlacerComponent_GetObjectPlacementLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPlacerComponent_GetObjectPlacementLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectPlacerComponent_GetObjectPlacementLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjectPlacerComponent_GetObjectPlacementLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjectPlacerComponent_GetObjectPlacementRotation_Statics
	{
		struct ObjectPlacerComponent_eventGetObjectPlacementRotation_Parms
		{
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UObjectPlacerComponent_GetObjectPlacementRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectPlacerComponent_eventGetObjectPlacementRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectPlacerComponent_GetObjectPlacementRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectPlacerComponent_GetObjectPlacementRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectPlacerComponent_GetObjectPlacementRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectPlacerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectPlacerComponent_GetObjectPlacementRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectPlacerComponent, nullptr, "GetObjectPlacementRotation", nullptr, nullptr, sizeof(ObjectPlacerComponent_eventGetObjectPlacementRotation_Parms), Z_Construct_UFunction_UObjectPlacerComponent_GetObjectPlacementRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPlacerComponent_GetObjectPlacementRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectPlacerComponent_GetObjectPlacementRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPlacerComponent_GetObjectPlacementRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectPlacerComponent_GetObjectPlacementRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjectPlacerComponent_GetObjectPlacementRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjectPlacerComponent_IsPlacementValid_Statics
	{
		struct ObjectPlacerComponent_eventIsPlacementValid_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UObjectPlacerComponent_IsPlacementValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ObjectPlacerComponent_eventIsPlacementValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UObjectPlacerComponent_IsPlacementValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ObjectPlacerComponent_eventIsPlacementValid_Parms), &Z_Construct_UFunction_UObjectPlacerComponent_IsPlacementValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectPlacerComponent_IsPlacementValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectPlacerComponent_IsPlacementValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectPlacerComponent_IsPlacementValid_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectPlacerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectPlacerComponent_IsPlacementValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectPlacerComponent, nullptr, "IsPlacementValid", nullptr, nullptr, sizeof(ObjectPlacerComponent_eventIsPlacementValid_Parms), Z_Construct_UFunction_UObjectPlacerComponent_IsPlacementValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPlacerComponent_IsPlacementValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectPlacerComponent_IsPlacementValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPlacerComponent_IsPlacementValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectPlacerComponent_IsPlacementValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjectPlacerComponent_IsPlacementValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjectPlacerComponent_SetIndicatorOffsetX_Statics
	{
		struct ObjectPlacerComponent_eventSetIndicatorOffsetX_Parms
		{
			float x;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UObjectPlacerComponent_SetIndicatorOffsetX_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectPlacerComponent_eventSetIndicatorOffsetX_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectPlacerComponent_SetIndicatorOffsetX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectPlacerComponent_SetIndicatorOffsetX_Statics::NewProp_x,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectPlacerComponent_SetIndicatorOffsetX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectPlacerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectPlacerComponent_SetIndicatorOffsetX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectPlacerComponent, nullptr, "SetIndicatorOffsetX", nullptr, nullptr, sizeof(ObjectPlacerComponent_eventSetIndicatorOffsetX_Parms), Z_Construct_UFunction_UObjectPlacerComponent_SetIndicatorOffsetX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPlacerComponent_SetIndicatorOffsetX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectPlacerComponent_SetIndicatorOffsetX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPlacerComponent_SetIndicatorOffsetX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectPlacerComponent_SetIndicatorOffsetX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjectPlacerComponent_SetIndicatorOffsetX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjectPlacerComponent_SetIndicatorOffsetY_Statics
	{
		struct ObjectPlacerComponent_eventSetIndicatorOffsetY_Parms
		{
			float y;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_y;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UObjectPlacerComponent_SetIndicatorOffsetY_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectPlacerComponent_eventSetIndicatorOffsetY_Parms, y), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectPlacerComponent_SetIndicatorOffsetY_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectPlacerComponent_SetIndicatorOffsetY_Statics::NewProp_y,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectPlacerComponent_SetIndicatorOffsetY_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectPlacerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectPlacerComponent_SetIndicatorOffsetY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectPlacerComponent, nullptr, "SetIndicatorOffsetY", nullptr, nullptr, sizeof(ObjectPlacerComponent_eventSetIndicatorOffsetY_Parms), Z_Construct_UFunction_UObjectPlacerComponent_SetIndicatorOffsetY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPlacerComponent_SetIndicatorOffsetY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectPlacerComponent_SetIndicatorOffsetY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPlacerComponent_SetIndicatorOffsetY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectPlacerComponent_SetIndicatorOffsetY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjectPlacerComponent_SetIndicatorOffsetY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjectPlacerComponent_SetObjectMesh_Statics
	{
		struct ObjectPlacerComponent_eventSetObjectMesh_Parms
		{
			UStaticMeshComponent* objectMesh;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_objectMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_objectMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectPlacerComponent_SetObjectMesh_Statics::NewProp_objectMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjectPlacerComponent_SetObjectMesh_Statics::NewProp_objectMesh = { "objectMesh", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectPlacerComponent_eventSetObjectMesh_Parms, objectMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UObjectPlacerComponent_SetObjectMesh_Statics::NewProp_objectMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPlacerComponent_SetObjectMesh_Statics::NewProp_objectMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectPlacerComponent_SetObjectMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectPlacerComponent_SetObjectMesh_Statics::NewProp_objectMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectPlacerComponent_SetObjectMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectPlacerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectPlacerComponent_SetObjectMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectPlacerComponent, nullptr, "SetObjectMesh", nullptr, nullptr, sizeof(ObjectPlacerComponent_eventSetObjectMesh_Parms), Z_Construct_UFunction_UObjectPlacerComponent_SetObjectMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPlacerComponent_SetObjectMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectPlacerComponent_SetObjectMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPlacerComponent_SetObjectMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectPlacerComponent_SetObjectMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjectPlacerComponent_SetObjectMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UObjectPlacerComponent_NoRegister()
	{
		return UObjectPlacerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UObjectPlacerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__objectPlacementValidationStrategy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__objectPlacementValidationStrategy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__objectPlacementUpdateStrategy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__objectPlacementUpdateStrategy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stayActiveWhileItemInUse_MetaData[];
#endif
		static void NewProp__stayActiveWhileItemInUse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__stayActiveWhileItemInUse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__showIndicator_MetaData[];
#endif
		static void NewProp__showIndicator_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__showIndicator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__itemObjectId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__itemObjectId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__indicatorOffsetX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__indicatorOffsetX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__indicatorOffsetY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__indicatorOffsetY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__socketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__socketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__objectMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__objectMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjectPlacerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UObjectPlacerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UObjectPlacerComponent_ActivateObjectPlacement, "ActivateObjectPlacement" }, // 4073978964
		{ &Z_Construct_UFunction_UObjectPlacerComponent_GetObjectPlacementLocation, "GetObjectPlacementLocation" }, // 1858912901
		{ &Z_Construct_UFunction_UObjectPlacerComponent_GetObjectPlacementRotation, "GetObjectPlacementRotation" }, // 3536834195
		{ &Z_Construct_UFunction_UObjectPlacerComponent_IsPlacementValid, "IsPlacementValid" }, // 286246214
		{ &Z_Construct_UFunction_UObjectPlacerComponent_SetIndicatorOffsetX, "SetIndicatorOffsetX" }, // 1866965634
		{ &Z_Construct_UFunction_UObjectPlacerComponent_SetIndicatorOffsetY, "SetIndicatorOffsetY" }, // 2811936062
		{ &Z_Construct_UFunction_UObjectPlacerComponent_SetObjectMesh, "SetObjectMesh" }, // 1699925976
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPlacerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ObjectPlacerComponent.h" },
		{ "ModuleRelativePath", "Public/ObjectPlacerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPlacerComponent_Statics::NewProp__objectPlacementValidationStrategy_MetaData[] = {
		{ "Category", "ObjectPlacerComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ObjectPlacerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjectPlacerComponent_Statics::NewProp__objectPlacementValidationStrategy = { "_objectPlacementValidationStrategy", nullptr, (EPropertyFlags)0x0042000002090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectPlacerComponent, _objectPlacementValidationStrategy), Z_Construct_UClass_UObjectPlacementValidationStrategy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UObjectPlacerComponent_Statics::NewProp__objectPlacementValidationStrategy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPlacerComponent_Statics::NewProp__objectPlacementValidationStrategy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPlacerComponent_Statics::NewProp__objectPlacementUpdateStrategy_MetaData[] = {
		{ "Category", "ObjectPlacerComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ObjectPlacerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjectPlacerComponent_Statics::NewProp__objectPlacementUpdateStrategy = { "_objectPlacementUpdateStrategy", nullptr, (EPropertyFlags)0x0042000002090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectPlacerComponent, _objectPlacementUpdateStrategy), Z_Construct_UClass_UObjectPlacementUpdateStrategy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UObjectPlacerComponent_Statics::NewProp__objectPlacementUpdateStrategy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPlacerComponent_Statics::NewProp__objectPlacementUpdateStrategy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPlacerComponent_Statics::NewProp__stayActiveWhileItemInUse_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectPlacerComponent" },
		{ "ModuleRelativePath", "Public/ObjectPlacerComponent.h" },
	};
#endif
	void Z_Construct_UClass_UObjectPlacerComponent_Statics::NewProp__stayActiveWhileItemInUse_SetBit(void* Obj)
	{
		((UObjectPlacerComponent*)Obj)->_stayActiveWhileItemInUse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UObjectPlacerComponent_Statics::NewProp__stayActiveWhileItemInUse = { "_stayActiveWhileItemInUse", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UObjectPlacerComponent), &Z_Construct_UClass_UObjectPlacerComponent_Statics::NewProp__stayActiveWhileItemInUse_SetBit, METADATA_PARAMS(Z_Construct_UClass_UObjectPlacerComponent_Statics::NewProp__stayActiveWhileItemInUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPlacerComponent_Statics::NewProp__stayActiveWhileItemInUse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPlacerComponent_Statics::NewProp__showIndicator_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectPlacerComponent" },
		{ "ModuleRelativePath", "Public/ObjectPlacerComponent.h" },
	};
#endif
	void Z_Construct_UClass_UObjectPlacerComponent_Statics::NewProp__showIndicator_SetBit(void* Obj)
	{
		((UObjectPlacerComponent*)Obj)->_showIndicator = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UObjectPlacerComponent_Statics::NewProp__showIndicator = { "_showIndicator", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UObjectPlacerComponent), &Z_Construct_UClass_UObjectPlacerComponent_Statics::NewProp__showIndicator_SetBit, METADATA_PARAMS(Z_Construct_UClass_UObjectPlacerComponent_Statics::NewProp__showIndicator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPlacerComponent_Statics::NewProp__showIndicator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPlacerComponent_Statics::NewProp__itemObjectId_MetaData[] = {
		{ "Category", "ObjectPlacerComponent" },
		{ "ModuleRelativePath", "Public/ObjectPlacerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UObjectPlacerComponent_Statics::NewProp__itemObjectId = { "_itemObjectId", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectPlacerComponent, _itemObjectId), METADATA_PARAMS(Z_Construct_UClass_UObjectPlacerComponent_Statics::NewProp__itemObjectId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPlacerComponent_Statics::NewProp__itemObjectId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPlacerComponent_Statics::NewProp__indicatorOffsetX_MetaData[] = {
		{ "Category", "ObjectPlacerComponent" },
		{ "ModuleRelativePath", "Public/ObjectPlacerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UObjectPlacerComponent_Statics::NewProp__indicatorOffsetX = { "_indicatorOffsetX", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectPlacerComponent, _indicatorOffsetX), METADATA_PARAMS(Z_Construct_UClass_UObjectPlacerComponent_Statics::NewProp__indicatorOffsetX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPlacerComponent_Statics::NewProp__indicatorOffsetX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPlacerComponent_Statics::NewProp__indicatorOffsetY_MetaData[] = {
		{ "Category", "ObjectPlacerComponent" },
		{ "ModuleRelativePath", "Public/ObjectPlacerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UObjectPlacerComponent_Statics::NewProp__indicatorOffsetY = { "_indicatorOffsetY", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectPlacerComponent, _indicatorOffsetY), METADATA_PARAMS(Z_Construct_UClass_UObjectPlacerComponent_Statics::NewProp__indicatorOffsetY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPlacerComponent_Statics::NewProp__indicatorOffsetY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPlacerComponent_Statics::NewProp__socketName_MetaData[] = {
		{ "Category", "ObjectPlacerComponent" },
		{ "ModuleRelativePath", "Public/ObjectPlacerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UObjectPlacerComponent_Statics::NewProp__socketName = { "_socketName", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectPlacerComponent, _socketName), METADATA_PARAMS(Z_Construct_UClass_UObjectPlacerComponent_Statics::NewProp__socketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPlacerComponent_Statics::NewProp__socketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPlacerComponent_Statics::NewProp__objectMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectPlacerComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ObjectPlacerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjectPlacerComponent_Statics::NewProp__objectMesh = { "_objectMesh", nullptr, (EPropertyFlags)0x004000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectPlacerComponent, _objectMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UObjectPlacerComponent_Statics::NewProp__objectMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPlacerComponent_Statics::NewProp__objectMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UObjectPlacerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPlacerComponent_Statics::NewProp__objectPlacementValidationStrategy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPlacerComponent_Statics::NewProp__objectPlacementUpdateStrategy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPlacerComponent_Statics::NewProp__stayActiveWhileItemInUse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPlacerComponent_Statics::NewProp__showIndicator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPlacerComponent_Statics::NewProp__itemObjectId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPlacerComponent_Statics::NewProp__indicatorOffsetX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPlacerComponent_Statics::NewProp__indicatorOffsetY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPlacerComponent_Statics::NewProp__socketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPlacerComponent_Statics::NewProp__objectMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectPlacerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectPlacerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UObjectPlacerComponent_Statics::ClassParams = {
		&UObjectPlacerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UObjectPlacerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPlacerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UObjectPlacerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPlacerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObjectPlacerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UObjectPlacerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UObjectPlacerComponent, 4271353451);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UObjectPlacerComponent>()
	{
		return UObjectPlacerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UObjectPlacerComponent(Z_Construct_UClass_UObjectPlacerComponent, &UObjectPlacerComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UObjectPlacerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectPlacerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
