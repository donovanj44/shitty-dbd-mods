// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDInteraction/Public/BaseLockerInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseLockerInteraction() {}
// Cross Module References
	DBDINTERACTION_API UClass* Z_Construct_UClass_UBaseLockerInteraction_NoRegister();
	DBDINTERACTION_API UClass* Z_Construct_UClass_UBaseLockerInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_DBDInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ALocker_NoRegister();
// End Cross Module References
	void UBaseLockerInteraction::StaticRegisterNativesUBaseLockerInteraction()
	{
	}
	UClass* Z_Construct_UClass_UBaseLockerInteraction_NoRegister()
	{
		return UBaseLockerInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UBaseLockerInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__owningLocker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__owningLocker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseLockerInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDInteraction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseLockerInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "BaseLockerInteraction.h" },
		{ "ModuleRelativePath", "Public/BaseLockerInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseLockerInteraction_Statics::NewProp__owningLocker_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseLockerInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseLockerInteraction_Statics::NewProp__owningLocker = { "_owningLocker", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseLockerInteraction, _owningLocker), Z_Construct_UClass_ALocker_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseLockerInteraction_Statics::NewProp__owningLocker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseLockerInteraction_Statics::NewProp__owningLocker_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseLockerInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseLockerInteraction_Statics::NewProp__owningLocker,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseLockerInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseLockerInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseLockerInteraction_Statics::ClassParams = {
		&UBaseLockerInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBaseLockerInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseLockerInteraction_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseLockerInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseLockerInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseLockerInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseLockerInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseLockerInteraction, 4010974682);
	template<> DBDINTERACTION_API UClass* StaticClass<UBaseLockerInteraction>()
	{
		return UBaseLockerInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseLockerInteraction(Z_Construct_UClass_UBaseLockerInteraction, &UBaseLockerInteraction::StaticClass, TEXT("/Script/DBDInteraction"), TEXT("UBaseLockerInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseLockerInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
