// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/BaseTwinInspectLocker.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseTwinInspectLocker() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_UBaseTwinInspectLocker_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UBaseTwinInspectLocker();
	DBDINTERACTION_API UClass* Z_Construct_UClass_UBaseLockerInteraction();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	void UBaseTwinInspectLocker::StaticRegisterNativesUBaseTwinInspectLocker()
	{
	}
	UClass* Z_Construct_UClass_UBaseTwinInspectLocker_NoRegister()
	{
		return UBaseTwinInspectLocker::StaticClass();
	}
	struct Z_Construct_UClass_UBaseTwinInspectLocker_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__inspectInteractionTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__inspectInteractionTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseTwinInspectLocker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseLockerInteraction,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseTwinInspectLocker_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "BaseTwinInspectLocker.h" },
		{ "ModuleRelativePath", "Public/BaseTwinInspectLocker.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseTwinInspectLocker_Statics::NewProp__inspectInteractionTime_MetaData[] = {
		{ "Category", "BaseTwinInspectLocker" },
		{ "ModuleRelativePath", "Public/BaseTwinInspectLocker.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseTwinInspectLocker_Statics::NewProp__inspectInteractionTime = { "_inspectInteractionTime", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseTwinInspectLocker, _inspectInteractionTime), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UBaseTwinInspectLocker_Statics::NewProp__inspectInteractionTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTwinInspectLocker_Statics::NewProp__inspectInteractionTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseTwinInspectLocker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseTwinInspectLocker_Statics::NewProp__inspectInteractionTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseTwinInspectLocker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseTwinInspectLocker>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseTwinInspectLocker_Statics::ClassParams = {
		&UBaseTwinInspectLocker::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBaseTwinInspectLocker_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTwinInspectLocker_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseTwinInspectLocker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTwinInspectLocker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseTwinInspectLocker()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseTwinInspectLocker_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseTwinInspectLocker, 1534313422);
	template<> THETWINS_API UClass* StaticClass<UBaseTwinInspectLocker>()
	{
		return UBaseTwinInspectLocker::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseTwinInspectLocker(Z_Construct_UClass_UBaseTwinInspectLocker, &UBaseTwinInspectLocker::StaticClass, TEXT("/Script/TheTwins"), TEXT("UBaseTwinInspectLocker"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseTwinInspectLocker);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
