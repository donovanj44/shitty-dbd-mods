// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CoreCursor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreCursor() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCoreCursor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCoreCursor();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	UMG_API UClass* Z_Construct_UClass_UScaleBox_NoRegister();
// End Cross Module References
	void UCoreCursor::StaticRegisterNativesUCoreCursor()
	{
	}
	UClass* Z_Construct_UClass_UCoreCursor_NoRegister()
	{
		return UCoreCursor::StaticClass();
	}
	struct Z_Construct_UClass_UCoreCursor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CursorScaleBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CursorScaleBox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreCursor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreCursor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoreCursor.h" },
		{ "ModuleRelativePath", "Public/CoreCursor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreCursor_Statics::NewProp_CursorScaleBox_MetaData[] = {
		{ "Category", "CoreCursor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreCursor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreCursor_Statics::NewProp_CursorScaleBox = { "CursorScaleBox", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreCursor, CursorScaleBox), Z_Construct_UClass_UScaleBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreCursor_Statics::NewProp_CursorScaleBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreCursor_Statics::NewProp_CursorScaleBox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreCursor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreCursor_Statics::NewProp_CursorScaleBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreCursor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreCursor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreCursor_Statics::ClassParams = {
		&UCoreCursor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCoreCursor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreCursor_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreCursor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreCursor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreCursor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreCursor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreCursor, 3988874666);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UCoreCursor>()
	{
		return UCoreCursor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreCursor(Z_Construct_UClass_UCoreCursor, &UCoreCursor::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UCoreCursor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreCursor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
