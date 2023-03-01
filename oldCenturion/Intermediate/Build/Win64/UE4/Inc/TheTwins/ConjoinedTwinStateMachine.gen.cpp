// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/ConjoinedTwinStateMachine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConjoinedTwinStateMachine() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_UConjoinedTwinStateMachine_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UConjoinedTwinStateMachine();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPlayerStateMachine();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
// End Cross Module References
	void UConjoinedTwinStateMachine::StaticRegisterNativesUConjoinedTwinStateMachine()
	{
	}
	UClass* Z_Construct_UClass_UConjoinedTwinStateMachine_NoRegister()
	{
		return UConjoinedTwinStateMachine::StaticClass();
	}
	struct Z_Construct_UClass_UConjoinedTwinStateMachine_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConjoinedTwinStateMachine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlayerStateMachine,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConjoinedTwinStateMachine_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ConjoinedTwinStateMachine.h" },
		{ "ModuleRelativePath", "Public/ConjoinedTwinStateMachine.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConjoinedTwinStateMachine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConjoinedTwinStateMachine>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UConjoinedTwinStateMachine_Statics::ClassParams = {
		&UConjoinedTwinStateMachine::StaticClass,
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
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UConjoinedTwinStateMachine_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConjoinedTwinStateMachine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConjoinedTwinStateMachine()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UConjoinedTwinStateMachine_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UConjoinedTwinStateMachine, 2692567002);
	template<> THETWINS_API UClass* StaticClass<UConjoinedTwinStateMachine>()
	{
		return UConjoinedTwinStateMachine::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UConjoinedTwinStateMachine(Z_Construct_UClass_UConjoinedTwinStateMachine, &UConjoinedTwinStateMachine::StaticClass, TEXT("/Script/TheTwins"), TEXT("UConjoinedTwinStateMachine"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConjoinedTwinStateMachine);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
