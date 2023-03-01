// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameflowNotifications/Public/GameflowEventsNotifier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameflowEventsNotifier() {}
// Cross Module References
	GAMEFLOWNOTIFICATIONS_API UClass* Z_Construct_UClass_UGameflowEventsNotifier_NoRegister();
	GAMEFLOWNOTIFICATIONS_API UClass* Z_Construct_UClass_UGameflowEventsNotifier();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_GameflowNotifications();
// End Cross Module References
	void UGameflowEventsNotifier::StaticRegisterNativesUGameflowEventsNotifier()
	{
	}
	UClass* Z_Construct_UClass_UGameflowEventsNotifier_NoRegister()
	{
		return UGameflowEventsNotifier::StaticClass();
	}
	struct Z_Construct_UClass_UGameflowEventsNotifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameflowEventsNotifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GameflowNotifications,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameflowEventsNotifier_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameflowEventsNotifier.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameflowEventsNotifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGameflowEventsNotifier>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameflowEventsNotifier_Statics::ClassParams = {
		&UGameflowEventsNotifier::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGameflowEventsNotifier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameflowEventsNotifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameflowEventsNotifier()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameflowEventsNotifier_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameflowEventsNotifier, 2177049808);
	template<> GAMEFLOWNOTIFICATIONS_API UClass* StaticClass<UGameflowEventsNotifier>()
	{
		return UGameflowEventsNotifier::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameflowEventsNotifier(Z_Construct_UClass_UGameflowEventsNotifier, &UGameflowEventsNotifier::StaticClass, TEXT("/Script/GameflowNotifications"), TEXT("UGameflowEventsNotifier"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameflowEventsNotifier);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
