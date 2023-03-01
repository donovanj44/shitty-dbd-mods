// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InputUtilities/Public/VirtualKeyboard.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirtualKeyboard() {}
// Cross Module References
	INPUTUTILITIES_API UClass* Z_Construct_UClass_UVirtualKeyboard_NoRegister();
	INPUTUTILITIES_API UClass* Z_Construct_UClass_UVirtualKeyboard();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_InputUtilities();
// End Cross Module References
	void UVirtualKeyboard::StaticRegisterNativesUVirtualKeyboard()
	{
	}
	UClass* Z_Construct_UClass_UVirtualKeyboard_NoRegister()
	{
		return UVirtualKeyboard::StaticClass();
	}
	struct Z_Construct_UClass_UVirtualKeyboard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVirtualKeyboard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InputUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualKeyboard_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VirtualKeyboard.h" },
		{ "ModuleRelativePath", "Public/VirtualKeyboard.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVirtualKeyboard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVirtualKeyboard>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVirtualKeyboard_Statics::ClassParams = {
		&UVirtualKeyboard::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVirtualKeyboard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualKeyboard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVirtualKeyboard()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVirtualKeyboard_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVirtualKeyboard, 2522368737);
	template<> INPUTUTILITIES_API UClass* StaticClass<UVirtualKeyboard>()
	{
		return UVirtualKeyboard::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVirtualKeyboard(Z_Construct_UClass_UVirtualKeyboard, &UVirtualKeyboard::StaticClass, TEXT("/Script/InputUtilities"), TEXT("UVirtualKeyboard"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVirtualKeyboard);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
