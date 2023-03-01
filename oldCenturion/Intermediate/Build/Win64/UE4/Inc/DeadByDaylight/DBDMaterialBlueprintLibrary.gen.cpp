// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDMaterialBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDMaterialBlueprintLibrary() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDMaterialBlueprintLibrary_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDMaterialBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	DEFINE_FUNCTION(UDBDMaterialBlueprintLibrary::execCreateDynamicMaterialInstanceForParticleSystem)
	{
		P_GET_OBJECT(UParticleSystemComponent,Z_Param_System);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMaterialInstanceDynamic*>*)Z_Param__Result=UDBDMaterialBlueprintLibrary::CreateDynamicMaterialInstanceForParticleSystem(Z_Param_System);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDMaterialBlueprintLibrary::execSetTransformParameterInverseValueOnMaterialDynamic)
	{
		P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_Material);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_STRUCT(FTransform,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDBDMaterialBlueprintLibrary::SetTransformParameterInverseValueOnMaterialDynamic(Z_Param_Material,Z_Param_ParameterName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDMaterialBlueprintLibrary::execSetTransformParameterValueOnMaterialDynamic)
	{
		P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_Material);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_STRUCT(FTransform,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDBDMaterialBlueprintLibrary::SetTransformParameterValueOnMaterialDynamic(Z_Param_Material,Z_Param_ParameterName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDMaterialBlueprintLibrary::execSetTransformParameterValueOnMeshComponent)
	{
		P_GET_OBJECT(UMeshComponent,Z_Param_Mesh);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_STRUCT(FTransform,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDBDMaterialBlueprintLibrary::SetTransformParameterValueOnMeshComponent(Z_Param_Mesh,Z_Param_ParameterName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDMaterialBlueprintLibrary::execSetVectorParameterValueOnMeshComponent)
	{
		P_GET_OBJECT(UMeshComponent,Z_Param_Mesh);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_STRUCT(FLinearColor,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDBDMaterialBlueprintLibrary::SetVectorParameterValueOnMeshComponent(Z_Param_Mesh,Z_Param_ParameterName,Z_Param_Value);
		P_NATIVE_END;
	}
	void UDBDMaterialBlueprintLibrary::StaticRegisterNativesUDBDMaterialBlueprintLibrary()
	{
		UClass* Class = UDBDMaterialBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateDynamicMaterialInstanceForParticleSystem", &UDBDMaterialBlueprintLibrary::execCreateDynamicMaterialInstanceForParticleSystem },
			{ "SetTransformParameterInverseValueOnMaterialDynamic", &UDBDMaterialBlueprintLibrary::execSetTransformParameterInverseValueOnMaterialDynamic },
			{ "SetTransformParameterValueOnMaterialDynamic", &UDBDMaterialBlueprintLibrary::execSetTransformParameterValueOnMaterialDynamic },
			{ "SetTransformParameterValueOnMeshComponent", &UDBDMaterialBlueprintLibrary::execSetTransformParameterValueOnMeshComponent },
			{ "SetVectorParameterValueOnMeshComponent", &UDBDMaterialBlueprintLibrary::execSetVectorParameterValueOnMeshComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_CreateDynamicMaterialInstanceForParticleSystem_Statics
	{
		struct DBDMaterialBlueprintLibrary_eventCreateDynamicMaterialInstanceForParticleSystem_Parms
		{
			UParticleSystemComponent* System;
			TArray<UMaterialInstanceDynamic*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_System_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_System;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_CreateDynamicMaterialInstanceForParticleSystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDMaterialBlueprintLibrary_eventCreateDynamicMaterialInstanceForParticleSystem_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_CreateDynamicMaterialInstanceForParticleSystem_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_CreateDynamicMaterialInstanceForParticleSystem_Statics::NewProp_System_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_CreateDynamicMaterialInstanceForParticleSystem_Statics::NewProp_System = { "System", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDMaterialBlueprintLibrary_eventCreateDynamicMaterialInstanceForParticleSystem_Parms, System), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_CreateDynamicMaterialInstanceForParticleSystem_Statics::NewProp_System_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_CreateDynamicMaterialInstanceForParticleSystem_Statics::NewProp_System_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_CreateDynamicMaterialInstanceForParticleSystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_CreateDynamicMaterialInstanceForParticleSystem_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_CreateDynamicMaterialInstanceForParticleSystem_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_CreateDynamicMaterialInstanceForParticleSystem_Statics::NewProp_System,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_CreateDynamicMaterialInstanceForParticleSystem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDMaterialBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_CreateDynamicMaterialInstanceForParticleSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDMaterialBlueprintLibrary, nullptr, "CreateDynamicMaterialInstanceForParticleSystem", nullptr, nullptr, sizeof(DBDMaterialBlueprintLibrary_eventCreateDynamicMaterialInstanceForParticleSystem_Parms), Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_CreateDynamicMaterialInstanceForParticleSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_CreateDynamicMaterialInstanceForParticleSystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_CreateDynamicMaterialInstanceForParticleSystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_CreateDynamicMaterialInstanceForParticleSystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_CreateDynamicMaterialInstanceForParticleSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_CreateDynamicMaterialInstanceForParticleSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetTransformParameterInverseValueOnMaterialDynamic_Statics
	{
		struct DBDMaterialBlueprintLibrary_eventSetTransformParameterInverseValueOnMaterialDynamic_Parms
		{
			UMaterialInstanceDynamic* Material;
			FName ParameterName;
			FTransform Value;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetTransformParameterInverseValueOnMaterialDynamic_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDMaterialBlueprintLibrary_eventSetTransformParameterInverseValueOnMaterialDynamic_Parms, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetTransformParameterInverseValueOnMaterialDynamic_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDMaterialBlueprintLibrary_eventSetTransformParameterInverseValueOnMaterialDynamic_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetTransformParameterInverseValueOnMaterialDynamic_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDMaterialBlueprintLibrary_eventSetTransformParameterInverseValueOnMaterialDynamic_Parms, Material), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetTransformParameterInverseValueOnMaterialDynamic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetTransformParameterInverseValueOnMaterialDynamic_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetTransformParameterInverseValueOnMaterialDynamic_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetTransformParameterInverseValueOnMaterialDynamic_Statics::NewProp_Material,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetTransformParameterInverseValueOnMaterialDynamic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDMaterialBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetTransformParameterInverseValueOnMaterialDynamic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDMaterialBlueprintLibrary, nullptr, "SetTransformParameterInverseValueOnMaterialDynamic", nullptr, nullptr, sizeof(DBDMaterialBlueprintLibrary_eventSetTransformParameterInverseValueOnMaterialDynamic_Parms), Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetTransformParameterInverseValueOnMaterialDynamic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetTransformParameterInverseValueOnMaterialDynamic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetTransformParameterInverseValueOnMaterialDynamic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetTransformParameterInverseValueOnMaterialDynamic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetTransformParameterInverseValueOnMaterialDynamic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetTransformParameterInverseValueOnMaterialDynamic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetTransformParameterValueOnMaterialDynamic_Statics
	{
		struct DBDMaterialBlueprintLibrary_eventSetTransformParameterValueOnMaterialDynamic_Parms
		{
			UMaterialInstanceDynamic* Material;
			FName ParameterName;
			FTransform Value;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetTransformParameterValueOnMaterialDynamic_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDMaterialBlueprintLibrary_eventSetTransformParameterValueOnMaterialDynamic_Parms, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetTransformParameterValueOnMaterialDynamic_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDMaterialBlueprintLibrary_eventSetTransformParameterValueOnMaterialDynamic_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetTransformParameterValueOnMaterialDynamic_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDMaterialBlueprintLibrary_eventSetTransformParameterValueOnMaterialDynamic_Parms, Material), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetTransformParameterValueOnMaterialDynamic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetTransformParameterValueOnMaterialDynamic_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetTransformParameterValueOnMaterialDynamic_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetTransformParameterValueOnMaterialDynamic_Statics::NewProp_Material,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetTransformParameterValueOnMaterialDynamic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDMaterialBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetTransformParameterValueOnMaterialDynamic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDMaterialBlueprintLibrary, nullptr, "SetTransformParameterValueOnMaterialDynamic", nullptr, nullptr, sizeof(DBDMaterialBlueprintLibrary_eventSetTransformParameterValueOnMaterialDynamic_Parms), Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetTransformParameterValueOnMaterialDynamic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetTransformParameterValueOnMaterialDynamic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetTransformParameterValueOnMaterialDynamic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetTransformParameterValueOnMaterialDynamic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetTransformParameterValueOnMaterialDynamic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetTransformParameterValueOnMaterialDynamic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetTransformParameterValueOnMeshComponent_Statics
	{
		struct DBDMaterialBlueprintLibrary_eventSetTransformParameterValueOnMeshComponent_Parms
		{
			UMeshComponent* Mesh;
			FName ParameterName;
			FTransform Value;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetTransformParameterValueOnMeshComponent_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDMaterialBlueprintLibrary_eventSetTransformParameterValueOnMeshComponent_Parms, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetTransformParameterValueOnMeshComponent_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDMaterialBlueprintLibrary_eventSetTransformParameterValueOnMeshComponent_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetTransformParameterValueOnMeshComponent_Statics::NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetTransformParameterValueOnMeshComponent_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDMaterialBlueprintLibrary_eventSetTransformParameterValueOnMeshComponent_Parms, Mesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetTransformParameterValueOnMeshComponent_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetTransformParameterValueOnMeshComponent_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetTransformParameterValueOnMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetTransformParameterValueOnMeshComponent_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetTransformParameterValueOnMeshComponent_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetTransformParameterValueOnMeshComponent_Statics::NewProp_Mesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetTransformParameterValueOnMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDMaterialBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetTransformParameterValueOnMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDMaterialBlueprintLibrary, nullptr, "SetTransformParameterValueOnMeshComponent", nullptr, nullptr, sizeof(DBDMaterialBlueprintLibrary_eventSetTransformParameterValueOnMeshComponent_Parms), Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetTransformParameterValueOnMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetTransformParameterValueOnMeshComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetTransformParameterValueOnMeshComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetTransformParameterValueOnMeshComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetTransformParameterValueOnMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetTransformParameterValueOnMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetVectorParameterValueOnMeshComponent_Statics
	{
		struct DBDMaterialBlueprintLibrary_eventSetVectorParameterValueOnMeshComponent_Parms
		{
			UMeshComponent* Mesh;
			FName ParameterName;
			FLinearColor Value;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetVectorParameterValueOnMeshComponent_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDMaterialBlueprintLibrary_eventSetVectorParameterValueOnMeshComponent_Parms, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetVectorParameterValueOnMeshComponent_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDMaterialBlueprintLibrary_eventSetVectorParameterValueOnMeshComponent_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetVectorParameterValueOnMeshComponent_Statics::NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetVectorParameterValueOnMeshComponent_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDMaterialBlueprintLibrary_eventSetVectorParameterValueOnMeshComponent_Parms, Mesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetVectorParameterValueOnMeshComponent_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetVectorParameterValueOnMeshComponent_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetVectorParameterValueOnMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetVectorParameterValueOnMeshComponent_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetVectorParameterValueOnMeshComponent_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetVectorParameterValueOnMeshComponent_Statics::NewProp_Mesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetVectorParameterValueOnMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDMaterialBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetVectorParameterValueOnMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDMaterialBlueprintLibrary, nullptr, "SetVectorParameterValueOnMeshComponent", nullptr, nullptr, sizeof(DBDMaterialBlueprintLibrary_eventSetVectorParameterValueOnMeshComponent_Parms), Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetVectorParameterValueOnMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetVectorParameterValueOnMeshComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetVectorParameterValueOnMeshComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetVectorParameterValueOnMeshComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetVectorParameterValueOnMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetVectorParameterValueOnMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDMaterialBlueprintLibrary_NoRegister()
	{
		return UDBDMaterialBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UDBDMaterialBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDMaterialBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDMaterialBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_CreateDynamicMaterialInstanceForParticleSystem, "CreateDynamicMaterialInstanceForParticleSystem" }, // 563747388
		{ &Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetTransformParameterInverseValueOnMaterialDynamic, "SetTransformParameterInverseValueOnMaterialDynamic" }, // 130983157
		{ &Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetTransformParameterValueOnMaterialDynamic, "SetTransformParameterValueOnMaterialDynamic" }, // 684347785
		{ &Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetTransformParameterValueOnMeshComponent, "SetTransformParameterValueOnMeshComponent" }, // 1355359906
		{ &Z_Construct_UFunction_UDBDMaterialBlueprintLibrary_SetVectorParameterValueOnMeshComponent, "SetVectorParameterValueOnMeshComponent" }, // 1363335782
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDMaterialBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DBDMaterialBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/DBDMaterialBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDMaterialBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDMaterialBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDMaterialBlueprintLibrary_Statics::ClassParams = {
		&UDBDMaterialBlueprintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDMaterialBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDMaterialBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDMaterialBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDMaterialBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDMaterialBlueprintLibrary, 1065245767);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDMaterialBlueprintLibrary>()
	{
		return UDBDMaterialBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDMaterialBlueprintLibrary(Z_Construct_UClass_UDBDMaterialBlueprintLibrary, &UDBDMaterialBlueprintLibrary::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDMaterialBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDMaterialBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
