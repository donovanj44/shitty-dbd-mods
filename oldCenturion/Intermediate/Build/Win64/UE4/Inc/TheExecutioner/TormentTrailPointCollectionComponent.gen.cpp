// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheExecutioner/Public/TormentTrailPointCollectionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTormentTrailPointCollectionComponent() {}
// Cross Module References
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UTormentTrailPointCollectionComponent_NoRegister();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UTormentTrailPointCollectionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheExecutioner();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_ATormentTrailPoint_NoRegister();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	DEFINE_FUNCTION(UTormentTrailPointCollectionComponent::execOnTrailAcquireChanged)
	{
		P_GET_OBJECT(ATormentTrailPoint,Z_Param_trailPoint);
		P_GET_UBOOL(Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTrailAcquireChanged(Z_Param_trailPoint,Z_Param_value);
		P_NATIVE_END;
	}
	void UTormentTrailPointCollectionComponent::StaticRegisterNativesUTormentTrailPointCollectionComponent()
	{
		UClass* Class = UTormentTrailPointCollectionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTrailAcquireChanged", &UTormentTrailPointCollectionComponent::execOnTrailAcquireChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTormentTrailPointCollectionComponent_OnTrailAcquireChanged_Statics
	{
		struct TormentTrailPointCollectionComponent_eventOnTrailAcquireChanged_Parms
		{
			ATormentTrailPoint* trailPoint;
			bool value;
		};
		static void NewProp_value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_trailPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTormentTrailPointCollectionComponent_OnTrailAcquireChanged_Statics::NewProp_value_SetBit(void* Obj)
	{
		((TormentTrailPointCollectionComponent_eventOnTrailAcquireChanged_Parms*)Obj)->value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTormentTrailPointCollectionComponent_OnTrailAcquireChanged_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TormentTrailPointCollectionComponent_eventOnTrailAcquireChanged_Parms), &Z_Construct_UFunction_UTormentTrailPointCollectionComponent_OnTrailAcquireChanged_Statics::NewProp_value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTormentTrailPointCollectionComponent_OnTrailAcquireChanged_Statics::NewProp_trailPoint = { "trailPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TormentTrailPointCollectionComponent_eventOnTrailAcquireChanged_Parms, trailPoint), Z_Construct_UClass_ATormentTrailPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTormentTrailPointCollectionComponent_OnTrailAcquireChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTormentTrailPointCollectionComponent_OnTrailAcquireChanged_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTormentTrailPointCollectionComponent_OnTrailAcquireChanged_Statics::NewProp_trailPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTormentTrailPointCollectionComponent_OnTrailAcquireChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TormentTrailPointCollectionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTormentTrailPointCollectionComponent_OnTrailAcquireChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTormentTrailPointCollectionComponent, nullptr, "OnTrailAcquireChanged", nullptr, nullptr, sizeof(TormentTrailPointCollectionComponent_eventOnTrailAcquireChanged_Parms), Z_Construct_UFunction_UTormentTrailPointCollectionComponent_OnTrailAcquireChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTormentTrailPointCollectionComponent_OnTrailAcquireChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTormentTrailPointCollectionComponent_OnTrailAcquireChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTormentTrailPointCollectionComponent_OnTrailAcquireChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTormentTrailPointCollectionComponent_OnTrailAcquireChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTormentTrailPointCollectionComponent_OnTrailAcquireChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTormentTrailPointCollectionComponent_NoRegister()
	{
		return UTormentTrailPointCollectionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTormentTrailPointCollectionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxNumberOfTrailPointInGame_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__maxNumberOfTrailPointInGame;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTormentTrailPointCollectionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheExecutioner,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTormentTrailPointCollectionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTormentTrailPointCollectionComponent_OnTrailAcquireChanged, "OnTrailAcquireChanged" }, // 4218270015
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTormentTrailPointCollectionComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TormentTrailPointCollectionComponent.h" },
		{ "ModuleRelativePath", "Public/TormentTrailPointCollectionComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTormentTrailPointCollectionComponent_Statics::NewProp__maxNumberOfTrailPointInGame_MetaData[] = {
		{ "Category", "TormentTrailPointCollectionComponent" },
		{ "ModuleRelativePath", "Public/TormentTrailPointCollectionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTormentTrailPointCollectionComponent_Statics::NewProp__maxNumberOfTrailPointInGame = { "_maxNumberOfTrailPointInGame", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTormentTrailPointCollectionComponent, _maxNumberOfTrailPointInGame), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UTormentTrailPointCollectionComponent_Statics::NewProp__maxNumberOfTrailPointInGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTormentTrailPointCollectionComponent_Statics::NewProp__maxNumberOfTrailPointInGame_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTormentTrailPointCollectionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTormentTrailPointCollectionComponent_Statics::NewProp__maxNumberOfTrailPointInGame,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTormentTrailPointCollectionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTormentTrailPointCollectionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTormentTrailPointCollectionComponent_Statics::ClassParams = {
		&UTormentTrailPointCollectionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTormentTrailPointCollectionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTormentTrailPointCollectionComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTormentTrailPointCollectionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTormentTrailPointCollectionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTormentTrailPointCollectionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTormentTrailPointCollectionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTormentTrailPointCollectionComponent, 2632773565);
	template<> THEEXECUTIONER_API UClass* StaticClass<UTormentTrailPointCollectionComponent>()
	{
		return UTormentTrailPointCollectionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTormentTrailPointCollectionComponent(Z_Construct_UClass_UTormentTrailPointCollectionComponent, &UTormentTrailPointCollectionComponent::StaticClass, TEXT("/Script/TheExecutioner"), TEXT("UTormentTrailPointCollectionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTormentTrailPointCollectionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
