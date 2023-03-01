// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK23/Public/SuperModeDeactivation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSuperModeDeactivation() {}
// Cross Module References
	THEK23_API UClass* Z_Construct_UClass_USuperModeDeactivation_NoRegister();
	THEK23_API UClass* Z_Construct_UClass_USuperModeDeactivation();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_TheK23();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	void USuperModeDeactivation::StaticRegisterNativesUSuperModeDeactivation()
	{
	}
	UClass* Z_Construct_UClass_USuperModeDeactivation_NoRegister()
	{
		return USuperModeDeactivation::StaticClass();
	}
	struct Z_Construct_UClass_USuperModeDeactivation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__deactivationDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__deactivationDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USuperModeDeactivation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK23,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USuperModeDeactivation_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "SuperModeDeactivation.h" },
		{ "ModuleRelativePath", "Public/SuperModeDeactivation.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USuperModeDeactivation_Statics::NewProp__deactivationDuration_MetaData[] = {
		{ "Category", "SuperModeDeactivation" },
		{ "ModuleRelativePath", "Public/SuperModeDeactivation.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USuperModeDeactivation_Statics::NewProp__deactivationDuration = { "_deactivationDuration", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USuperModeDeactivation, _deactivationDuration), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_USuperModeDeactivation_Statics::NewProp__deactivationDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USuperModeDeactivation_Statics::NewProp__deactivationDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USuperModeDeactivation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USuperModeDeactivation_Statics::NewProp__deactivationDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USuperModeDeactivation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USuperModeDeactivation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USuperModeDeactivation_Statics::ClassParams = {
		&USuperModeDeactivation::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USuperModeDeactivation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USuperModeDeactivation_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_USuperModeDeactivation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USuperModeDeactivation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USuperModeDeactivation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USuperModeDeactivation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USuperModeDeactivation, 1035498175);
	template<> THEK23_API UClass* StaticClass<USuperModeDeactivation>()
	{
		return USuperModeDeactivation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USuperModeDeactivation(Z_Construct_UClass_USuperModeDeactivation, &USuperModeDeactivation::StaticClass, TEXT("/Script/TheK23"), TEXT("USuperModeDeactivation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USuperModeDeactivation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
