// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheExecutioner/Public/ETrailPointRefreshReason.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeETrailPointRefreshReason() {}
// Cross Module References
	THEEXECUTIONER_API UEnum* Z_Construct_UEnum_TheExecutioner_ETrailPointRefreshReason();
	UPackage* Z_Construct_UPackage__Script_TheExecutioner();
// End Cross Module References
	static UEnum* ETrailPointRefreshReason_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TheExecutioner_ETrailPointRefreshReason, Z_Construct_UPackage__Script_TheExecutioner(), TEXT("ETrailPointRefreshReason"));
		}
		return Singleton;
	}
	template<> THEEXECUTIONER_API UEnum* StaticEnum<ETrailPointRefreshReason>()
	{
		return ETrailPointRefreshReason_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETrailPointRefreshReason(ETrailPointRefreshReason_StaticEnum, TEXT("/Script/TheExecutioner"), TEXT("ETrailPointRefreshReason"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TheExecutioner_ETrailPointRefreshReason_Hash() { return 1218683825U; }
	UEnum* Z_Construct_UEnum_TheExecutioner_ETrailPointRefreshReason()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TheExecutioner();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETrailPointRefreshReason"), 0, Get_Z_Construct_UEnum_TheExecutioner_ETrailPointRefreshReason_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETrailPointRefreshReason::FrontNeighbourAdded", (int64)ETrailPointRefreshReason::FrontNeighbourAdded },
				{ "ETrailPointRefreshReason::BackNeighbourAdded", (int64)ETrailPointRefreshReason::BackNeighbourAdded },
				{ "ETrailPointRefreshReason::BackNeighbourRemoved", (int64)ETrailPointRefreshReason::BackNeighbourRemoved },
				{ "ETrailPointRefreshReason::FrontNeighbourRemoved", (int64)ETrailPointRefreshReason::FrontNeighbourRemoved },
				{ "ETrailPointRefreshReason::None", (int64)ETrailPointRefreshReason::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BackNeighbourAdded.Name", "ETrailPointRefreshReason::BackNeighbourAdded" },
				{ "BackNeighbourRemoved.Name", "ETrailPointRefreshReason::BackNeighbourRemoved" },
				{ "FrontNeighbourAdded.Name", "ETrailPointRefreshReason::FrontNeighbourAdded" },
				{ "FrontNeighbourRemoved.Name", "ETrailPointRefreshReason::FrontNeighbourRemoved" },
				{ "ModuleRelativePath", "Public/ETrailPointRefreshReason.h" },
				{ "None.Name", "ETrailPointRefreshReason::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TheExecutioner,
				nullptr,
				"ETrailPointRefreshReason",
				"ETrailPointRefreshReason",
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
