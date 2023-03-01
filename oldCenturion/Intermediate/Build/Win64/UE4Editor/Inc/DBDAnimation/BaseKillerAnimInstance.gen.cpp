// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnimation/Public/BaseKillerAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseKillerAnimInstance() {}
// Cross Module References
	DBDANIMATION_API UClass* Z_Construct_UClass_UBaseKillerAnimInstance_NoRegister();
	DBDANIMATION_API UClass* Z_Construct_UClass_UBaseKillerAnimInstance();
	DBDANIMATION_API UClass* Z_Construct_UClass_UPlayerAnimInstance();
	UPackage* Z_Construct_UPackage__Script_DBDAnimation();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBaseKillerAnimInstance::execDBD_ForceAnimPOV)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_animPOV);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_ForceAnimPOV(Z_Param_animPOV);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseKillerAnimInstance::execGetOwningKiller)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ASlasherPlayer**)Z_Param__Result=P_THIS->GetOwningKiller();
		P_NATIVE_END;
	}
	void UBaseKillerAnimInstance::StaticRegisterNativesUBaseKillerAnimInstance()
	{
		UClass* Class = UBaseKillerAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DBD_ForceAnimPOV", &UBaseKillerAnimInstance::execDBD_ForceAnimPOV },
			{ "GetOwningKiller", &UBaseKillerAnimInstance::execGetOwningKiller },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseKillerAnimInstance_DBD_ForceAnimPOV_Statics
	{
		struct BaseKillerAnimInstance_eventDBD_ForceAnimPOV_Parms
		{
			int32 animPOV;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_animPOV_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_animPOV;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseKillerAnimInstance_DBD_ForceAnimPOV_Statics::NewProp_animPOV_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseKillerAnimInstance_DBD_ForceAnimPOV_Statics::NewProp_animPOV = { "animPOV", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseKillerAnimInstance_eventDBD_ForceAnimPOV_Parms, animPOV), METADATA_PARAMS(Z_Construct_UFunction_UBaseKillerAnimInstance_DBD_ForceAnimPOV_Statics::NewProp_animPOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseKillerAnimInstance_DBD_ForceAnimPOV_Statics::NewProp_animPOV_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseKillerAnimInstance_DBD_ForceAnimPOV_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseKillerAnimInstance_DBD_ForceAnimPOV_Statics::NewProp_animPOV,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseKillerAnimInstance_DBD_ForceAnimPOV_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseKillerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseKillerAnimInstance_DBD_ForceAnimPOV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseKillerAnimInstance, nullptr, "DBD_ForceAnimPOV", nullptr, nullptr, sizeof(BaseKillerAnimInstance_eventDBD_ForceAnimPOV_Parms), Z_Construct_UFunction_UBaseKillerAnimInstance_DBD_ForceAnimPOV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseKillerAnimInstance_DBD_ForceAnimPOV_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseKillerAnimInstance_DBD_ForceAnimPOV_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseKillerAnimInstance_DBD_ForceAnimPOV_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseKillerAnimInstance_DBD_ForceAnimPOV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseKillerAnimInstance_DBD_ForceAnimPOV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseKillerAnimInstance_GetOwningKiller_Statics
	{
		struct BaseKillerAnimInstance_eventGetOwningKiller_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseKillerAnimInstance_GetOwningKiller_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseKillerAnimInstance_eventGetOwningKiller_Parms, ReturnValue), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseKillerAnimInstance_GetOwningKiller_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseKillerAnimInstance_GetOwningKiller_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseKillerAnimInstance_GetOwningKiller_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseKillerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseKillerAnimInstance_GetOwningKiller_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseKillerAnimInstance, nullptr, "GetOwningKiller", nullptr, nullptr, sizeof(BaseKillerAnimInstance_eventGetOwningKiller_Parms), Z_Construct_UFunction_UBaseKillerAnimInstance_GetOwningKiller_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseKillerAnimInstance_GetOwningKiller_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseKillerAnimInstance_GetOwningKiller_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseKillerAnimInstance_GetOwningKiller_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseKillerAnimInstance_GetOwningKiller()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseKillerAnimInstance_GetOwningKiller_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBaseKillerAnimInstance_NoRegister()
	{
		return UBaseKillerAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UBaseKillerAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__firstPersonView_MetaData[];
#endif
		static void NewProp__firstPersonView_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__firstPersonView;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__owningKiller_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__owningKiller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseKillerAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlayerAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnimation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseKillerAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseKillerAnimInstance_DBD_ForceAnimPOV, "DBD_ForceAnimPOV" }, // 2574784422
		{ &Z_Construct_UFunction_UBaseKillerAnimInstance_GetOwningKiller, "GetOwningKiller" }, // 3357080002
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseKillerAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "BaseKillerAnimInstance.h" },
		{ "ModuleRelativePath", "Public/BaseKillerAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseKillerAnimInstance_Statics::NewProp__firstPersonView_MetaData[] = {
		{ "Category", "BaseKillerAnimInstance" },
		{ "ModuleRelativePath", "Public/BaseKillerAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UBaseKillerAnimInstance_Statics::NewProp__firstPersonView_SetBit(void* Obj)
	{
		((UBaseKillerAnimInstance*)Obj)->_firstPersonView = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseKillerAnimInstance_Statics::NewProp__firstPersonView = { "_firstPersonView", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBaseKillerAnimInstance), &Z_Construct_UClass_UBaseKillerAnimInstance_Statics::NewProp__firstPersonView_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBaseKillerAnimInstance_Statics::NewProp__firstPersonView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseKillerAnimInstance_Statics::NewProp__firstPersonView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseKillerAnimInstance_Statics::NewProp__owningKiller_MetaData[] = {
		{ "Category", "BaseKillerAnimInstance" },
		{ "ModuleRelativePath", "Public/BaseKillerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseKillerAnimInstance_Statics::NewProp__owningKiller = { "_owningKiller", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseKillerAnimInstance, _owningKiller), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseKillerAnimInstance_Statics::NewProp__owningKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseKillerAnimInstance_Statics::NewProp__owningKiller_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseKillerAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseKillerAnimInstance_Statics::NewProp__firstPersonView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseKillerAnimInstance_Statics::NewProp__owningKiller,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseKillerAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseKillerAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseKillerAnimInstance_Statics::ClassParams = {
		&UBaseKillerAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBaseKillerAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseKillerAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseKillerAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseKillerAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseKillerAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseKillerAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseKillerAnimInstance, 1646232077);
	template<> DBDANIMATION_API UClass* StaticClass<UBaseKillerAnimInstance>()
	{
		return UBaseKillerAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseKillerAnimInstance(Z_Construct_UClass_UBaseKillerAnimInstance, &UBaseKillerAnimInstance::StaticClass, TEXT("/Script/DBDAnimation"), TEXT("UBaseKillerAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseKillerAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
