// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK23/Public/HexCrowdControl.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHexCrowdControl() {}
// Cross Module References
	THEK23_API UClass* Z_Construct_UClass_UHexCrowdControl_NoRegister();
	THEK23_API UClass* Z_Construct_UClass_UHexCrowdControl();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UHexPerk();
	UPackage* Z_Construct_UPackage__Script_TheK23();
// End Cross Module References
	void UHexCrowdControl::StaticRegisterNativesUHexCrowdControl()
	{
	}
	UClass* Z_Construct_UClass_UHexCrowdControl_NoRegister()
	{
		return UHexCrowdControl::StaticClass();
	}
	struct Z_Construct_UClass_UHexCrowdControl_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__windowVaultBlockDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__windowVaultBlockDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHexCrowdControl_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHexPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK23,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHexCrowdControl_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HexCrowdControl.h" },
		{ "ModuleRelativePath", "Public/HexCrowdControl.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHexCrowdControl_Statics::NewProp__windowVaultBlockDuration_MetaData[] = {
		{ "Category", "HexCrowdControl" },
		{ "ModuleRelativePath", "Public/HexCrowdControl.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHexCrowdControl_Statics::NewProp__windowVaultBlockDuration = { "_windowVaultBlockDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_windowVaultBlockDuration, UHexCrowdControl), STRUCT_OFFSET(UHexCrowdControl, _windowVaultBlockDuration), METADATA_PARAMS(Z_Construct_UClass_UHexCrowdControl_Statics::NewProp__windowVaultBlockDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHexCrowdControl_Statics::NewProp__windowVaultBlockDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHexCrowdControl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHexCrowdControl_Statics::NewProp__windowVaultBlockDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHexCrowdControl_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHexCrowdControl>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHexCrowdControl_Statics::ClassParams = {
		&UHexCrowdControl::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHexCrowdControl_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHexCrowdControl_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHexCrowdControl_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHexCrowdControl_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHexCrowdControl()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHexCrowdControl_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHexCrowdControl, 2490058833);
	template<> THEK23_API UClass* StaticClass<UHexCrowdControl>()
	{
		return UHexCrowdControl::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHexCrowdControl(Z_Construct_UClass_UHexCrowdControl, &UHexCrowdControl::StaticClass, TEXT("/Script/TheK23"), TEXT("UHexCrowdControl"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHexCrowdControl);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
