// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DiscordancePerk.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordancePerk() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDiscordancePerk_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDiscordancePerk();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AGenerator_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGeneratorQueryHandlePair();
// End Cross Module References
	DEFINE_FUNCTION(UDiscordancePerk::execMulticast_AddGeneratorAura)
	{
		P_GET_OBJECT(AGenerator,Z_Param_generator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_AddGeneratorAura_Implementation(Z_Param_generator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordancePerk::execMulticast_AddLingeringGeneratorAura)
	{
		P_GET_OBJECT(AGenerator,Z_Param_generator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_AddLingeringGeneratorAura_Implementation(Z_Param_generator);
		P_NATIVE_END;
	}
	static FName NAME_UDiscordancePerk_Multicast_AddGeneratorAura = FName(TEXT("Multicast_AddGeneratorAura"));
	void UDiscordancePerk::Multicast_AddGeneratorAura(AGenerator* generator)
	{
		DiscordancePerk_eventMulticast_AddGeneratorAura_Parms Parms;
		Parms.generator=generator;
		ProcessEvent(FindFunctionChecked(NAME_UDiscordancePerk_Multicast_AddGeneratorAura),&Parms);
	}
	static FName NAME_UDiscordancePerk_Multicast_AddLingeringGeneratorAura = FName(TEXT("Multicast_AddLingeringGeneratorAura"));
	void UDiscordancePerk::Multicast_AddLingeringGeneratorAura(AGenerator* generator)
	{
		DiscordancePerk_eventMulticast_AddLingeringGeneratorAura_Parms Parms;
		Parms.generator=generator;
		ProcessEvent(FindFunctionChecked(NAME_UDiscordancePerk_Multicast_AddLingeringGeneratorAura),&Parms);
	}
	void UDiscordancePerk::StaticRegisterNativesUDiscordancePerk()
	{
		UClass* Class = UDiscordancePerk::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_AddGeneratorAura", &UDiscordancePerk::execMulticast_AddGeneratorAura },
			{ "Multicast_AddLingeringGeneratorAura", &UDiscordancePerk::execMulticast_AddLingeringGeneratorAura },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDiscordancePerk_Multicast_AddGeneratorAura_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_generator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDiscordancePerk_Multicast_AddGeneratorAura_Statics::NewProp_generator = { "generator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordancePerk_eventMulticast_AddGeneratorAura_Parms, generator), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordancePerk_Multicast_AddGeneratorAura_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordancePerk_Multicast_AddGeneratorAura_Statics::NewProp_generator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordancePerk_Multicast_AddGeneratorAura_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordancePerk.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordancePerk_Multicast_AddGeneratorAura_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordancePerk, nullptr, "Multicast_AddGeneratorAura", nullptr, nullptr, sizeof(DiscordancePerk_eventMulticast_AddGeneratorAura_Parms), Z_Construct_UFunction_UDiscordancePerk_Multicast_AddGeneratorAura_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordancePerk_Multicast_AddGeneratorAura_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordancePerk_Multicast_AddGeneratorAura_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordancePerk_Multicast_AddGeneratorAura_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordancePerk_Multicast_AddGeneratorAura()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordancePerk_Multicast_AddGeneratorAura_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordancePerk_Multicast_AddLingeringGeneratorAura_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_generator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDiscordancePerk_Multicast_AddLingeringGeneratorAura_Statics::NewProp_generator = { "generator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordancePerk_eventMulticast_AddLingeringGeneratorAura_Parms, generator), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordancePerk_Multicast_AddLingeringGeneratorAura_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordancePerk_Multicast_AddLingeringGeneratorAura_Statics::NewProp_generator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordancePerk_Multicast_AddLingeringGeneratorAura_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordancePerk.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordancePerk_Multicast_AddLingeringGeneratorAura_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordancePerk, nullptr, "Multicast_AddLingeringGeneratorAura", nullptr, nullptr, sizeof(DiscordancePerk_eventMulticast_AddLingeringGeneratorAura_Parms), Z_Construct_UFunction_UDiscordancePerk_Multicast_AddLingeringGeneratorAura_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordancePerk_Multicast_AddLingeringGeneratorAura_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordancePerk_Multicast_AddLingeringGeneratorAura_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordancePerk_Multicast_AddLingeringGeneratorAura_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordancePerk_Multicast_AddLingeringGeneratorAura()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordancePerk_Multicast_AddLingeringGeneratorAura_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDiscordancePerk_NoRegister()
	{
		return UDiscordancePerk::StaticClass();
	}
	struct Z_Construct_UClass_UDiscordancePerk_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__genratorToCheckNextFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__genratorToCheckNextFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isPerkConsideredActive_MetaData[];
#endif
		static void NewProp__isPerkConsideredActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isPerkConsideredActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__numSurvivorsRepairingToReveal_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__numSurvivorsRepairingToReveal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__auraLingerDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__auraLingerDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__effectRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__effectRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__generatorQueryHandlePairs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__generatorQueryHandlePairs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__generatorQueryHandlePairs_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDiscordancePerk_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDiscordancePerk_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDiscordancePerk_Multicast_AddGeneratorAura, "Multicast_AddGeneratorAura" }, // 1344633021
		{ &Z_Construct_UFunction_UDiscordancePerk_Multicast_AddLingeringGeneratorAura, "Multicast_AddLingeringGeneratorAura" }, // 2299866296
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordancePerk_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DiscordancePerk.h" },
		{ "ModuleRelativePath", "Public/DiscordancePerk.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordancePerk_Statics::NewProp__genratorToCheckNextFrame_MetaData[] = {
		{ "ModuleRelativePath", "Public/DiscordancePerk.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDiscordancePerk_Statics::NewProp__genratorToCheckNextFrame = { "_genratorToCheckNextFrame", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordancePerk, _genratorToCheckNextFrame), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDiscordancePerk_Statics::NewProp__genratorToCheckNextFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordancePerk_Statics::NewProp__genratorToCheckNextFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordancePerk_Statics::NewProp__isPerkConsideredActive_MetaData[] = {
		{ "ModuleRelativePath", "Public/DiscordancePerk.h" },
	};
#endif
	void Z_Construct_UClass_UDiscordancePerk_Statics::NewProp__isPerkConsideredActive_SetBit(void* Obj)
	{
		((UDiscordancePerk*)Obj)->_isPerkConsideredActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDiscordancePerk_Statics::NewProp__isPerkConsideredActive = { "_isPerkConsideredActive", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDiscordancePerk), &Z_Construct_UClass_UDiscordancePerk_Statics::NewProp__isPerkConsideredActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDiscordancePerk_Statics::NewProp__isPerkConsideredActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordancePerk_Statics::NewProp__isPerkConsideredActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordancePerk_Statics::NewProp__numSurvivorsRepairingToReveal_MetaData[] = {
		{ "Category", "DiscordancePerk" },
		{ "ModuleRelativePath", "Public/DiscordancePerk.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDiscordancePerk_Statics::NewProp__numSurvivorsRepairingToReveal = { "_numSurvivorsRepairingToReveal", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordancePerk, _numSurvivorsRepairingToReveal), METADATA_PARAMS(Z_Construct_UClass_UDiscordancePerk_Statics::NewProp__numSurvivorsRepairingToReveal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordancePerk_Statics::NewProp__numSurvivorsRepairingToReveal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordancePerk_Statics::NewProp__auraLingerDuration_MetaData[] = {
		{ "Category", "DiscordancePerk" },
		{ "ModuleRelativePath", "Public/DiscordancePerk.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDiscordancePerk_Statics::NewProp__auraLingerDuration = { "_auraLingerDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordancePerk, _auraLingerDuration), METADATA_PARAMS(Z_Construct_UClass_UDiscordancePerk_Statics::NewProp__auraLingerDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordancePerk_Statics::NewProp__auraLingerDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordancePerk_Statics::NewProp__effectRange_MetaData[] = {
		{ "Category", "DiscordancePerk" },
		{ "ModuleRelativePath", "Public/DiscordancePerk.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDiscordancePerk_Statics::NewProp__effectRange = { "_effectRange", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_effectRange, UDiscordancePerk), STRUCT_OFFSET(UDiscordancePerk, _effectRange), METADATA_PARAMS(Z_Construct_UClass_UDiscordancePerk_Statics::NewProp__effectRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordancePerk_Statics::NewProp__effectRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordancePerk_Statics::NewProp__generatorQueryHandlePairs_MetaData[] = {
		{ "ModuleRelativePath", "Public/DiscordancePerk.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDiscordancePerk_Statics::NewProp__generatorQueryHandlePairs = { "_generatorQueryHandlePairs", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordancePerk, _generatorQueryHandlePairs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDiscordancePerk_Statics::NewProp__generatorQueryHandlePairs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordancePerk_Statics::NewProp__generatorQueryHandlePairs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDiscordancePerk_Statics::NewProp__generatorQueryHandlePairs_Inner = { "_generatorQueryHandlePairs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGeneratorQueryHandlePair, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDiscordancePerk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordancePerk_Statics::NewProp__genratorToCheckNextFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordancePerk_Statics::NewProp__isPerkConsideredActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordancePerk_Statics::NewProp__numSurvivorsRepairingToReveal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordancePerk_Statics::NewProp__auraLingerDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordancePerk_Statics::NewProp__effectRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordancePerk_Statics::NewProp__generatorQueryHandlePairs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordancePerk_Statics::NewProp__generatorQueryHandlePairs_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDiscordancePerk_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDiscordancePerk>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDiscordancePerk_Statics::ClassParams = {
		&UDiscordancePerk::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDiscordancePerk_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordancePerk_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDiscordancePerk_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordancePerk_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDiscordancePerk()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDiscordancePerk_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDiscordancePerk, 608838142);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDiscordancePerk>()
	{
		return UDiscordancePerk::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDiscordancePerk(Z_Construct_UClass_UDiscordancePerk, &UDiscordancePerk::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDiscordancePerk"), false, nullptr, nullptr, nullptr);

	void UDiscordancePerk::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__isPerkConsideredActive(TEXT("_isPerkConsideredActive"));

		const bool bIsValid = true
			&& Name__isPerkConsideredActive == ClassReps[(int32)ENetFields_Private::_isPerkConsideredActive].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UDiscordancePerk"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDiscordancePerk);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
