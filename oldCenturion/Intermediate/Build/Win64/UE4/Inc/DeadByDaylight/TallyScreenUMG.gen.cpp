// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/TallyScreenUMG.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTallyScreenUMG() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTallyScreenUMG_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTallyScreenUMG();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTallyScreen();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaTallyScreen_NoRegister();
// End Cross Module References
	void UTallyScreenUMG::StaticRegisterNativesUTallyScreenUMG()
	{
	}
	UClass* Z_Construct_UClass_UTallyScreenUMG_NoRegister()
	{
		return UTallyScreenUMG::StaticClass();
	}
	struct Z_Construct_UClass_UTallyScreenUMG_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__atlTallyScreen_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__atlTallyScreen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTallyScreenUMG_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTallyScreen,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTallyScreenUMG_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TallyScreenUMG.h" },
		{ "ModuleRelativePath", "Public/TallyScreenUMG.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTallyScreenUMG_Statics::NewProp__atlTallyScreen_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TallyScreenUMG.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTallyScreenUMG_Statics::NewProp__atlTallyScreen = { "_atlTallyScreen", nullptr, (EPropertyFlags)0x0020080000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTallyScreenUMG, _atlTallyScreen), Z_Construct_UClass_UUMGAtlantaTallyScreen_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTallyScreenUMG_Statics::NewProp__atlTallyScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTallyScreenUMG_Statics::NewProp__atlTallyScreen_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTallyScreenUMG_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTallyScreenUMG_Statics::NewProp__atlTallyScreen,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTallyScreenUMG_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTallyScreenUMG>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTallyScreenUMG_Statics::ClassParams = {
		&UTallyScreenUMG::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTallyScreenUMG_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTallyScreenUMG_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTallyScreenUMG_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTallyScreenUMG_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTallyScreenUMG()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTallyScreenUMG_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTallyScreenUMG, 475101357);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UTallyScreenUMG>()
	{
		return UTallyScreenUMG::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTallyScreenUMG(Z_Construct_UClass_UTallyScreenUMG, &UTallyScreenUMG::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UTallyScreenUMG"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTallyScreenUMG);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
