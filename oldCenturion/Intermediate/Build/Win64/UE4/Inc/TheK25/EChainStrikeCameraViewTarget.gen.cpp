// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/EChainStrikeCameraViewTarget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEChainStrikeCameraViewTarget() {}
// Cross Module References
	THEK25_API UEnum* Z_Construct_UEnum_TheK25_EChainStrikeCameraViewTarget();
	UPackage* Z_Construct_UPackage__Script_TheK25();
// End Cross Module References
	static UEnum* EChainStrikeCameraViewTarget_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TheK25_EChainStrikeCameraViewTarget, Z_Construct_UPackage__Script_TheK25(), TEXT("EChainStrikeCameraViewTarget"));
		}
		return Singleton;
	}
	template<> THEK25_API UEnum* StaticEnum<EChainStrikeCameraViewTarget>()
	{
		return EChainStrikeCameraViewTarget_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EChainStrikeCameraViewTarget(EChainStrikeCameraViewTarget_StaticEnum, TEXT("/Script/TheK25"), TEXT("EChainStrikeCameraViewTarget"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TheK25_EChainStrikeCameraViewTarget_Hash() { return 1607158198U; }
	UEnum* Z_Construct_UEnum_TheK25_EChainStrikeCameraViewTarget()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TheK25();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EChainStrikeCameraViewTarget"), 0, Get_Z_Construct_UEnum_TheK25_EChainStrikeCameraViewTarget_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EChainStrikeCameraViewTarget::Killer", (int64)EChainStrikeCameraViewTarget::Killer },
				{ "EChainStrikeCameraViewTarget::Gateway", (int64)EChainStrikeCameraViewTarget::Gateway },
				{ "EChainStrikeCameraViewTarget::ControlledProjectile", (int64)EChainStrikeCameraViewTarget::ControlledProjectile },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ControlledProjectile.Name", "EChainStrikeCameraViewTarget::ControlledProjectile" },
				{ "Gateway.Name", "EChainStrikeCameraViewTarget::Gateway" },
				{ "Killer.Name", "EChainStrikeCameraViewTarget::Killer" },
				{ "ModuleRelativePath", "Public/EChainStrikeCameraViewTarget.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TheK25,
				nullptr,
				"EChainStrikeCameraViewTarget",
				"EChainStrikeCameraViewTarget",
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
