// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/InboxScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInboxScreen() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInboxScreen_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInboxScreen();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UScreenBase();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FInboxMessageUIData();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGInboxScreen_NoRegister();
// End Cross Module References
	void UInboxScreen::StaticRegisterNativesUInboxScreen()
	{
	}
	UClass* Z_Construct_UClass_UInboxScreen_NoRegister()
	{
		return UInboxScreen::StaticClass();
	}
	struct Z_Construct_UClass_UInboxScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__socialMessages_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__socialMessages;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__socialMessages_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rewardsMessages_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__rewardsMessages;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__rewardsMessages_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__newsMessages_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__newsMessages;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__newsMessages_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__umgScreen_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__umgScreen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInboxScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScreenBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInboxScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InboxScreen.h" },
		{ "ModuleRelativePath", "Public/InboxScreen.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInboxScreen_Statics::NewProp__socialMessages_MetaData[] = {
		{ "ModuleRelativePath", "Public/InboxScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInboxScreen_Statics::NewProp__socialMessages = { "_socialMessages", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInboxScreen, _socialMessages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInboxScreen_Statics::NewProp__socialMessages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInboxScreen_Statics::NewProp__socialMessages_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInboxScreen_Statics::NewProp__socialMessages_Inner = { "_socialMessages", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInboxMessageUIData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInboxScreen_Statics::NewProp__rewardsMessages_MetaData[] = {
		{ "ModuleRelativePath", "Public/InboxScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInboxScreen_Statics::NewProp__rewardsMessages = { "_rewardsMessages", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInboxScreen, _rewardsMessages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInboxScreen_Statics::NewProp__rewardsMessages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInboxScreen_Statics::NewProp__rewardsMessages_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInboxScreen_Statics::NewProp__rewardsMessages_Inner = { "_rewardsMessages", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInboxMessageUIData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInboxScreen_Statics::NewProp__newsMessages_MetaData[] = {
		{ "ModuleRelativePath", "Public/InboxScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInboxScreen_Statics::NewProp__newsMessages = { "_newsMessages", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInboxScreen, _newsMessages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInboxScreen_Statics::NewProp__newsMessages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInboxScreen_Statics::NewProp__newsMessages_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInboxScreen_Statics::NewProp__newsMessages_Inner = { "_newsMessages", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInboxMessageUIData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInboxScreen_Statics::NewProp__umgScreen_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InboxScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInboxScreen_Statics::NewProp__umgScreen = { "_umgScreen", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInboxScreen, _umgScreen), Z_Construct_UClass_UUMGInboxScreen_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInboxScreen_Statics::NewProp__umgScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInboxScreen_Statics::NewProp__umgScreen_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInboxScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInboxScreen_Statics::NewProp__socialMessages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInboxScreen_Statics::NewProp__socialMessages_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInboxScreen_Statics::NewProp__rewardsMessages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInboxScreen_Statics::NewProp__rewardsMessages_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInboxScreen_Statics::NewProp__newsMessages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInboxScreen_Statics::NewProp__newsMessages_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInboxScreen_Statics::NewProp__umgScreen,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInboxScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInboxScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInboxScreen_Statics::ClassParams = {
		&UInboxScreen::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInboxScreen_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInboxScreen_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInboxScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInboxScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInboxScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInboxScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInboxScreen, 186564161);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UInboxScreen>()
	{
		return UInboxScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInboxScreen(Z_Construct_UClass_UInboxScreen, &UInboxScreen::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UInboxScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInboxScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
