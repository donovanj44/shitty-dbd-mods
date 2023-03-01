// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/NavLinkProxy_Interaction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavLinkProxy_Interaction() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_ANavLinkProxy_Interaction_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_ANavLinkProxy_Interaction();
	DBDBOTS_API UClass* Z_Construct_UClass_ANavLinkProxy_Base();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerRole();
	DBDBOTS_API UScriptStruct* Z_Construct_UScriptStruct_FNavLinkInteractPlayerSetup();
// End Cross Module References
	void ANavLinkProxy_Interaction::StaticRegisterNativesANavLinkProxy_Interaction()
	{
	}
	UClass* Z_Construct_UClass_ANavLinkProxy_Interaction_NoRegister()
	{
		return ANavLinkProxy_Interaction::StaticClass();
	}
	struct Z_Construct_UClass_ANavLinkProxy_Interaction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__playersInteractionInputAtTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__playersInteractionInputAtTime;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__playersInteractionInputAtTime_Key_KeyProp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__playersInteractionInputAtTime_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionStartTimeLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InteractionStartTimeLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerSetups_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PlayerSetups;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayerSetups_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayerSetups_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerSetups_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANavLinkProxy_Interaction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANavLinkProxy_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavLinkProxy_Interaction_Statics::Class_MetaDataParams[] = {
		{ "AutoCollapseCategories", "SmartLink Actor" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "NavLinkProxy_Interaction.h" },
		{ "ModuleRelativePath", "Public/NavLinkProxy_Interaction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavLinkProxy_Interaction_Statics::NewProp__playersInteractionInputAtTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavLinkProxy_Interaction.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ANavLinkProxy_Interaction_Statics::NewProp__playersInteractionInputAtTime = { "_playersInteractionInputAtTime", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavLinkProxy_Interaction, _playersInteractionInputAtTime), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ANavLinkProxy_Interaction_Statics::NewProp__playersInteractionInputAtTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavLinkProxy_Interaction_Statics::NewProp__playersInteractionInputAtTime_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANavLinkProxy_Interaction_Statics::NewProp__playersInteractionInputAtTime_Key_KeyProp = { "_playersInteractionInputAtTime_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANavLinkProxy_Interaction_Statics::NewProp__playersInteractionInputAtTime_ValueProp = { "_playersInteractionInputAtTime", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavLinkProxy_Interaction_Statics::NewProp_InteractionStartTimeLimit_MetaData[] = {
		{ "Category", "NavLinkProxy_Interaction" },
		{ "ModuleRelativePath", "Public/NavLinkProxy_Interaction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANavLinkProxy_Interaction_Statics::NewProp_InteractionStartTimeLimit = { "InteractionStartTimeLimit", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavLinkProxy_Interaction, InteractionStartTimeLimit), METADATA_PARAMS(Z_Construct_UClass_ANavLinkProxy_Interaction_Statics::NewProp_InteractionStartTimeLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavLinkProxy_Interaction_Statics::NewProp_InteractionStartTimeLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavLinkProxy_Interaction_Statics::NewProp_PlayerSetups_MetaData[] = {
		{ "Category", "NavLinkProxy_Interaction" },
		{ "ModuleRelativePath", "Public/NavLinkProxy_Interaction.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ANavLinkProxy_Interaction_Statics::NewProp_PlayerSetups = { "PlayerSetups", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavLinkProxy_Interaction, PlayerSetups), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ANavLinkProxy_Interaction_Statics::NewProp_PlayerSetups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavLinkProxy_Interaction_Statics::NewProp_PlayerSetups_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ANavLinkProxy_Interaction_Statics::NewProp_PlayerSetups_Key_KeyProp = { "PlayerSetups_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ANavLinkProxy_Interaction_Statics::NewProp_PlayerSetups_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANavLinkProxy_Interaction_Statics::NewProp_PlayerSetups_ValueProp = { "PlayerSetups", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FNavLinkInteractPlayerSetup, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANavLinkProxy_Interaction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinkProxy_Interaction_Statics::NewProp__playersInteractionInputAtTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinkProxy_Interaction_Statics::NewProp__playersInteractionInputAtTime_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinkProxy_Interaction_Statics::NewProp__playersInteractionInputAtTime_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinkProxy_Interaction_Statics::NewProp_InteractionStartTimeLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinkProxy_Interaction_Statics::NewProp_PlayerSetups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinkProxy_Interaction_Statics::NewProp_PlayerSetups_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinkProxy_Interaction_Statics::NewProp_PlayerSetups_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinkProxy_Interaction_Statics::NewProp_PlayerSetups_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANavLinkProxy_Interaction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavLinkProxy_Interaction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANavLinkProxy_Interaction_Statics::ClassParams = {
		&ANavLinkProxy_Interaction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANavLinkProxy_Interaction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANavLinkProxy_Interaction_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANavLinkProxy_Interaction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANavLinkProxy_Interaction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANavLinkProxy_Interaction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANavLinkProxy_Interaction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANavLinkProxy_Interaction, 1282954524);
	template<> DBDBOTS_API UClass* StaticClass<ANavLinkProxy_Interaction>()
	{
		return ANavLinkProxy_Interaction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANavLinkProxy_Interaction(Z_Construct_UClass_ANavLinkProxy_Interaction, &ANavLinkProxy_Interaction::StaticClass, TEXT("/Script/DBDBots"), TEXT("ANavLinkProxy_Interaction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANavLinkProxy_Interaction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
