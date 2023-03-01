// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScaleformUI/Public/EASType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEASType() {}
// Cross Module References
	SCALEFORMUI_API UEnum* Z_Construct_UEnum_ScaleformUI_EASType();
	UPackage* Z_Construct_UPackage__Script_ScaleformUI();
// End Cross Module References
	static UEnum* EASType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ScaleformUI_EASType, Z_Construct_UPackage__Script_ScaleformUI(), TEXT("EASType"));
		}
		return Singleton;
	}
	template<> SCALEFORMUI_API UEnum* StaticEnum<EASType::Type>()
	{
		return EASType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EASType(EASType_StaticEnum, TEXT("/Script/ScaleformUI"), TEXT("EASType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ScaleformUI_EASType_Hash() { return 3790085354U; }
	UEnum* Z_Construct_UEnum_ScaleformUI_EASType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ScaleformUI();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EASType"), 0, Get_Z_Construct_UEnum_ScaleformUI_EASType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EASType::Undefined", (int64)EASType::Undefined },
				{ "EASType::Null", (int64)EASType::Null },
				{ "EASType::Boolean", (int64)EASType::Boolean },
				{ "EASType::Int", (int64)EASType::Int },
				{ "EASType::Number", (int64)EASType::Number },
				{ "EASType::String", (int64)EASType::String },
				{ "EASType::StringW", (int64)EASType::StringW },
				{ "EASType::Object", (int64)EASType::Object },
				{ "EASType::DisplayObject", (int64)EASType::DisplayObject },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Boolean.Name", "EASType::Boolean" },
				{ "DisplayObject.Name", "EASType::DisplayObject" },
				{ "Int.Name", "EASType::Int" },
				{ "ModuleRelativePath", "Public/EASType.h" },
				{ "Null.Name", "EASType::Null" },
				{ "Number.Name", "EASType::Number" },
				{ "Object.Name", "EASType::Object" },
				{ "String.Name", "EASType::String" },
				{ "StringW.Name", "EASType::StringW" },
				{ "Undefined.Name", "EASType::Undefined" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ScaleformUI,
				nullptr,
				"EASType",
				"EASType::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
