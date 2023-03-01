// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnimation/Public/PalletAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePalletAnimInstance() {}
// Cross Module References
	DBDANIMATION_API UClass* Z_Construct_UClass_UPalletAnimInstance_NoRegister();
	DBDANIMATION_API UClass* Z_Construct_UClass_UPalletAnimInstance();
	ANIMATIONUTILITIES_API UClass* Z_Construct_UClass_USleepingAnimInstance();
	UPackage* Z_Construct_UPackage__Script_DBDAnimation();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
	ANIMATIONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSequenceSelector();
// End Cross Module References
	DEFINE_FUNCTION(UPalletAnimInstance::execOnKillerSet)
	{
		P_GET_OBJECT(ASlasherPlayer,Z_Param_killer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnKillerSet(Z_Param_killer);
		P_NATIVE_END;
	}
	void UPalletAnimInstance::StaticRegisterNativesUPalletAnimInstance()
	{
		UClass* Class = UPalletAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnKillerSet", &UPalletAnimInstance::execOnKillerSet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPalletAnimInstance_OnKillerSet_Statics
	{
		struct PalletAnimInstance_eventOnKillerSet_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPalletAnimInstance_OnKillerSet_Statics::NewProp_killer = { "killer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PalletAnimInstance_eventOnKillerSet_Parms, killer), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPalletAnimInstance_OnKillerSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPalletAnimInstance_OnKillerSet_Statics::NewProp_killer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPalletAnimInstance_OnKillerSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PalletAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPalletAnimInstance_OnKillerSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPalletAnimInstance, nullptr, "OnKillerSet", nullptr, nullptr, sizeof(PalletAnimInstance_eventOnKillerSet_Parms), Z_Construct_UFunction_UPalletAnimInstance_OnKillerSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPalletAnimInstance_OnKillerSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPalletAnimInstance_OnKillerSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPalletAnimInstance_OnKillerSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPalletAnimInstance_OnKillerSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPalletAnimInstance_OnKillerSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPalletAnimInstance_NoRegister()
	{
		return UPalletAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UPalletAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__destroyPalletAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__destroyPalletAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isBeingDestroyedPlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__isBeingDestroyedPlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isBeingDestroyed_MetaData[];
#endif
		static void NewProp__isBeingDestroyed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isBeingDestroyed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isBeingPulledUp_MetaData[];
#endif
		static void NewProp__isBeingPulledUp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isBeingPulledUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isPulledDown_MetaData[];
#endif
		static void NewProp__isPulledDown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isPulledDown;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPalletAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USleepingAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnimation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPalletAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPalletAnimInstance_OnKillerSet, "OnKillerSet" }, // 3076388503
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPalletAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "PalletAnimInstance.h" },
		{ "ModuleRelativePath", "Public/PalletAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPalletAnimInstance_Statics::NewProp__destroyPalletAnim_MetaData[] = {
		{ "Category", "PalletAnimInstance" },
		{ "ModuleRelativePath", "Public/PalletAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPalletAnimInstance_Statics::NewProp__destroyPalletAnim = { "_destroyPalletAnim", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPalletAnimInstance, _destroyPalletAnim), Z_Construct_UScriptStruct_FAnimSequenceSelector, METADATA_PARAMS(Z_Construct_UClass_UPalletAnimInstance_Statics::NewProp__destroyPalletAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPalletAnimInstance_Statics::NewProp__destroyPalletAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPalletAnimInstance_Statics::NewProp__isBeingDestroyedPlayRate_MetaData[] = {
		{ "Category", "PalletAnimInstance" },
		{ "ModuleRelativePath", "Public/PalletAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPalletAnimInstance_Statics::NewProp__isBeingDestroyedPlayRate = { "_isBeingDestroyedPlayRate", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPalletAnimInstance, _isBeingDestroyedPlayRate), METADATA_PARAMS(Z_Construct_UClass_UPalletAnimInstance_Statics::NewProp__isBeingDestroyedPlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPalletAnimInstance_Statics::NewProp__isBeingDestroyedPlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPalletAnimInstance_Statics::NewProp__isBeingDestroyed_MetaData[] = {
		{ "Category", "PalletAnimInstance" },
		{ "ModuleRelativePath", "Public/PalletAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UPalletAnimInstance_Statics::NewProp__isBeingDestroyed_SetBit(void* Obj)
	{
		((UPalletAnimInstance*)Obj)->_isBeingDestroyed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPalletAnimInstance_Statics::NewProp__isBeingDestroyed = { "_isBeingDestroyed", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPalletAnimInstance), &Z_Construct_UClass_UPalletAnimInstance_Statics::NewProp__isBeingDestroyed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPalletAnimInstance_Statics::NewProp__isBeingDestroyed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPalletAnimInstance_Statics::NewProp__isBeingDestroyed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPalletAnimInstance_Statics::NewProp__isBeingPulledUp_MetaData[] = {
		{ "Category", "PalletAnimInstance" },
		{ "ModuleRelativePath", "Public/PalletAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UPalletAnimInstance_Statics::NewProp__isBeingPulledUp_SetBit(void* Obj)
	{
		((UPalletAnimInstance*)Obj)->_isBeingPulledUp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPalletAnimInstance_Statics::NewProp__isBeingPulledUp = { "_isBeingPulledUp", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPalletAnimInstance), &Z_Construct_UClass_UPalletAnimInstance_Statics::NewProp__isBeingPulledUp_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPalletAnimInstance_Statics::NewProp__isBeingPulledUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPalletAnimInstance_Statics::NewProp__isBeingPulledUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPalletAnimInstance_Statics::NewProp__isPulledDown_MetaData[] = {
		{ "Category", "PalletAnimInstance" },
		{ "ModuleRelativePath", "Public/PalletAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UPalletAnimInstance_Statics::NewProp__isPulledDown_SetBit(void* Obj)
	{
		((UPalletAnimInstance*)Obj)->_isPulledDown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPalletAnimInstance_Statics::NewProp__isPulledDown = { "_isPulledDown", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPalletAnimInstance), &Z_Construct_UClass_UPalletAnimInstance_Statics::NewProp__isPulledDown_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPalletAnimInstance_Statics::NewProp__isPulledDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPalletAnimInstance_Statics::NewProp__isPulledDown_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPalletAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPalletAnimInstance_Statics::NewProp__destroyPalletAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPalletAnimInstance_Statics::NewProp__isBeingDestroyedPlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPalletAnimInstance_Statics::NewProp__isBeingDestroyed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPalletAnimInstance_Statics::NewProp__isBeingPulledUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPalletAnimInstance_Statics::NewProp__isPulledDown,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPalletAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPalletAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPalletAnimInstance_Statics::ClassParams = {
		&UPalletAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPalletAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPalletAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPalletAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPalletAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPalletAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPalletAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPalletAnimInstance, 1104921271);
	template<> DBDANIMATION_API UClass* StaticClass<UPalletAnimInstance>()
	{
		return UPalletAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPalletAnimInstance(Z_Construct_UClass_UPalletAnimInstance, &UPalletAnimInstance::StaticClass, TEXT("/Script/DBDAnimation"), TEXT("UPalletAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPalletAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
