// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/KillerProjectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKillerProjectile() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AKillerProjectile_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AKillerProjectile();
	PROJECTILE_API UClass* Z_Construct_UClass_APhysicsBasedProjectile();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EHitValidatorConfigName();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UHitValidatorComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UHitValidatorConfigurator_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	DEFINE_FUNCTION(AKillerProjectile::execGetLaunchingKiller)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ASlasherPlayer**)Z_Param__Result=P_THIS->GetLaunchingKiller();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AKillerProjectile::execGetPlayerPrimitiveComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPrimitiveComponent**)Z_Param__Result=P_THIS->GetPlayerPrimitiveComponent_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AKillerProjectile::execSetActiveSlashable)
	{
		P_GET_UBOOL(Z_Param_active);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActiveSlashable(Z_Param_active);
		P_NATIVE_END;
	}
	static FName NAME_AKillerProjectile_GetPlayerPrimitiveComponent = FName(TEXT("GetPlayerPrimitiveComponent"));
	UPrimitiveComponent* AKillerProjectile::GetPlayerPrimitiveComponent() const
	{
		KillerProjectile_eventGetPlayerPrimitiveComponent_Parms Parms;
		const_cast<AKillerProjectile*>(this)->ProcessEvent(FindFunctionChecked(NAME_AKillerProjectile_GetPlayerPrimitiveComponent),&Parms);
		return Parms.ReturnValue;
	}
	void AKillerProjectile::StaticRegisterNativesAKillerProjectile()
	{
		UClass* Class = AKillerProjectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLaunchingKiller", &AKillerProjectile::execGetLaunchingKiller },
			{ "GetPlayerPrimitiveComponent", &AKillerProjectile::execGetPlayerPrimitiveComponent },
			{ "SetActiveSlashable", &AKillerProjectile::execSetActiveSlashable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AKillerProjectile_GetLaunchingKiller_Statics
	{
		struct KillerProjectile_eventGetLaunchingKiller_Parms
		{
			ASlasherPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AKillerProjectile_GetLaunchingKiller_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KillerProjectile_eventGetLaunchingKiller_Parms, ReturnValue), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKillerProjectile_GetLaunchingKiller_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKillerProjectile_GetLaunchingKiller_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKillerProjectile_GetLaunchingKiller_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KillerProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKillerProjectile_GetLaunchingKiller_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKillerProjectile, nullptr, "GetLaunchingKiller", nullptr, nullptr, sizeof(KillerProjectile_eventGetLaunchingKiller_Parms), Z_Construct_UFunction_AKillerProjectile_GetLaunchingKiller_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKillerProjectile_GetLaunchingKiller_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKillerProjectile_GetLaunchingKiller_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKillerProjectile_GetLaunchingKiller_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKillerProjectile_GetLaunchingKiller()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKillerProjectile_GetLaunchingKiller_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKillerProjectile_GetPlayerPrimitiveComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKillerProjectile_GetPlayerPrimitiveComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AKillerProjectile_GetPlayerPrimitiveComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KillerProjectile_eventGetPlayerPrimitiveComponent_Parms, ReturnValue), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AKillerProjectile_GetPlayerPrimitiveComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AKillerProjectile_GetPlayerPrimitiveComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKillerProjectile_GetPlayerPrimitiveComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKillerProjectile_GetPlayerPrimitiveComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKillerProjectile_GetPlayerPrimitiveComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KillerProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKillerProjectile_GetPlayerPrimitiveComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKillerProjectile, nullptr, "GetPlayerPrimitiveComponent", nullptr, nullptr, sizeof(KillerProjectile_eventGetPlayerPrimitiveComponent_Parms), Z_Construct_UFunction_AKillerProjectile_GetPlayerPrimitiveComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKillerProjectile_GetPlayerPrimitiveComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKillerProjectile_GetPlayerPrimitiveComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKillerProjectile_GetPlayerPrimitiveComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKillerProjectile_GetPlayerPrimitiveComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKillerProjectile_GetPlayerPrimitiveComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKillerProjectile_SetActiveSlashable_Statics
	{
		struct KillerProjectile_eventSetActiveSlashable_Parms
		{
			bool active;
		};
		static void NewProp_active_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_active;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AKillerProjectile_SetActiveSlashable_Statics::NewProp_active_SetBit(void* Obj)
	{
		((KillerProjectile_eventSetActiveSlashable_Parms*)Obj)->active = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AKillerProjectile_SetActiveSlashable_Statics::NewProp_active = { "active", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KillerProjectile_eventSetActiveSlashable_Parms), &Z_Construct_UFunction_AKillerProjectile_SetActiveSlashable_Statics::NewProp_active_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKillerProjectile_SetActiveSlashable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKillerProjectile_SetActiveSlashable_Statics::NewProp_active,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKillerProjectile_SetActiveSlashable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KillerProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKillerProjectile_SetActiveSlashable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKillerProjectile, nullptr, "SetActiveSlashable", nullptr, nullptr, sizeof(KillerProjectile_eventSetActiveSlashable_Parms), Z_Construct_UFunction_AKillerProjectile_SetActiveSlashable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKillerProjectile_SetActiveSlashable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKillerProjectile_SetActiveSlashable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKillerProjectile_SetActiveSlashable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKillerProjectile_SetActiveSlashable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKillerProjectile_SetActiveSlashable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AKillerProjectile_NoRegister()
	{
		return AKillerProjectile::StaticClass();
	}
	struct Z_Construct_UClass_AKillerProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hitValidationConfigName_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__hitValidationConfigName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__hitValidationConfigName_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hitValidatorComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__hitValidatorComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hitValidatorConfigurator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__hitValidatorConfigurator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__killerProjectileAttemptGameEventTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__killerProjectileAttemptGameEventTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKillerProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APhysicsBasedProjectile,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AKillerProjectile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AKillerProjectile_GetLaunchingKiller, "GetLaunchingKiller" }, // 2008628578
		{ &Z_Construct_UFunction_AKillerProjectile_GetPlayerPrimitiveComponent, "GetPlayerPrimitiveComponent" }, // 2957853770
		{ &Z_Construct_UFunction_AKillerProjectile_SetActiveSlashable, "SetActiveSlashable" }, // 1172330852
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKillerProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "KillerProjectile.h" },
		{ "ModuleRelativePath", "Public/KillerProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKillerProjectile_Statics::NewProp__hitValidationConfigName_MetaData[] = {
		{ "Category", "KillerProjectile" },
		{ "ModuleRelativePath", "Public/KillerProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AKillerProjectile_Statics::NewProp__hitValidationConfigName = { "_hitValidationConfigName", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKillerProjectile, _hitValidationConfigName), Z_Construct_UEnum_DeadByDaylight_EHitValidatorConfigName, METADATA_PARAMS(Z_Construct_UClass_AKillerProjectile_Statics::NewProp__hitValidationConfigName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKillerProjectile_Statics::NewProp__hitValidationConfigName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AKillerProjectile_Statics::NewProp__hitValidationConfigName_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKillerProjectile_Statics::NewProp__hitValidatorComponent_MetaData[] = {
		{ "Category", "KillerProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/KillerProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKillerProjectile_Statics::NewProp__hitValidatorComponent = { "_hitValidatorComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKillerProjectile, _hitValidatorComponent), Z_Construct_UClass_UHitValidatorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKillerProjectile_Statics::NewProp__hitValidatorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKillerProjectile_Statics::NewProp__hitValidatorComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKillerProjectile_Statics::NewProp__hitValidatorConfigurator_MetaData[] = {
		{ "Category", "KillerProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/KillerProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKillerProjectile_Statics::NewProp__hitValidatorConfigurator = { "_hitValidatorConfigurator", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKillerProjectile, _hitValidatorConfigurator), Z_Construct_UClass_UHitValidatorConfigurator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKillerProjectile_Statics::NewProp__hitValidatorConfigurator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKillerProjectile_Statics::NewProp__hitValidatorConfigurator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKillerProjectile_Statics::NewProp__killerProjectileAttemptGameEventTag_MetaData[] = {
		{ "Category", "KillerProjectile" },
		{ "ModuleRelativePath", "Public/KillerProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AKillerProjectile_Statics::NewProp__killerProjectileAttemptGameEventTag = { "_killerProjectileAttemptGameEventTag", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKillerProjectile, _killerProjectileAttemptGameEventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_AKillerProjectile_Statics::NewProp__killerProjectileAttemptGameEventTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKillerProjectile_Statics::NewProp__killerProjectileAttemptGameEventTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKillerProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKillerProjectile_Statics::NewProp__hitValidationConfigName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKillerProjectile_Statics::NewProp__hitValidationConfigName_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKillerProjectile_Statics::NewProp__hitValidatorComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKillerProjectile_Statics::NewProp__hitValidatorConfigurator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKillerProjectile_Statics::NewProp__killerProjectileAttemptGameEventTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKillerProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKillerProjectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AKillerProjectile_Statics::ClassParams = {
		&AKillerProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AKillerProjectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AKillerProjectile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AKillerProjectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKillerProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKillerProjectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AKillerProjectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AKillerProjectile, 508493823);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<AKillerProjectile>()
	{
		return AKillerProjectile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AKillerProjectile(Z_Construct_UClass_AKillerProjectile, &AKillerProjectile::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("AKillerProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKillerProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
