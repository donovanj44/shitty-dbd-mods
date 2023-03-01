// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDDebugGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDDebugGameMode() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDDebugGameMode_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDDebugGameMode();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDGameMode();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSlasherLoadout();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCamperLoadout();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayerController_NoRegister();
// End Cross Module References
	void ADBDDebugGameMode::StaticRegisterNativesADBDDebugGameMode()
	{
	}
	UClass* Z_Construct_UClass_ADBDDebugGameMode_NoRegister()
	{
		return ADBDDebugGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ADBDDebugGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlasherPawnOverrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SlasherPawnOverrides;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlasherPawnOverrides_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CamperPawnOverrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CamperPawnOverrides;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CamperPawnOverrides_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayersWithItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_PlayersWithItems;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayersWithItems_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadoutIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_LoadoutIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LoadoutIndex_Key_KeyProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LoadoutIndex_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADBDDebugGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADBDGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDDebugGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DBDDebugGameMode.h" },
		{ "ModuleRelativePath", "Public/DBDDebugGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDDebugGameMode_Statics::NewProp_SlasherPawnOverrides_MetaData[] = {
		{ "Category", "DBDDebugGameMode" },
		{ "ModuleRelativePath", "Public/DBDDebugGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADBDDebugGameMode_Statics::NewProp_SlasherPawnOverrides = { "SlasherPawnOverrides", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDDebugGameMode, SlasherPawnOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADBDDebugGameMode_Statics::NewProp_SlasherPawnOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDDebugGameMode_Statics::NewProp_SlasherPawnOverrides_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADBDDebugGameMode_Statics::NewProp_SlasherPawnOverrides_Inner = { "SlasherPawnOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSlasherLoadout, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDDebugGameMode_Statics::NewProp_CamperPawnOverrides_MetaData[] = {
		{ "Category", "DBDDebugGameMode" },
		{ "ModuleRelativePath", "Public/DBDDebugGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADBDDebugGameMode_Statics::NewProp_CamperPawnOverrides = { "CamperPawnOverrides", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDDebugGameMode, CamperPawnOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADBDDebugGameMode_Statics::NewProp_CamperPawnOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDDebugGameMode_Statics::NewProp_CamperPawnOverrides_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADBDDebugGameMode_Statics::NewProp_CamperPawnOverrides_Inner = { "CamperPawnOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCamperLoadout, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDDebugGameMode_Statics::NewProp_PlayersWithItems_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDDebugGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_ADBDDebugGameMode_Statics::NewProp_PlayersWithItems = { "PlayersWithItems", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDDebugGameMode, PlayersWithItems), METADATA_PARAMS(Z_Construct_UClass_ADBDDebugGameMode_Statics::NewProp_PlayersWithItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDDebugGameMode_Statics::NewProp_PlayersWithItems_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADBDDebugGameMode_Statics::NewProp_PlayersWithItems_ElementProp = { "PlayersWithItems", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDDebugGameMode_Statics::NewProp_LoadoutIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDDebugGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ADBDDebugGameMode_Statics::NewProp_LoadoutIndex = { "LoadoutIndex", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDDebugGameMode, LoadoutIndex), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADBDDebugGameMode_Statics::NewProp_LoadoutIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDDebugGameMode_Statics::NewProp_LoadoutIndex_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADBDDebugGameMode_Statics::NewProp_LoadoutIndex_Key_KeyProp = { "LoadoutIndex_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADBDPlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADBDDebugGameMode_Statics::NewProp_LoadoutIndex_ValueProp = { "LoadoutIndex", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADBDDebugGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDDebugGameMode_Statics::NewProp_SlasherPawnOverrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDDebugGameMode_Statics::NewProp_SlasherPawnOverrides_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDDebugGameMode_Statics::NewProp_CamperPawnOverrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDDebugGameMode_Statics::NewProp_CamperPawnOverrides_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDDebugGameMode_Statics::NewProp_PlayersWithItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDDebugGameMode_Statics::NewProp_PlayersWithItems_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDDebugGameMode_Statics::NewProp_LoadoutIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDDebugGameMode_Statics::NewProp_LoadoutIndex_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDDebugGameMode_Statics::NewProp_LoadoutIndex_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADBDDebugGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADBDDebugGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADBDDebugGameMode_Statics::ClassParams = {
		&ADBDDebugGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADBDDebugGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADBDDebugGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADBDDebugGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDDebugGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADBDDebugGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADBDDebugGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADBDDebugGameMode, 2554010738);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ADBDDebugGameMode>()
	{
		return ADBDDebugGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADBDDebugGameMode(Z_Construct_UClass_ADBDDebugGameMode, &ADBDDebugGameMode::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ADBDDebugGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADBDDebugGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
