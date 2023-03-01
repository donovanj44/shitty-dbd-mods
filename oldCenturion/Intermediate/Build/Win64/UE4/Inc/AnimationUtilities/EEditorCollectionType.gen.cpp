// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationUtilities/Public/EEditorCollectionType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEditorCollectionType() {}
// Cross Module References
	ANIMATIONUTILITIES_API UEnum* Z_Construct_UEnum_AnimationUtilities_EEditorCollectionType();
	UPackage* Z_Construct_UPackage__Script_AnimationUtilities();
// End Cross Module References
	static UEnum* EEditorCollectionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AnimationUtilities_EEditorCollectionType, Z_Construct_UPackage__Script_AnimationUtilities(), TEXT("EEditorCollectionType"));
		}
		return Singleton;
	}
	template<> ANIMATIONUTILITIES_API UEnum* StaticEnum<EEditorCollectionType>()
	{
		return EEditorCollectionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEditorCollectionType(EEditorCollectionType_StaticEnum, TEXT("/Script/AnimationUtilities"), TEXT("EEditorCollectionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AnimationUtilities_EEditorCollectionType_Hash() { return 593075266U; }
	UEnum* Z_Construct_UEnum_AnimationUtilities_EEditorCollectionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationUtilities();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEditorCollectionType"), 0, Get_Z_Construct_UEnum_AnimationUtilities_EEditorCollectionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Animation", (int64)Animation },
				{ "Blendspace", (int64)Blendspace },
				{ "Selector", (int64)Selector },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Animation.Name", "Animation" },
				{ "Blendspace.Name", "Blendspace" },
				{ "ModuleRelativePath", "Public/EEditorCollectionType.h" },
				{ "Selector.Name", "Selector" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AnimationUtilities,
				nullptr,
				"EEditorCollectionType",
				"EEditorCollectionType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
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
