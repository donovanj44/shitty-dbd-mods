// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/InteractionAnimNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionAnimNotify() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionAnimNotify_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionAnimNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UInteractionAnimNotify::StaticRegisterNativesUInteractionAnimNotify()
	{
	}
	UClass* Z_Construct_UClass_UInteractionAnimNotify_NoRegister()
	{
		return UInteractionAnimNotify::StaticClass();
	}
	struct Z_Construct_UClass_UInteractionAnimNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotifyID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NotifyID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractionAnimNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionAnimNotify_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "InteractionAnimNotify.h" },
		{ "ModuleRelativePath", "Public/InteractionAnimNotify.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionAnimNotify_Statics::NewProp_NotifyID_MetaData[] = {
		{ "Category", "InteractionAnimNotify" },
		{ "ModuleRelativePath", "Public/InteractionAnimNotify.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UInteractionAnimNotify_Statics::NewProp_NotifyID = { "NotifyID", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractionAnimNotify, NotifyID), METADATA_PARAMS(Z_Construct_UClass_UInteractionAnimNotify_Statics::NewProp_NotifyID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionAnimNotify_Statics::NewProp_NotifyID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractionAnimNotify_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionAnimNotify_Statics::NewProp_NotifyID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractionAnimNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractionAnimNotify>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractionAnimNotify_Statics::ClassParams = {
		&UInteractionAnimNotify::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInteractionAnimNotify_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionAnimNotify_Statics::PropPointers),
		0,
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractionAnimNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionAnimNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractionAnimNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractionAnimNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractionAnimNotify, 1641248775);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UInteractionAnimNotify>()
	{
		return UInteractionAnimNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractionAnimNotify(Z_Construct_UClass_UInteractionAnimNotify, &UInteractionAnimNotify::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UInteractionAnimNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionAnimNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
