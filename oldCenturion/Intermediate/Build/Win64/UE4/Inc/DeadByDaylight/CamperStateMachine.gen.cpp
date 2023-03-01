// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CamperStateMachine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCamperStateMachine() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCamperStateMachine_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCamperStateMachine();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPlayerStateMachine();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UCamperStateMachine::StaticRegisterNativesUCamperStateMachine()
	{
	}
	UClass* Z_Construct_UClass_UCamperStateMachine_NoRegister()
	{
		return UCamperStateMachine::StaticClass();
	}
	struct Z_Construct_UClass_UCamperStateMachine_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCamperStateMachine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlayerStateMachine,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCamperStateMachine_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CamperStateMachine.h" },
		{ "ModuleRelativePath", "Public/CamperStateMachine.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCamperStateMachine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCamperStateMachine>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCamperStateMachine_Statics::ClassParams = {
		&UCamperStateMachine::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCamperStateMachine_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCamperStateMachine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCamperStateMachine()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCamperStateMachine_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCamperStateMachine, 2290917544);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UCamperStateMachine>()
	{
		return UCamperStateMachine::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCamperStateMachine(Z_Construct_UClass_UCamperStateMachine, &UCamperStateMachine::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UCamperStateMachine"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCamperStateMachine);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
