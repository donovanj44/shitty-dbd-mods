// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Projectile/Public/BaseProjectileLauncher.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseProjectileLauncher() {}
// Cross Module References
	PROJECTILE_API UClass* Z_Construct_UClass_UBaseProjectileLauncher_NoRegister();
	PROJECTILE_API UClass* Z_Construct_UClass_UBaseProjectileLauncher();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Projectile();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	PROJECTILE_API UClass* Z_Construct_UClass_ABaseProjectile_NoRegister();
	PROJECTILE_API UScriptStruct* Z_Construct_UScriptStruct_FLaunchInfo();
	PROJECTILE_API UScriptStruct* Z_Construct_UScriptStruct_FImpactInfo();
	PROJECTILE_API UClass* Z_Construct_UClass_UProjectileProvider_NoRegister();
	PROJECTILE_API UClass* Z_Construct_UClass_UBaseProjectileReplicationComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(UBaseProjectileLauncher::execAuthority_AddMaxAmmo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ammoToAdd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_AddMaxAmmo(Z_Param_ammoToAdd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseProjectileLauncher::execAuthority_Launch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_Launch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseProjectileLauncher::execAuthority_Reload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_Reload();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseProjectileLauncher::execAuthority_ReturnAmmoUnits)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_amountOfAmmoUnitsReturned);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_ReturnAmmoUnits(Z_Param_amountOfAmmoUnitsReturned);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseProjectileLauncher::execAuthority_SetMaxAmmo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_newMaxAmmo);
		P_GET_UBOOL(Z_Param_isMaxAmmoImmutable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_SetMaxAmmo(Z_Param_newMaxAmmo,Z_Param_isMaxAmmoImmutable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseProjectileLauncher::execGetAmmo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAmmo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseProjectileLauncher::execGetLaunchDirection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetLaunchDirection_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseProjectileLauncher::execGetLaunchDirectionAtViewAndThrowPowerRatio)
	{
		P_GET_STRUCT(FRotator,Z_Param_viewRotation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_throwPowerRatio);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetLaunchDirectionAtViewAndThrowPowerRatio_Implementation(Z_Param_viewRotation,Z_Param_throwPowerRatio);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseProjectileLauncher::execGetLaunchPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetLaunchPosition_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseProjectileLauncher::execGetLaunchSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetLaunchSpeed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseProjectileLauncher::execGetLaunchSpeedAtThrowPowerRatio)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_throwPowerRatio);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetLaunchSpeedAtThrowPowerRatio_Implementation(Z_Param_throwPowerRatio);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseProjectileLauncher::execGetOwningPawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APawn**)Z_Param__Result=P_THIS->GetOwningPawn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseProjectileLauncher::execGetProjectileToLaunch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ABaseProjectile**)Z_Param__Result=P_THIS->GetProjectileToLaunch_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseProjectileLauncher::execHasAuthority)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAuthority();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseProjectileLauncher::execHasProjectile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasProjectile();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseProjectileLauncher::execIsAmmoFull)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAmmoFull();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseProjectileLauncher::execIsLocallyControlled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLocallyControlled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseProjectileLauncher::execLocal_Launch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Local_Launch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseProjectileLauncher::execOnRep_Ammo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_oldAmmo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Ammo(Z_Param_oldAmmo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseProjectileLauncher::execOnRep_MaxAmmo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_oldMaxAmmo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MaxAmmo(Z_Param_oldMaxAmmo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseProjectileLauncher::execServer_Launch)
	{
		P_GET_STRUCT(FLaunchInfo,Z_Param_launchInfo);
		P_GET_OBJECT(ABaseProjectile,Z_Param_projectile);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_Launch_Validate(Z_Param_launchInfo,Z_Param_projectile))
		{
			RPC_ValidateFailed(TEXT("Server_Launch_Validate"));
			return;
		}
		P_THIS->Server_Launch_Implementation(Z_Param_launchInfo,Z_Param_projectile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseProjectileLauncher::execServer_LaunchWithImpact)
	{
		P_GET_STRUCT(FLaunchInfo,Z_Param_launchInfo);
		P_GET_STRUCT(FImpactInfo,Z_Param_impactInfo);
		P_GET_OBJECT(ABaseProjectile,Z_Param_projectile);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_LaunchWithImpact_Validate(Z_Param_launchInfo,Z_Param_impactInfo,Z_Param_projectile))
		{
			RPC_ValidateFailed(TEXT("Server_LaunchWithImpact_Validate"));
			return;
		}
		P_THIS->Server_LaunchWithImpact_Implementation(Z_Param_launchInfo,Z_Param_impactInfo,Z_Param_projectile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseProjectileLauncher::execSetProjectileProvider)
	{
		P_GET_TINTERFACE(IProjectileProvider,Z_Param_projectileProvider);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetProjectileProvider(Z_Param_projectileProvider);
		P_NATIVE_END;
	}
	static FName NAME_UBaseProjectileLauncher_Cosmetic_OnOutOfAmmo = FName(TEXT("Cosmetic_OnOutOfAmmo"));
	void UBaseProjectileLauncher::Cosmetic_OnOutOfAmmo()
	{
		ProcessEvent(FindFunctionChecked(NAME_UBaseProjectileLauncher_Cosmetic_OnOutOfAmmo),NULL);
	}
	static FName NAME_UBaseProjectileLauncher_GetLaunchDirection = FName(TEXT("GetLaunchDirection"));
	FVector UBaseProjectileLauncher::GetLaunchDirection() const
	{
		BaseProjectileLauncher_eventGetLaunchDirection_Parms Parms;
		const_cast<UBaseProjectileLauncher*>(this)->ProcessEvent(FindFunctionChecked(NAME_UBaseProjectileLauncher_GetLaunchDirection),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UBaseProjectileLauncher_GetLaunchDirectionAtViewAndThrowPowerRatio = FName(TEXT("GetLaunchDirectionAtViewAndThrowPowerRatio"));
	FVector UBaseProjectileLauncher::GetLaunchDirectionAtViewAndThrowPowerRatio(FRotator viewRotation, float throwPowerRatio) const
	{
		BaseProjectileLauncher_eventGetLaunchDirectionAtViewAndThrowPowerRatio_Parms Parms;
		Parms.viewRotation=viewRotation;
		Parms.throwPowerRatio=throwPowerRatio;
		const_cast<UBaseProjectileLauncher*>(this)->ProcessEvent(FindFunctionChecked(NAME_UBaseProjectileLauncher_GetLaunchDirectionAtViewAndThrowPowerRatio),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UBaseProjectileLauncher_GetLaunchPosition = FName(TEXT("GetLaunchPosition"));
	FVector UBaseProjectileLauncher::GetLaunchPosition() const
	{
		BaseProjectileLauncher_eventGetLaunchPosition_Parms Parms;
		const_cast<UBaseProjectileLauncher*>(this)->ProcessEvent(FindFunctionChecked(NAME_UBaseProjectileLauncher_GetLaunchPosition),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UBaseProjectileLauncher_GetLaunchSpeed = FName(TEXT("GetLaunchSpeed"));
	float UBaseProjectileLauncher::GetLaunchSpeed() const
	{
		BaseProjectileLauncher_eventGetLaunchSpeed_Parms Parms;
		const_cast<UBaseProjectileLauncher*>(this)->ProcessEvent(FindFunctionChecked(NAME_UBaseProjectileLauncher_GetLaunchSpeed),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UBaseProjectileLauncher_GetLaunchSpeedAtThrowPowerRatio = FName(TEXT("GetLaunchSpeedAtThrowPowerRatio"));
	float UBaseProjectileLauncher::GetLaunchSpeedAtThrowPowerRatio(float throwPowerRatio) const
	{
		BaseProjectileLauncher_eventGetLaunchSpeedAtThrowPowerRatio_Parms Parms;
		Parms.throwPowerRatio=throwPowerRatio;
		const_cast<UBaseProjectileLauncher*>(this)->ProcessEvent(FindFunctionChecked(NAME_UBaseProjectileLauncher_GetLaunchSpeedAtThrowPowerRatio),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UBaseProjectileLauncher_GetProjectileToLaunch = FName(TEXT("GetProjectileToLaunch"));
	ABaseProjectile* UBaseProjectileLauncher::GetProjectileToLaunch() const
	{
		BaseProjectileLauncher_eventGetProjectileToLaunch_Parms Parms;
		const_cast<UBaseProjectileLauncher*>(this)->ProcessEvent(FindFunctionChecked(NAME_UBaseProjectileLauncher_GetProjectileToLaunch),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UBaseProjectileLauncher_OnLaunch = FName(TEXT("OnLaunch"));
	void UBaseProjectileLauncher::OnLaunch(FLaunchInfo launchInfo, ABaseProjectile* projectile)
	{
		BaseProjectileLauncher_eventOnLaunch_Parms Parms;
		Parms.launchInfo=launchInfo;
		Parms.projectile=projectile;
		ProcessEvent(FindFunctionChecked(NAME_UBaseProjectileLauncher_OnLaunch),&Parms);
	}
	static FName NAME_UBaseProjectileLauncher_Server_Launch = FName(TEXT("Server_Launch"));
	void UBaseProjectileLauncher::Server_Launch(FLaunchInfo const& launchInfo, ABaseProjectile* projectile)
	{
		BaseProjectileLauncher_eventServer_Launch_Parms Parms;
		Parms.launchInfo=launchInfo;
		Parms.projectile=projectile;
		ProcessEvent(FindFunctionChecked(NAME_UBaseProjectileLauncher_Server_Launch),&Parms);
	}
	static FName NAME_UBaseProjectileLauncher_Server_LaunchWithImpact = FName(TEXT("Server_LaunchWithImpact"));
	void UBaseProjectileLauncher::Server_LaunchWithImpact(FLaunchInfo const& launchInfo, FImpactInfo const& impactInfo, ABaseProjectile* projectile)
	{
		BaseProjectileLauncher_eventServer_LaunchWithImpact_Parms Parms;
		Parms.launchInfo=launchInfo;
		Parms.impactInfo=impactInfo;
		Parms.projectile=projectile;
		ProcessEvent(FindFunctionChecked(NAME_UBaseProjectileLauncher_Server_LaunchWithImpact),&Parms);
	}
	static FName NAME_UBaseProjectileLauncher_SetProjectileVar = FName(TEXT("SetProjectileVar"));
	void UBaseProjectileLauncher::SetProjectileVar(FName varName, float value)
	{
		BaseProjectileLauncher_eventSetProjectileVar_Parms Parms;
		Parms.varName=varName;
		Parms.value=value;
		ProcessEvent(FindFunctionChecked(NAME_UBaseProjectileLauncher_SetProjectileVar),&Parms);
	}
	void UBaseProjectileLauncher::StaticRegisterNativesUBaseProjectileLauncher()
	{
		UClass* Class = UBaseProjectileLauncher::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_AddMaxAmmo", &UBaseProjectileLauncher::execAuthority_AddMaxAmmo },
			{ "Authority_Launch", &UBaseProjectileLauncher::execAuthority_Launch },
			{ "Authority_Reload", &UBaseProjectileLauncher::execAuthority_Reload },
			{ "Authority_ReturnAmmoUnits", &UBaseProjectileLauncher::execAuthority_ReturnAmmoUnits },
			{ "Authority_SetMaxAmmo", &UBaseProjectileLauncher::execAuthority_SetMaxAmmo },
			{ "GetAmmo", &UBaseProjectileLauncher::execGetAmmo },
			{ "GetLaunchDirection", &UBaseProjectileLauncher::execGetLaunchDirection },
			{ "GetLaunchDirectionAtViewAndThrowPowerRatio", &UBaseProjectileLauncher::execGetLaunchDirectionAtViewAndThrowPowerRatio },
			{ "GetLaunchPosition", &UBaseProjectileLauncher::execGetLaunchPosition },
			{ "GetLaunchSpeed", &UBaseProjectileLauncher::execGetLaunchSpeed },
			{ "GetLaunchSpeedAtThrowPowerRatio", &UBaseProjectileLauncher::execGetLaunchSpeedAtThrowPowerRatio },
			{ "GetOwningPawn", &UBaseProjectileLauncher::execGetOwningPawn },
			{ "GetProjectileToLaunch", &UBaseProjectileLauncher::execGetProjectileToLaunch },
			{ "HasAuthority", &UBaseProjectileLauncher::execHasAuthority },
			{ "HasProjectile", &UBaseProjectileLauncher::execHasProjectile },
			{ "IsAmmoFull", &UBaseProjectileLauncher::execIsAmmoFull },
			{ "IsLocallyControlled", &UBaseProjectileLauncher::execIsLocallyControlled },
			{ "Local_Launch", &UBaseProjectileLauncher::execLocal_Launch },
			{ "OnRep_Ammo", &UBaseProjectileLauncher::execOnRep_Ammo },
			{ "OnRep_MaxAmmo", &UBaseProjectileLauncher::execOnRep_MaxAmmo },
			{ "Server_Launch", &UBaseProjectileLauncher::execServer_Launch },
			{ "Server_LaunchWithImpact", &UBaseProjectileLauncher::execServer_LaunchWithImpact },
			{ "SetProjectileProvider", &UBaseProjectileLauncher::execSetProjectileProvider },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseProjectileLauncher_Authority_AddMaxAmmo_Statics
	{
		struct BaseProjectileLauncher_eventAuthority_AddMaxAmmo_Parms
		{
			int32 ammoToAdd;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ammoToAdd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseProjectileLauncher_Authority_AddMaxAmmo_Statics::NewProp_ammoToAdd = { "ammoToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectileLauncher_eventAuthority_AddMaxAmmo_Parms, ammoToAdd), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseProjectileLauncher_Authority_AddMaxAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseProjectileLauncher_Authority_AddMaxAmmo_Statics::NewProp_ammoToAdd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseProjectileLauncher_Authority_AddMaxAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseProjectileLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseProjectileLauncher_Authority_AddMaxAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseProjectileLauncher, nullptr, "Authority_AddMaxAmmo", nullptr, nullptr, sizeof(BaseProjectileLauncher_eventAuthority_AddMaxAmmo_Parms), Z_Construct_UFunction_UBaseProjectileLauncher_Authority_AddMaxAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileLauncher_Authority_AddMaxAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseProjectileLauncher_Authority_AddMaxAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileLauncher_Authority_AddMaxAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseProjectileLauncher_Authority_AddMaxAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseProjectileLauncher_Authority_AddMaxAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseProjectileLauncher_Authority_Launch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseProjectileLauncher_Authority_Launch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseProjectileLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseProjectileLauncher_Authority_Launch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseProjectileLauncher, nullptr, "Authority_Launch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseProjectileLauncher_Authority_Launch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileLauncher_Authority_Launch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseProjectileLauncher_Authority_Launch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseProjectileLauncher_Authority_Launch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseProjectileLauncher_Authority_Reload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseProjectileLauncher_Authority_Reload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseProjectileLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseProjectileLauncher_Authority_Reload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseProjectileLauncher, nullptr, "Authority_Reload", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseProjectileLauncher_Authority_Reload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileLauncher_Authority_Reload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseProjectileLauncher_Authority_Reload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseProjectileLauncher_Authority_Reload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseProjectileLauncher_Authority_ReturnAmmoUnits_Statics
	{
		struct BaseProjectileLauncher_eventAuthority_ReturnAmmoUnits_Parms
		{
			int32 amountOfAmmoUnitsReturned;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_amountOfAmmoUnitsReturned;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseProjectileLauncher_Authority_ReturnAmmoUnits_Statics::NewProp_amountOfAmmoUnitsReturned = { "amountOfAmmoUnitsReturned", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectileLauncher_eventAuthority_ReturnAmmoUnits_Parms, amountOfAmmoUnitsReturned), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseProjectileLauncher_Authority_ReturnAmmoUnits_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseProjectileLauncher_Authority_ReturnAmmoUnits_Statics::NewProp_amountOfAmmoUnitsReturned,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseProjectileLauncher_Authority_ReturnAmmoUnits_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseProjectileLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseProjectileLauncher_Authority_ReturnAmmoUnits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseProjectileLauncher, nullptr, "Authority_ReturnAmmoUnits", nullptr, nullptr, sizeof(BaseProjectileLauncher_eventAuthority_ReturnAmmoUnits_Parms), Z_Construct_UFunction_UBaseProjectileLauncher_Authority_ReturnAmmoUnits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileLauncher_Authority_ReturnAmmoUnits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseProjectileLauncher_Authority_ReturnAmmoUnits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileLauncher_Authority_ReturnAmmoUnits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseProjectileLauncher_Authority_ReturnAmmoUnits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseProjectileLauncher_Authority_ReturnAmmoUnits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseProjectileLauncher_Authority_SetMaxAmmo_Statics
	{
		struct BaseProjectileLauncher_eventAuthority_SetMaxAmmo_Parms
		{
			int32 newMaxAmmo;
			bool isMaxAmmoImmutable;
		};
		static void NewProp_isMaxAmmoImmutable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isMaxAmmoImmutable;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_newMaxAmmo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBaseProjectileLauncher_Authority_SetMaxAmmo_Statics::NewProp_isMaxAmmoImmutable_SetBit(void* Obj)
	{
		((BaseProjectileLauncher_eventAuthority_SetMaxAmmo_Parms*)Obj)->isMaxAmmoImmutable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseProjectileLauncher_Authority_SetMaxAmmo_Statics::NewProp_isMaxAmmoImmutable = { "isMaxAmmoImmutable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseProjectileLauncher_eventAuthority_SetMaxAmmo_Parms), &Z_Construct_UFunction_UBaseProjectileLauncher_Authority_SetMaxAmmo_Statics::NewProp_isMaxAmmoImmutable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseProjectileLauncher_Authority_SetMaxAmmo_Statics::NewProp_newMaxAmmo = { "newMaxAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectileLauncher_eventAuthority_SetMaxAmmo_Parms, newMaxAmmo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseProjectileLauncher_Authority_SetMaxAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseProjectileLauncher_Authority_SetMaxAmmo_Statics::NewProp_isMaxAmmoImmutable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseProjectileLauncher_Authority_SetMaxAmmo_Statics::NewProp_newMaxAmmo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseProjectileLauncher_Authority_SetMaxAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseProjectileLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseProjectileLauncher_Authority_SetMaxAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseProjectileLauncher, nullptr, "Authority_SetMaxAmmo", nullptr, nullptr, sizeof(BaseProjectileLauncher_eventAuthority_SetMaxAmmo_Parms), Z_Construct_UFunction_UBaseProjectileLauncher_Authority_SetMaxAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileLauncher_Authority_SetMaxAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseProjectileLauncher_Authority_SetMaxAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileLauncher_Authority_SetMaxAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseProjectileLauncher_Authority_SetMaxAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseProjectileLauncher_Authority_SetMaxAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseProjectileLauncher_Cosmetic_OnOutOfAmmo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseProjectileLauncher_Cosmetic_OnOutOfAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseProjectileLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseProjectileLauncher_Cosmetic_OnOutOfAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseProjectileLauncher, nullptr, "Cosmetic_OnOutOfAmmo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseProjectileLauncher_Cosmetic_OnOutOfAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileLauncher_Cosmetic_OnOutOfAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseProjectileLauncher_Cosmetic_OnOutOfAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseProjectileLauncher_Cosmetic_OnOutOfAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseProjectileLauncher_GetAmmo_Statics
	{
		struct BaseProjectileLauncher_eventGetAmmo_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseProjectileLauncher_GetAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectileLauncher_eventGetAmmo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseProjectileLauncher_GetAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseProjectileLauncher_GetAmmo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseProjectileLauncher_GetAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseProjectileLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseProjectileLauncher_GetAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseProjectileLauncher, nullptr, "GetAmmo", nullptr, nullptr, sizeof(BaseProjectileLauncher_eventGetAmmo_Parms), Z_Construct_UFunction_UBaseProjectileLauncher_GetAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileLauncher_GetAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseProjectileLauncher_GetAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileLauncher_GetAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseProjectileLauncher_GetAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseProjectileLauncher_GetAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchDirection_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectileLauncher_eventGetLaunchDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchDirection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseProjectileLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseProjectileLauncher, nullptr, "GetLaunchDirection", nullptr, nullptr, sizeof(BaseProjectileLauncher_eventGetLaunchDirection_Parms), Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C880C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchDirectionAtViewAndThrowPowerRatio_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_throwPowerRatio;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_viewRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchDirectionAtViewAndThrowPowerRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectileLauncher_eventGetLaunchDirectionAtViewAndThrowPowerRatio_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchDirectionAtViewAndThrowPowerRatio_Statics::NewProp_throwPowerRatio = { "throwPowerRatio", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectileLauncher_eventGetLaunchDirectionAtViewAndThrowPowerRatio_Parms, throwPowerRatio), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchDirectionAtViewAndThrowPowerRatio_Statics::NewProp_viewRotation = { "viewRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectileLauncher_eventGetLaunchDirectionAtViewAndThrowPowerRatio_Parms, viewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchDirectionAtViewAndThrowPowerRatio_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchDirectionAtViewAndThrowPowerRatio_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchDirectionAtViewAndThrowPowerRatio_Statics::NewProp_throwPowerRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchDirectionAtViewAndThrowPowerRatio_Statics::NewProp_viewRotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchDirectionAtViewAndThrowPowerRatio_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseProjectileLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchDirectionAtViewAndThrowPowerRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseProjectileLauncher, nullptr, "GetLaunchDirectionAtViewAndThrowPowerRatio", nullptr, nullptr, sizeof(BaseProjectileLauncher_eventGetLaunchDirectionAtViewAndThrowPowerRatio_Parms), Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchDirectionAtViewAndThrowPowerRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchDirectionAtViewAndThrowPowerRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchDirectionAtViewAndThrowPowerRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchDirectionAtViewAndThrowPowerRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchDirectionAtViewAndThrowPowerRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchDirectionAtViewAndThrowPowerRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchPosition_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectileLauncher_eventGetLaunchPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseProjectileLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseProjectileLauncher, nullptr, "GetLaunchPosition", nullptr, nullptr, sizeof(BaseProjectileLauncher_eventGetLaunchPosition_Parms), Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchSpeed_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectileLauncher_eventGetLaunchSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseProjectileLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseProjectileLauncher, nullptr, "GetLaunchSpeed", nullptr, nullptr, sizeof(BaseProjectileLauncher_eventGetLaunchSpeed_Parms), Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchSpeedAtThrowPowerRatio_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_throwPowerRatio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchSpeedAtThrowPowerRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectileLauncher_eventGetLaunchSpeedAtThrowPowerRatio_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchSpeedAtThrowPowerRatio_Statics::NewProp_throwPowerRatio = { "throwPowerRatio", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectileLauncher_eventGetLaunchSpeedAtThrowPowerRatio_Parms, throwPowerRatio), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchSpeedAtThrowPowerRatio_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchSpeedAtThrowPowerRatio_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchSpeedAtThrowPowerRatio_Statics::NewProp_throwPowerRatio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchSpeedAtThrowPowerRatio_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseProjectileLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchSpeedAtThrowPowerRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseProjectileLauncher, nullptr, "GetLaunchSpeedAtThrowPowerRatio", nullptr, nullptr, sizeof(BaseProjectileLauncher_eventGetLaunchSpeedAtThrowPowerRatio_Parms), Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchSpeedAtThrowPowerRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchSpeedAtThrowPowerRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchSpeedAtThrowPowerRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchSpeedAtThrowPowerRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchSpeedAtThrowPowerRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchSpeedAtThrowPowerRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseProjectileLauncher_GetOwningPawn_Statics
	{
		struct BaseProjectileLauncher_eventGetOwningPawn_Parms
		{
			APawn* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseProjectileLauncher_GetOwningPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectileLauncher_eventGetOwningPawn_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseProjectileLauncher_GetOwningPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseProjectileLauncher_GetOwningPawn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseProjectileLauncher_GetOwningPawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseProjectileLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseProjectileLauncher_GetOwningPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseProjectileLauncher, nullptr, "GetOwningPawn", nullptr, nullptr, sizeof(BaseProjectileLauncher_eventGetOwningPawn_Parms), Z_Construct_UFunction_UBaseProjectileLauncher_GetOwningPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileLauncher_GetOwningPawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseProjectileLauncher_GetOwningPawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileLauncher_GetOwningPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseProjectileLauncher_GetOwningPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseProjectileLauncher_GetOwningPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseProjectileLauncher_GetProjectileToLaunch_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseProjectileLauncher_GetProjectileToLaunch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectileLauncher_eventGetProjectileToLaunch_Parms, ReturnValue), Z_Construct_UClass_ABaseProjectile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseProjectileLauncher_GetProjectileToLaunch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseProjectileLauncher_GetProjectileToLaunch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseProjectileLauncher_GetProjectileToLaunch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseProjectileLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseProjectileLauncher_GetProjectileToLaunch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseProjectileLauncher, nullptr, "GetProjectileToLaunch", nullptr, nullptr, sizeof(BaseProjectileLauncher_eventGetProjectileToLaunch_Parms), Z_Construct_UFunction_UBaseProjectileLauncher_GetProjectileToLaunch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileLauncher_GetProjectileToLaunch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseProjectileLauncher_GetProjectileToLaunch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileLauncher_GetProjectileToLaunch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseProjectileLauncher_GetProjectileToLaunch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseProjectileLauncher_GetProjectileToLaunch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseProjectileLauncher_HasAuthority_Statics
	{
		struct BaseProjectileLauncher_eventHasAuthority_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBaseProjectileLauncher_HasAuthority_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseProjectileLauncher_eventHasAuthority_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseProjectileLauncher_HasAuthority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseProjectileLauncher_eventHasAuthority_Parms), &Z_Construct_UFunction_UBaseProjectileLauncher_HasAuthority_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseProjectileLauncher_HasAuthority_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseProjectileLauncher_HasAuthority_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseProjectileLauncher_HasAuthority_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseProjectileLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseProjectileLauncher_HasAuthority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseProjectileLauncher, nullptr, "HasAuthority", nullptr, nullptr, sizeof(BaseProjectileLauncher_eventHasAuthority_Parms), Z_Construct_UFunction_UBaseProjectileLauncher_HasAuthority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileLauncher_HasAuthority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseProjectileLauncher_HasAuthority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileLauncher_HasAuthority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseProjectileLauncher_HasAuthority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseProjectileLauncher_HasAuthority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseProjectileLauncher_HasProjectile_Statics
	{
		struct BaseProjectileLauncher_eventHasProjectile_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBaseProjectileLauncher_HasProjectile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseProjectileLauncher_eventHasProjectile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseProjectileLauncher_HasProjectile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseProjectileLauncher_eventHasProjectile_Parms), &Z_Construct_UFunction_UBaseProjectileLauncher_HasProjectile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseProjectileLauncher_HasProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseProjectileLauncher_HasProjectile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseProjectileLauncher_HasProjectile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseProjectileLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseProjectileLauncher_HasProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseProjectileLauncher, nullptr, "HasProjectile", nullptr, nullptr, sizeof(BaseProjectileLauncher_eventHasProjectile_Parms), Z_Construct_UFunction_UBaseProjectileLauncher_HasProjectile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileLauncher_HasProjectile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseProjectileLauncher_HasProjectile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileLauncher_HasProjectile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseProjectileLauncher_HasProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseProjectileLauncher_HasProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseProjectileLauncher_IsAmmoFull_Statics
	{
		struct BaseProjectileLauncher_eventIsAmmoFull_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBaseProjectileLauncher_IsAmmoFull_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseProjectileLauncher_eventIsAmmoFull_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseProjectileLauncher_IsAmmoFull_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseProjectileLauncher_eventIsAmmoFull_Parms), &Z_Construct_UFunction_UBaseProjectileLauncher_IsAmmoFull_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseProjectileLauncher_IsAmmoFull_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseProjectileLauncher_IsAmmoFull_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseProjectileLauncher_IsAmmoFull_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseProjectileLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseProjectileLauncher_IsAmmoFull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseProjectileLauncher, nullptr, "IsAmmoFull", nullptr, nullptr, sizeof(BaseProjectileLauncher_eventIsAmmoFull_Parms), Z_Construct_UFunction_UBaseProjectileLauncher_IsAmmoFull_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileLauncher_IsAmmoFull_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseProjectileLauncher_IsAmmoFull_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileLauncher_IsAmmoFull_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseProjectileLauncher_IsAmmoFull()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseProjectileLauncher_IsAmmoFull_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseProjectileLauncher_IsLocallyControlled_Statics
	{
		struct BaseProjectileLauncher_eventIsLocallyControlled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBaseProjectileLauncher_IsLocallyControlled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseProjectileLauncher_eventIsLocallyControlled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseProjectileLauncher_IsLocallyControlled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseProjectileLauncher_eventIsLocallyControlled_Parms), &Z_Construct_UFunction_UBaseProjectileLauncher_IsLocallyControlled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseProjectileLauncher_IsLocallyControlled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseProjectileLauncher_IsLocallyControlled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseProjectileLauncher_IsLocallyControlled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseProjectileLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseProjectileLauncher_IsLocallyControlled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseProjectileLauncher, nullptr, "IsLocallyControlled", nullptr, nullptr, sizeof(BaseProjectileLauncher_eventIsLocallyControlled_Parms), Z_Construct_UFunction_UBaseProjectileLauncher_IsLocallyControlled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileLauncher_IsLocallyControlled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseProjectileLauncher_IsLocallyControlled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileLauncher_IsLocallyControlled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseProjectileLauncher_IsLocallyControlled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseProjectileLauncher_IsLocallyControlled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseProjectileLauncher_Local_Launch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseProjectileLauncher_Local_Launch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseProjectileLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseProjectileLauncher_Local_Launch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseProjectileLauncher, nullptr, "Local_Launch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseProjectileLauncher_Local_Launch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileLauncher_Local_Launch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseProjectileLauncher_Local_Launch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseProjectileLauncher_Local_Launch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseProjectileLauncher_OnLaunch_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_projectile;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_launchInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseProjectileLauncher_OnLaunch_Statics::NewProp_projectile = { "projectile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectileLauncher_eventOnLaunch_Parms, projectile), Z_Construct_UClass_ABaseProjectile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseProjectileLauncher_OnLaunch_Statics::NewProp_launchInfo = { "launchInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectileLauncher_eventOnLaunch_Parms, launchInfo), Z_Construct_UScriptStruct_FLaunchInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseProjectileLauncher_OnLaunch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseProjectileLauncher_OnLaunch_Statics::NewProp_projectile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseProjectileLauncher_OnLaunch_Statics::NewProp_launchInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseProjectileLauncher_OnLaunch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseProjectileLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseProjectileLauncher_OnLaunch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseProjectileLauncher, nullptr, "OnLaunch", nullptr, nullptr, sizeof(BaseProjectileLauncher_eventOnLaunch_Parms), Z_Construct_UFunction_UBaseProjectileLauncher_OnLaunch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileLauncher_OnLaunch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseProjectileLauncher_OnLaunch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileLauncher_OnLaunch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseProjectileLauncher_OnLaunch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseProjectileLauncher_OnLaunch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseProjectileLauncher_OnRep_Ammo_Statics
	{
		struct BaseProjectileLauncher_eventOnRep_Ammo_Parms
		{
			int32 oldAmmo;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_oldAmmo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseProjectileLauncher_OnRep_Ammo_Statics::NewProp_oldAmmo = { "oldAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectileLauncher_eventOnRep_Ammo_Parms, oldAmmo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseProjectileLauncher_OnRep_Ammo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseProjectileLauncher_OnRep_Ammo_Statics::NewProp_oldAmmo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseProjectileLauncher_OnRep_Ammo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseProjectileLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseProjectileLauncher_OnRep_Ammo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseProjectileLauncher, nullptr, "OnRep_Ammo", nullptr, nullptr, sizeof(BaseProjectileLauncher_eventOnRep_Ammo_Parms), Z_Construct_UFunction_UBaseProjectileLauncher_OnRep_Ammo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileLauncher_OnRep_Ammo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseProjectileLauncher_OnRep_Ammo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileLauncher_OnRep_Ammo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseProjectileLauncher_OnRep_Ammo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseProjectileLauncher_OnRep_Ammo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseProjectileLauncher_OnRep_MaxAmmo_Statics
	{
		struct BaseProjectileLauncher_eventOnRep_MaxAmmo_Parms
		{
			int32 oldMaxAmmo;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_oldMaxAmmo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseProjectileLauncher_OnRep_MaxAmmo_Statics::NewProp_oldMaxAmmo = { "oldMaxAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectileLauncher_eventOnRep_MaxAmmo_Parms, oldMaxAmmo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseProjectileLauncher_OnRep_MaxAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseProjectileLauncher_OnRep_MaxAmmo_Statics::NewProp_oldMaxAmmo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseProjectileLauncher_OnRep_MaxAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseProjectileLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseProjectileLauncher_OnRep_MaxAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseProjectileLauncher, nullptr, "OnRep_MaxAmmo", nullptr, nullptr, sizeof(BaseProjectileLauncher_eventOnRep_MaxAmmo_Parms), Z_Construct_UFunction_UBaseProjectileLauncher_OnRep_MaxAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileLauncher_OnRep_MaxAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseProjectileLauncher_OnRep_MaxAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileLauncher_OnRep_MaxAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseProjectileLauncher_OnRep_MaxAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseProjectileLauncher_OnRep_MaxAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseProjectileLauncher_Server_Launch_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_projectile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_launchInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_launchInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseProjectileLauncher_Server_Launch_Statics::NewProp_projectile = { "projectile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectileLauncher_eventServer_Launch_Parms, projectile), Z_Construct_UClass_ABaseProjectile_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseProjectileLauncher_Server_Launch_Statics::NewProp_launchInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseProjectileLauncher_Server_Launch_Statics::NewProp_launchInfo = { "launchInfo", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectileLauncher_eventServer_Launch_Parms, launchInfo), Z_Construct_UScriptStruct_FLaunchInfo, METADATA_PARAMS(Z_Construct_UFunction_UBaseProjectileLauncher_Server_Launch_Statics::NewProp_launchInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileLauncher_Server_Launch_Statics::NewProp_launchInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseProjectileLauncher_Server_Launch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseProjectileLauncher_Server_Launch_Statics::NewProp_projectile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseProjectileLauncher_Server_Launch_Statics::NewProp_launchInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseProjectileLauncher_Server_Launch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseProjectileLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseProjectileLauncher_Server_Launch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseProjectileLauncher, nullptr, "Server_Launch", nullptr, nullptr, sizeof(BaseProjectileLauncher_eventServer_Launch_Parms), Z_Construct_UFunction_UBaseProjectileLauncher_Server_Launch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileLauncher_Server_Launch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseProjectileLauncher_Server_Launch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileLauncher_Server_Launch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseProjectileLauncher_Server_Launch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseProjectileLauncher_Server_Launch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseProjectileLauncher_Server_LaunchWithImpact_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_projectile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_impactInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_impactInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_launchInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_launchInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseProjectileLauncher_Server_LaunchWithImpact_Statics::NewProp_projectile = { "projectile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectileLauncher_eventServer_LaunchWithImpact_Parms, projectile), Z_Construct_UClass_ABaseProjectile_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseProjectileLauncher_Server_LaunchWithImpact_Statics::NewProp_impactInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseProjectileLauncher_Server_LaunchWithImpact_Statics::NewProp_impactInfo = { "impactInfo", nullptr, (EPropertyFlags)0x0010008008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectileLauncher_eventServer_LaunchWithImpact_Parms, impactInfo), Z_Construct_UScriptStruct_FImpactInfo, METADATA_PARAMS(Z_Construct_UFunction_UBaseProjectileLauncher_Server_LaunchWithImpact_Statics::NewProp_impactInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileLauncher_Server_LaunchWithImpact_Statics::NewProp_impactInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseProjectileLauncher_Server_LaunchWithImpact_Statics::NewProp_launchInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseProjectileLauncher_Server_LaunchWithImpact_Statics::NewProp_launchInfo = { "launchInfo", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectileLauncher_eventServer_LaunchWithImpact_Parms, launchInfo), Z_Construct_UScriptStruct_FLaunchInfo, METADATA_PARAMS(Z_Construct_UFunction_UBaseProjectileLauncher_Server_LaunchWithImpact_Statics::NewProp_launchInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileLauncher_Server_LaunchWithImpact_Statics::NewProp_launchInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseProjectileLauncher_Server_LaunchWithImpact_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseProjectileLauncher_Server_LaunchWithImpact_Statics::NewProp_projectile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseProjectileLauncher_Server_LaunchWithImpact_Statics::NewProp_impactInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseProjectileLauncher_Server_LaunchWithImpact_Statics::NewProp_launchInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseProjectileLauncher_Server_LaunchWithImpact_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseProjectileLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseProjectileLauncher_Server_LaunchWithImpact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseProjectileLauncher, nullptr, "Server_LaunchWithImpact", nullptr, nullptr, sizeof(BaseProjectileLauncher_eventServer_LaunchWithImpact_Parms), Z_Construct_UFunction_UBaseProjectileLauncher_Server_LaunchWithImpact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileLauncher_Server_LaunchWithImpact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseProjectileLauncher_Server_LaunchWithImpact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileLauncher_Server_LaunchWithImpact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseProjectileLauncher_Server_LaunchWithImpact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseProjectileLauncher_Server_LaunchWithImpact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseProjectileLauncher_SetProjectileProvider_Statics
	{
		struct BaseProjectileLauncher_eventSetProjectileProvider_Parms
		{
			TScriptInterface<IProjectileProvider> projectileProvider;
		};
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_projectileProvider;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UBaseProjectileLauncher_SetProjectileProvider_Statics::NewProp_projectileProvider = { "projectileProvider", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectileLauncher_eventSetProjectileProvider_Parms, projectileProvider), Z_Construct_UClass_UProjectileProvider_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseProjectileLauncher_SetProjectileProvider_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseProjectileLauncher_SetProjectileProvider_Statics::NewProp_projectileProvider,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseProjectileLauncher_SetProjectileProvider_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseProjectileLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseProjectileLauncher_SetProjectileProvider_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseProjectileLauncher, nullptr, "SetProjectileProvider", nullptr, nullptr, sizeof(BaseProjectileLauncher_eventSetProjectileProvider_Parms), Z_Construct_UFunction_UBaseProjectileLauncher_SetProjectileProvider_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileLauncher_SetProjectileProvider_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseProjectileLauncher_SetProjectileProvider_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileLauncher_SetProjectileProvider_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseProjectileLauncher_SetProjectileProvider()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseProjectileLauncher_SetProjectileProvider_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseProjectileLauncher_SetProjectileVar_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_varName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseProjectileLauncher_SetProjectileVar_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectileLauncher_eventSetProjectileVar_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBaseProjectileLauncher_SetProjectileVar_Statics::NewProp_varName = { "varName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseProjectileLauncher_eventSetProjectileVar_Parms, varName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseProjectileLauncher_SetProjectileVar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseProjectileLauncher_SetProjectileVar_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseProjectileLauncher_SetProjectileVar_Statics::NewProp_varName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseProjectileLauncher_SetProjectileVar_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseProjectileLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseProjectileLauncher_SetProjectileVar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseProjectileLauncher, nullptr, "SetProjectileVar", nullptr, nullptr, sizeof(BaseProjectileLauncher_eventSetProjectileVar_Parms), Z_Construct_UFunction_UBaseProjectileLauncher_SetProjectileVar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileLauncher_SetProjectileVar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseProjectileLauncher_SetProjectileVar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseProjectileLauncher_SetProjectileVar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseProjectileLauncher_SetProjectileVar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseProjectileLauncher_SetProjectileVar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBaseProjectileLauncher_NoRegister()
	{
		return UBaseProjectileLauncher::StaticClass();
	}
	struct Z_Construct_UClass_UBaseProjectileLauncher_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__projectileReplicationComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__projectileReplicationComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__debugProjectile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__debugProjectile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__canLaunchWhileOutOfAmmo_MetaData[];
#endif
		static void NewProp__canLaunchWhileOutOfAmmo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__canLaunchWhileOutOfAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__maxAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__ammo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__ammo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hasInfiniteAmmunition_MetaData[];
#endif
		static void NewProp__hasInfiniteAmmunition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__hasInfiniteAmmunition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__requireLaunchImpactDetection_MetaData[];
#endif
		static void NewProp__requireLaunchImpactDetection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__requireLaunchImpactDetection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseProjectileLauncher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Projectile,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseProjectileLauncher_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseProjectileLauncher_Authority_AddMaxAmmo, "Authority_AddMaxAmmo" }, // 1452960391
		{ &Z_Construct_UFunction_UBaseProjectileLauncher_Authority_Launch, "Authority_Launch" }, // 2115472078
		{ &Z_Construct_UFunction_UBaseProjectileLauncher_Authority_Reload, "Authority_Reload" }, // 991842017
		{ &Z_Construct_UFunction_UBaseProjectileLauncher_Authority_ReturnAmmoUnits, "Authority_ReturnAmmoUnits" }, // 2594772196
		{ &Z_Construct_UFunction_UBaseProjectileLauncher_Authority_SetMaxAmmo, "Authority_SetMaxAmmo" }, // 3079017075
		{ &Z_Construct_UFunction_UBaseProjectileLauncher_Cosmetic_OnOutOfAmmo, "Cosmetic_OnOutOfAmmo" }, // 4249299359
		{ &Z_Construct_UFunction_UBaseProjectileLauncher_GetAmmo, "GetAmmo" }, // 4170238081
		{ &Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchDirection, "GetLaunchDirection" }, // 1310818974
		{ &Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchDirectionAtViewAndThrowPowerRatio, "GetLaunchDirectionAtViewAndThrowPowerRatio" }, // 1058978410
		{ &Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchPosition, "GetLaunchPosition" }, // 4070646016
		{ &Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchSpeed, "GetLaunchSpeed" }, // 1715765253
		{ &Z_Construct_UFunction_UBaseProjectileLauncher_GetLaunchSpeedAtThrowPowerRatio, "GetLaunchSpeedAtThrowPowerRatio" }, // 1640635189
		{ &Z_Construct_UFunction_UBaseProjectileLauncher_GetOwningPawn, "GetOwningPawn" }, // 3413836783
		{ &Z_Construct_UFunction_UBaseProjectileLauncher_GetProjectileToLaunch, "GetProjectileToLaunch" }, // 702100345
		{ &Z_Construct_UFunction_UBaseProjectileLauncher_HasAuthority, "HasAuthority" }, // 2348983739
		{ &Z_Construct_UFunction_UBaseProjectileLauncher_HasProjectile, "HasProjectile" }, // 3476927229
		{ &Z_Construct_UFunction_UBaseProjectileLauncher_IsAmmoFull, "IsAmmoFull" }, // 167498004
		{ &Z_Construct_UFunction_UBaseProjectileLauncher_IsLocallyControlled, "IsLocallyControlled" }, // 2466198336
		{ &Z_Construct_UFunction_UBaseProjectileLauncher_Local_Launch, "Local_Launch" }, // 2732224937
		{ &Z_Construct_UFunction_UBaseProjectileLauncher_OnLaunch, "OnLaunch" }, // 1148202297
		{ &Z_Construct_UFunction_UBaseProjectileLauncher_OnRep_Ammo, "OnRep_Ammo" }, // 2172946299
		{ &Z_Construct_UFunction_UBaseProjectileLauncher_OnRep_MaxAmmo, "OnRep_MaxAmmo" }, // 2922006757
		{ &Z_Construct_UFunction_UBaseProjectileLauncher_Server_Launch, "Server_Launch" }, // 1452453587
		{ &Z_Construct_UFunction_UBaseProjectileLauncher_Server_LaunchWithImpact, "Server_LaunchWithImpact" }, // 919020893
		{ &Z_Construct_UFunction_UBaseProjectileLauncher_SetProjectileProvider, "SetProjectileProvider" }, // 3449703326
		{ &Z_Construct_UFunction_UBaseProjectileLauncher_SetProjectileVar, "SetProjectileVar" }, // 944310442
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseProjectileLauncher_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BaseProjectileLauncher.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BaseProjectileLauncher.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseProjectileLauncher_Statics::NewProp__projectileReplicationComponent_MetaData[] = {
		{ "Category", "BaseProjectileLauncher" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseProjectileLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseProjectileLauncher_Statics::NewProp__projectileReplicationComponent = { "_projectileReplicationComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseProjectileLauncher, _projectileReplicationComponent), Z_Construct_UClass_UBaseProjectileReplicationComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseProjectileLauncher_Statics::NewProp__projectileReplicationComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseProjectileLauncher_Statics::NewProp__projectileReplicationComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseProjectileLauncher_Statics::NewProp__debugProjectile_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseProjectileLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseProjectileLauncher_Statics::NewProp__debugProjectile = { "_debugProjectile", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseProjectileLauncher, _debugProjectile), Z_Construct_UClass_ABaseProjectile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseProjectileLauncher_Statics::NewProp__debugProjectile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseProjectileLauncher_Statics::NewProp__debugProjectile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseProjectileLauncher_Statics::NewProp__canLaunchWhileOutOfAmmo_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseProjectileLauncher.h" },
	};
#endif
	void Z_Construct_UClass_UBaseProjectileLauncher_Statics::NewProp__canLaunchWhileOutOfAmmo_SetBit(void* Obj)
	{
		((UBaseProjectileLauncher*)Obj)->_canLaunchWhileOutOfAmmo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseProjectileLauncher_Statics::NewProp__canLaunchWhileOutOfAmmo = { "_canLaunchWhileOutOfAmmo", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBaseProjectileLauncher), &Z_Construct_UClass_UBaseProjectileLauncher_Statics::NewProp__canLaunchWhileOutOfAmmo_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBaseProjectileLauncher_Statics::NewProp__canLaunchWhileOutOfAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseProjectileLauncher_Statics::NewProp__canLaunchWhileOutOfAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseProjectileLauncher_Statics::NewProp__maxAmmo_MetaData[] = {
		{ "Category", "BaseProjectileLauncher" },
		{ "ModuleRelativePath", "Public/BaseProjectileLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBaseProjectileLauncher_Statics::NewProp__maxAmmo = { "_maxAmmo", "OnRep_MaxAmmo", (EPropertyFlags)0x0040000100000021, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseProjectileLauncher, _maxAmmo), METADATA_PARAMS(Z_Construct_UClass_UBaseProjectileLauncher_Statics::NewProp__maxAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseProjectileLauncher_Statics::NewProp__maxAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseProjectileLauncher_Statics::NewProp__ammo_MetaData[] = {
		{ "Category", "BaseProjectileLauncher" },
		{ "ModuleRelativePath", "Public/BaseProjectileLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBaseProjectileLauncher_Statics::NewProp__ammo = { "_ammo", "OnRep_Ammo", (EPropertyFlags)0x0040000100000021, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseProjectileLauncher, _ammo), METADATA_PARAMS(Z_Construct_UClass_UBaseProjectileLauncher_Statics::NewProp__ammo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseProjectileLauncher_Statics::NewProp__ammo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseProjectileLauncher_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "BaseProjectileLauncher" },
		{ "ModuleRelativePath", "Public/BaseProjectileLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBaseProjectileLauncher_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseProjectileLauncher, ProjectileClass), Z_Construct_UClass_ABaseProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UBaseProjectileLauncher_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseProjectileLauncher_Statics::NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseProjectileLauncher_Statics::NewProp__hasInfiniteAmmunition_MetaData[] = {
		{ "Category", "BaseProjectileLauncher" },
		{ "ModuleRelativePath", "Public/BaseProjectileLauncher.h" },
	};
#endif
	void Z_Construct_UClass_UBaseProjectileLauncher_Statics::NewProp__hasInfiniteAmmunition_SetBit(void* Obj)
	{
		((UBaseProjectileLauncher*)Obj)->_hasInfiniteAmmunition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseProjectileLauncher_Statics::NewProp__hasInfiniteAmmunition = { "_hasInfiniteAmmunition", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBaseProjectileLauncher), &Z_Construct_UClass_UBaseProjectileLauncher_Statics::NewProp__hasInfiniteAmmunition_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBaseProjectileLauncher_Statics::NewProp__hasInfiniteAmmunition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseProjectileLauncher_Statics::NewProp__hasInfiniteAmmunition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseProjectileLauncher_Statics::NewProp__requireLaunchImpactDetection_MetaData[] = {
		{ "Category", "BaseProjectileLauncher" },
		{ "ModuleRelativePath", "Public/BaseProjectileLauncher.h" },
	};
#endif
	void Z_Construct_UClass_UBaseProjectileLauncher_Statics::NewProp__requireLaunchImpactDetection_SetBit(void* Obj)
	{
		((UBaseProjectileLauncher*)Obj)->_requireLaunchImpactDetection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseProjectileLauncher_Statics::NewProp__requireLaunchImpactDetection = { "_requireLaunchImpactDetection", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBaseProjectileLauncher), &Z_Construct_UClass_UBaseProjectileLauncher_Statics::NewProp__requireLaunchImpactDetection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBaseProjectileLauncher_Statics::NewProp__requireLaunchImpactDetection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseProjectileLauncher_Statics::NewProp__requireLaunchImpactDetection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseProjectileLauncher_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseProjectileLauncher_Statics::NewProp__projectileReplicationComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseProjectileLauncher_Statics::NewProp__debugProjectile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseProjectileLauncher_Statics::NewProp__canLaunchWhileOutOfAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseProjectileLauncher_Statics::NewProp__maxAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseProjectileLauncher_Statics::NewProp__ammo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseProjectileLauncher_Statics::NewProp_ProjectileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseProjectileLauncher_Statics::NewProp__hasInfiniteAmmunition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseProjectileLauncher_Statics::NewProp__requireLaunchImpactDetection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseProjectileLauncher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseProjectileLauncher>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseProjectileLauncher_Statics::ClassParams = {
		&UBaseProjectileLauncher::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBaseProjectileLauncher_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseProjectileLauncher_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseProjectileLauncher_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseProjectileLauncher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseProjectileLauncher()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseProjectileLauncher_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseProjectileLauncher, 3506521884);
	template<> PROJECTILE_API UClass* StaticClass<UBaseProjectileLauncher>()
	{
		return UBaseProjectileLauncher::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseProjectileLauncher(Z_Construct_UClass_UBaseProjectileLauncher, &UBaseProjectileLauncher::StaticClass, TEXT("/Script/Projectile"), TEXT("UBaseProjectileLauncher"), false, nullptr, nullptr, nullptr);

	void UBaseProjectileLauncher::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__ammo(TEXT("_ammo"));
		static const FName Name__maxAmmo(TEXT("_maxAmmo"));
		static const FName Name__canLaunchWhileOutOfAmmo(TEXT("_canLaunchWhileOutOfAmmo"));

		const bool bIsValid = true
			&& Name__ammo == ClassReps[(int32)ENetFields_Private::_ammo].Property->GetFName()
			&& Name__maxAmmo == ClassReps[(int32)ENetFields_Private::_maxAmmo].Property->GetFName()
			&& Name__canLaunchWhileOutOfAmmo == ClassReps[(int32)ENetFields_Private::_canLaunchWhileOutOfAmmo].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UBaseProjectileLauncher"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseProjectileLauncher);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
