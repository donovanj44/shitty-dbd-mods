// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/EK25ChainAttachmentLimbType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEK25ChainAttachmentLimbType() {}
// Cross Module References
	THEK25_API UEnum* Z_Construct_UEnum_TheK25_EK25ChainAttachmentLimbType();
	UPackage* Z_Construct_UPackage__Script_TheK25();
// End Cross Module References
	static UEnum* EK25ChainAttachmentLimbType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TheK25_EK25ChainAttachmentLimbType, Z_Construct_UPackage__Script_TheK25(), TEXT("EK25ChainAttachmentLimbType"));
		}
		return Singleton;
	}
	template<> THEK25_API UEnum* StaticEnum<EK25ChainAttachmentLimbType>()
	{
		return EK25ChainAttachmentLimbType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EK25ChainAttachmentLimbType(EK25ChainAttachmentLimbType_StaticEnum, TEXT("/Script/TheK25"), TEXT("EK25ChainAttachmentLimbType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TheK25_EK25ChainAttachmentLimbType_Hash() { return 4004880469U; }
	UEnum* Z_Construct_UEnum_TheK25_EK25ChainAttachmentLimbType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TheK25();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EK25ChainAttachmentLimbType"), 0, Get_Z_Construct_UEnum_TheK25_EK25ChainAttachmentLimbType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EK25ChainAttachmentLimbType::Hand", (int64)EK25ChainAttachmentLimbType::Hand },
				{ "EK25ChainAttachmentLimbType::Shoulder", (int64)EK25ChainAttachmentLimbType::Shoulder },
				{ "EK25ChainAttachmentLimbType::Stomach", (int64)EK25ChainAttachmentLimbType::Stomach },
				{ "EK25ChainAttachmentLimbType::Back", (int64)EK25ChainAttachmentLimbType::Back },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Back.Name", "EK25ChainAttachmentLimbType::Back" },
				{ "BlueprintType", "true" },
				{ "Hand.Name", "EK25ChainAttachmentLimbType::Hand" },
				{ "ModuleRelativePath", "Public/EK25ChainAttachmentLimbType.h" },
				{ "Shoulder.Name", "EK25ChainAttachmentLimbType::Shoulder" },
				{ "Stomach.Name", "EK25ChainAttachmentLimbType::Stomach" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TheK25,
				nullptr,
				"EK25ChainAttachmentLimbType",
				"EK25ChainAttachmentLimbType",
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
