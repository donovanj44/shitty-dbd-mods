// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDInteraction/Public/DestroyDemogorgonPortalInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDestroyDemogorgonPortalInteraction() {}
// Cross Module References
	DBDINTERACTION_API UClass* Z_Construct_UClass_UDestroyDemogorgonPortalInteraction_NoRegister();
	DBDINTERACTION_API UClass* Z_Construct_UClass_UDestroyDemogorgonPortalInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_DBDInteraction();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADemogorgonPortal_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDestroyDemogorgonPortalInteraction::execAuthority_OnChargeApplied)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_individualChargeAmount);
		P_GET_PROPERTY(FFloatProperty,Z_Param_totalChargeAmount);
		P_GET_OBJECT(AActor,Z_Param_chargeInstigator);
		P_GET_UBOOL(Z_Param_wasCoop);
		P_GET_PROPERTY(FFloatProperty,Z_Param_deltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnChargeApplied(Z_Param_individualChargeAmount,Z_Param_totalChargeAmount,Z_Param_chargeInstigator,Z_Param_wasCoop,Z_Param_deltaTime);
		P_NATIVE_END;
	}
	void UDestroyDemogorgonPortalInteraction::StaticRegisterNativesUDestroyDemogorgonPortalInteraction()
	{
		UClass* Class = UDestroyDemogorgonPortalInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnChargeApplied", &UDestroyDemogorgonPortalInteraction::execAuthority_OnChargeApplied },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDestroyDemogorgonPortalInteraction_Authority_OnChargeApplied_Statics
	{
		struct DestroyDemogorgonPortalInteraction_eventAuthority_OnChargeApplied_Parms
		{
			float individualChargeAmount;
			float totalChargeAmount;
			AActor* chargeInstigator;
			bool wasCoop;
			float deltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_deltaTime;
		static void NewProp_wasCoop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_wasCoop;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_chargeInstigator;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_totalChargeAmount;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_individualChargeAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDestroyDemogorgonPortalInteraction_Authority_OnChargeApplied_Statics::NewProp_deltaTime = { "deltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DestroyDemogorgonPortalInteraction_eventAuthority_OnChargeApplied_Parms, deltaTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDestroyDemogorgonPortalInteraction_Authority_OnChargeApplied_Statics::NewProp_wasCoop_SetBit(void* Obj)
	{
		((DestroyDemogorgonPortalInteraction_eventAuthority_OnChargeApplied_Parms*)Obj)->wasCoop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDestroyDemogorgonPortalInteraction_Authority_OnChargeApplied_Statics::NewProp_wasCoop = { "wasCoop", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DestroyDemogorgonPortalInteraction_eventAuthority_OnChargeApplied_Parms), &Z_Construct_UFunction_UDestroyDemogorgonPortalInteraction_Authority_OnChargeApplied_Statics::NewProp_wasCoop_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDestroyDemogorgonPortalInteraction_Authority_OnChargeApplied_Statics::NewProp_chargeInstigator = { "chargeInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DestroyDemogorgonPortalInteraction_eventAuthority_OnChargeApplied_Parms, chargeInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDestroyDemogorgonPortalInteraction_Authority_OnChargeApplied_Statics::NewProp_totalChargeAmount = { "totalChargeAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DestroyDemogorgonPortalInteraction_eventAuthority_OnChargeApplied_Parms, totalChargeAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDestroyDemogorgonPortalInteraction_Authority_OnChargeApplied_Statics::NewProp_individualChargeAmount = { "individualChargeAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DestroyDemogorgonPortalInteraction_eventAuthority_OnChargeApplied_Parms, individualChargeAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDestroyDemogorgonPortalInteraction_Authority_OnChargeApplied_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDestroyDemogorgonPortalInteraction_Authority_OnChargeApplied_Statics::NewProp_deltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDestroyDemogorgonPortalInteraction_Authority_OnChargeApplied_Statics::NewProp_wasCoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDestroyDemogorgonPortalInteraction_Authority_OnChargeApplied_Statics::NewProp_chargeInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDestroyDemogorgonPortalInteraction_Authority_OnChargeApplied_Statics::NewProp_totalChargeAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDestroyDemogorgonPortalInteraction_Authority_OnChargeApplied_Statics::NewProp_individualChargeAmount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDestroyDemogorgonPortalInteraction_Authority_OnChargeApplied_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DestroyDemogorgonPortalInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDestroyDemogorgonPortalInteraction_Authority_OnChargeApplied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDestroyDemogorgonPortalInteraction, nullptr, "Authority_OnChargeApplied", nullptr, nullptr, sizeof(DestroyDemogorgonPortalInteraction_eventAuthority_OnChargeApplied_Parms), Z_Construct_UFunction_UDestroyDemogorgonPortalInteraction_Authority_OnChargeApplied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDestroyDemogorgonPortalInteraction_Authority_OnChargeApplied_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDestroyDemogorgonPortalInteraction_Authority_OnChargeApplied_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDestroyDemogorgonPortalInteraction_Authority_OnChargeApplied_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDestroyDemogorgonPortalInteraction_Authority_OnChargeApplied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDestroyDemogorgonPortalInteraction_Authority_OnChargeApplied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDestroyDemogorgonPortalInteraction_NoRegister()
	{
		return UDestroyDemogorgonPortalInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UDestroyDemogorgonPortalInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__owningPortal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__owningPortal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDestroyDemogorgonPortalInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChargeableInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDInteraction,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDestroyDemogorgonPortalInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDestroyDemogorgonPortalInteraction_Authority_OnChargeApplied, "Authority_OnChargeApplied" }, // 3942069280
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDestroyDemogorgonPortalInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "DestroyDemogorgonPortalInteraction.h" },
		{ "ModuleRelativePath", "Public/DestroyDemogorgonPortalInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDestroyDemogorgonPortalInteraction_Statics::NewProp__owningPortal_MetaData[] = {
		{ "ModuleRelativePath", "Public/DestroyDemogorgonPortalInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDestroyDemogorgonPortalInteraction_Statics::NewProp__owningPortal = { "_owningPortal", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDestroyDemogorgonPortalInteraction, _owningPortal), Z_Construct_UClass_ADemogorgonPortal_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDestroyDemogorgonPortalInteraction_Statics::NewProp__owningPortal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDestroyDemogorgonPortalInteraction_Statics::NewProp__owningPortal_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDestroyDemogorgonPortalInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDestroyDemogorgonPortalInteraction_Statics::NewProp__owningPortal,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDestroyDemogorgonPortalInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDestroyDemogorgonPortalInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDestroyDemogorgonPortalInteraction_Statics::ClassParams = {
		&UDestroyDemogorgonPortalInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDestroyDemogorgonPortalInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDestroyDemogorgonPortalInteraction_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDestroyDemogorgonPortalInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDestroyDemogorgonPortalInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDestroyDemogorgonPortalInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDestroyDemogorgonPortalInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDestroyDemogorgonPortalInteraction, 3792112162);
	template<> DBDINTERACTION_API UClass* StaticClass<UDestroyDemogorgonPortalInteraction>()
	{
		return UDestroyDemogorgonPortalInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDestroyDemogorgonPortalInteraction(Z_Construct_UClass_UDestroyDemogorgonPortalInteraction, &UDestroyDemogorgonPortalInteraction::StaticClass, TEXT("/Script/DBDInteraction"), TEXT("UDestroyDemogorgonPortalInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDestroyDemogorgonPortalInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
