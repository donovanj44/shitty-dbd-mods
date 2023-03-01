// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheExecutioner/Public/ETrailType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeETrailType() {}
// Cross Module References
	THEEXECUTIONER_API UEnum* Z_Construct_UEnum_TheExecutioner_ETrailType();
	UPackage* Z_Construct_UPackage__Script_TheExecutioner();
// End Cross Module References
	static UEnum* ETrailType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TheExecutioner_ETrailType, Z_Construct_UPackage__Script_TheExecutioner(), TEXT("ETrailType"));
		}
		return Singleton;
	}
	template<> THEEXECUTIONER_API UEnum* StaticEnum<ETrailType>()
	{
		return ETrailType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETrailType(ETrailType_StaticEnum, TEXT("/Script/TheExecutioner"), TEXT("ETrailType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TheExecutioner_ETrailType_Hash() { return 1904471415U; }
	UEnum* Z_Construct_UEnum_TheExecutioner_ETrailType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TheExecutioner();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETrailType"), 0, Get_Z_Construct_UEnum_TheExecutioner_ETrailType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETrailType::NormalTrail", (int64)ETrailType::NormalTrail },
				{ "ETrailType::RestrictionTrail", (int64)ETrailType::RestrictionTrail },
				{ "ETrailType::None", (int64)ETrailType::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ETrailType.h" },
				{ "None.Name", "ETrailType::None" },
				{ "NormalTrail.Name", "ETrailType::NormalTrail" },
				{ "RestrictionTrail.Name", "ETrailType::RestrictionTrail" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TheExecutioner,
				nullptr,
				"ETrailType",
				"ETrailType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
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
