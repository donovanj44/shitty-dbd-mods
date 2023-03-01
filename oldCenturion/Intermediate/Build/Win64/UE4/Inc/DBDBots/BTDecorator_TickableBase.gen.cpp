// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/BTDecorator_TickableBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_TickableBase() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UBTDecorator_TickableBase_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UBTDecorator_TickableBase();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
// End Cross Module References
	void UBTDecorator_TickableBase::StaticRegisterNativesUBTDecorator_TickableBase()
	{
	}
	UClass* Z_Construct_UClass_UBTDecorator_TickableBase_NoRegister()
	{
		return UBTDecorator_TickableBase::StaticClass();
	}
	struct Z_Construct_UClass_UBTDecorator_TickableBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTDecorator_TickableBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_TickableBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BTDecorator_TickableBase.h" },
		{ "ModuleRelativePath", "Public/BTDecorator_TickableBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTDecorator_TickableBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_TickableBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_TickableBase_Statics::ClassParams = {
		&UBTDecorator_TickableBase::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_TickableBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_TickableBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTDecorator_TickableBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTDecorator_TickableBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTDecorator_TickableBase, 3913149076);
	template<> DBDBOTS_API UClass* StaticClass<UBTDecorator_TickableBase>()
	{
		return UBTDecorator_TickableBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTDecorator_TickableBase(Z_Construct_UClass_UBTDecorator_TickableBase, &UBTDecorator_TickableBase::StaticClass, TEXT("/Script/DBDBots"), TEXT("UBTDecorator_TickableBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_TickableBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
