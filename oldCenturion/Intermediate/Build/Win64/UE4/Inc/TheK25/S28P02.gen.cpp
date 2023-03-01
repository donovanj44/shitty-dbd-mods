// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/S28P02.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeS28P02() {}
// Cross Module References
	THEK25_API UClass* Z_Construct_UClass_US28P02_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_US28P02();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UBoonPerk();
	UPackage* Z_Construct_UPackage__Script_TheK25();
// End Cross Module References
	void US28P02::StaticRegisterNativesUS28P02()
	{
	}
	UClass* Z_Construct_UClass_US28P02_NoRegister()
	{
		return US28P02::StaticClass();
	}
	struct Z_Construct_UClass_US28P02_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__selfHealSpeedPenalty_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__selfHealSpeedPenalty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__canSelfHeal_MetaData[];
#endif
		static void NewProp__canSelfHeal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__canSelfHeal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__healingSpeedGainPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__healingSpeedGainPercentage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_US28P02_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBoonPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_US28P02_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "S28P02.h" },
		{ "ModuleRelativePath", "Public/S28P02.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_US28P02_Statics::NewProp__selfHealSpeedPenalty_MetaData[] = {
		{ "Category", "S28P02" },
		{ "ModuleRelativePath", "Public/S28P02.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_US28P02_Statics::NewProp__selfHealSpeedPenalty = { "_selfHealSpeedPenalty", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_selfHealSpeedPenalty, US28P02), STRUCT_OFFSET(US28P02, _selfHealSpeedPenalty), METADATA_PARAMS(Z_Construct_UClass_US28P02_Statics::NewProp__selfHealSpeedPenalty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_US28P02_Statics::NewProp__selfHealSpeedPenalty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_US28P02_Statics::NewProp__canSelfHeal_MetaData[] = {
		{ "Category", "S28P02" },
		{ "ModuleRelativePath", "Public/S28P02.h" },
	};
#endif
	void Z_Construct_UClass_US28P02_Statics::NewProp__canSelfHeal_SetBit(void* Obj)
	{
		((US28P02*)Obj)->_canSelfHeal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_US28P02_Statics::NewProp__canSelfHeal = { "_canSelfHeal", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(US28P02), &Z_Construct_UClass_US28P02_Statics::NewProp__canSelfHeal_SetBit, METADATA_PARAMS(Z_Construct_UClass_US28P02_Statics::NewProp__canSelfHeal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_US28P02_Statics::NewProp__canSelfHeal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_US28P02_Statics::NewProp__healingSpeedGainPercentage_MetaData[] = {
		{ "Category", "S28P02" },
		{ "ModuleRelativePath", "Public/S28P02.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_US28P02_Statics::NewProp__healingSpeedGainPercentage = { "_healingSpeedGainPercentage", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_healingSpeedGainPercentage, US28P02), STRUCT_OFFSET(US28P02, _healingSpeedGainPercentage), METADATA_PARAMS(Z_Construct_UClass_US28P02_Statics::NewProp__healingSpeedGainPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_US28P02_Statics::NewProp__healingSpeedGainPercentage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_US28P02_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_US28P02_Statics::NewProp__selfHealSpeedPenalty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_US28P02_Statics::NewProp__canSelfHeal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_US28P02_Statics::NewProp__healingSpeedGainPercentage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_US28P02_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<US28P02>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_US28P02_Statics::ClassParams = {
		&US28P02::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_US28P02_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_US28P02_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_US28P02_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_US28P02_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_US28P02()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_US28P02_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(US28P02, 4277269147);
	template<> THEK25_API UClass* StaticClass<US28P02>()
	{
		return US28P02::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_US28P02(Z_Construct_UClass_US28P02, &US28P02::StaticClass, TEXT("/Script/TheK25"), TEXT("US28P02"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(US28P02);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
