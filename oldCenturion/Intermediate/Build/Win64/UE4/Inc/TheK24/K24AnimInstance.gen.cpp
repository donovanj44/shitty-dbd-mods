// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/K24AnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK24AnimInstance() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_UK24AnimInstance_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_UK24AnimInstance();
	DBDANIMATION_API UClass* Z_Construct_UClass_UKillerAnimInstance();
	UPackage* Z_Construct_UPackage__Script_TheK24();
// End Cross Module References
	DEFINE_FUNCTION(UK24AnimInstance::execOnKillerPowerLevelChanged)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_powerLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnKillerPowerLevelChanged(Z_Param_powerLevel);
		P_NATIVE_END;
	}
	void UK24AnimInstance::StaticRegisterNativesUK24AnimInstance()
	{
		UClass* Class = UK24AnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnKillerPowerLevelChanged", &UK24AnimInstance::execOnKillerPowerLevelChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UK24AnimInstance_OnKillerPowerLevelChanged_Statics
	{
		struct K24AnimInstance_eventOnKillerPowerLevelChanged_Parms
		{
			int32 powerLevel;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_powerLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UK24AnimInstance_OnKillerPowerLevelChanged_Statics::NewProp_powerLevel = { "powerLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K24AnimInstance_eventOnKillerPowerLevelChanged_Parms, powerLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK24AnimInstance_OnKillerPowerLevelChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK24AnimInstance_OnKillerPowerLevelChanged_Statics::NewProp_powerLevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK24AnimInstance_OnKillerPowerLevelChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K24AnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK24AnimInstance_OnKillerPowerLevelChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK24AnimInstance, nullptr, "OnKillerPowerLevelChanged", nullptr, nullptr, sizeof(K24AnimInstance_eventOnKillerPowerLevelChanged_Parms), Z_Construct_UFunction_UK24AnimInstance_OnKillerPowerLevelChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK24AnimInstance_OnKillerPowerLevelChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK24AnimInstance_OnKillerPowerLevelChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK24AnimInstance_OnKillerPowerLevelChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK24AnimInstance_OnKillerPowerLevelChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK24AnimInstance_OnKillerPowerLevelChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UK24AnimInstance_NoRegister()
	{
		return UK24AnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UK24AnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__powerLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__powerLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isRequestingPowerAttack_MetaData[];
#endif
		static void NewProp__isRequestingPowerAttack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isRequestingPowerAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isK24PowerAttacking_MetaData[];
#endif
		static void NewProp__isK24PowerAttacking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isK24PowerAttacking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isChargingPower_MetaData[];
#endif
		static void NewProp__isChargingPower_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isChargingPower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isInPowerMode_MetaData[];
#endif
		static void NewProp__isInPowerMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isInPowerMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK24AnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKillerAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UK24AnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UK24AnimInstance_OnKillerPowerLevelChanged, "OnKillerPowerLevelChanged" }, // 4241222024
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK24AnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "K24AnimInstance.h" },
		{ "ModuleRelativePath", "Public/K24AnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK24AnimInstance_Statics::NewProp__powerLevel_MetaData[] = {
		{ "Category", "K24AnimInstance" },
		{ "ModuleRelativePath", "Public/K24AnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UK24AnimInstance_Statics::NewProp__powerLevel = { "_powerLevel", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK24AnimInstance, _powerLevel), METADATA_PARAMS(Z_Construct_UClass_UK24AnimInstance_Statics::NewProp__powerLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK24AnimInstance_Statics::NewProp__powerLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK24AnimInstance_Statics::NewProp__isRequestingPowerAttack_MetaData[] = {
		{ "Category", "K24AnimInstance" },
		{ "ModuleRelativePath", "Public/K24AnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UK24AnimInstance_Statics::NewProp__isRequestingPowerAttack_SetBit(void* Obj)
	{
		((UK24AnimInstance*)Obj)->_isRequestingPowerAttack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK24AnimInstance_Statics::NewProp__isRequestingPowerAttack = { "_isRequestingPowerAttack", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK24AnimInstance), &Z_Construct_UClass_UK24AnimInstance_Statics::NewProp__isRequestingPowerAttack_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK24AnimInstance_Statics::NewProp__isRequestingPowerAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK24AnimInstance_Statics::NewProp__isRequestingPowerAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK24AnimInstance_Statics::NewProp__isK24PowerAttacking_MetaData[] = {
		{ "Category", "K24AnimInstance" },
		{ "ModuleRelativePath", "Public/K24AnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UK24AnimInstance_Statics::NewProp__isK24PowerAttacking_SetBit(void* Obj)
	{
		((UK24AnimInstance*)Obj)->_isK24PowerAttacking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK24AnimInstance_Statics::NewProp__isK24PowerAttacking = { "_isK24PowerAttacking", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK24AnimInstance), &Z_Construct_UClass_UK24AnimInstance_Statics::NewProp__isK24PowerAttacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK24AnimInstance_Statics::NewProp__isK24PowerAttacking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK24AnimInstance_Statics::NewProp__isK24PowerAttacking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK24AnimInstance_Statics::NewProp__isChargingPower_MetaData[] = {
		{ "Category", "K24AnimInstance" },
		{ "ModuleRelativePath", "Public/K24AnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UK24AnimInstance_Statics::NewProp__isChargingPower_SetBit(void* Obj)
	{
		((UK24AnimInstance*)Obj)->_isChargingPower = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK24AnimInstance_Statics::NewProp__isChargingPower = { "_isChargingPower", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK24AnimInstance), &Z_Construct_UClass_UK24AnimInstance_Statics::NewProp__isChargingPower_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK24AnimInstance_Statics::NewProp__isChargingPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK24AnimInstance_Statics::NewProp__isChargingPower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK24AnimInstance_Statics::NewProp__isInPowerMode_MetaData[] = {
		{ "Category", "K24AnimInstance" },
		{ "ModuleRelativePath", "Public/K24AnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UK24AnimInstance_Statics::NewProp__isInPowerMode_SetBit(void* Obj)
	{
		((UK24AnimInstance*)Obj)->_isInPowerMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK24AnimInstance_Statics::NewProp__isInPowerMode = { "_isInPowerMode", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK24AnimInstance), &Z_Construct_UClass_UK24AnimInstance_Statics::NewProp__isInPowerMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK24AnimInstance_Statics::NewProp__isInPowerMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK24AnimInstance_Statics::NewProp__isInPowerMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK24AnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK24AnimInstance_Statics::NewProp__powerLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK24AnimInstance_Statics::NewProp__isRequestingPowerAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK24AnimInstance_Statics::NewProp__isK24PowerAttacking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK24AnimInstance_Statics::NewProp__isChargingPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK24AnimInstance_Statics::NewProp__isInPowerMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK24AnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK24AnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK24AnimInstance_Statics::ClassParams = {
		&UK24AnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UK24AnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UK24AnimInstance_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UK24AnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK24AnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK24AnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK24AnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK24AnimInstance, 3879110605);
	template<> THEK24_API UClass* StaticClass<UK24AnimInstance>()
	{
		return UK24AnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK24AnimInstance(Z_Construct_UClass_UK24AnimInstance, &UK24AnimInstance::StaticClass, TEXT("/Script/TheK24"), TEXT("UK24AnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK24AnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
