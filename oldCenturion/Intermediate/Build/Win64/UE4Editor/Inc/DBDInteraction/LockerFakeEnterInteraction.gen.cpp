// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDInteraction/Public/LockerFakeEnterInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLockerFakeEnterInteraction() {}
// Cross Module References
	DBDINTERACTION_API UClass* Z_Construct_UClass_ULockerFakeEnterInteraction_NoRegister();
	DBDINTERACTION_API UClass* Z_Construct_UClass_ULockerFakeEnterInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_DBDInteraction();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ALocker_NoRegister();
// End Cross Module References
	void ULockerFakeEnterInteraction::StaticRegisterNativesULockerFakeEnterInteraction()
	{
	}
	UClass* Z_Construct_UClass_ULockerFakeEnterInteraction_NoRegister()
	{
		return ULockerFakeEnterInteraction::StaticClass();
	}
	struct Z_Construct_UClass_ULockerFakeEnterInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__fakeEnterLoudNoiseRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__fakeEnterLoudNoiseRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__owningLocker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__owningLocker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lockerInteractionBlockTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__lockerInteractionBlockTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULockerFakeEnterInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDInteraction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULockerFakeEnterInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "LockerFakeEnterInteraction.h" },
		{ "ModuleRelativePath", "Public/LockerFakeEnterInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULockerFakeEnterInteraction_Statics::NewProp__fakeEnterLoudNoiseRange_MetaData[] = {
		{ "Category", "LockerFakeEnterInteraction" },
		{ "ModuleRelativePath", "Public/LockerFakeEnterInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULockerFakeEnterInteraction_Statics::NewProp__fakeEnterLoudNoiseRange = { "_fakeEnterLoudNoiseRange", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULockerFakeEnterInteraction, _fakeEnterLoudNoiseRange), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ULockerFakeEnterInteraction_Statics::NewProp__fakeEnterLoudNoiseRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULockerFakeEnterInteraction_Statics::NewProp__fakeEnterLoudNoiseRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULockerFakeEnterInteraction_Statics::NewProp__owningLocker_MetaData[] = {
		{ "ModuleRelativePath", "Public/LockerFakeEnterInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULockerFakeEnterInteraction_Statics::NewProp__owningLocker = { "_owningLocker", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULockerFakeEnterInteraction, _owningLocker), Z_Construct_UClass_ALocker_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULockerFakeEnterInteraction_Statics::NewProp__owningLocker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULockerFakeEnterInteraction_Statics::NewProp__owningLocker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULockerFakeEnterInteraction_Statics::NewProp__lockerInteractionBlockTime_MetaData[] = {
		{ "Category", "LockerFakeEnterInteraction" },
		{ "ModuleRelativePath", "Public/LockerFakeEnterInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULockerFakeEnterInteraction_Statics::NewProp__lockerInteractionBlockTime = { "_lockerInteractionBlockTime", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULockerFakeEnterInteraction, _lockerInteractionBlockTime), METADATA_PARAMS(Z_Construct_UClass_ULockerFakeEnterInteraction_Statics::NewProp__lockerInteractionBlockTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULockerFakeEnterInteraction_Statics::NewProp__lockerInteractionBlockTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULockerFakeEnterInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULockerFakeEnterInteraction_Statics::NewProp__fakeEnterLoudNoiseRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULockerFakeEnterInteraction_Statics::NewProp__owningLocker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULockerFakeEnterInteraction_Statics::NewProp__lockerInteractionBlockTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULockerFakeEnterInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULockerFakeEnterInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULockerFakeEnterInteraction_Statics::ClassParams = {
		&ULockerFakeEnterInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULockerFakeEnterInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULockerFakeEnterInteraction_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULockerFakeEnterInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULockerFakeEnterInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULockerFakeEnterInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULockerFakeEnterInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULockerFakeEnterInteraction, 2777012604);
	template<> DBDINTERACTION_API UClass* StaticClass<ULockerFakeEnterInteraction>()
	{
		return ULockerFakeEnterInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULockerFakeEnterInteraction(Z_Construct_UClass_ULockerFakeEnterInteraction, &ULockerFakeEnterInteraction::StaticClass, TEXT("/Script/DBDInteraction"), TEXT("ULockerFakeEnterInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULockerFakeEnterInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
