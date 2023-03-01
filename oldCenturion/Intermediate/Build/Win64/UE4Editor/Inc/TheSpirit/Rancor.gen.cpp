// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheSpirit/Public/Rancor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRancor() {}
// Cross Module References
	THESPIRIT_API UClass* Z_Construct_UClass_URancor_NoRegister();
	THESPIRIT_API UClass* Z_Construct_UClass_URancor();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_TheSpirit();
// End Cross Module References
	DEFINE_FUNCTION(URancor::execGetSurvivorRevealDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSurvivorRevealDuration();
		P_NATIVE_END;
	}
	static FName NAME_URancor_SpawnBubbleAtSurvivorsLocation = FName(TEXT("SpawnBubbleAtSurvivorsLocation"));
	void URancor::SpawnBubbleAtSurvivorsLocation()
	{
		ProcessEvent(FindFunctionChecked(NAME_URancor_SpawnBubbleAtSurvivorsLocation),NULL);
	}
	void URancor::StaticRegisterNativesURancor()
	{
		UClass* Class = URancor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSurvivorRevealDuration", &URancor::execGetSurvivorRevealDuration },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URancor_GetSurvivorRevealDuration_Statics
	{
		struct Rancor_eventGetSurvivorRevealDuration_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URancor_GetSurvivorRevealDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Rancor_eventGetSurvivorRevealDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URancor_GetSurvivorRevealDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URancor_GetSurvivorRevealDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URancor_GetSurvivorRevealDuration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rancor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URancor_GetSurvivorRevealDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URancor, nullptr, "GetSurvivorRevealDuration", nullptr, nullptr, sizeof(Rancor_eventGetSurvivorRevealDuration_Parms), Z_Construct_UFunction_URancor_GetSurvivorRevealDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URancor_GetSurvivorRevealDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URancor_GetSurvivorRevealDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URancor_GetSurvivorRevealDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URancor_GetSurvivorRevealDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URancor_GetSurvivorRevealDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URancor_SpawnBubbleAtSurvivorsLocation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URancor_SpawnBubbleAtSurvivorsLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rancor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URancor_SpawnBubbleAtSurvivorsLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URancor, nullptr, "SpawnBubbleAtSurvivorsLocation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URancor_SpawnBubbleAtSurvivorsLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URancor_SpawnBubbleAtSurvivorsLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URancor_SpawnBubbleAtSurvivorsLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URancor_SpawnBubbleAtSurvivorsLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URancor_NoRegister()
	{
		return URancor::StaticClass();
	}
	struct Z_Construct_UClass_URancor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__killerRevealToObsessionDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__killerRevealToObsessionDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__survivorRevealDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__survivorRevealDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URancor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheSpirit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URancor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URancor_GetSurvivorRevealDuration, "GetSurvivorRevealDuration" }, // 1883514446
		{ &Z_Construct_UFunction_URancor_SpawnBubbleAtSurvivorsLocation, "SpawnBubbleAtSurvivorsLocation" }, // 3943086762
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URancor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Rancor.h" },
		{ "ModuleRelativePath", "Public/Rancor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URancor_Statics::NewProp__killerRevealToObsessionDuration_MetaData[] = {
		{ "Category", "Rancor" },
		{ "ModuleRelativePath", "Public/Rancor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URancor_Statics::NewProp__killerRevealToObsessionDuration = { "_killerRevealToObsessionDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_killerRevealToObsessionDuration, URancor), STRUCT_OFFSET(URancor, _killerRevealToObsessionDuration), METADATA_PARAMS(Z_Construct_UClass_URancor_Statics::NewProp__killerRevealToObsessionDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URancor_Statics::NewProp__killerRevealToObsessionDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URancor_Statics::NewProp__survivorRevealDuration_MetaData[] = {
		{ "Category", "Rancor" },
		{ "ModuleRelativePath", "Public/Rancor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URancor_Statics::NewProp__survivorRevealDuration = { "_survivorRevealDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URancor, _survivorRevealDuration), METADATA_PARAMS(Z_Construct_UClass_URancor_Statics::NewProp__survivorRevealDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URancor_Statics::NewProp__survivorRevealDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URancor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URancor_Statics::NewProp__killerRevealToObsessionDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URancor_Statics::NewProp__survivorRevealDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URancor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URancor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URancor_Statics::ClassParams = {
		&URancor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URancor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URancor_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URancor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URancor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URancor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URancor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URancor, 3425315675);
	template<> THESPIRIT_API UClass* StaticClass<URancor>()
	{
		return URancor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URancor(Z_Construct_UClass_URancor, &URancor::StaticClass, TEXT("/Script/TheSpirit"), TEXT("URancor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URancor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
