// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDBaseGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDBaseGameMode() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDBaseGameMode_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDBaseGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableDropdown();
// End Cross Module References
	void ADBDBaseGameMode::StaticRegisterNativesADBDBaseGameMode()
	{
	}
	UClass* Z_Construct_UClass_ADBDBaseGameMode_NoRegister()
	{
		return ADBDBaseGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ADBDBaseGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugSpecialEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugSpecialEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADBDBaseGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDBaseGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DBDBaseGameMode.h" },
		{ "ModuleRelativePath", "Public/DBDBaseGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDBaseGameMode_Statics::NewProp_DebugSpecialEvent_MetaData[] = {
		{ "Category", "DBDBaseGameMode" },
		{ "ModuleRelativePath", "Public/DBDBaseGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADBDBaseGameMode_Statics::NewProp_DebugSpecialEvent = { "DebugSpecialEvent", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDBaseGameMode, DebugSpecialEvent), Z_Construct_UScriptStruct_FDataTableDropdown, METADATA_PARAMS(Z_Construct_UClass_ADBDBaseGameMode_Statics::NewProp_DebugSpecialEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDBaseGameMode_Statics::NewProp_DebugSpecialEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADBDBaseGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDBaseGameMode_Statics::NewProp_DebugSpecialEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADBDBaseGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADBDBaseGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADBDBaseGameMode_Statics::ClassParams = {
		&ADBDBaseGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADBDBaseGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADBDBaseGameMode_Statics::PropPointers),
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADBDBaseGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDBaseGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADBDBaseGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADBDBaseGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADBDBaseGameMode, 634462392);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ADBDBaseGameMode>()
	{
		return ADBDBaseGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADBDBaseGameMode(Z_Construct_UClass_ADBDBaseGameMode, &ADBDBaseGameMode::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ADBDBaseGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADBDBaseGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
