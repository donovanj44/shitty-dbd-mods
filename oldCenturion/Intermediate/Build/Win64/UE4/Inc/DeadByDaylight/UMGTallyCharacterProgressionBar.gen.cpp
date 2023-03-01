// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGTallyCharacterProgressionBar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGTallyCharacterProgressionBar() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGTallyCharacterProgressionBar_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGTallyCharacterProgressionBar();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
// End Cross Module References
	void UUMGTallyCharacterProgressionBar::StaticRegisterNativesUUMGTallyCharacterProgressionBar()
	{
	}
	UClass* Z_Construct_UClass_UUMGTallyCharacterProgressionBar_NoRegister()
	{
		return UUMGTallyCharacterProgressionBar::StaticClass();
	}
	struct Z_Construct_UClass_UUMGTallyCharacterProgressionBar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProgressBar;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGTallyCharacterProgressionBar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyCharacterProgressionBar_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGTallyCharacterProgressionBar.h" },
		{ "ModuleRelativePath", "Public/UMGTallyCharacterProgressionBar.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyCharacterProgressionBar_Statics::NewProp_ProgressBar_MetaData[] = {
		{ "Category", "UMGTallyCharacterProgressionBar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGTallyCharacterProgressionBar.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGTallyCharacterProgressionBar_Statics::NewProp_ProgressBar = { "ProgressBar", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGTallyCharacterProgressionBar, ProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGTallyCharacterProgressionBar_Statics::NewProp_ProgressBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyCharacterProgressionBar_Statics::NewProp_ProgressBar_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGTallyCharacterProgressionBar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyCharacterProgressionBar_Statics::NewProp_ProgressBar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGTallyCharacterProgressionBar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGTallyCharacterProgressionBar>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGTallyCharacterProgressionBar_Statics::ClassParams = {
		&UUMGTallyCharacterProgressionBar::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUMGTallyCharacterProgressionBar_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyCharacterProgressionBar_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGTallyCharacterProgressionBar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyCharacterProgressionBar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGTallyCharacterProgressionBar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGTallyCharacterProgressionBar_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGTallyCharacterProgressionBar, 932817620);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGTallyCharacterProgressionBar>()
	{
		return UUMGTallyCharacterProgressionBar::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGTallyCharacterProgressionBar(Z_Construct_UClass_UUMGTallyCharacterProgressionBar, &UUMGTallyCharacterProgressionBar::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGTallyCharacterProgressionBar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGTallyCharacterProgressionBar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
