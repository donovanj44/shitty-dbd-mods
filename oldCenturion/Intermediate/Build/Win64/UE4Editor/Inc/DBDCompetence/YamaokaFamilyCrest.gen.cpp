// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/YamaokaFamilyCrest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYamaokaFamilyCrest() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UYamaokaFamilyCrest_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UYamaokaFamilyCrest();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UItemAddon();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UYamaokaFamilyCrest::execOnRep_AddonActivationCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_AddonActivationCount();
		P_NATIVE_END;
	}
	static FName NAME_UYamaokaFamilyCrest_RevealSurvivor = FName(TEXT("RevealSurvivor"));
	void UYamaokaFamilyCrest::RevealSurvivor(ACamperPlayer* survivorToReveal)
	{
		YamaokaFamilyCrest_eventRevealSurvivor_Parms Parms;
		Parms.survivorToReveal=survivorToReveal;
		ProcessEvent(FindFunctionChecked(NAME_UYamaokaFamilyCrest_RevealSurvivor),&Parms);
	}
	void UYamaokaFamilyCrest::StaticRegisterNativesUYamaokaFamilyCrest()
	{
		UClass* Class = UYamaokaFamilyCrest::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_AddonActivationCount", &UYamaokaFamilyCrest::execOnRep_AddonActivationCount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYamaokaFamilyCrest_OnRep_AddonActivationCount_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYamaokaFamilyCrest_OnRep_AddonActivationCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YamaokaFamilyCrest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYamaokaFamilyCrest_OnRep_AddonActivationCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYamaokaFamilyCrest, nullptr, "OnRep_AddonActivationCount", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYamaokaFamilyCrest_OnRep_AddonActivationCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYamaokaFamilyCrest_OnRep_AddonActivationCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYamaokaFamilyCrest_OnRep_AddonActivationCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYamaokaFamilyCrest_OnRep_AddonActivationCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYamaokaFamilyCrest_RevealSurvivor_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivorToReveal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYamaokaFamilyCrest_RevealSurvivor_Statics::NewProp_survivorToReveal = { "survivorToReveal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YamaokaFamilyCrest_eventRevealSurvivor_Parms, survivorToReveal), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYamaokaFamilyCrest_RevealSurvivor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYamaokaFamilyCrest_RevealSurvivor_Statics::NewProp_survivorToReveal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYamaokaFamilyCrest_RevealSurvivor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YamaokaFamilyCrest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYamaokaFamilyCrest_RevealSurvivor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYamaokaFamilyCrest, nullptr, "RevealSurvivor", nullptr, nullptr, sizeof(YamaokaFamilyCrest_eventRevealSurvivor_Parms), Z_Construct_UFunction_UYamaokaFamilyCrest_RevealSurvivor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYamaokaFamilyCrest_RevealSurvivor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYamaokaFamilyCrest_RevealSurvivor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYamaokaFamilyCrest_RevealSurvivor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYamaokaFamilyCrest_RevealSurvivor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYamaokaFamilyCrest_RevealSurvivor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYamaokaFamilyCrest_NoRegister()
	{
		return UYamaokaFamilyCrest::StaticClass();
	}
	struct Z_Construct_UClass_UYamaokaFamilyCrest_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__addonActivationCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__addonActivationCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__survivorsToReveal_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__survivorsToReveal;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__survivorsToReveal_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__revealRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__revealRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__revealDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__revealDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYamaokaFamilyCrest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UItemAddon,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYamaokaFamilyCrest_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYamaokaFamilyCrest_OnRep_AddonActivationCount, "OnRep_AddonActivationCount" }, // 4289215999
		{ &Z_Construct_UFunction_UYamaokaFamilyCrest_RevealSurvivor, "RevealSurvivor" }, // 2328501840
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYamaokaFamilyCrest_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "YamaokaFamilyCrest.h" },
		{ "ModuleRelativePath", "Public/YamaokaFamilyCrest.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYamaokaFamilyCrest_Statics::NewProp__addonActivationCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/YamaokaFamilyCrest.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UYamaokaFamilyCrest_Statics::NewProp__addonActivationCount = { "_addonActivationCount", "OnRep_AddonActivationCount", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYamaokaFamilyCrest, _addonActivationCount), nullptr, METADATA_PARAMS(Z_Construct_UClass_UYamaokaFamilyCrest_Statics::NewProp__addonActivationCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYamaokaFamilyCrest_Statics::NewProp__addonActivationCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYamaokaFamilyCrest_Statics::NewProp__survivorsToReveal_MetaData[] = {
		{ "ModuleRelativePath", "Public/YamaokaFamilyCrest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UYamaokaFamilyCrest_Statics::NewProp__survivorsToReveal = { "_survivorsToReveal", nullptr, (EPropertyFlags)0x0040000000002020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYamaokaFamilyCrest, _survivorsToReveal), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UYamaokaFamilyCrest_Statics::NewProp__survivorsToReveal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYamaokaFamilyCrest_Statics::NewProp__survivorsToReveal_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UYamaokaFamilyCrest_Statics::NewProp__survivorsToReveal_Inner = { "_survivorsToReveal", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYamaokaFamilyCrest_Statics::NewProp__revealRange_MetaData[] = {
		{ "Category", "YamaokaFamilyCrest" },
		{ "ModuleRelativePath", "Public/YamaokaFamilyCrest.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UYamaokaFamilyCrest_Statics::NewProp__revealRange = { "_revealRange", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYamaokaFamilyCrest, _revealRange), METADATA_PARAMS(Z_Construct_UClass_UYamaokaFamilyCrest_Statics::NewProp__revealRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYamaokaFamilyCrest_Statics::NewProp__revealRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYamaokaFamilyCrest_Statics::NewProp__revealDuration_MetaData[] = {
		{ "Category", "YamaokaFamilyCrest" },
		{ "ModuleRelativePath", "Public/YamaokaFamilyCrest.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UYamaokaFamilyCrest_Statics::NewProp__revealDuration = { "_revealDuration", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYamaokaFamilyCrest, _revealDuration), METADATA_PARAMS(Z_Construct_UClass_UYamaokaFamilyCrest_Statics::NewProp__revealDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYamaokaFamilyCrest_Statics::NewProp__revealDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UYamaokaFamilyCrest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYamaokaFamilyCrest_Statics::NewProp__addonActivationCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYamaokaFamilyCrest_Statics::NewProp__survivorsToReveal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYamaokaFamilyCrest_Statics::NewProp__survivorsToReveal_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYamaokaFamilyCrest_Statics::NewProp__revealRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYamaokaFamilyCrest_Statics::NewProp__revealDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYamaokaFamilyCrest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYamaokaFamilyCrest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYamaokaFamilyCrest_Statics::ClassParams = {
		&UYamaokaFamilyCrest::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UYamaokaFamilyCrest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UYamaokaFamilyCrest_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UYamaokaFamilyCrest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYamaokaFamilyCrest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYamaokaFamilyCrest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYamaokaFamilyCrest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYamaokaFamilyCrest, 3366469729);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UYamaokaFamilyCrest>()
	{
		return UYamaokaFamilyCrest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYamaokaFamilyCrest(Z_Construct_UClass_UYamaokaFamilyCrest, &UYamaokaFamilyCrest::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UYamaokaFamilyCrest"), false, nullptr, nullptr, nullptr);

	void UYamaokaFamilyCrest::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__survivorsToReveal(TEXT("_survivorsToReveal"));
		static const FName Name__addonActivationCount(TEXT("_addonActivationCount"));

		const bool bIsValid = true
			&& Name__survivorsToReveal == ClassReps[(int32)ENetFields_Private::_survivorsToReveal].Property->GetFName()
			&& Name__addonActivationCount == ClassReps[(int32)ENetFields_Private::_addonActivationCount].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UYamaokaFamilyCrest"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYamaokaFamilyCrest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
