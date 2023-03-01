// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScaleformUI/Public/GFxHitTestType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGFxHitTestType() {}
// Cross Module References
	SCALEFORMUI_API UEnum* Z_Construct_UEnum_ScaleformUI_GFxHitTestType();
	UPackage* Z_Construct_UPackage__Script_ScaleformUI();
// End Cross Module References
	static UEnum* GFxHitTestType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ScaleformUI_GFxHitTestType, Z_Construct_UPackage__Script_ScaleformUI(), TEXT("GFxHitTestType"));
		}
		return Singleton;
	}
	template<> SCALEFORMUI_API UEnum* StaticEnum<GFxHitTestType::Type>()
	{
		return GFxHitTestType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_GFxHitTestType(GFxHitTestType_StaticEnum, TEXT("/Script/ScaleformUI"), TEXT("GFxHitTestType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ScaleformUI_GFxHitTestType_Hash() { return 3340518758U; }
	UEnum* Z_Construct_UEnum_ScaleformUI_GFxHitTestType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ScaleformUI();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("GFxHitTestType"), 0, Get_Z_Construct_UEnum_ScaleformUI_GFxHitTestType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "GFxHitTestType::HitTest_Bounds", (int64)GFxHitTestType::HitTest_Bounds },
				{ "GFxHitTestType::HitTest_Shapes", (int64)GFxHitTestType::HitTest_Shapes },
				{ "GFxHitTestType::HitTest_ButtonEvents", (int64)GFxHitTestType::HitTest_ButtonEvents },
				{ "GFxHitTestType::HitTest_ShapesNoInvisible", (int64)GFxHitTestType::HitTest_ShapesNoInvisible },
				{ "GFxHitTestType::HitTest_MAX", (int64)GFxHitTestType::HitTest_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "HitTest_Bounds.Name", "GFxHitTestType::HitTest_Bounds" },
				{ "HitTest_ButtonEvents.Name", "GFxHitTestType::HitTest_ButtonEvents" },
				{ "HitTest_MAX.Hidden", "" },
				{ "HitTest_MAX.Name", "GFxHitTestType::HitTest_MAX" },
				{ "HitTest_Shapes.Name", "GFxHitTestType::HitTest_Shapes" },
				{ "HitTest_ShapesNoInvisible.Name", "GFxHitTestType::HitTest_ShapesNoInvisible" },
				{ "ModuleRelativePath", "Public/GFxHitTestType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ScaleformUI,
				nullptr,
				"GFxHitTestType",
				"GFxHitTestType::Type",
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
