// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/EFindInteractableMeatHookStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEFindInteractableMeatHookStatus() {}
// Cross Module References
	DBDBOTS_API UEnum* Z_Construct_UEnum_DBDBots_EFindInteractableMeatHookStatus();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
// End Cross Module References
	static UEnum* EFindInteractableMeatHookStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDBots_EFindInteractableMeatHookStatus, Z_Construct_UPackage__Script_DBDBots(), TEXT("EFindInteractableMeatHookStatus"));
		}
		return Singleton;
	}
	template<> DBDBOTS_API UEnum* StaticEnum<EFindInteractableMeatHookStatus>()
	{
		return EFindInteractableMeatHookStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFindInteractableMeatHookStatus(EFindInteractableMeatHookStatus_StaticEnum, TEXT("/Script/DBDBots"), TEXT("EFindInteractableMeatHookStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDBots_EFindInteractableMeatHookStatus_Hash() { return 3836948749U; }
	UEnum* Z_Construct_UEnum_DBDBots_EFindInteractableMeatHookStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDBots();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFindInteractableMeatHookStatus"), 0, Get_Z_Construct_UEnum_DBDBots_EFindInteractableMeatHookStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFindInteractableMeatHookStatus::HookedSurvivor", (int64)EFindInteractableMeatHookStatus::HookedSurvivor },
				{ "EFindInteractableMeatHookStatus::Available", (int64)EFindInteractableMeatHookStatus::Available },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Available.Name", "EFindInteractableMeatHookStatus::Available" },
				{ "HookedSurvivor.Name", "EFindInteractableMeatHookStatus::HookedSurvivor" },
				{ "ModuleRelativePath", "Public/EFindInteractableMeatHookStatus.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDBots,
				nullptr,
				"EFindInteractableMeatHookStatus",
				"EFindInteractableMeatHookStatus",
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
