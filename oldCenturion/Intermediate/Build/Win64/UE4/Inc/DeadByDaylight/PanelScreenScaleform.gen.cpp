// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PanelScreenScaleform.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePanelScreenScaleform() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPanelScreenScaleform_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPanelScreenScaleform();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPanelScreen();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UPanelScreenScaleform::StaticRegisterNativesUPanelScreenScaleform()
	{
	}
	UClass* Z_Construct_UClass_UPanelScreenScaleform_NoRegister()
	{
		return UPanelScreenScaleform::StaticClass();
	}
	struct Z_Construct_UClass_UPanelScreenScaleform_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPanelScreenScaleform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPanelScreen,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPanelScreenScaleform_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PanelScreenScaleform.h" },
		{ "ModuleRelativePath", "Public/PanelScreenScaleform.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPanelScreenScaleform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPanelScreenScaleform>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPanelScreenScaleform_Statics::ClassParams = {
		&UPanelScreenScaleform::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPanelScreenScaleform_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPanelScreenScaleform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPanelScreenScaleform()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPanelScreenScaleform_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPanelScreenScaleform, 2371816658);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UPanelScreenScaleform>()
	{
		return UPanelScreenScaleform::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPanelScreenScaleform(Z_Construct_UClass_UPanelScreenScaleform, &UPanelScreenScaleform::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UPanelScreenScaleform"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPanelScreenScaleform);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
