// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/FirecrackerStateMachine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirecrackerStateMachine() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UFirecrackerStateMachine_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UFirecrackerStateMachine();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStateMachine();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UFirecrackerStateMachine::StaticRegisterNativesUFirecrackerStateMachine()
	{
	}
	UClass* Z_Construct_UClass_UFirecrackerStateMachine_NoRegister()
	{
		return UFirecrackerStateMachine::StaticClass();
	}
	struct Z_Construct_UClass_UFirecrackerStateMachine_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFirecrackerStateMachine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStateMachine,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirecrackerStateMachine_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FirecrackerStateMachine.h" },
		{ "ModuleRelativePath", "Public/FirecrackerStateMachine.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFirecrackerStateMachine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFirecrackerStateMachine>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFirecrackerStateMachine_Statics::ClassParams = {
		&UFirecrackerStateMachine::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFirecrackerStateMachine_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFirecrackerStateMachine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFirecrackerStateMachine()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFirecrackerStateMachine_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFirecrackerStateMachine, 4022982715);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UFirecrackerStateMachine>()
	{
		return UFirecrackerStateMachine::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFirecrackerStateMachine(Z_Construct_UClass_UFirecrackerStateMachine, &UFirecrackerStateMachine::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UFirecrackerStateMachine"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFirecrackerStateMachine);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
