// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK26/Public/CorrectiveAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCorrectiveAction() {}
// Cross Module References
	THEK26_API UClass* Z_Construct_UClass_UCorrectiveAction_NoRegister();
	THEK26_API UClass* Z_Construct_UClass_UCorrectiveAction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_TheK26();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	void UCorrectiveAction::StaticRegisterNativesUCorrectiveAction()
	{
	}
	UClass* Z_Construct_UClass_UCorrectiveAction_NoRegister()
	{
		return UCorrectiveAction::StaticClass();
	}
	struct Z_Construct_UClass_UCorrectiveAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__allowedInteractionSemanticsForToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__allowedInteractionSemanticsForToken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__statusEffectName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__statusEffectName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__startingTokens_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__startingTokens;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCorrectiveAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK26,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorrectiveAction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CorrectiveAction.h" },
		{ "ModuleRelativePath", "Public/CorrectiveAction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorrectiveAction_Statics::NewProp__allowedInteractionSemanticsForToken_MetaData[] = {
		{ "Category", "CorrectiveAction" },
		{ "ModuleRelativePath", "Public/CorrectiveAction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCorrectiveAction_Statics::NewProp__allowedInteractionSemanticsForToken = { "_allowedInteractionSemanticsForToken", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorrectiveAction, _allowedInteractionSemanticsForToken), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UCorrectiveAction_Statics::NewProp__allowedInteractionSemanticsForToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorrectiveAction_Statics::NewProp__allowedInteractionSemanticsForToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorrectiveAction_Statics::NewProp__statusEffectName_MetaData[] = {
		{ "Category", "CorrectiveAction" },
		{ "ModuleRelativePath", "Public/CorrectiveAction.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCorrectiveAction_Statics::NewProp__statusEffectName = { "_statusEffectName", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorrectiveAction, _statusEffectName), METADATA_PARAMS(Z_Construct_UClass_UCorrectiveAction_Statics::NewProp__statusEffectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorrectiveAction_Statics::NewProp__statusEffectName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorrectiveAction_Statics::NewProp__startingTokens_MetaData[] = {
		{ "Category", "CorrectiveAction" },
		{ "ModuleRelativePath", "Public/CorrectiveAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCorrectiveAction_Statics::NewProp__startingTokens = { "_startingTokens", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_startingTokens, UCorrectiveAction), STRUCT_OFFSET(UCorrectiveAction, _startingTokens), METADATA_PARAMS(Z_Construct_UClass_UCorrectiveAction_Statics::NewProp__startingTokens_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorrectiveAction_Statics::NewProp__startingTokens_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCorrectiveAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorrectiveAction_Statics::NewProp__allowedInteractionSemanticsForToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorrectiveAction_Statics::NewProp__statusEffectName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorrectiveAction_Statics::NewProp__startingTokens,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCorrectiveAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCorrectiveAction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCorrectiveAction_Statics::ClassParams = {
		&UCorrectiveAction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCorrectiveAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCorrectiveAction_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCorrectiveAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCorrectiveAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCorrectiveAction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCorrectiveAction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCorrectiveAction, 1542282337);
	template<> THEK26_API UClass* StaticClass<UCorrectiveAction>()
	{
		return UCorrectiveAction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCorrectiveAction(Z_Construct_UClass_UCorrectiveAction, &UCorrectiveAction::StaticClass, TEXT("/Script/TheK26"), TEXT("UCorrectiveAction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCorrectiveAction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
