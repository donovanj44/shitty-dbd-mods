// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK23/Public/ActivateSuperMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActivateSuperMode() {}
// Cross Module References
	THEK23_API UClass* Z_Construct_UClass_UActivateSuperMode_NoRegister();
	THEK23_API UClass* Z_Construct_UClass_UActivateSuperMode();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_TheK23();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	ANIMATIONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationMontageDescriptor();
// End Cross Module References
	void UActivateSuperMode::StaticRegisterNativesUActivateSuperMode()
	{
	}
	UClass* Z_Construct_UClass_UActivateSuperMode_NoRegister()
	{
		return UActivateSuperMode::StaticClass();
	}
	struct Z_Construct_UClass_UActivateSuperMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__confirmationChargeDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__confirmationChargeDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__activationDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__activationDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__activationMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__activationMontage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActivateSuperMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK23,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActivateSuperMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ActivateSuperMode.h" },
		{ "ModuleRelativePath", "Public/ActivateSuperMode.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActivateSuperMode_Statics::NewProp__confirmationChargeDuration_MetaData[] = {
		{ "Category", "ActivateSuperMode" },
		{ "ModuleRelativePath", "Public/ActivateSuperMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActivateSuperMode_Statics::NewProp__confirmationChargeDuration = { "_confirmationChargeDuration", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActivateSuperMode, _confirmationChargeDuration), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UActivateSuperMode_Statics::NewProp__confirmationChargeDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActivateSuperMode_Statics::NewProp__confirmationChargeDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActivateSuperMode_Statics::NewProp__activationDuration_MetaData[] = {
		{ "Category", "ActivateSuperMode" },
		{ "ModuleRelativePath", "Public/ActivateSuperMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActivateSuperMode_Statics::NewProp__activationDuration = { "_activationDuration", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActivateSuperMode, _activationDuration), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UActivateSuperMode_Statics::NewProp__activationDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActivateSuperMode_Statics::NewProp__activationDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActivateSuperMode_Statics::NewProp__activationMontage_MetaData[] = {
		{ "Category", "ActivateSuperMode" },
		{ "ModuleRelativePath", "Public/ActivateSuperMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActivateSuperMode_Statics::NewProp__activationMontage = { "_activationMontage", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActivateSuperMode, _activationMontage), Z_Construct_UScriptStruct_FAnimationMontageDescriptor, METADATA_PARAMS(Z_Construct_UClass_UActivateSuperMode_Statics::NewProp__activationMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActivateSuperMode_Statics::NewProp__activationMontage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActivateSuperMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivateSuperMode_Statics::NewProp__confirmationChargeDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivateSuperMode_Statics::NewProp__activationDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivateSuperMode_Statics::NewProp__activationMontage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActivateSuperMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActivateSuperMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActivateSuperMode_Statics::ClassParams = {
		&UActivateSuperMode::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UActivateSuperMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UActivateSuperMode_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UActivateSuperMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActivateSuperMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActivateSuperMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActivateSuperMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActivateSuperMode, 3615377115);
	template<> THEK23_API UClass* StaticClass<UActivateSuperMode>()
	{
		return UActivateSuperMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActivateSuperMode(Z_Construct_UClass_UActivateSuperMode, &UActivateSuperMode::StaticClass, TEXT("/Script/TheK23"), TEXT("UActivateSuperMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActivateSuperMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
