// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheExecutioner/Public/TheExecutionerAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTheExecutionerAnimInstance() {}
// Cross Module References
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UTheExecutionerAnimInstance_NoRegister();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UTheExecutionerAnimInstance();
	DBDANIMATION_API UClass* Z_Construct_UClass_UKillerAnimInstance();
	UPackage* Z_Construct_UPackage__Script_TheExecutioner();
// End Cross Module References
	static FName NAME_UTheExecutionerAnimInstance_NoInputFeedbackCosmetic = FName(TEXT("NoInputFeedbackCosmetic"));
	void UTheExecutionerAnimInstance::NoInputFeedbackCosmetic()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTheExecutionerAnimInstance_NoInputFeedbackCosmetic),NULL);
	}
	void UTheExecutionerAnimInstance::StaticRegisterNativesUTheExecutionerAnimInstance()
	{
	}
	struct Z_Construct_UFunction_UTheExecutionerAnimInstance_NoInputFeedbackCosmetic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTheExecutionerAnimInstance_NoInputFeedbackCosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TheExecutionerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTheExecutionerAnimInstance_NoInputFeedbackCosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTheExecutionerAnimInstance, nullptr, "NoInputFeedbackCosmetic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTheExecutionerAnimInstance_NoInputFeedbackCosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTheExecutionerAnimInstance_NoInputFeedbackCosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTheExecutionerAnimInstance_NoInputFeedbackCosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTheExecutionerAnimInstance_NoInputFeedbackCosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTheExecutionerAnimInstance_NoRegister()
	{
		return UTheExecutionerAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UTheExecutionerAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tormentModeHorizontalInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__tormentModeHorizontalInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tormentModeVerticalInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__tormentModeVerticalInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isTormentModeAttacking_MetaData[];
#endif
		static void NewProp__isTormentModeAttacking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isTormentModeAttacking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isChargingTormentMode_MetaData[];
#endif
		static void NewProp__isChargingTormentMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isChargingTormentMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isInTormentMode_MetaData[];
#endif
		static void NewProp__isInTormentMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isInTormentMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTheExecutionerAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKillerAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TheExecutioner,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTheExecutionerAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTheExecutionerAnimInstance_NoInputFeedbackCosmetic, "NoInputFeedbackCosmetic" }, // 2634131742
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTheExecutionerAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "TheExecutionerAnimInstance.h" },
		{ "ModuleRelativePath", "Public/TheExecutionerAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTheExecutionerAnimInstance_Statics::NewProp__tormentModeHorizontalInput_MetaData[] = {
		{ "Category", "TheExecutionerAnimInstance" },
		{ "ModuleRelativePath", "Public/TheExecutionerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTheExecutionerAnimInstance_Statics::NewProp__tormentModeHorizontalInput = { "_tormentModeHorizontalInput", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTheExecutionerAnimInstance, _tormentModeHorizontalInput), METADATA_PARAMS(Z_Construct_UClass_UTheExecutionerAnimInstance_Statics::NewProp__tormentModeHorizontalInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTheExecutionerAnimInstance_Statics::NewProp__tormentModeHorizontalInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTheExecutionerAnimInstance_Statics::NewProp__tormentModeVerticalInput_MetaData[] = {
		{ "Category", "TheExecutionerAnimInstance" },
		{ "ModuleRelativePath", "Public/TheExecutionerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTheExecutionerAnimInstance_Statics::NewProp__tormentModeVerticalInput = { "_tormentModeVerticalInput", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTheExecutionerAnimInstance, _tormentModeVerticalInput), METADATA_PARAMS(Z_Construct_UClass_UTheExecutionerAnimInstance_Statics::NewProp__tormentModeVerticalInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTheExecutionerAnimInstance_Statics::NewProp__tormentModeVerticalInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTheExecutionerAnimInstance_Statics::NewProp__isTormentModeAttacking_MetaData[] = {
		{ "Category", "TheExecutionerAnimInstance" },
		{ "ModuleRelativePath", "Public/TheExecutionerAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UTheExecutionerAnimInstance_Statics::NewProp__isTormentModeAttacking_SetBit(void* Obj)
	{
		((UTheExecutionerAnimInstance*)Obj)->_isTormentModeAttacking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTheExecutionerAnimInstance_Statics::NewProp__isTormentModeAttacking = { "_isTormentModeAttacking", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTheExecutionerAnimInstance), &Z_Construct_UClass_UTheExecutionerAnimInstance_Statics::NewProp__isTormentModeAttacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTheExecutionerAnimInstance_Statics::NewProp__isTormentModeAttacking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTheExecutionerAnimInstance_Statics::NewProp__isTormentModeAttacking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTheExecutionerAnimInstance_Statics::NewProp__isChargingTormentMode_MetaData[] = {
		{ "Category", "TheExecutionerAnimInstance" },
		{ "ModuleRelativePath", "Public/TheExecutionerAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UTheExecutionerAnimInstance_Statics::NewProp__isChargingTormentMode_SetBit(void* Obj)
	{
		((UTheExecutionerAnimInstance*)Obj)->_isChargingTormentMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTheExecutionerAnimInstance_Statics::NewProp__isChargingTormentMode = { "_isChargingTormentMode", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTheExecutionerAnimInstance), &Z_Construct_UClass_UTheExecutionerAnimInstance_Statics::NewProp__isChargingTormentMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTheExecutionerAnimInstance_Statics::NewProp__isChargingTormentMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTheExecutionerAnimInstance_Statics::NewProp__isChargingTormentMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTheExecutionerAnimInstance_Statics::NewProp__isInTormentMode_MetaData[] = {
		{ "Category", "TheExecutionerAnimInstance" },
		{ "ModuleRelativePath", "Public/TheExecutionerAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UTheExecutionerAnimInstance_Statics::NewProp__isInTormentMode_SetBit(void* Obj)
	{
		((UTheExecutionerAnimInstance*)Obj)->_isInTormentMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTheExecutionerAnimInstance_Statics::NewProp__isInTormentMode = { "_isInTormentMode", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTheExecutionerAnimInstance), &Z_Construct_UClass_UTheExecutionerAnimInstance_Statics::NewProp__isInTormentMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTheExecutionerAnimInstance_Statics::NewProp__isInTormentMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTheExecutionerAnimInstance_Statics::NewProp__isInTormentMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTheExecutionerAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTheExecutionerAnimInstance_Statics::NewProp__tormentModeHorizontalInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTheExecutionerAnimInstance_Statics::NewProp__tormentModeVerticalInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTheExecutionerAnimInstance_Statics::NewProp__isTormentModeAttacking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTheExecutionerAnimInstance_Statics::NewProp__isChargingTormentMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTheExecutionerAnimInstance_Statics::NewProp__isInTormentMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTheExecutionerAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTheExecutionerAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTheExecutionerAnimInstance_Statics::ClassParams = {
		&UTheExecutionerAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTheExecutionerAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTheExecutionerAnimInstance_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UTheExecutionerAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTheExecutionerAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTheExecutionerAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTheExecutionerAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTheExecutionerAnimInstance, 1734825851);
	template<> THEEXECUTIONER_API UClass* StaticClass<UTheExecutionerAnimInstance>()
	{
		return UTheExecutionerAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTheExecutionerAnimInstance(Z_Construct_UClass_UTheExecutionerAnimInstance, &UTheExecutionerAnimInstance::StaticClass, TEXT("/Script/TheExecutioner"), TEXT("UTheExecutionerAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTheExecutionerAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
