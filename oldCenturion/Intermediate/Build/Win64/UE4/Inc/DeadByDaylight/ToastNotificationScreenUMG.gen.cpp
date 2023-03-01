// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ToastNotificationScreenUMG.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToastNotificationScreenUMG() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UToastNotificationScreenUMG_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UToastNotificationScreenUMG();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UToastNotificationScreen();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGToastNotificationScreen_NoRegister();
// End Cross Module References
	void UToastNotificationScreenUMG::StaticRegisterNativesUToastNotificationScreenUMG()
	{
	}
	UClass* Z_Construct_UClass_UToastNotificationScreenUMG_NoRegister()
	{
		return UToastNotificationScreenUMG::StaticClass();
	}
	struct Z_Construct_UClass_UToastNotificationScreenUMG_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__toastNotificationScreen_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__toastNotificationScreen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UToastNotificationScreenUMG_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UToastNotificationScreen,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToastNotificationScreenUMG_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ToastNotificationScreenUMG.h" },
		{ "ModuleRelativePath", "Public/ToastNotificationScreenUMG.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToastNotificationScreenUMG_Statics::NewProp__toastNotificationScreen_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ToastNotificationScreenUMG.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UToastNotificationScreenUMG_Statics::NewProp__toastNotificationScreen = { "_toastNotificationScreen", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UToastNotificationScreenUMG, _toastNotificationScreen), Z_Construct_UClass_UUMGToastNotificationScreen_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UToastNotificationScreenUMG_Statics::NewProp__toastNotificationScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UToastNotificationScreenUMG_Statics::NewProp__toastNotificationScreen_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UToastNotificationScreenUMG_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToastNotificationScreenUMG_Statics::NewProp__toastNotificationScreen,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UToastNotificationScreenUMG_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToastNotificationScreenUMG>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UToastNotificationScreenUMG_Statics::ClassParams = {
		&UToastNotificationScreenUMG::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UToastNotificationScreenUMG_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UToastNotificationScreenUMG_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UToastNotificationScreenUMG_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UToastNotificationScreenUMG_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UToastNotificationScreenUMG()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UToastNotificationScreenUMG_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UToastNotificationScreenUMG, 742776760);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UToastNotificationScreenUMG>()
	{
		return UToastNotificationScreenUMG::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UToastNotificationScreenUMG(Z_Construct_UClass_UToastNotificationScreenUMG, &UToastNotificationScreenUMG::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UToastNotificationScreenUMG"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UToastNotificationScreenUMG);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
