// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/Deception.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeception() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_UDeception_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UDeception();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UManualIconStrategy_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffect_NoRegister();
// End Cross Module References
	static FName NAME_UDeception_OnOwningPlayerFakedEnteringLockerCosmetic = FName(TEXT("OnOwningPlayerFakedEnteringLockerCosmetic"));
	void UDeception::OnOwningPlayerFakedEnteringLockerCosmetic()
	{
		ProcessEvent(FindFunctionChecked(NAME_UDeception_OnOwningPlayerFakedEnteringLockerCosmetic),NULL);
	}
	void UDeception::StaticRegisterNativesUDeception()
	{
	}
	struct Z_Construct_UFunction_UDeception_OnOwningPlayerFakedEnteringLockerCosmetic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeception_OnOwningPlayerFakedEnteringLockerCosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Deception.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeception_OnOwningPlayerFakedEnteringLockerCosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeception, nullptr, "OnOwningPlayerFakedEnteringLockerCosmetic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDeception_OnOwningPlayerFakedEnteringLockerCosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeception_OnOwningPlayerFakedEnteringLockerCosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDeception_OnOwningPlayerFakedEnteringLockerCosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDeception_OnOwningPlayerFakedEnteringLockerCosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDeception_NoRegister()
	{
		return UDeception::StaticClass();
	}
	struct Z_Construct_UClass_UDeception_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__iconStrategy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__iconStrategy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__statusEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__statusEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__perkCooldownDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__perkCooldownDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__noScratchMarksDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__noScratchMarksDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDeception_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDeception_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDeception_OnOwningPlayerFakedEnteringLockerCosmetic, "OnOwningPlayerFakedEnteringLockerCosmetic" }, // 3676706068
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeception_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Deception.h" },
		{ "ModuleRelativePath", "Public/Deception.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeception_Statics::NewProp__iconStrategy_MetaData[] = {
		{ "ModuleRelativePath", "Public/Deception.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDeception_Statics::NewProp__iconStrategy = { "_iconStrategy", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDeception, _iconStrategy), Z_Construct_UClass_UManualIconStrategy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDeception_Statics::NewProp__iconStrategy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeception_Statics::NewProp__iconStrategy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeception_Statics::NewProp__statusEffect_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Deception.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDeception_Statics::NewProp__statusEffect = { "_statusEffect", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDeception, _statusEffect), Z_Construct_UClass_UStatusEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDeception_Statics::NewProp__statusEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeception_Statics::NewProp__statusEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeception_Statics::NewProp__perkCooldownDuration_MetaData[] = {
		{ "Category", "Deception" },
		{ "ModuleRelativePath", "Public/Deception.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDeception_Statics::NewProp__perkCooldownDuration = { "_perkCooldownDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_perkCooldownDuration, UDeception), STRUCT_OFFSET(UDeception, _perkCooldownDuration), METADATA_PARAMS(Z_Construct_UClass_UDeception_Statics::NewProp__perkCooldownDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeception_Statics::NewProp__perkCooldownDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeception_Statics::NewProp__noScratchMarksDuration_MetaData[] = {
		{ "Category", "Deception" },
		{ "ModuleRelativePath", "Public/Deception.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDeception_Statics::NewProp__noScratchMarksDuration = { "_noScratchMarksDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_noScratchMarksDuration, UDeception), STRUCT_OFFSET(UDeception, _noScratchMarksDuration), METADATA_PARAMS(Z_Construct_UClass_UDeception_Statics::NewProp__noScratchMarksDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeception_Statics::NewProp__noScratchMarksDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDeception_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeception_Statics::NewProp__iconStrategy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeception_Statics::NewProp__statusEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeception_Statics::NewProp__perkCooldownDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeception_Statics::NewProp__noScratchMarksDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDeception_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeception>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDeception_Statics::ClassParams = {
		&UDeception::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDeception_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDeception_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDeception_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDeception_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDeception()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDeception_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDeception, 3396947188);
	template<> THETWINS_API UClass* StaticClass<UDeception>()
	{
		return UDeception::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDeception(Z_Construct_UClass_UDeception, &UDeception::StaticClass, TEXT("/Script/TheTwins"), TEXT("UDeception"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDeception);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
