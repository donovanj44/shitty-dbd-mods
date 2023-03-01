// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/BlindingEffectorInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlindingEffectorInterface() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBlindingEffectorInterface_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBlindingEffectorInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UBlindingEffectorInterface::StaticRegisterNativesUBlindingEffectorInterface()
	{
	}
	UClass* Z_Construct_UClass_UBlindingEffectorInterface_NoRegister()
	{
		return UBlindingEffectorInterface::StaticClass();
	}
	struct Z_Construct_UClass_UBlindingEffectorInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlindingEffectorInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlindingEffectorInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlindingEffectorInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlindingEffectorInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBlindingEffectorInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlindingEffectorInterface_Statics::ClassParams = {
		&UBlindingEffectorInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBlindingEffectorInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlindingEffectorInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlindingEffectorInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlindingEffectorInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlindingEffectorInterface, 3723667660);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UBlindingEffectorInterface>()
	{
		return UBlindingEffectorInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlindingEffectorInterface(Z_Construct_UClass_UBlindingEffectorInterface, &UBlindingEffectorInterface::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UBlindingEffectorInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlindingEffectorInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
