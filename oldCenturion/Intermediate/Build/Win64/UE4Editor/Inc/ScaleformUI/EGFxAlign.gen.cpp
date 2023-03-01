// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScaleformUI/Public/EGFxAlign.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEGFxAlign() {}
// Cross Module References
	SCALEFORMUI_API UEnum* Z_Construct_UEnum_ScaleformUI_EGFxAlign();
	UPackage* Z_Construct_UPackage__Script_ScaleformUI();
// End Cross Module References
	static UEnum* EGFxAlign_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ScaleformUI_EGFxAlign, Z_Construct_UPackage__Script_ScaleformUI(), TEXT("EGFxAlign"));
		}
		return Singleton;
	}
	template<> SCALEFORMUI_API UEnum* StaticEnum<EGFxAlign::Type>()
	{
		return EGFxAlign_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGFxAlign(EGFxAlign_StaticEnum, TEXT("/Script/ScaleformUI"), TEXT("EGFxAlign"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ScaleformUI_EGFxAlign_Hash() { return 3176941179U; }
	UEnum* Z_Construct_UEnum_ScaleformUI_EGFxAlign()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ScaleformUI();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGFxAlign"), 0, Get_Z_Construct_UEnum_ScaleformUI_EGFxAlign_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGFxAlign::Center", (int64)EGFxAlign::Center },
				{ "EGFxAlign::TopCenter", (int64)EGFxAlign::TopCenter },
				{ "EGFxAlign::BottomCenter", (int64)EGFxAlign::BottomCenter },
				{ "EGFxAlign::CenterLeft", (int64)EGFxAlign::CenterLeft },
				{ "EGFxAlign::CenterRight", (int64)EGFxAlign::CenterRight },
				{ "EGFxAlign::TopLeft", (int64)EGFxAlign::TopLeft },
				{ "EGFxAlign::TopRight", (int64)EGFxAlign::TopRight },
				{ "EGFxAlign::BottomLeft", (int64)EGFxAlign::BottomLeft },
				{ "EGFxAlign::BottomRight", (int64)EGFxAlign::BottomRight },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BottomCenter.Name", "EGFxAlign::BottomCenter" },
				{ "BottomLeft.Name", "EGFxAlign::BottomLeft" },
				{ "BottomRight.Name", "EGFxAlign::BottomRight" },
				{ "Center.Name", "EGFxAlign::Center" },
				{ "CenterLeft.Name", "EGFxAlign::CenterLeft" },
				{ "CenterRight.Name", "EGFxAlign::CenterRight" },
				{ "ModuleRelativePath", "Public/EGFxAlign.h" },
				{ "TopCenter.Name", "EGFxAlign::TopCenter" },
				{ "TopLeft.Name", "EGFxAlign::TopLeft" },
				{ "TopRight.Name", "EGFxAlign::TopRight" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ScaleformUI,
				nullptr,
				"EGFxAlign",
				"EGFxAlign::Type",
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
