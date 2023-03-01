// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTrapper/Public/SelfUntrap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSelfUntrap() {}
// Cross Module References
	THETRAPPER_API UClass* Z_Construct_UClass_USelfUntrap_NoRegister();
	THETRAPPER_API UClass* Z_Construct_UClass_USelfUntrap();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_TheTrapper();
	ANIMATIONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationMontageDescriptor();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	void USelfUntrap::StaticRegisterNativesUSelfUntrap()
	{
	}
	UClass* Z_Construct_UClass_USelfUntrap_NoRegister()
	{
		return USelfUntrap::StaticClass();
	}
	struct Z_Construct_UClass_USelfUntrap_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__canEscape_MetaData[];
#endif
		static void NewProp__canEscape_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__canEscape;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__failedEscape_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__failedEscape;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__successfulEscapeCrawling_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__successfulEscapeCrawling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__successfulEscapeInjured_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__successfulEscapeInjured;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__successfulEscapeHealthy_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__successfulEscapeHealthy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__untrapMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__untrapMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__trapImmunityDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__trapImmunityDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USelfUntrap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChargeableInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTrapper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelfUntrap_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "SelfUntrap.h" },
		{ "ModuleRelativePath", "Public/SelfUntrap.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelfUntrap_Statics::NewProp__canEscape_MetaData[] = {
		{ "ModuleRelativePath", "Public/SelfUntrap.h" },
	};
#endif
	void Z_Construct_UClass_USelfUntrap_Statics::NewProp__canEscape_SetBit(void* Obj)
	{
		((USelfUntrap*)Obj)->_canEscape = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USelfUntrap_Statics::NewProp__canEscape = { "_canEscape", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USelfUntrap), &Z_Construct_UClass_USelfUntrap_Statics::NewProp__canEscape_SetBit, METADATA_PARAMS(Z_Construct_UClass_USelfUntrap_Statics::NewProp__canEscape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USelfUntrap_Statics::NewProp__canEscape_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelfUntrap_Statics::NewProp__failedEscape_MetaData[] = {
		{ "Category", "SelfUntrap" },
		{ "ModuleRelativePath", "Public/SelfUntrap.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USelfUntrap_Statics::NewProp__failedEscape = { "_failedEscape", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USelfUntrap, _failedEscape), Z_Construct_UScriptStruct_FAnimationMontageDescriptor, METADATA_PARAMS(Z_Construct_UClass_USelfUntrap_Statics::NewProp__failedEscape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USelfUntrap_Statics::NewProp__failedEscape_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelfUntrap_Statics::NewProp__successfulEscapeCrawling_MetaData[] = {
		{ "Category", "SelfUntrap" },
		{ "ModuleRelativePath", "Public/SelfUntrap.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USelfUntrap_Statics::NewProp__successfulEscapeCrawling = { "_successfulEscapeCrawling", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USelfUntrap, _successfulEscapeCrawling), Z_Construct_UScriptStruct_FAnimationMontageDescriptor, METADATA_PARAMS(Z_Construct_UClass_USelfUntrap_Statics::NewProp__successfulEscapeCrawling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USelfUntrap_Statics::NewProp__successfulEscapeCrawling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelfUntrap_Statics::NewProp__successfulEscapeInjured_MetaData[] = {
		{ "Category", "SelfUntrap" },
		{ "ModuleRelativePath", "Public/SelfUntrap.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USelfUntrap_Statics::NewProp__successfulEscapeInjured = { "_successfulEscapeInjured", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USelfUntrap, _successfulEscapeInjured), Z_Construct_UScriptStruct_FAnimationMontageDescriptor, METADATA_PARAMS(Z_Construct_UClass_USelfUntrap_Statics::NewProp__successfulEscapeInjured_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USelfUntrap_Statics::NewProp__successfulEscapeInjured_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelfUntrap_Statics::NewProp__successfulEscapeHealthy_MetaData[] = {
		{ "Category", "SelfUntrap" },
		{ "ModuleRelativePath", "Public/SelfUntrap.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USelfUntrap_Statics::NewProp__successfulEscapeHealthy = { "_successfulEscapeHealthy", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USelfUntrap, _successfulEscapeHealthy), Z_Construct_UScriptStruct_FAnimationMontageDescriptor, METADATA_PARAMS(Z_Construct_UClass_USelfUntrap_Statics::NewProp__successfulEscapeHealthy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USelfUntrap_Statics::NewProp__successfulEscapeHealthy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelfUntrap_Statics::NewProp__untrapMontage_MetaData[] = {
		{ "Category", "SelfUntrap" },
		{ "ModuleRelativePath", "Public/SelfUntrap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USelfUntrap_Statics::NewProp__untrapMontage = { "_untrapMontage", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USelfUntrap, _untrapMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USelfUntrap_Statics::NewProp__untrapMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USelfUntrap_Statics::NewProp__untrapMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelfUntrap_Statics::NewProp__trapImmunityDuration_MetaData[] = {
		{ "Category", "SelfUntrap" },
		{ "ModuleRelativePath", "Public/SelfUntrap.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USelfUntrap_Statics::NewProp__trapImmunityDuration = { "_trapImmunityDuration", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USelfUntrap, _trapImmunityDuration), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_USelfUntrap_Statics::NewProp__trapImmunityDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USelfUntrap_Statics::NewProp__trapImmunityDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USelfUntrap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USelfUntrap_Statics::NewProp__canEscape,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USelfUntrap_Statics::NewProp__failedEscape,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USelfUntrap_Statics::NewProp__successfulEscapeCrawling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USelfUntrap_Statics::NewProp__successfulEscapeInjured,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USelfUntrap_Statics::NewProp__successfulEscapeHealthy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USelfUntrap_Statics::NewProp__untrapMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USelfUntrap_Statics::NewProp__trapImmunityDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USelfUntrap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USelfUntrap>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USelfUntrap_Statics::ClassParams = {
		&USelfUntrap::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USelfUntrap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USelfUntrap_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_USelfUntrap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USelfUntrap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USelfUntrap()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USelfUntrap_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USelfUntrap, 2001145309);
	template<> THETRAPPER_API UClass* StaticClass<USelfUntrap>()
	{
		return USelfUntrap::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USelfUntrap(Z_Construct_UClass_USelfUntrap, &USelfUntrap::StaticClass, TEXT("/Script/TheTrapper"), TEXT("USelfUntrap"), false, nullptr, nullptr, nullptr);

	void USelfUntrap::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__canEscape(TEXT("_canEscape"));

		const bool bIsValid = true
			&& Name__canEscape == ClassReps[(int32)ENetFields_Private::_canEscape].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USelfUntrap"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USelfUntrap);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
