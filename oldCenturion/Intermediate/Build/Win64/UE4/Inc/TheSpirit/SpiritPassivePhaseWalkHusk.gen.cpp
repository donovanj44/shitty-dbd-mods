// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheSpirit/Public/SpiritPassivePhaseWalkHusk.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpiritPassivePhaseWalkHusk() {}
// Cross Module References
	THESPIRIT_API UClass* Z_Construct_UClass_ASpiritPassivePhaseWalkHusk_NoRegister();
	THESPIRIT_API UClass* Z_Construct_UClass_ASpiritPassivePhaseWalkHusk();
	VFXUTILITIES_API UClass* Z_Construct_UClass_ABaseVFX();
	UPackage* Z_Construct_UPackage__Script_TheSpirit();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCustomizedSkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASpiritPassivePhaseWalkHusk::execCaptureSpiritPose)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CaptureSpiritPose();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpiritPassivePhaseWalkHusk::execInitializeSpiritPassivePhaseWalkHusk)
	{
		P_GET_OBJECT(UCustomizedSkeletalMesh,Z_Param_customizedSkeletalMeshToCopy);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeSpiritPassivePhaseWalkHusk(Z_Param_customizedSkeletalMeshToCopy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpiritPassivePhaseWalkHusk::execSetPassivePhaseWalkHuskVisibility)
	{
		P_GET_UBOOL(Z_Param_visible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPassivePhaseWalkHuskVisibility(Z_Param_visible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpiritPassivePhaseWalkHusk::execSetScalarParameterOnAllChildrenMeshes)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_parameterName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScalarParameterOnAllChildrenMeshes(Z_Param_parameterName,Z_Param_value);
		P_NATIVE_END;
	}
	static FName NAME_ASpiritPassivePhaseWalkHusk_Cosmetic_InitializeSpiritPassivePhaseWalkHusk = FName(TEXT("Cosmetic_InitializeSpiritPassivePhaseWalkHusk"));
	void ASpiritPassivePhaseWalkHusk::Cosmetic_InitializeSpiritPassivePhaseWalkHusk()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASpiritPassivePhaseWalkHusk_Cosmetic_InitializeSpiritPassivePhaseWalkHusk),NULL);
	}
	static FName NAME_ASpiritPassivePhaseWalkHusk_Cosmetic_StartFadeOutPassivePhaseWalkHusk = FName(TEXT("Cosmetic_StartFadeOutPassivePhaseWalkHusk"));
	void ASpiritPassivePhaseWalkHusk::Cosmetic_StartFadeOutPassivePhaseWalkHusk()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASpiritPassivePhaseWalkHusk_Cosmetic_StartFadeOutPassivePhaseWalkHusk),NULL);
	}
	void ASpiritPassivePhaseWalkHusk::StaticRegisterNativesASpiritPassivePhaseWalkHusk()
	{
		UClass* Class = ASpiritPassivePhaseWalkHusk::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CaptureSpiritPose", &ASpiritPassivePhaseWalkHusk::execCaptureSpiritPose },
			{ "InitializeSpiritPassivePhaseWalkHusk", &ASpiritPassivePhaseWalkHusk::execInitializeSpiritPassivePhaseWalkHusk },
			{ "SetPassivePhaseWalkHuskVisibility", &ASpiritPassivePhaseWalkHusk::execSetPassivePhaseWalkHuskVisibility },
			{ "SetScalarParameterOnAllChildrenMeshes", &ASpiritPassivePhaseWalkHusk::execSetScalarParameterOnAllChildrenMeshes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_CaptureSpiritPose_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_CaptureSpiritPose_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpiritPassivePhaseWalkHusk.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_CaptureSpiritPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpiritPassivePhaseWalkHusk, nullptr, "CaptureSpiritPose", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_CaptureSpiritPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_CaptureSpiritPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_CaptureSpiritPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_CaptureSpiritPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_Cosmetic_InitializeSpiritPassivePhaseWalkHusk_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_Cosmetic_InitializeSpiritPassivePhaseWalkHusk_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpiritPassivePhaseWalkHusk.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_Cosmetic_InitializeSpiritPassivePhaseWalkHusk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpiritPassivePhaseWalkHusk, nullptr, "Cosmetic_InitializeSpiritPassivePhaseWalkHusk", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_Cosmetic_InitializeSpiritPassivePhaseWalkHusk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_Cosmetic_InitializeSpiritPassivePhaseWalkHusk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_Cosmetic_InitializeSpiritPassivePhaseWalkHusk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_Cosmetic_InitializeSpiritPassivePhaseWalkHusk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_Cosmetic_StartFadeOutPassivePhaseWalkHusk_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_Cosmetic_StartFadeOutPassivePhaseWalkHusk_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpiritPassivePhaseWalkHusk.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_Cosmetic_StartFadeOutPassivePhaseWalkHusk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpiritPassivePhaseWalkHusk, nullptr, "Cosmetic_StartFadeOutPassivePhaseWalkHusk", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_Cosmetic_StartFadeOutPassivePhaseWalkHusk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_Cosmetic_StartFadeOutPassivePhaseWalkHusk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_Cosmetic_StartFadeOutPassivePhaseWalkHusk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_Cosmetic_StartFadeOutPassivePhaseWalkHusk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_InitializeSpiritPassivePhaseWalkHusk_Statics
	{
		struct SpiritPassivePhaseWalkHusk_eventInitializeSpiritPassivePhaseWalkHusk_Parms
		{
			const UCustomizedSkeletalMesh* customizedSkeletalMeshToCopy;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_customizedSkeletalMeshToCopy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_customizedSkeletalMeshToCopy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_InitializeSpiritPassivePhaseWalkHusk_Statics::NewProp_customizedSkeletalMeshToCopy_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_InitializeSpiritPassivePhaseWalkHusk_Statics::NewProp_customizedSkeletalMeshToCopy = { "customizedSkeletalMeshToCopy", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpiritPassivePhaseWalkHusk_eventInitializeSpiritPassivePhaseWalkHusk_Parms, customizedSkeletalMeshToCopy), Z_Construct_UClass_UCustomizedSkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_InitializeSpiritPassivePhaseWalkHusk_Statics::NewProp_customizedSkeletalMeshToCopy_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_InitializeSpiritPassivePhaseWalkHusk_Statics::NewProp_customizedSkeletalMeshToCopy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_InitializeSpiritPassivePhaseWalkHusk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_InitializeSpiritPassivePhaseWalkHusk_Statics::NewProp_customizedSkeletalMeshToCopy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_InitializeSpiritPassivePhaseWalkHusk_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpiritPassivePhaseWalkHusk.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_InitializeSpiritPassivePhaseWalkHusk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpiritPassivePhaseWalkHusk, nullptr, "InitializeSpiritPassivePhaseWalkHusk", nullptr, nullptr, sizeof(SpiritPassivePhaseWalkHusk_eventInitializeSpiritPassivePhaseWalkHusk_Parms), Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_InitializeSpiritPassivePhaseWalkHusk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_InitializeSpiritPassivePhaseWalkHusk_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_InitializeSpiritPassivePhaseWalkHusk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_InitializeSpiritPassivePhaseWalkHusk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_InitializeSpiritPassivePhaseWalkHusk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_InitializeSpiritPassivePhaseWalkHusk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_SetPassivePhaseWalkHuskVisibility_Statics
	{
		struct SpiritPassivePhaseWalkHusk_eventSetPassivePhaseWalkHuskVisibility_Parms
		{
			bool visible;
		};
		static void NewProp_visible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_visible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_SetPassivePhaseWalkHuskVisibility_Statics::NewProp_visible_SetBit(void* Obj)
	{
		((SpiritPassivePhaseWalkHusk_eventSetPassivePhaseWalkHuskVisibility_Parms*)Obj)->visible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_SetPassivePhaseWalkHuskVisibility_Statics::NewProp_visible = { "visible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpiritPassivePhaseWalkHusk_eventSetPassivePhaseWalkHuskVisibility_Parms), &Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_SetPassivePhaseWalkHuskVisibility_Statics::NewProp_visible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_SetPassivePhaseWalkHuskVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_SetPassivePhaseWalkHuskVisibility_Statics::NewProp_visible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_SetPassivePhaseWalkHuskVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpiritPassivePhaseWalkHusk.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_SetPassivePhaseWalkHuskVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpiritPassivePhaseWalkHusk, nullptr, "SetPassivePhaseWalkHuskVisibility", nullptr, nullptr, sizeof(SpiritPassivePhaseWalkHusk_eventSetPassivePhaseWalkHuskVisibility_Parms), Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_SetPassivePhaseWalkHuskVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_SetPassivePhaseWalkHuskVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_SetPassivePhaseWalkHuskVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_SetPassivePhaseWalkHuskVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_SetPassivePhaseWalkHuskVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_SetPassivePhaseWalkHuskVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_SetScalarParameterOnAllChildrenMeshes_Statics
	{
		struct SpiritPassivePhaseWalkHusk_eventSetScalarParameterOnAllChildrenMeshes_Parms
		{
			FName parameterName;
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_parameterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_SetScalarParameterOnAllChildrenMeshes_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpiritPassivePhaseWalkHusk_eventSetScalarParameterOnAllChildrenMeshes_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_SetScalarParameterOnAllChildrenMeshes_Statics::NewProp_parameterName = { "parameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpiritPassivePhaseWalkHusk_eventSetScalarParameterOnAllChildrenMeshes_Parms, parameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_SetScalarParameterOnAllChildrenMeshes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_SetScalarParameterOnAllChildrenMeshes_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_SetScalarParameterOnAllChildrenMeshes_Statics::NewProp_parameterName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_SetScalarParameterOnAllChildrenMeshes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpiritPassivePhaseWalkHusk.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_SetScalarParameterOnAllChildrenMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpiritPassivePhaseWalkHusk, nullptr, "SetScalarParameterOnAllChildrenMeshes", nullptr, nullptr, sizeof(SpiritPassivePhaseWalkHusk_eventSetScalarParameterOnAllChildrenMeshes_Parms), Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_SetScalarParameterOnAllChildrenMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_SetScalarParameterOnAllChildrenMeshes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_SetScalarParameterOnAllChildrenMeshes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_SetScalarParameterOnAllChildrenMeshes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_SetScalarParameterOnAllChildrenMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_SetScalarParameterOnAllChildrenMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASpiritPassivePhaseWalkHusk_NoRegister()
	{
		return ASpiritPassivePhaseWalkHusk::StaticClass();
	}
	struct Z_Construct_UClass_ASpiritPassivePhaseWalkHusk_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__huskCustomizedSkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__huskCustomizedSkeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__huskMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__huskMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpiritPassivePhaseWalkHusk_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseVFX,
		(UObject* (*)())Z_Construct_UPackage__Script_TheSpirit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASpiritPassivePhaseWalkHusk_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_CaptureSpiritPose, "CaptureSpiritPose" }, // 93661096
		{ &Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_Cosmetic_InitializeSpiritPassivePhaseWalkHusk, "Cosmetic_InitializeSpiritPassivePhaseWalkHusk" }, // 995379757
		{ &Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_Cosmetic_StartFadeOutPassivePhaseWalkHusk, "Cosmetic_StartFadeOutPassivePhaseWalkHusk" }, // 1828685010
		{ &Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_InitializeSpiritPassivePhaseWalkHusk, "InitializeSpiritPassivePhaseWalkHusk" }, // 1034387010
		{ &Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_SetPassivePhaseWalkHuskVisibility, "SetPassivePhaseWalkHuskVisibility" }, // 3242879075
		{ &Z_Construct_UFunction_ASpiritPassivePhaseWalkHusk_SetScalarParameterOnAllChildrenMeshes, "SetScalarParameterOnAllChildrenMeshes" }, // 995826599
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpiritPassivePhaseWalkHusk_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpiritPassivePhaseWalkHusk.h" },
		{ "ModuleRelativePath", "Public/SpiritPassivePhaseWalkHusk.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpiritPassivePhaseWalkHusk_Statics::NewProp__huskCustomizedSkeletalMesh_MetaData[] = {
		{ "Category", "SpiritPassivePhaseWalkHusk" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpiritPassivePhaseWalkHusk.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpiritPassivePhaseWalkHusk_Statics::NewProp__huskCustomizedSkeletalMesh = { "_huskCustomizedSkeletalMesh", nullptr, (EPropertyFlags)0x002008000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpiritPassivePhaseWalkHusk, _huskCustomizedSkeletalMesh), Z_Construct_UClass_UCustomizedSkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpiritPassivePhaseWalkHusk_Statics::NewProp__huskCustomizedSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpiritPassivePhaseWalkHusk_Statics::NewProp__huskCustomizedSkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpiritPassivePhaseWalkHusk_Statics::NewProp__huskMesh_MetaData[] = {
		{ "Category", "SpiritPassivePhaseWalkHusk" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpiritPassivePhaseWalkHusk.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpiritPassivePhaseWalkHusk_Statics::NewProp__huskMesh = { "_huskMesh", nullptr, (EPropertyFlags)0x002008000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpiritPassivePhaseWalkHusk, _huskMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpiritPassivePhaseWalkHusk_Statics::NewProp__huskMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpiritPassivePhaseWalkHusk_Statics::NewProp__huskMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpiritPassivePhaseWalkHusk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpiritPassivePhaseWalkHusk_Statics::NewProp__huskCustomizedSkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpiritPassivePhaseWalkHusk_Statics::NewProp__huskMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpiritPassivePhaseWalkHusk_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpiritPassivePhaseWalkHusk>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpiritPassivePhaseWalkHusk_Statics::ClassParams = {
		&ASpiritPassivePhaseWalkHusk::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASpiritPassivePhaseWalkHusk_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpiritPassivePhaseWalkHusk_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASpiritPassivePhaseWalkHusk_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpiritPassivePhaseWalkHusk_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpiritPassivePhaseWalkHusk()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpiritPassivePhaseWalkHusk_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpiritPassivePhaseWalkHusk, 595184321);
	template<> THESPIRIT_API UClass* StaticClass<ASpiritPassivePhaseWalkHusk>()
	{
		return ASpiritPassivePhaseWalkHusk::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpiritPassivePhaseWalkHusk(Z_Construct_UClass_ASpiritPassivePhaseWalkHusk, &ASpiritPassivePhaseWalkHusk::StaticClass, TEXT("/Script/TheSpirit"), TEXT("ASpiritPassivePhaseWalkHusk"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpiritPassivePhaseWalkHusk);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
