// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScaleformUI/Public/EGFxRenderTextureMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEGFxRenderTextureMode() {}
// Cross Module References
	SCALEFORMUI_API UEnum* Z_Construct_UEnum_ScaleformUI_EGFxRenderTextureMode();
	UPackage* Z_Construct_UPackage__Script_ScaleformUI();
// End Cross Module References
	static UEnum* EGFxRenderTextureMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ScaleformUI_EGFxRenderTextureMode, Z_Construct_UPackage__Script_ScaleformUI(), TEXT("EGFxRenderTextureMode"));
		}
		return Singleton;
	}
	template<> SCALEFORMUI_API UEnum* StaticEnum<EGFxRenderTextureMode::Type>()
	{
		return EGFxRenderTextureMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGFxRenderTextureMode(EGFxRenderTextureMode_StaticEnum, TEXT("/Script/ScaleformUI"), TEXT("EGFxRenderTextureMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ScaleformUI_EGFxRenderTextureMode_Hash() { return 1176940311U; }
	UEnum* Z_Construct_UEnum_ScaleformUI_EGFxRenderTextureMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ScaleformUI();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGFxRenderTextureMode"), 0, Get_Z_Construct_UEnum_ScaleformUI_EGFxRenderTextureMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGFxRenderTextureMode::Opaque", (int64)EGFxRenderTextureMode::Opaque },
				{ "EGFxRenderTextureMode::Alpha", (int64)EGFxRenderTextureMode::Alpha },
				{ "EGFxRenderTextureMode::AlphaComposite", (int64)EGFxRenderTextureMode::AlphaComposite },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Alpha.Name", "EGFxRenderTextureMode::Alpha" },
				{ "AlphaComposite.Name", "EGFxRenderTextureMode::AlphaComposite" },
				{ "ModuleRelativePath", "Public/EGFxRenderTextureMode.h" },
				{ "Opaque.Name", "EGFxRenderTextureMode::Opaque" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ScaleformUI,
				nullptr,
				"EGFxRenderTextureMode",
				"EGFxRenderTextureMode::Type",
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
