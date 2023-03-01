// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnimation/Public/BaseKillerAttackSubAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseKillerAttackSubAnimInstance() {}
// Cross Module References
	DBDANIMATION_API UClass* Z_Construct_UClass_UBaseKillerAttackSubAnimInstance_NoRegister();
	DBDANIMATION_API UClass* Z_Construct_UClass_UBaseKillerAttackSubAnimInstance();
	DBDANIMATION_API UClass* Z_Construct_UClass_UBasePlayerAttackSubAnimInstance();
	UPackage* Z_Construct_UPackage__Script_DBDAnimation();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBaseKillerAttackSubAnimInstance::execGetOwningKiller)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ASlasherPlayer**)Z_Param__Result=P_THIS->GetOwningKiller();
		P_NATIVE_END;
	}
	void UBaseKillerAttackSubAnimInstance::StaticRegisterNativesUBaseKillerAttackSubAnimInstance()
	{
		UClass* Class = UBaseKillerAttackSubAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOwningKiller", &UBaseKillerAttackSubAnimInstance::execGetOwningKiller },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseKillerAttackSubAnimInstance_GetOwningKiller_Statics
	{
		struct BaseKillerAttackSubAnimInstance_eventGetOwningKiller_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseKillerAttackSubAnimInstance_GetOwningKiller_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseKillerAttackSubAnimInstance_eventGetOwningKiller_Parms, ReturnValue), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseKillerAttackSubAnimInstance_GetOwningKiller_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseKillerAttackSubAnimInstance_GetOwningKiller_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseKillerAttackSubAnimInstance_GetOwningKiller_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseKillerAttackSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseKillerAttackSubAnimInstance_GetOwningKiller_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseKillerAttackSubAnimInstance, nullptr, "GetOwningKiller", nullptr, nullptr, sizeof(BaseKillerAttackSubAnimInstance_eventGetOwningKiller_Parms), Z_Construct_UFunction_UBaseKillerAttackSubAnimInstance_GetOwningKiller_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseKillerAttackSubAnimInstance_GetOwningKiller_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseKillerAttackSubAnimInstance_GetOwningKiller_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseKillerAttackSubAnimInstance_GetOwningKiller_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseKillerAttackSubAnimInstance_GetOwningKiller()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseKillerAttackSubAnimInstance_GetOwningKiller_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBaseKillerAttackSubAnimInstance_NoRegister()
	{
		return UBaseKillerAttackSubAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UBaseKillerAttackSubAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__owningKiller_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__owningKiller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseKillerAttackSubAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBasePlayerAttackSubAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnimation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseKillerAttackSubAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseKillerAttackSubAnimInstance_GetOwningKiller, "GetOwningKiller" }, // 3457241184
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseKillerAttackSubAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "BaseKillerAttackSubAnimInstance.h" },
		{ "ModuleRelativePath", "Public/BaseKillerAttackSubAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseKillerAttackSubAnimInstance_Statics::NewProp__owningKiller_MetaData[] = {
		{ "Category", "BaseKillerAttackSubAnimInstance" },
		{ "ModuleRelativePath", "Public/BaseKillerAttackSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseKillerAttackSubAnimInstance_Statics::NewProp__owningKiller = { "_owningKiller", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseKillerAttackSubAnimInstance, _owningKiller), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseKillerAttackSubAnimInstance_Statics::NewProp__owningKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseKillerAttackSubAnimInstance_Statics::NewProp__owningKiller_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseKillerAttackSubAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseKillerAttackSubAnimInstance_Statics::NewProp__owningKiller,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseKillerAttackSubAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseKillerAttackSubAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseKillerAttackSubAnimInstance_Statics::ClassParams = {
		&UBaseKillerAttackSubAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBaseKillerAttackSubAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseKillerAttackSubAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseKillerAttackSubAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseKillerAttackSubAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseKillerAttackSubAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseKillerAttackSubAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseKillerAttackSubAnimInstance, 3528584647);
	template<> DBDANIMATION_API UClass* StaticClass<UBaseKillerAttackSubAnimInstance>()
	{
		return UBaseKillerAttackSubAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseKillerAttackSubAnimInstance(Z_Construct_UClass_UBaseKillerAttackSubAnimInstance, &UBaseKillerAttackSubAnimInstance::StaticClass, TEXT("/Script/DBDAnimation"), TEXT("UBaseKillerAttackSubAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseKillerAttackSubAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
