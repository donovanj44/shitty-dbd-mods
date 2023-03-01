// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDGame_Start.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDGame_Start() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDGame_Start_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDGame_Start();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDBaseGameMode();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UClientStartupInitializerInterface_NoRegister();
// End Cross Module References
	void ADBDGame_Start::StaticRegisterNativesADBDGame_Start()
	{
	}
	UClass* Z_Construct_UClass_ADBDGame_Start_NoRegister()
	{
		return ADBDGame_Start::StaticClass();
	}
	struct Z_Construct_UClass_ADBDGame_Start_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__startupInitializer_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp__startupInitializer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADBDGame_Start_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADBDBaseGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDGame_Start_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DBDGame_Start.h" },
		{ "ModuleRelativePath", "Public/DBDGame_Start.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDGame_Start_Statics::NewProp__startupInitializer_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGame_Start.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_ADBDGame_Start_Statics::NewProp__startupInitializer = { "_startupInitializer", nullptr, (EPropertyFlags)0x0044000000002000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDGame_Start, _startupInitializer), Z_Construct_UClass_UClientStartupInitializerInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADBDGame_Start_Statics::NewProp__startupInitializer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDGame_Start_Statics::NewProp__startupInitializer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADBDGame_Start_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDGame_Start_Statics::NewProp__startupInitializer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADBDGame_Start_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADBDGame_Start>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADBDGame_Start_Statics::ClassParams = {
		&ADBDGame_Start::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADBDGame_Start_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADBDGame_Start_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADBDGame_Start_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDGame_Start_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADBDGame_Start()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADBDGame_Start_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADBDGame_Start, 897711870);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ADBDGame_Start>()
	{
		return ADBDGame_Start::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADBDGame_Start(Z_Construct_UClass_ADBDGame_Start, &ADBDGame_Start::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ADBDGame_Start"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADBDGame_Start);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
