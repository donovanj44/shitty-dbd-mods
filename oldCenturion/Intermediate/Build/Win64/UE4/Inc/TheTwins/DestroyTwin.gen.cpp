// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/DestroyTwin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDestroyTwin() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_UDestroyTwin_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UDestroyTwin();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	void UDestroyTwin::StaticRegisterNativesUDestroyTwin()
	{
	}
	UClass* Z_Construct_UClass_UDestroyTwin_NoRegister()
	{
		return UDestroyTwin::StaticClass();
	}
	struct Z_Construct_UClass_UDestroyTwin_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__destroyTwinMaxCharge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__destroyTwinMaxCharge;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDestroyTwin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChargeableInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDestroyTwin_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "DestroyTwin.h" },
		{ "ModuleRelativePath", "Public/DestroyTwin.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDestroyTwin_Statics::NewProp__destroyTwinMaxCharge_MetaData[] = {
		{ "Category", "DestroyTwin" },
		{ "ModuleRelativePath", "Public/DestroyTwin.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDestroyTwin_Statics::NewProp__destroyTwinMaxCharge = { "_destroyTwinMaxCharge", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDestroyTwin, _destroyTwinMaxCharge), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UDestroyTwin_Statics::NewProp__destroyTwinMaxCharge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDestroyTwin_Statics::NewProp__destroyTwinMaxCharge_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDestroyTwin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDestroyTwin_Statics::NewProp__destroyTwinMaxCharge,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDestroyTwin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDestroyTwin>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDestroyTwin_Statics::ClassParams = {
		&UDestroyTwin::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDestroyTwin_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDestroyTwin_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDestroyTwin_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDestroyTwin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDestroyTwin()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDestroyTwin_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDestroyTwin, 1872872102);
	template<> THETWINS_API UClass* StaticClass<UDestroyTwin>()
	{
		return UDestroyTwin::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDestroyTwin(Z_Construct_UClass_UDestroyTwin, &UDestroyTwin::StaticClass, TEXT("/Script/TheTwins"), TEXT("UDestroyTwin"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDestroyTwin);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
