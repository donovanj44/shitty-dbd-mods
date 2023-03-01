// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheDemogorgon/Public/DemogorgonHuskAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDemogorgonHuskAnimInstance() {}
// Cross Module References
	THEDEMOGORGON_API UClass* Z_Construct_UClass_UDemogorgonHuskAnimInstance_NoRegister();
	THEDEMOGORGON_API UClass* Z_Construct_UClass_UDemogorgonHuskAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_TheDemogorgon();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPortalPlacerStateComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDemogorgonHuskAnimInstance::execOnKillerSet)
	{
		P_GET_OBJECT(ASlasherPlayer,Z_Param_killer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnKillerSet(Z_Param_killer);
		P_NATIVE_END;
	}
	void UDemogorgonHuskAnimInstance::StaticRegisterNativesUDemogorgonHuskAnimInstance()
	{
		UClass* Class = UDemogorgonHuskAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnKillerSet", &UDemogorgonHuskAnimInstance::execOnKillerSet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDemogorgonHuskAnimInstance_OnKillerSet_Statics
	{
		struct DemogorgonHuskAnimInstance_eventOnKillerSet_Parms
		{
			ASlasherPlayer* killer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_killer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDemogorgonHuskAnimInstance_OnKillerSet_Statics::NewProp_killer = { "killer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DemogorgonHuskAnimInstance_eventOnKillerSet_Parms, killer), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDemogorgonHuskAnimInstance_OnKillerSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDemogorgonHuskAnimInstance_OnKillerSet_Statics::NewProp_killer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDemogorgonHuskAnimInstance_OnKillerSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DemogorgonHuskAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDemogorgonHuskAnimInstance_OnKillerSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDemogorgonHuskAnimInstance, nullptr, "OnKillerSet", nullptr, nullptr, sizeof(DemogorgonHuskAnimInstance_eventOnKillerSet_Parms), Z_Construct_UFunction_UDemogorgonHuskAnimInstance_OnKillerSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDemogorgonHuskAnimInstance_OnKillerSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDemogorgonHuskAnimInstance_OnKillerSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDemogorgonHuskAnimInstance_OnKillerSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDemogorgonHuskAnimInstance_OnKillerSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDemogorgonHuskAnimInstance_OnKillerSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDemogorgonHuskAnimInstance_NoRegister()
	{
		return UDemogorgonHuskAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__demogorgonPortalPlacerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__demogorgonPortalPlacerState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__owningPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__owningPawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__demogorgonPortalEntry_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__demogorgonPortalEntry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__demogorgonPortalExit_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__demogorgonPortalExit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__huskPortalExit_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__huskPortalExit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__huskPortalSlowerExit_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__huskPortalSlowerExit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isSlowerExit_MetaData[];
#endif
		static void NewProp__isSlowerExit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isSlowerExit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__teleportExitPlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__teleportExitPlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__teleportDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__teleportDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TheDemogorgon,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDemogorgonHuskAnimInstance_OnKillerSet, "OnKillerSet" }, // 2181620777
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "DemogorgonHuskAnimInstance.h" },
		{ "ModuleRelativePath", "Public/DemogorgonHuskAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::NewProp__demogorgonPortalPlacerState_MetaData[] = {
		{ "ModuleRelativePath", "Public/DemogorgonHuskAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::NewProp__demogorgonPortalPlacerState = { "_demogorgonPortalPlacerState", nullptr, (EPropertyFlags)0x0044000000082008, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDemogorgonHuskAnimInstance, _demogorgonPortalPlacerState), Z_Construct_UClass_UPortalPlacerStateComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::NewProp__demogorgonPortalPlacerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::NewProp__demogorgonPortalPlacerState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::NewProp__owningPawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/DemogorgonHuskAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::NewProp__owningPawn = { "_owningPawn", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDemogorgonHuskAnimInstance, _owningPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::NewProp__owningPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::NewProp__owningPawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::NewProp__demogorgonPortalEntry_MetaData[] = {
		{ "Category", "DemogorgonHuskAnimInstance" },
		{ "ModuleRelativePath", "Public/DemogorgonHuskAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::NewProp__demogorgonPortalEntry = { "_demogorgonPortalEntry", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDemogorgonHuskAnimInstance, _demogorgonPortalEntry), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::NewProp__demogorgonPortalEntry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::NewProp__demogorgonPortalEntry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::NewProp__demogorgonPortalExit_MetaData[] = {
		{ "Category", "DemogorgonHuskAnimInstance" },
		{ "ModuleRelativePath", "Public/DemogorgonHuskAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::NewProp__demogorgonPortalExit = { "_demogorgonPortalExit", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDemogorgonHuskAnimInstance, _demogorgonPortalExit), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::NewProp__demogorgonPortalExit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::NewProp__demogorgonPortalExit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::NewProp__huskPortalExit_MetaData[] = {
		{ "Category", "DemogorgonHuskAnimInstance" },
		{ "ModuleRelativePath", "Public/DemogorgonHuskAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::NewProp__huskPortalExit = { "_huskPortalExit", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDemogorgonHuskAnimInstance, _huskPortalExit), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::NewProp__huskPortalExit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::NewProp__huskPortalExit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::NewProp__huskPortalSlowerExit_MetaData[] = {
		{ "Category", "DemogorgonHuskAnimInstance" },
		{ "ModuleRelativePath", "Public/DemogorgonHuskAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::NewProp__huskPortalSlowerExit = { "_huskPortalSlowerExit", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDemogorgonHuskAnimInstance, _huskPortalSlowerExit), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::NewProp__huskPortalSlowerExit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::NewProp__huskPortalSlowerExit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::NewProp__isSlowerExit_MetaData[] = {
		{ "Category", "DemogorgonHuskAnimInstance" },
		{ "ModuleRelativePath", "Public/DemogorgonHuskAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::NewProp__isSlowerExit_SetBit(void* Obj)
	{
		((UDemogorgonHuskAnimInstance*)Obj)->_isSlowerExit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::NewProp__isSlowerExit = { "_isSlowerExit", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDemogorgonHuskAnimInstance), &Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::NewProp__isSlowerExit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::NewProp__isSlowerExit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::NewProp__isSlowerExit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::NewProp__teleportExitPlayRate_MetaData[] = {
		{ "Category", "DemogorgonHuskAnimInstance" },
		{ "ModuleRelativePath", "Public/DemogorgonHuskAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::NewProp__teleportExitPlayRate = { "_teleportExitPlayRate", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDemogorgonHuskAnimInstance, _teleportExitPlayRate), METADATA_PARAMS(Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::NewProp__teleportExitPlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::NewProp__teleportExitPlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::NewProp__teleportDuration_MetaData[] = {
		{ "Category", "DemogorgonHuskAnimInstance" },
		{ "ModuleRelativePath", "Public/DemogorgonHuskAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::NewProp__teleportDuration = { "_teleportDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDemogorgonHuskAnimInstance, _teleportDuration), METADATA_PARAMS(Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::NewProp__teleportDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::NewProp__teleportDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::NewProp__demogorgonPortalPlacerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::NewProp__owningPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::NewProp__demogorgonPortalEntry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::NewProp__demogorgonPortalExit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::NewProp__huskPortalExit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::NewProp__huskPortalSlowerExit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::NewProp__isSlowerExit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::NewProp__teleportExitPlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::NewProp__teleportDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDemogorgonHuskAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::ClassParams = {
		&UDemogorgonHuskAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDemogorgonHuskAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDemogorgonHuskAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDemogorgonHuskAnimInstance, 3011924935);
	template<> THEDEMOGORGON_API UClass* StaticClass<UDemogorgonHuskAnimInstance>()
	{
		return UDemogorgonHuskAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDemogorgonHuskAnimInstance(Z_Construct_UClass_UDemogorgonHuskAnimInstance, &UDemogorgonHuskAnimInstance::StaticClass, TEXT("/Script/TheDemogorgon"), TEXT("UDemogorgonHuskAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDemogorgonHuskAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
