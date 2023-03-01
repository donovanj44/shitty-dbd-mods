// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnimation/Public/BaseSurvivorAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseSurvivorAnimInstance() {}
// Cross Module References
	DBDANIMATION_API UClass* Z_Construct_UClass_UBaseSurvivorAnimInstance_NoRegister();
	DBDANIMATION_API UClass* Z_Construct_UClass_UBaseSurvivorAnimInstance();
	DBDANIMATION_API UClass* Z_Construct_UClass_UPlayerAnimInstance();
	UPackage* Z_Construct_UPackage__Script_DBDAnimation();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBaseSurvivorAnimInstance::execGetOwningSurvivor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACamperPlayer**)Z_Param__Result=P_THIS->GetOwningSurvivor();
		P_NATIVE_END;
	}
	void UBaseSurvivorAnimInstance::StaticRegisterNativesUBaseSurvivorAnimInstance()
	{
		UClass* Class = UBaseSurvivorAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOwningSurvivor", &UBaseSurvivorAnimInstance::execGetOwningSurvivor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseSurvivorAnimInstance_GetOwningSurvivor_Statics
	{
		struct BaseSurvivorAnimInstance_eventGetOwningSurvivor_Parms
		{
			ACamperPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseSurvivorAnimInstance_GetOwningSurvivor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseSurvivorAnimInstance_eventGetOwningSurvivor_Parms, ReturnValue), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseSurvivorAnimInstance_GetOwningSurvivor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseSurvivorAnimInstance_GetOwningSurvivor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseSurvivorAnimInstance_GetOwningSurvivor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseSurvivorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseSurvivorAnimInstance_GetOwningSurvivor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseSurvivorAnimInstance, nullptr, "GetOwningSurvivor", nullptr, nullptr, sizeof(BaseSurvivorAnimInstance_eventGetOwningSurvivor_Parms), Z_Construct_UFunction_UBaseSurvivorAnimInstance_GetOwningSurvivor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseSurvivorAnimInstance_GetOwningSurvivor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseSurvivorAnimInstance_GetOwningSurvivor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseSurvivorAnimInstance_GetOwningSurvivor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseSurvivorAnimInstance_GetOwningSurvivor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseSurvivorAnimInstance_GetOwningSurvivor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBaseSurvivorAnimInstance_NoRegister()
	{
		return UBaseSurvivorAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UBaseSurvivorAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__owningSurvivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__owningSurvivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseSurvivorAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlayerAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnimation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseSurvivorAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseSurvivorAnimInstance_GetOwningSurvivor, "GetOwningSurvivor" }, // 1759013268
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseSurvivorAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "BaseSurvivorAnimInstance.h" },
		{ "ModuleRelativePath", "Public/BaseSurvivorAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseSurvivorAnimInstance_Statics::NewProp__owningSurvivor_MetaData[] = {
		{ "Category", "BaseSurvivorAnimInstance" },
		{ "ModuleRelativePath", "Public/BaseSurvivorAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseSurvivorAnimInstance_Statics::NewProp__owningSurvivor = { "_owningSurvivor", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseSurvivorAnimInstance, _owningSurvivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseSurvivorAnimInstance_Statics::NewProp__owningSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseSurvivorAnimInstance_Statics::NewProp__owningSurvivor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseSurvivorAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseSurvivorAnimInstance_Statics::NewProp__owningSurvivor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseSurvivorAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseSurvivorAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseSurvivorAnimInstance_Statics::ClassParams = {
		&UBaseSurvivorAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBaseSurvivorAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseSurvivorAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseSurvivorAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseSurvivorAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseSurvivorAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseSurvivorAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseSurvivorAnimInstance, 1325430712);
	template<> DBDANIMATION_API UClass* StaticClass<UBaseSurvivorAnimInstance>()
	{
		return UBaseSurvivorAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseSurvivorAnimInstance(Z_Construct_UClass_UBaseSurvivorAnimInstance, &UBaseSurvivorAnimInstance::StaticClass, TEXT("/Script/DBDAnimation"), TEXT("UBaseSurvivorAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseSurvivorAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
