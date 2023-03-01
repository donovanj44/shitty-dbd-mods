// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDSharedTypes/Public/EKillerMoodInfluence.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEKillerMoodInfluence() {}
// Cross Module References
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EKillerMoodInfluence();
	UPackage* Z_Construct_UPackage__Script_DBDSharedTypes();
// End Cross Module References
	static UEnum* EKillerMoodInfluence_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDSharedTypes_EKillerMoodInfluence, Z_Construct_UPackage__Script_DBDSharedTypes(), TEXT("EKillerMoodInfluence"));
		}
		return Singleton;
	}
	template<> DBDSHAREDTYPES_API UEnum* StaticEnum<EKillerMoodInfluence>()
	{
		return EKillerMoodInfluence_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EKillerMoodInfluence(EKillerMoodInfluence_StaticEnum, TEXT("/Script/DBDSharedTypes"), TEXT("EKillerMoodInfluence"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDSharedTypes_EKillerMoodInfluence_Hash() { return 3615696743U; }
	UEnum* Z_Construct_UEnum_DBDSharedTypes_EKillerMoodInfluence()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDSharedTypes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EKillerMoodInfluence"), 0, Get_Z_Construct_UEnum_DBDSharedTypes_EKillerMoodInfluence_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EKillerMoodInfluence::VE_None", (int64)EKillerMoodInfluence::VE_None },
				{ "EKillerMoodInfluence::VE_Chuckles", (int64)EKillerMoodInfluence::VE_Chuckles },
				{ "EKillerMoodInfluence::VE_Banshee", (int64)EKillerMoodInfluence::VE_Banshee },
				{ "EKillerMoodInfluence::VE_Hillbilly", (int64)EKillerMoodInfluence::VE_Hillbilly },
				{ "EKillerMoodInfluence::VE_Nurse", (int64)EKillerMoodInfluence::VE_Nurse },
				{ "EKillerMoodInfluence::VE_Shape", (int64)EKillerMoodInfluence::VE_Shape },
				{ "EKillerMoodInfluence::VE_MAX", (int64)EKillerMoodInfluence::VE_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EKillerMoodInfluence.h" },
				{ "VE_Banshee.Name", "EKillerMoodInfluence::VE_Banshee" },
				{ "VE_Chuckles.Name", "EKillerMoodInfluence::VE_Chuckles" },
				{ "VE_Hillbilly.Name", "EKillerMoodInfluence::VE_Hillbilly" },
				{ "VE_MAX.Hidden", "" },
				{ "VE_MAX.Name", "EKillerMoodInfluence::VE_MAX" },
				{ "VE_None.Name", "EKillerMoodInfluence::VE_None" },
				{ "VE_Nurse.Name", "EKillerMoodInfluence::VE_Nurse" },
				{ "VE_Shape.Name", "EKillerMoodInfluence::VE_Shape" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDSharedTypes,
				nullptr,
				"EKillerMoodInfluence",
				"EKillerMoodInfluence",
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
