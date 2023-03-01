// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PerkManagerOwnerInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePerkManagerOwnerInterface() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerkManagerOwnerInterface_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerkManagerOwnerInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UPerkManagerOwnerInterface::StaticRegisterNativesUPerkManagerOwnerInterface()
	{
	}
	UClass* Z_Construct_UClass_UPerkManagerOwnerInterface_NoRegister()
	{
		return UPerkManagerOwnerInterface::StaticClass();
	}
	struct Z_Construct_UClass_UPerkManagerOwnerInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPerkManagerOwnerInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerkManagerOwnerInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerkManagerOwnerInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPerkManagerOwnerInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPerkManagerOwnerInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPerkManagerOwnerInterface_Statics::ClassParams = {
		&UPerkManagerOwnerInterface::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPerkManagerOwnerInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPerkManagerOwnerInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPerkManagerOwnerInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPerkManagerOwnerInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPerkManagerOwnerInterface, 3535397103);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UPerkManagerOwnerInterface>()
	{
		return UPerkManagerOwnerInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPerkManagerOwnerInterface(Z_Construct_UClass_UPerkManagerOwnerInterface, &UPerkManagerOwnerInterface::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UPerkManagerOwnerInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPerkManagerOwnerInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
