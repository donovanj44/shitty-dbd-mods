// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationUtilities/Public/AnimInstanceLeader.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimInstanceLeader() {}
// Cross Module References
	ANIMATIONUTILITIES_API UClass* Z_Construct_UClass_UAnimInstanceLeader_NoRegister();
	ANIMATIONUTILITIES_API UClass* Z_Construct_UClass_UAnimInstanceLeader();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_AnimationUtilities();
// End Cross Module References
	void UAnimInstanceLeader::StaticRegisterNativesUAnimInstanceLeader()
	{
	}
	UClass* Z_Construct_UClass_UAnimInstanceLeader_NoRegister()
	{
		return UAnimInstanceLeader::StaticClass();
	}
	struct Z_Construct_UClass_UAnimInstanceLeader_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimInstanceLeader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstanceLeader_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimInstanceLeader.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimInstanceLeader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAnimInstanceLeader>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimInstanceLeader_Statics::ClassParams = {
		&UAnimInstanceLeader::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimInstanceLeader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstanceLeader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimInstanceLeader()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimInstanceLeader_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimInstanceLeader, 2798085831);
	template<> ANIMATIONUTILITIES_API UClass* StaticClass<UAnimInstanceLeader>()
	{
		return UAnimInstanceLeader::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimInstanceLeader(Z_Construct_UClass_UAnimInstanceLeader, &UAnimInstanceLeader::StaticClass, TEXT("/Script/AnimationUtilities"), TEXT("UAnimInstanceLeader"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimInstanceLeader);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
