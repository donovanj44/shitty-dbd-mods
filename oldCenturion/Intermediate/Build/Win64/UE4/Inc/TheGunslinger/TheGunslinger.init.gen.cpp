// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTheGunslinger_init() {}
	THEGUNSLINGER_API UFunction* Z_Construct_UDelegateFunction_TheGunslinger_FireHarpoonRifleInteractionOnFireHarpoon__DelegateSignature();
	THEGUNSLINGER_API UFunction* Z_Construct_UDelegateFunction_TheGunslinger_FireHarpoonRifleInteractionOnHitPlayer__DelegateSignature();
	THEGUNSLINGER_API UFunction* Z_Construct_UDelegateFunction_TheGunslinger_GunslingerEffectsComponentOnIsAimingChanged__DelegateSignature();
	THEGUNSLINGER_API UFunction* Z_Construct_UDelegateFunction_TheGunslinger_GunslingerEffectsComponentPlayOutOfAmmoSound__DelegateSignature();
	THEGUNSLINGER_API UFunction* Z_Construct_UDelegateFunction_TheGunslinger_RifleChainOnProjectileSet__DelegateSignature();
	THEGUNSLINGER_API UFunction* Z_Construct_UDelegateFunction_TheGunslinger_RifleChainOnIsCollidingChanged__DelegateSignature();
	THEGUNSLINGER_API UFunction* Z_Construct_UDelegateFunction_TheGunslinger_RifleChainTensionComponentOnIsBuildingTensionChanged__DelegateSignature();
	THEGUNSLINGER_API UFunction* Z_Construct_UDelegateFunction_TheGunslinger_RiflePlayerLinkerOnLinkedPlayerSet__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TheGunslinger()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_TheGunslinger_FireHarpoonRifleInteractionOnFireHarpoon__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TheGunslinger_FireHarpoonRifleInteractionOnHitPlayer__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TheGunslinger_GunslingerEffectsComponentOnIsAimingChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TheGunslinger_GunslingerEffectsComponentPlayOutOfAmmoSound__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TheGunslinger_RifleChainOnProjectileSet__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TheGunslinger_RifleChainOnIsCollidingChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TheGunslinger_RifleChainTensionComponentOnIsBuildingTensionChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TheGunslinger_RiflePlayerLinkerOnLinkedPlayerSet__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/TheGunslinger",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x548EBE99,
				0xB242CCC9,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
