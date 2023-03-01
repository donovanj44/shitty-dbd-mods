// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/ZombieAttractedByGeneratorBTService.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieAttractedByGeneratorBTService() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_UZombieAttractedByGeneratorBTService_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_UZombieAttractedByGeneratorBTService();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlueprintBase();
	UPackage* Z_Construct_UPackage__Script_TheK24();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AGenerator_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UZombieAttractedByGeneratorBTService::execOnInRangeChanged)
	{
		P_GET_UBOOL(Z_Param_inRange);
		P_GET_OBJECT(AGenerator,Z_Param_generator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInRangeChanged(Z_Param_inRange,Z_Param_generator);
		P_NATIVE_END;
	}
	void UZombieAttractedByGeneratorBTService::StaticRegisterNativesUZombieAttractedByGeneratorBTService()
	{
		UClass* Class = UZombieAttractedByGeneratorBTService::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnInRangeChanged", &UZombieAttractedByGeneratorBTService::execOnInRangeChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UZombieAttractedByGeneratorBTService_OnInRangeChanged_Statics
	{
		struct ZombieAttractedByGeneratorBTService_eventOnInRangeChanged_Parms
		{
			bool inRange;
			AGenerator* generator;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_generator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inRange_MetaData[];
#endif
		static void NewProp_inRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UZombieAttractedByGeneratorBTService_OnInRangeChanged_Statics::NewProp_generator = { "generator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZombieAttractedByGeneratorBTService_eventOnInRangeChanged_Parms, generator), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZombieAttractedByGeneratorBTService_OnInRangeChanged_Statics::NewProp_inRange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UZombieAttractedByGeneratorBTService_OnInRangeChanged_Statics::NewProp_inRange_SetBit(void* Obj)
	{
		((ZombieAttractedByGeneratorBTService_eventOnInRangeChanged_Parms*)Obj)->inRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZombieAttractedByGeneratorBTService_OnInRangeChanged_Statics::NewProp_inRange = { "inRange", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ZombieAttractedByGeneratorBTService_eventOnInRangeChanged_Parms), &Z_Construct_UFunction_UZombieAttractedByGeneratorBTService_OnInRangeChanged_Statics::NewProp_inRange_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UZombieAttractedByGeneratorBTService_OnInRangeChanged_Statics::NewProp_inRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UZombieAttractedByGeneratorBTService_OnInRangeChanged_Statics::NewProp_inRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZombieAttractedByGeneratorBTService_OnInRangeChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZombieAttractedByGeneratorBTService_OnInRangeChanged_Statics::NewProp_generator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZombieAttractedByGeneratorBTService_OnInRangeChanged_Statics::NewProp_inRange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZombieAttractedByGeneratorBTService_OnInRangeChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZombieAttractedByGeneratorBTService.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UZombieAttractedByGeneratorBTService_OnInRangeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZombieAttractedByGeneratorBTService, nullptr, "OnInRangeChanged", nullptr, nullptr, sizeof(ZombieAttractedByGeneratorBTService_eventOnInRangeChanged_Parms), Z_Construct_UFunction_UZombieAttractedByGeneratorBTService_OnInRangeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZombieAttractedByGeneratorBTService_OnInRangeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UZombieAttractedByGeneratorBTService_OnInRangeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UZombieAttractedByGeneratorBTService_OnInRangeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UZombieAttractedByGeneratorBTService_OnInRangeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UZombieAttractedByGeneratorBTService_OnInRangeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UZombieAttractedByGeneratorBTService_NoRegister()
	{
		return UZombieAttractedByGeneratorBTService::StaticClass();
	}
	struct Z_Construct_UClass_UZombieAttractedByGeneratorBTService_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__genRepairingHearingRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__genRepairingHearingRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZombieAttractedByGeneratorBTService_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService_BlueprintBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UZombieAttractedByGeneratorBTService_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UZombieAttractedByGeneratorBTService_OnInRangeChanged, "OnInRangeChanged" }, // 2012808494
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZombieAttractedByGeneratorBTService_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ZombieAttractedByGeneratorBTService.h" },
		{ "ModuleRelativePath", "Public/ZombieAttractedByGeneratorBTService.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZombieAttractedByGeneratorBTService_Statics::NewProp__genRepairingHearingRange_MetaData[] = {
		{ "Category", "ZombieAttractedByGeneratorBTService" },
		{ "ModuleRelativePath", "Public/ZombieAttractedByGeneratorBTService.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UZombieAttractedByGeneratorBTService_Statics::NewProp__genRepairingHearingRange = { "_genRepairingHearingRange", nullptr, (EPropertyFlags)0x0040000000000801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UZombieAttractedByGeneratorBTService, _genRepairingHearingRange), METADATA_PARAMS(Z_Construct_UClass_UZombieAttractedByGeneratorBTService_Statics::NewProp__genRepairingHearingRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZombieAttractedByGeneratorBTService_Statics::NewProp__genRepairingHearingRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZombieAttractedByGeneratorBTService_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZombieAttractedByGeneratorBTService_Statics::NewProp__genRepairingHearingRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZombieAttractedByGeneratorBTService_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZombieAttractedByGeneratorBTService>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UZombieAttractedByGeneratorBTService_Statics::ClassParams = {
		&UZombieAttractedByGeneratorBTService::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UZombieAttractedByGeneratorBTService_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UZombieAttractedByGeneratorBTService_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UZombieAttractedByGeneratorBTService_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UZombieAttractedByGeneratorBTService_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UZombieAttractedByGeneratorBTService()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UZombieAttractedByGeneratorBTService_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UZombieAttractedByGeneratorBTService, 1559059781);
	template<> THEK24_API UClass* StaticClass<UZombieAttractedByGeneratorBTService>()
	{
		return UZombieAttractedByGeneratorBTService::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UZombieAttractedByGeneratorBTService(Z_Construct_UClass_UZombieAttractedByGeneratorBTService, &UZombieAttractedByGeneratorBTService::StaticClass, TEXT("/Script/TheK24"), TEXT("UZombieAttractedByGeneratorBTService"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZombieAttractedByGeneratorBTService);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
