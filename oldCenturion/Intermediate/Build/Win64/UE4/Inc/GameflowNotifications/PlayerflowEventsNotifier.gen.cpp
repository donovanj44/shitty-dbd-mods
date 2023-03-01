// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameflowNotifications/Public/PlayerflowEventsNotifier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerflowEventsNotifier() {}
// Cross Module References
	GAMEFLOWNOTIFICATIONS_API UClass* Z_Construct_UClass_UPlayerflowEventsNotifier_NoRegister();
	GAMEFLOWNOTIFICATIONS_API UClass* Z_Construct_UClass_UPlayerflowEventsNotifier();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_GameflowNotifications();
// End Cross Module References
	void UPlayerflowEventsNotifier::StaticRegisterNativesUPlayerflowEventsNotifier()
	{
	}
	UClass* Z_Construct_UClass_UPlayerflowEventsNotifier_NoRegister()
	{
		return UPlayerflowEventsNotifier::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerflowEventsNotifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerflowEventsNotifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GameflowNotifications,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerflowEventsNotifier_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerflowEventsNotifier.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerflowEventsNotifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPlayerflowEventsNotifier>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerflowEventsNotifier_Statics::ClassParams = {
		&UPlayerflowEventsNotifier::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerflowEventsNotifier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerflowEventsNotifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerflowEventsNotifier()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerflowEventsNotifier_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerflowEventsNotifier, 2571537640);
	template<> GAMEFLOWNOTIFICATIONS_API UClass* StaticClass<UPlayerflowEventsNotifier>()
	{
		return UPlayerflowEventsNotifier::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerflowEventsNotifier(Z_Construct_UClass_UPlayerflowEventsNotifier, &UPlayerflowEventsNotifier::StaticClass, TEXT("/Script/GameflowNotifications"), TEXT("UPlayerflowEventsNotifier"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerflowEventsNotifier);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
