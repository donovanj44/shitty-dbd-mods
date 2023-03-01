// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheExecutioner/Public/TormentModeCooldownInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTormentModeCooldownInteraction() {}
// Cross Module References
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UTormentModeCooldownInteraction_NoRegister();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UTormentModeCooldownInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_TheExecutioner();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	void UTormentModeCooldownInteraction::StaticRegisterNativesUTormentModeCooldownInteraction()
	{
	}
	UClass* Z_Construct_UClass_UTormentModeCooldownInteraction_NoRegister()
	{
		return UTormentModeCooldownInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UTormentModeCooldownInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__normalWalkSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__normalWalkSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tormentModeCancelWalkSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__tormentModeCancelWalkSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tormentModeCooldownTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__tormentModeCooldownTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTormentModeCooldownInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_TheExecutioner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTormentModeCooldownInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "TormentModeCooldownInteraction.h" },
		{ "ModuleRelativePath", "Public/TormentModeCooldownInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTormentModeCooldownInteraction_Statics::NewProp__normalWalkSpeed_MetaData[] = {
		{ "Category", "TormentModeCooldownInteraction" },
		{ "ModuleRelativePath", "Public/TormentModeCooldownInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTormentModeCooldownInteraction_Statics::NewProp__normalWalkSpeed = { "_normalWalkSpeed", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTormentModeCooldownInteraction, _normalWalkSpeed), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UTormentModeCooldownInteraction_Statics::NewProp__normalWalkSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTormentModeCooldownInteraction_Statics::NewProp__normalWalkSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTormentModeCooldownInteraction_Statics::NewProp__tormentModeCancelWalkSpeed_MetaData[] = {
		{ "Category", "TormentModeCooldownInteraction" },
		{ "ModuleRelativePath", "Public/TormentModeCooldownInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTormentModeCooldownInteraction_Statics::NewProp__tormentModeCancelWalkSpeed = { "_tormentModeCancelWalkSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTormentModeCooldownInteraction, _tormentModeCancelWalkSpeed), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UTormentModeCooldownInteraction_Statics::NewProp__tormentModeCancelWalkSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTormentModeCooldownInteraction_Statics::NewProp__tormentModeCancelWalkSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTormentModeCooldownInteraction_Statics::NewProp__tormentModeCooldownTime_MetaData[] = {
		{ "Category", "TormentModeCooldownInteraction" },
		{ "ModuleRelativePath", "Public/TormentModeCooldownInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTormentModeCooldownInteraction_Statics::NewProp__tormentModeCooldownTime = { "_tormentModeCooldownTime", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTormentModeCooldownInteraction, _tormentModeCooldownTime), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UTormentModeCooldownInteraction_Statics::NewProp__tormentModeCooldownTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTormentModeCooldownInteraction_Statics::NewProp__tormentModeCooldownTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTormentModeCooldownInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTormentModeCooldownInteraction_Statics::NewProp__normalWalkSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTormentModeCooldownInteraction_Statics::NewProp__tormentModeCancelWalkSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTormentModeCooldownInteraction_Statics::NewProp__tormentModeCooldownTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTormentModeCooldownInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTormentModeCooldownInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTormentModeCooldownInteraction_Statics::ClassParams = {
		&UTormentModeCooldownInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTormentModeCooldownInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTormentModeCooldownInteraction_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTormentModeCooldownInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTormentModeCooldownInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTormentModeCooldownInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTormentModeCooldownInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTormentModeCooldownInteraction, 1459262266);
	template<> THEEXECUTIONER_API UClass* StaticClass<UTormentModeCooldownInteraction>()
	{
		return UTormentModeCooldownInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTormentModeCooldownInteraction(Z_Construct_UClass_UTormentModeCooldownInteraction, &UTormentModeCooldownInteraction::StaticClass, TEXT("/Script/TheExecutioner"), TEXT("UTormentModeCooldownInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTormentModeCooldownInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
