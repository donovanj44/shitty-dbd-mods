// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheNightmare/Public/BlackBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlackBox() {}
// Cross Module References
	THENIGHTMARE_API UClass* Z_Construct_UClass_UBlackBox_NoRegister();
	THENIGHTMARE_API UClass* Z_Construct_UClass_UBlackBox();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UItemAddon();
	UPackage* Z_Construct_UPackage__Script_TheNightmare();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	void UBlackBox::StaticRegisterNativesUBlackBox()
	{
	}
	UClass* Z_Construct_UClass_UBlackBox_NoRegister()
	{
		return UBlackBox::StaticClass();
	}
	struct Z_Construct_UClass_UBlackBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__blockDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__blockDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlackBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UItemAddon,
		(UObject* (*)())Z_Construct_UPackage__Script_TheNightmare,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackBox_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlackBox.h" },
		{ "ModuleRelativePath", "Public/BlackBox.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackBox_Statics::NewProp__blockDuration_MetaData[] = {
		{ "Category", "BlackBox" },
		{ "ModuleRelativePath", "Public/BlackBox.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlackBox_Statics::NewProp__blockDuration = { "_blockDuration", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlackBox, _blockDuration), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UBlackBox_Statics::NewProp__blockDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackBox_Statics::NewProp__blockDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlackBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackBox_Statics::NewProp__blockDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlackBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlackBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlackBox_Statics::ClassParams = {
		&UBlackBox::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlackBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlackBox_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBlackBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlackBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlackBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlackBox, 1349254590);
	template<> THENIGHTMARE_API UClass* StaticClass<UBlackBox>()
	{
		return UBlackBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlackBox(Z_Construct_UClass_UBlackBox, &UBlackBox::StaticClass, TEXT("/Script/TheNightmare"), TEXT("UBlackBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlackBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
