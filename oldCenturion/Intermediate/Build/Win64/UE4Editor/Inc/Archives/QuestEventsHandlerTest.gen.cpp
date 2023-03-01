// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Archives/Public/QuestEventsHandlerTest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestEventsHandlerTest() {}
// Cross Module References
	ARCHIVES_API UClass* Z_Construct_UClass_UQuestEventsHandlerTest_NoRegister();
	ARCHIVES_API UClass* Z_Construct_UClass_UQuestEventsHandlerTest();
	ARCHIVES_API UClass* Z_Construct_UClass_UQuestEventsHandler();
	UPackage* Z_Construct_UPackage__Script_Archives();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
// End Cross Module References
	void UQuestEventsHandlerTest::StaticRegisterNativesUQuestEventsHandlerTest()
	{
	}
	UClass* Z_Construct_UClass_UQuestEventsHandlerTest_NoRegister()
	{
		return UQuestEventsHandlerTest::StaticClass();
	}
	struct Z_Construct_UClass_UQuestEventsHandlerTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__dbdplayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__dbdplayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestEventsHandlerTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQuestEventsHandler,
		(UObject* (*)())Z_Construct_UPackage__Script_Archives,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEventsHandlerTest_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "QuestEventsHandlerTest.h" },
		{ "ModuleRelativePath", "Public/QuestEventsHandlerTest.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestEventsHandlerTest_Statics::NewProp__dbdplayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/QuestEventsHandlerTest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestEventsHandlerTest_Statics::NewProp__dbdplayer = { "_dbdplayer", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestEventsHandlerTest, _dbdplayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestEventsHandlerTest_Statics::NewProp__dbdplayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEventsHandlerTest_Statics::NewProp__dbdplayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestEventsHandlerTest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEventsHandlerTest_Statics::NewProp__dbdplayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestEventsHandlerTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestEventsHandlerTest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuestEventsHandlerTest_Statics::ClassParams = {
		&UQuestEventsHandlerTest::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UQuestEventsHandlerTest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEventsHandlerTest_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestEventsHandlerTest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEventsHandlerTest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestEventsHandlerTest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuestEventsHandlerTest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuestEventsHandlerTest, 2209750624);
	template<> ARCHIVES_API UClass* StaticClass<UQuestEventsHandlerTest>()
	{
		return UQuestEventsHandlerTest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuestEventsHandlerTest(Z_Construct_UClass_UQuestEventsHandlerTest, &UQuestEventsHandlerTest::StaticClass, TEXT("/Script/Archives"), TEXT("UQuestEventsHandlerTest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestEventsHandlerTest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
