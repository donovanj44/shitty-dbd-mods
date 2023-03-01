// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGunslinger/Public/RedHerring.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRedHerring() {}
// Cross Module References
	THEGUNSLINGER_API UClass* Z_Construct_UClass_URedHerring_NoRegister();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_URedHerring();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_TheGunslinger();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AGenerator_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(URedHerring::execOnRep_MarkedGenerator)
	{
		P_GET_OBJECT(AGenerator,Z_Param_oldMarkedGenerator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MarkedGenerator(Z_Param_oldMarkedGenerator);
		P_NATIVE_END;
	}
	static FName NAME_URedHerring_OnLoudNoiseTriggered = FName(TEXT("OnLoudNoiseTriggered"));
	void URedHerring::OnLoudNoiseTriggered()
	{
		ProcessEvent(FindFunctionChecked(NAME_URedHerring_OnLoudNoiseTriggered),NULL);
	}
	void URedHerring::StaticRegisterNativesURedHerring()
	{
		UClass* Class = URedHerring::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_MarkedGenerator", &URedHerring::execOnRep_MarkedGenerator },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URedHerring_OnLoudNoiseTriggered_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URedHerring_OnLoudNoiseTriggered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RedHerring.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URedHerring_OnLoudNoiseTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URedHerring, nullptr, "OnLoudNoiseTriggered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URedHerring_OnLoudNoiseTriggered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URedHerring_OnLoudNoiseTriggered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URedHerring_OnLoudNoiseTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URedHerring_OnLoudNoiseTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URedHerring_OnRep_MarkedGenerator_Statics
	{
		struct RedHerring_eventOnRep_MarkedGenerator_Parms
		{
			AGenerator* oldMarkedGenerator;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_oldMarkedGenerator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URedHerring_OnRep_MarkedGenerator_Statics::NewProp_oldMarkedGenerator = { "oldMarkedGenerator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RedHerring_eventOnRep_MarkedGenerator_Parms, oldMarkedGenerator), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URedHerring_OnRep_MarkedGenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URedHerring_OnRep_MarkedGenerator_Statics::NewProp_oldMarkedGenerator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URedHerring_OnRep_MarkedGenerator_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RedHerring.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URedHerring_OnRep_MarkedGenerator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URedHerring, nullptr, "OnRep_MarkedGenerator", nullptr, nullptr, sizeof(RedHerring_eventOnRep_MarkedGenerator_Parms), Z_Construct_UFunction_URedHerring_OnRep_MarkedGenerator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URedHerring_OnRep_MarkedGenerator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URedHerring_OnRep_MarkedGenerator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URedHerring_OnRep_MarkedGenerator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URedHerring_OnRep_MarkedGenerator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URedHerring_OnRep_MarkedGenerator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URedHerring_NoRegister()
	{
		return URedHerring::StaticClass();
	}
	struct Z_Construct_UClass_URedHerring_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cooldownLevels_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__cooldownLevels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__loudNoiseTriggeredNotifyTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__loudNoiseTriggeredNotifyTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__secondsToActivatePerk_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__secondsToActivatePerk;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__markedGenerator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__markedGenerator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__generatorBeingRepaired_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__generatorBeingRepaired;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URedHerring_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheGunslinger,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URedHerring_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URedHerring_OnLoudNoiseTriggered, "OnLoudNoiseTriggered" }, // 993936988
		{ &Z_Construct_UFunction_URedHerring_OnRep_MarkedGenerator, "OnRep_MarkedGenerator" }, // 2629261593
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URedHerring_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RedHerring.h" },
		{ "ModuleRelativePath", "Public/RedHerring.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URedHerring_Statics::NewProp__cooldownLevels_MetaData[] = {
		{ "Category", "RedHerring" },
		{ "ModuleRelativePath", "Public/RedHerring.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URedHerring_Statics::NewProp__cooldownLevels = { "_cooldownLevels", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_cooldownLevels, URedHerring), STRUCT_OFFSET(URedHerring, _cooldownLevels), METADATA_PARAMS(Z_Construct_UClass_URedHerring_Statics::NewProp__cooldownLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URedHerring_Statics::NewProp__cooldownLevels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URedHerring_Statics::NewProp__loudNoiseTriggeredNotifyTime_MetaData[] = {
		{ "Category", "RedHerring" },
		{ "ModuleRelativePath", "Public/RedHerring.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URedHerring_Statics::NewProp__loudNoiseTriggeredNotifyTime = { "_loudNoiseTriggeredNotifyTime", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URedHerring, _loudNoiseTriggeredNotifyTime), METADATA_PARAMS(Z_Construct_UClass_URedHerring_Statics::NewProp__loudNoiseTriggeredNotifyTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URedHerring_Statics::NewProp__loudNoiseTriggeredNotifyTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URedHerring_Statics::NewProp__secondsToActivatePerk_MetaData[] = {
		{ "Category", "RedHerring" },
		{ "ModuleRelativePath", "Public/RedHerring.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URedHerring_Statics::NewProp__secondsToActivatePerk = { "_secondsToActivatePerk", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URedHerring, _secondsToActivatePerk), METADATA_PARAMS(Z_Construct_UClass_URedHerring_Statics::NewProp__secondsToActivatePerk_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URedHerring_Statics::NewProp__secondsToActivatePerk_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URedHerring_Statics::NewProp__markedGenerator_MetaData[] = {
		{ "ModuleRelativePath", "Public/RedHerring.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URedHerring_Statics::NewProp__markedGenerator = { "_markedGenerator", "OnRep_MarkedGenerator", (EPropertyFlags)0x0020080100002020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URedHerring, _markedGenerator), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URedHerring_Statics::NewProp__markedGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URedHerring_Statics::NewProp__markedGenerator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URedHerring_Statics::NewProp__generatorBeingRepaired_MetaData[] = {
		{ "ModuleRelativePath", "Public/RedHerring.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URedHerring_Statics::NewProp__generatorBeingRepaired = { "_generatorBeingRepaired", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URedHerring, _generatorBeingRepaired), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URedHerring_Statics::NewProp__generatorBeingRepaired_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URedHerring_Statics::NewProp__generatorBeingRepaired_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URedHerring_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URedHerring_Statics::NewProp__cooldownLevels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URedHerring_Statics::NewProp__loudNoiseTriggeredNotifyTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URedHerring_Statics::NewProp__secondsToActivatePerk,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URedHerring_Statics::NewProp__markedGenerator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URedHerring_Statics::NewProp__generatorBeingRepaired,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URedHerring_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URedHerring>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URedHerring_Statics::ClassParams = {
		&URedHerring::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URedHerring_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URedHerring_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URedHerring_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URedHerring_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URedHerring()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URedHerring_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URedHerring, 4288992951);
	template<> THEGUNSLINGER_API UClass* StaticClass<URedHerring>()
	{
		return URedHerring::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URedHerring(Z_Construct_UClass_URedHerring, &URedHerring::StaticClass, TEXT("/Script/TheGunslinger"), TEXT("URedHerring"), false, nullptr, nullptr, nullptr);

	void URedHerring::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__markedGenerator(TEXT("_markedGenerator"));

		const bool bIsValid = true
			&& Name__markedGenerator == ClassReps[(int32)ENetFields_Private::_markedGenerator].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in URedHerring"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URedHerring);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
