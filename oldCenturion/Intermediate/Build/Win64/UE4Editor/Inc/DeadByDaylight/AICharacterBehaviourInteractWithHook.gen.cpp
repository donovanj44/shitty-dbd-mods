// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AICharacterBehaviourInteractWithHook.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAICharacterBehaviourInteractWithHook() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAICharacterBehaviourInteractWithHook_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAICharacterBehaviourInteractWithHook();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAICharacterBehaviourInteractWithActor();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UAICharacterBehaviourInteractWithHook::StaticRegisterNativesUAICharacterBehaviourInteractWithHook()
	{
	}
	UClass* Z_Construct_UClass_UAICharacterBehaviourInteractWithHook_NoRegister()
	{
		return UAICharacterBehaviourInteractWithHook::StaticClass();
	}
	struct Z_Construct_UClass_UAICharacterBehaviourInteractWithHook_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAICharacterBehaviourInteractWithHook_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAICharacterBehaviourInteractWithActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAICharacterBehaviourInteractWithHook_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AICharacterBehaviourInteractWithHook.h" },
		{ "ModuleRelativePath", "Public/AICharacterBehaviourInteractWithHook.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAICharacterBehaviourInteractWithHook_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAICharacterBehaviourInteractWithHook>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAICharacterBehaviourInteractWithHook_Statics::ClassParams = {
		&UAICharacterBehaviourInteractWithHook::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAICharacterBehaviourInteractWithHook_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAICharacterBehaviourInteractWithHook_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAICharacterBehaviourInteractWithHook()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAICharacterBehaviourInteractWithHook_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAICharacterBehaviourInteractWithHook, 3331736603);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAICharacterBehaviourInteractWithHook>()
	{
		return UAICharacterBehaviourInteractWithHook::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAICharacterBehaviourInteractWithHook(Z_Construct_UClass_UAICharacterBehaviourInteractWithHook, &UAICharacterBehaviourInteractWithHook::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAICharacterBehaviourInteractWithHook"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAICharacterBehaviourInteractWithHook);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
