// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/HasPlayerReachedWiggleFillPercentCondition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHasPlayerReachedWiggleFillPercentCondition() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UHasPlayerReachedWiggleFillPercentCondition_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UHasPlayerReachedWiggleFillPercentCondition();
	COMPETENCE_API UClass* Z_Construct_UClass_UEventDrivenModifierCondition();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UHasPlayerReachedWiggleFillPercentCondition::execAuthority_OnOwnerWiggleChargePercentChanged)
	{
		P_GET_OBJECT(UChargeableComponent,Z_Param_chargeableComponent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_percentCompletionChange);
		P_GET_PROPERTY(FFloatProperty,Z_Param_totalPercentComplete);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnOwnerWiggleChargePercentChanged(Z_Param_chargeableComponent,Z_Param_percentCompletionChange,Z_Param_totalPercentComplete);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHasPlayerReachedWiggleFillPercentCondition::execOnRep_IsWigglePercentReached)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsWigglePercentReached();
		P_NATIVE_END;
	}
	void UHasPlayerReachedWiggleFillPercentCondition::StaticRegisterNativesUHasPlayerReachedWiggleFillPercentCondition()
	{
		UClass* Class = UHasPlayerReachedWiggleFillPercentCondition::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnOwnerWiggleChargePercentChanged", &UHasPlayerReachedWiggleFillPercentCondition::execAuthority_OnOwnerWiggleChargePercentChanged },
			{ "OnRep_IsWigglePercentReached", &UHasPlayerReachedWiggleFillPercentCondition::execOnRep_IsWigglePercentReached },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHasPlayerReachedWiggleFillPercentCondition_Authority_OnOwnerWiggleChargePercentChanged_Statics
	{
		struct HasPlayerReachedWiggleFillPercentCondition_eventAuthority_OnOwnerWiggleChargePercentChanged_Parms
		{
			UChargeableComponent* chargeableComponent;
			float percentCompletionChange;
			float totalPercentComplete;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_totalPercentComplete;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_percentCompletionChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_chargeableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_chargeableComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHasPlayerReachedWiggleFillPercentCondition_Authority_OnOwnerWiggleChargePercentChanged_Statics::NewProp_totalPercentComplete = { "totalPercentComplete", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HasPlayerReachedWiggleFillPercentCondition_eventAuthority_OnOwnerWiggleChargePercentChanged_Parms, totalPercentComplete), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHasPlayerReachedWiggleFillPercentCondition_Authority_OnOwnerWiggleChargePercentChanged_Statics::NewProp_percentCompletionChange = { "percentCompletionChange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HasPlayerReachedWiggleFillPercentCondition_eventAuthority_OnOwnerWiggleChargePercentChanged_Parms, percentCompletionChange), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHasPlayerReachedWiggleFillPercentCondition_Authority_OnOwnerWiggleChargePercentChanged_Statics::NewProp_chargeableComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHasPlayerReachedWiggleFillPercentCondition_Authority_OnOwnerWiggleChargePercentChanged_Statics::NewProp_chargeableComponent = { "chargeableComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HasPlayerReachedWiggleFillPercentCondition_eventAuthority_OnOwnerWiggleChargePercentChanged_Parms, chargeableComponent), Z_Construct_UClass_UChargeableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHasPlayerReachedWiggleFillPercentCondition_Authority_OnOwnerWiggleChargePercentChanged_Statics::NewProp_chargeableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHasPlayerReachedWiggleFillPercentCondition_Authority_OnOwnerWiggleChargePercentChanged_Statics::NewProp_chargeableComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHasPlayerReachedWiggleFillPercentCondition_Authority_OnOwnerWiggleChargePercentChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHasPlayerReachedWiggleFillPercentCondition_Authority_OnOwnerWiggleChargePercentChanged_Statics::NewProp_totalPercentComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHasPlayerReachedWiggleFillPercentCondition_Authority_OnOwnerWiggleChargePercentChanged_Statics::NewProp_percentCompletionChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHasPlayerReachedWiggleFillPercentCondition_Authority_OnOwnerWiggleChargePercentChanged_Statics::NewProp_chargeableComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHasPlayerReachedWiggleFillPercentCondition_Authority_OnOwnerWiggleChargePercentChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HasPlayerReachedWiggleFillPercentCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHasPlayerReachedWiggleFillPercentCondition_Authority_OnOwnerWiggleChargePercentChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHasPlayerReachedWiggleFillPercentCondition, nullptr, "Authority_OnOwnerWiggleChargePercentChanged", nullptr, nullptr, sizeof(HasPlayerReachedWiggleFillPercentCondition_eventAuthority_OnOwnerWiggleChargePercentChanged_Parms), Z_Construct_UFunction_UHasPlayerReachedWiggleFillPercentCondition_Authority_OnOwnerWiggleChargePercentChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHasPlayerReachedWiggleFillPercentCondition_Authority_OnOwnerWiggleChargePercentChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHasPlayerReachedWiggleFillPercentCondition_Authority_OnOwnerWiggleChargePercentChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHasPlayerReachedWiggleFillPercentCondition_Authority_OnOwnerWiggleChargePercentChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHasPlayerReachedWiggleFillPercentCondition_Authority_OnOwnerWiggleChargePercentChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHasPlayerReachedWiggleFillPercentCondition_Authority_OnOwnerWiggleChargePercentChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHasPlayerReachedWiggleFillPercentCondition_OnRep_IsWigglePercentReached_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHasPlayerReachedWiggleFillPercentCondition_OnRep_IsWigglePercentReached_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HasPlayerReachedWiggleFillPercentCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHasPlayerReachedWiggleFillPercentCondition_OnRep_IsWigglePercentReached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHasPlayerReachedWiggleFillPercentCondition, nullptr, "OnRep_IsWigglePercentReached", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHasPlayerReachedWiggleFillPercentCondition_OnRep_IsWigglePercentReached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHasPlayerReachedWiggleFillPercentCondition_OnRep_IsWigglePercentReached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHasPlayerReachedWiggleFillPercentCondition_OnRep_IsWigglePercentReached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHasPlayerReachedWiggleFillPercentCondition_OnRep_IsWigglePercentReached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHasPlayerReachedWiggleFillPercentCondition_NoRegister()
	{
		return UHasPlayerReachedWiggleFillPercentCondition::StaticClass();
	}
	struct Z_Construct_UClass_UHasPlayerReachedWiggleFillPercentCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isWigglePercentReached_MetaData[];
#endif
		static void NewProp__isWigglePercentReached_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isWigglePercentReached;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHasPlayerReachedWiggleFillPercentCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEventDrivenModifierCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHasPlayerReachedWiggleFillPercentCondition_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHasPlayerReachedWiggleFillPercentCondition_Authority_OnOwnerWiggleChargePercentChanged, "Authority_OnOwnerWiggleChargePercentChanged" }, // 3734488766
		{ &Z_Construct_UFunction_UHasPlayerReachedWiggleFillPercentCondition_OnRep_IsWigglePercentReached, "OnRep_IsWigglePercentReached" }, // 3604544829
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHasPlayerReachedWiggleFillPercentCondition_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HasPlayerReachedWiggleFillPercentCondition.h" },
		{ "ModuleRelativePath", "Public/HasPlayerReachedWiggleFillPercentCondition.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHasPlayerReachedWiggleFillPercentCondition_Statics::NewProp__isWigglePercentReached_MetaData[] = {
		{ "ModuleRelativePath", "Public/HasPlayerReachedWiggleFillPercentCondition.h" },
	};
#endif
	void Z_Construct_UClass_UHasPlayerReachedWiggleFillPercentCondition_Statics::NewProp__isWigglePercentReached_SetBit(void* Obj)
	{
		((UHasPlayerReachedWiggleFillPercentCondition*)Obj)->_isWigglePercentReached = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHasPlayerReachedWiggleFillPercentCondition_Statics::NewProp__isWigglePercentReached = { "_isWigglePercentReached", "OnRep_IsWigglePercentReached", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHasPlayerReachedWiggleFillPercentCondition), &Z_Construct_UClass_UHasPlayerReachedWiggleFillPercentCondition_Statics::NewProp__isWigglePercentReached_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHasPlayerReachedWiggleFillPercentCondition_Statics::NewProp__isWigglePercentReached_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHasPlayerReachedWiggleFillPercentCondition_Statics::NewProp__isWigglePercentReached_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHasPlayerReachedWiggleFillPercentCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHasPlayerReachedWiggleFillPercentCondition_Statics::NewProp__isWigglePercentReached,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHasPlayerReachedWiggleFillPercentCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHasPlayerReachedWiggleFillPercentCondition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHasPlayerReachedWiggleFillPercentCondition_Statics::ClassParams = {
		&UHasPlayerReachedWiggleFillPercentCondition::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHasPlayerReachedWiggleFillPercentCondition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHasPlayerReachedWiggleFillPercentCondition_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHasPlayerReachedWiggleFillPercentCondition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHasPlayerReachedWiggleFillPercentCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHasPlayerReachedWiggleFillPercentCondition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHasPlayerReachedWiggleFillPercentCondition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHasPlayerReachedWiggleFillPercentCondition, 2031199888);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UHasPlayerReachedWiggleFillPercentCondition>()
	{
		return UHasPlayerReachedWiggleFillPercentCondition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHasPlayerReachedWiggleFillPercentCondition(Z_Construct_UClass_UHasPlayerReachedWiggleFillPercentCondition, &UHasPlayerReachedWiggleFillPercentCondition::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UHasPlayerReachedWiggleFillPercentCondition"), false, nullptr, nullptr, nullptr);

	void UHasPlayerReachedWiggleFillPercentCondition::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__isWigglePercentReached(TEXT("_isWigglePercentReached"));

		const bool bIsValid = true
			&& Name__isWigglePercentReached == ClassReps[(int32)ENetFields_Private::_isWigglePercentReached].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UHasPlayerReachedWiggleFillPercentCondition"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHasPlayerReachedWiggleFillPercentCondition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
