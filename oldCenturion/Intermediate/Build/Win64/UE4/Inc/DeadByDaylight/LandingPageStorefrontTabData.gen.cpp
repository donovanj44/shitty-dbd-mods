// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/LandingPageStorefrontTabData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandingPageStorefrontTabData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FLandingPageStorefrontTabData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2DDynamic_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FLandingPageStorefrontTabData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FLandingPageStorefrontTabData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandingPageStorefrontTabData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("LandingPageStorefrontTabData"), sizeof(FLandingPageStorefrontTabData), Get_Z_Construct_UScriptStruct_FLandingPageStorefrontTabData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FLandingPageStorefrontTabData>()
{
	return FLandingPageStorefrontTabData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLandingPageStorefrontTabData(FLandingPageStorefrontTabData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("LandingPageStorefrontTabData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFLandingPageStorefrontTabData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFLandingPageStorefrontTabData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LandingPageStorefrontTabData")),new UScriptStruct::TCppStructOps<FLandingPageStorefrontTabData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFLandingPageStorefrontTabData;
	struct Z_Construct_UScriptStruct_FLandingPageStorefrontTabData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_TagText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Image;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewEndDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewEndDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewStartDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewStartDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandingPageStorefrontTabData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LandingPageStorefrontTabData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLandingPageStorefrontTabData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandingPageStorefrontTabData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandingPageStorefrontTabData_Statics::NewProp_TagText_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandingPageStorefrontTabData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FLandingPageStorefrontTabData_Statics::NewProp_TagText = { "TagText", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandingPageStorefrontTabData, TagText), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandingPageStorefrontTabData_Statics::NewProp_TagText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandingPageStorefrontTabData_Statics::NewProp_TagText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandingPageStorefrontTabData_Statics::NewProp_Title_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandingPageStorefrontTabData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FLandingPageStorefrontTabData_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandingPageStorefrontTabData, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandingPageStorefrontTabData_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandingPageStorefrontTabData_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandingPageStorefrontTabData_Statics::NewProp_Image_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandingPageStorefrontTabData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandingPageStorefrontTabData_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandingPageStorefrontTabData, Image), Z_Construct_UClass_UTexture2DDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandingPageStorefrontTabData_Statics::NewProp_Image_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandingPageStorefrontTabData_Statics::NewProp_Image_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandingPageStorefrontTabData_Statics::NewProp_NewEndDate_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandingPageStorefrontTabData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandingPageStorefrontTabData_Statics::NewProp_NewEndDate = { "NewEndDate", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandingPageStorefrontTabData, NewEndDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandingPageStorefrontTabData_Statics::NewProp_NewEndDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandingPageStorefrontTabData_Statics::NewProp_NewEndDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandingPageStorefrontTabData_Statics::NewProp_NewStartDate_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandingPageStorefrontTabData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandingPageStorefrontTabData_Statics::NewProp_NewStartDate = { "NewStartDate", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandingPageStorefrontTabData, NewStartDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandingPageStorefrontTabData_Statics::NewProp_NewStartDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandingPageStorefrontTabData_Statics::NewProp_NewStartDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandingPageStorefrontTabData_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandingPageStorefrontTabData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLandingPageStorefrontTabData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandingPageStorefrontTabData, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandingPageStorefrontTabData_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandingPageStorefrontTabData_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandingPageStorefrontTabData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandingPageStorefrontTabData_Statics::NewProp_TagText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandingPageStorefrontTabData_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandingPageStorefrontTabData_Statics::NewProp_Image,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandingPageStorefrontTabData_Statics::NewProp_NewEndDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandingPageStorefrontTabData_Statics::NewProp_NewStartDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandingPageStorefrontTabData_Statics::NewProp_Type,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandingPageStorefrontTabData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"LandingPageStorefrontTabData",
		sizeof(FLandingPageStorefrontTabData),
		alignof(FLandingPageStorefrontTabData),
		Z_Construct_UScriptStruct_FLandingPageStorefrontTabData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandingPageStorefrontTabData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLandingPageStorefrontTabData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandingPageStorefrontTabData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLandingPageStorefrontTabData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLandingPageStorefrontTabData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LandingPageStorefrontTabData"), sizeof(FLandingPageStorefrontTabData), Get_Z_Construct_UScriptStruct_FLandingPageStorefrontTabData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLandingPageStorefrontTabData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLandingPageStorefrontTabData_Hash() { return 1539366432U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
