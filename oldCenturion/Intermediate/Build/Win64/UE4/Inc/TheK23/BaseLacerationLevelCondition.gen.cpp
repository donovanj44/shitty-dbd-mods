// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK23/Public/BaseLacerationLevelCondition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseLacerationLevelCondition() {}
// Cross Module References
	THEK23_API UClass* Z_Construct_UClass_UBaseLacerationLevelCondition_NoRegister();
	THEK23_API UClass* Z_Construct_UClass_UBaseLacerationLevelCondition();
	COMPETENCE_API UClass* Z_Construct_UClass_UEventDrivenModifierCondition();
	UPackage* Z_Construct_UPackage__Script_TheK23();
// End Cross Module References
	void UBaseLacerationLevelCondition::StaticRegisterNativesUBaseLacerationLevelCondition()
	{
	}
	UClass* Z_Construct_UClass_UBaseLacerationLevelCondition_NoRegister()
	{
		return UBaseLacerationLevelCondition::StaticClass();
	}
	struct Z_Construct_UClass_UBaseLacerationLevelCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseLacerationLevelCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEventDrivenModifierCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK23,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseLacerationLevelCondition_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseLacerationLevelCondition.h" },
		{ "ModuleRelativePath", "Public/BaseLacerationLevelCondition.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseLacerationLevelCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseLacerationLevelCondition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseLacerationLevelCondition_Statics::ClassParams = {
		&UBaseLacerationLevelCondition::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseLacerationLevelCondition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseLacerationLevelCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseLacerationLevelCondition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseLacerationLevelCondition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseLacerationLevelCondition, 1600431834);
	template<> THEK23_API UClass* StaticClass<UBaseLacerationLevelCondition>()
	{
		return UBaseLacerationLevelCondition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseLacerationLevelCondition(Z_Construct_UClass_UBaseLacerationLevelCondition, &UBaseLacerationLevelCondition::StaticClass, TEXT("/Script/TheK23"), TEXT("UBaseLacerationLevelCondition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseLacerationLevelCondition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
