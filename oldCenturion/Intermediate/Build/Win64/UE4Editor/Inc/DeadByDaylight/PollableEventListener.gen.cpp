// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PollableEventListener.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePollableEventListener() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPollableEventListener_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPollableEventListener();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UPollableEventListener::StaticRegisterNativesUPollableEventListener()
	{
	}
	UClass* Z_Construct_UClass_UPollableEventListener_NoRegister()
	{
		return UPollableEventListener::StaticClass();
	}
	struct Z_Construct_UClass_UPollableEventListener_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPollableEventListener_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPollableEventListener_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PollableEventListener.h" },
		{ "ModuleRelativePath", "Public/PollableEventListener.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPollableEventListener_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPollableEventListener>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPollableEventListener_Statics::ClassParams = {
		&UPollableEventListener::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPollableEventListener_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPollableEventListener_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPollableEventListener()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPollableEventListener_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPollableEventListener, 3935775601);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UPollableEventListener>()
	{
		return UPollableEventListener::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPollableEventListener(Z_Construct_UClass_UPollableEventListener, &UPollableEventListener::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UPollableEventListener"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPollableEventListener);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
