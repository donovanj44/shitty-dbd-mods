// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheCannibal/Public/CannibalChainsawAttack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCannibalChainsawAttack() {}
// Cross Module References
	THECANNIBAL_API UClass* Z_Construct_UClass_UCannibalChainsawAttack_NoRegister();
	THECANNIBAL_API UClass* Z_Construct_UClass_UCannibalChainsawAttack();
	THEHILLBILLY_API UClass* Z_Construct_UClass_UHillbillyChainsawAttack();
	UPackage* Z_Construct_UPackage__Script_TheCannibal();
	GAMEPLAYTAGUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FTagStateBool();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UButtonPromptSource_NoRegister();
// End Cross Module References
	void UCannibalChainsawAttack::StaticRegisterNativesUCannibalChainsawAttack()
	{
	}
	UClass* Z_Construct_UClass_UCannibalChainsawAttack_NoRegister()
	{
		return UCannibalChainsawAttack::StaticClass();
	}
	struct Z_Construct_UClass_UCannibalChainsawAttack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isInTantrum_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__isInTantrum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCannibalChainsawAttack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHillbillyChainsawAttack,
		(UObject* (*)())Z_Construct_UPackage__Script_TheCannibal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCannibalChainsawAttack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CannibalChainsawAttack.h" },
		{ "ModuleRelativePath", "Public/CannibalChainsawAttack.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCannibalChainsawAttack_Statics::NewProp__isInTantrum_MetaData[] = {
		{ "ModuleRelativePath", "Public/CannibalChainsawAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCannibalChainsawAttack_Statics::NewProp__isInTantrum = { "_isInTantrum", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCannibalChainsawAttack, _isInTantrum), Z_Construct_UScriptStruct_FTagStateBool, METADATA_PARAMS(Z_Construct_UClass_UCannibalChainsawAttack_Statics::NewProp__isInTantrum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCannibalChainsawAttack_Statics::NewProp__isInTantrum_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCannibalChainsawAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCannibalChainsawAttack_Statics::NewProp__isInTantrum,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCannibalChainsawAttack_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UButtonPromptSource_NoRegister, (int32)VTABLE_OFFSET(UCannibalChainsawAttack, IButtonPromptSource), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCannibalChainsawAttack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCannibalChainsawAttack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCannibalChainsawAttack_Statics::ClassParams = {
		&UCannibalChainsawAttack::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCannibalChainsawAttack_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCannibalChainsawAttack_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCannibalChainsawAttack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCannibalChainsawAttack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCannibalChainsawAttack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCannibalChainsawAttack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCannibalChainsawAttack, 1192853492);
	template<> THECANNIBAL_API UClass* StaticClass<UCannibalChainsawAttack>()
	{
		return UCannibalChainsawAttack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCannibalChainsawAttack(Z_Construct_UClass_UCannibalChainsawAttack, &UCannibalChainsawAttack::StaticClass, TEXT("/Script/TheCannibal"), TEXT("UCannibalChainsawAttack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCannibalChainsawAttack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
