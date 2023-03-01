// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EBloodwebDefinitionContentType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEBloodwebDefinitionContentType() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EBloodwebDefinitionContentType();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EBloodwebDefinitionContentType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EBloodwebDefinitionContentType, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EBloodwebDefinitionContentType"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EBloodwebDefinitionContentType>()
	{
		return EBloodwebDefinitionContentType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBloodwebDefinitionContentType(EBloodwebDefinitionContentType_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EBloodwebDefinitionContentType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EBloodwebDefinitionContentType_Hash() { return 1515024579U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EBloodwebDefinitionContentType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBloodwebDefinitionContentType"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EBloodwebDefinitionContentType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBloodwebDefinitionContentType::Empty", (int64)EBloodwebDefinitionContentType::Empty },
				{ "EBloodwebDefinitionContentType::Nodes", (int64)EBloodwebDefinitionContentType::Nodes },
				{ "EBloodwebDefinitionContentType::Paths", (int64)EBloodwebDefinitionContentType::Paths },
				{ "EBloodwebDefinitionContentType::NodesAndPaths", (int64)EBloodwebDefinitionContentType::NodesAndPaths },
				{ "EBloodwebDefinitionContentType::NodesNoPath", (int64)EBloodwebDefinitionContentType::NodesNoPath },
				{ "EBloodwebDefinitionContentType::EBloodwebDefinitionContentType_MAX", (int64)EBloodwebDefinitionContentType::EBloodwebDefinitionContentType_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EBloodwebDefinitionContentType_MAX.Name", "EBloodwebDefinitionContentType::EBloodwebDefinitionContentType_MAX" },
				{ "Empty.Name", "EBloodwebDefinitionContentType::Empty" },
				{ "ModuleRelativePath", "Public/EBloodwebDefinitionContentType.h" },
				{ "Nodes.Name", "EBloodwebDefinitionContentType::Nodes" },
				{ "NodesAndPaths.Name", "EBloodwebDefinitionContentType::NodesAndPaths" },
				{ "NodesNoPath.Name", "EBloodwebDefinitionContentType::NodesNoPath" },
				{ "Paths.Name", "EBloodwebDefinitionContentType::Paths" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EBloodwebDefinitionContentType",
				"EBloodwebDefinitionContentType",
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
