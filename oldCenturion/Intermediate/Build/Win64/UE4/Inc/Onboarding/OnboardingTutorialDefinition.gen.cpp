// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Onboarding/Public/OnboardingTutorialDefinition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnboardingTutorialDefinition() {}
// Cross Module References
	ONBOARDING_API UScriptStruct* Z_Construct_UScriptStruct_FOnboardingTutorialDefinition();
	UPackage* Z_Construct_UPackage__Script_Onboarding();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBaseWithId();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EOnboardingTutorialButtonStyle();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EOnboardingTutorialType();
// End Cross Module References
class UScriptStruct* FOnboardingTutorialDefinition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ONBOARDING_API uint32 Get_Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOnboardingTutorialDefinition, Z_Construct_UPackage__Script_Onboarding(), TEXT("OnboardingTutorialDefinition"), sizeof(FOnboardingTutorialDefinition), Get_Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Hash());
	}
	return Singleton;
}
template<> ONBOARDING_API UScriptStruct* StaticStruct<FOnboardingTutorialDefinition>()
{
	return FOnboardingTutorialDefinition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOnboardingTutorialDefinition(FOnboardingTutorialDefinition::StaticStruct, TEXT("/Script/Onboarding"), TEXT("OnboardingTutorialDefinition"), false, nullptr, nullptr);
static struct FScriptStruct_Onboarding_StaticRegisterNativesFOnboardingTutorialDefinition
{
	FScriptStruct_Onboarding_StaticRegisterNativesFOnboardingTutorialDefinition()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OnboardingTutorialDefinition")),new UScriptStruct::TCppStructOps<FOnboardingTutorialDefinition>);
	}
} ScriptStruct_Onboarding_StaticRegisterNativesFOnboardingTutorialDefinition;
	struct Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LevelId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ButtonStyle;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ButtonStyle_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TutorialType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TutorialType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TutorialType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompletedDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CompletedDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompletedDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CompletedDisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OnboardingTutorialDefinition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOnboardingTutorialDefinition>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "OnboardingTutorialDefinition" },
		{ "ModuleRelativePath", "Public/OnboardingTutorialDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOnboardingTutorialDefinition, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Statics::NewProp_Icon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Statics::NewProp_LevelId_MetaData[] = {
		{ "Category", "OnboardingTutorialDefinition" },
		{ "ModuleRelativePath", "Public/OnboardingTutorialDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Statics::NewProp_LevelId = { "LevelId", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOnboardingTutorialDefinition, LevelId), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Statics::NewProp_LevelId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Statics::NewProp_LevelId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Statics::NewProp_ButtonStyle_MetaData[] = {
		{ "Category", "OnboardingTutorialDefinition" },
		{ "ModuleRelativePath", "Public/OnboardingTutorialDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Statics::NewProp_ButtonStyle = { "ButtonStyle", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOnboardingTutorialDefinition, ButtonStyle), Z_Construct_UEnum_DBDSharedTypes_EOnboardingTutorialButtonStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Statics::NewProp_ButtonStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Statics::NewProp_ButtonStyle_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Statics::NewProp_ButtonStyle_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Statics::NewProp_TutorialType_MetaData[] = {
		{ "Category", "OnboardingTutorialDefinition" },
		{ "ModuleRelativePath", "Public/OnboardingTutorialDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Statics::NewProp_TutorialType = { "TutorialType", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOnboardingTutorialDefinition, TutorialType), Z_Construct_UEnum_DBDSharedTypes_EOnboardingTutorialType, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Statics::NewProp_TutorialType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Statics::NewProp_TutorialType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Statics::NewProp_TutorialType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Statics::NewProp_CompletedDescription_MetaData[] = {
		{ "Category", "OnboardingTutorialDefinition" },
		{ "ModuleRelativePath", "Public/OnboardingTutorialDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Statics::NewProp_CompletedDescription = { "CompletedDescription", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOnboardingTutorialDefinition, CompletedDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Statics::NewProp_CompletedDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Statics::NewProp_CompletedDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "OnboardingTutorialDefinition" },
		{ "ModuleRelativePath", "Public/OnboardingTutorialDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOnboardingTutorialDefinition, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Statics::NewProp_CompletedDisplayName_MetaData[] = {
		{ "Category", "OnboardingTutorialDefinition" },
		{ "ModuleRelativePath", "Public/OnboardingTutorialDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Statics::NewProp_CompletedDisplayName = { "CompletedDisplayName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOnboardingTutorialDefinition, CompletedDisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Statics::NewProp_CompletedDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Statics::NewProp_CompletedDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "OnboardingTutorialDefinition" },
		{ "ModuleRelativePath", "Public/OnboardingTutorialDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOnboardingTutorialDefinition, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Statics::NewProp_DisplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Statics::NewProp_Icon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Statics::NewProp_LevelId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Statics::NewProp_ButtonStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Statics::NewProp_ButtonStyle_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Statics::NewProp_TutorialType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Statics::NewProp_TutorialType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Statics::NewProp_CompletedDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Statics::NewProp_CompletedDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Statics::NewProp_DisplayName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Onboarding,
		Z_Construct_UScriptStruct_FDBDTableRowBaseWithId,
		&NewStructOps,
		"OnboardingTutorialDefinition",
		sizeof(FOnboardingTutorialDefinition),
		alignof(FOnboardingTutorialDefinition),
		Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOnboardingTutorialDefinition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Onboarding();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OnboardingTutorialDefinition"), sizeof(FOnboardingTutorialDefinition), Get_Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOnboardingTutorialDefinition_Hash() { return 1996316430U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
