// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScaleformUI/Public/EGFxScaleMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEGFxScaleMode() {}
// Cross Module References
	SCALEFORMUI_API UEnum* Z_Construct_UEnum_ScaleformUI_EGFxScaleMode();
	UPackage* Z_Construct_UPackage__Script_ScaleformUI();
// End Cross Module References
	static UEnum* EGFxScaleMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ScaleformUI_EGFxScaleMode, Z_Construct_UPackage__Script_ScaleformUI(), TEXT("EGFxScaleMode"));
		}
		return Singleton;
	}
	template<> SCALEFORMUI_API UEnum* StaticEnum<EGFxScaleMode::Type>()
	{
		return EGFxScaleMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGFxScaleMode(EGFxScaleMode_StaticEnum, TEXT("/Script/ScaleformUI"), TEXT("EGFxScaleMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ScaleformUI_EGFxScaleMode_Hash() { return 3775143781U; }
	UEnum* Z_Construct_UEnum_ScaleformUI_EGFxScaleMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ScaleformUI();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGFxScaleMode"), 0, Get_Z_Construct_UEnum_ScaleformUI_EGFxScaleMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGFxScaleMode::NoScale", (int64)EGFxScaleMode::NoScale },
				{ "EGFxScaleMode::ShowAll", (int64)EGFxScaleMode::ShowAll },
				{ "EGFxScaleMode::ExactFit", (int64)EGFxScaleMode::ExactFit },
				{ "EGFxScaleMode::NoBorder", (int64)EGFxScaleMode::NoBorder },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ExactFit.Name", "EGFxScaleMode::ExactFit" },
				{ "ModuleRelativePath", "Public/EGFxScaleMode.h" },
				{ "NoBorder.Name", "EGFxScaleMode::NoBorder" },
				{ "NoScale.Name", "EGFxScaleMode::NoScale" },
				{ "ShowAll.Name", "EGFxScaleMode::ShowAll" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ScaleformUI,
				nullptr,
				"EGFxScaleMode",
				"EGFxScaleMode::Type",
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
