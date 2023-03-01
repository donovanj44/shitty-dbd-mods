// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/S28P01.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeS28P01() {}
// Cross Module References
	THEK25_API UClass* Z_Construct_UClass_US28P01_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_US28P01();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_TheK25();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(US28P01::execOnRep_IsInteractionOngoing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsInteractionOngoing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(US28P01::execOnRep_IsPerkActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsPerkActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(US28P01::execOnRep_S28P01ChargeableComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_S28P01ChargeableComponent();
		P_NATIVE_END;
	}
	void US28P01::StaticRegisterNativesUS28P01()
	{
		UClass* Class = US28P01::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_IsInteractionOngoing", &US28P01::execOnRep_IsInteractionOngoing },
			{ "OnRep_IsPerkActive", &US28P01::execOnRep_IsPerkActive },
			{ "OnRep_S28P01ChargeableComponent", &US28P01::execOnRep_S28P01ChargeableComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_US28P01_OnRep_IsInteractionOngoing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_US28P01_OnRep_IsInteractionOngoing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/S28P01.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_US28P01_OnRep_IsInteractionOngoing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_US28P01, nullptr, "OnRep_IsInteractionOngoing", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_US28P01_OnRep_IsInteractionOngoing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_US28P01_OnRep_IsInteractionOngoing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_US28P01_OnRep_IsInteractionOngoing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_US28P01_OnRep_IsInteractionOngoing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_US28P01_OnRep_IsPerkActive_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_US28P01_OnRep_IsPerkActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/S28P01.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_US28P01_OnRep_IsPerkActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_US28P01, nullptr, "OnRep_IsPerkActive", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_US28P01_OnRep_IsPerkActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_US28P01_OnRep_IsPerkActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_US28P01_OnRep_IsPerkActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_US28P01_OnRep_IsPerkActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_US28P01_OnRep_S28P01ChargeableComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_US28P01_OnRep_S28P01ChargeableComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/S28P01.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_US28P01_OnRep_S28P01ChargeableComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_US28P01, nullptr, "OnRep_S28P01ChargeableComponent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_US28P01_OnRep_S28P01ChargeableComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_US28P01_OnRep_S28P01ChargeableComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_US28P01_OnRep_S28P01ChargeableComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_US28P01_OnRep_S28P01ChargeableComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_US28P01_NoRegister()
	{
		return US28P01::StaticClass();
	}
	struct Z_Construct_UClass_US28P01_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__playerOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__playerOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isInteractionOngoing_MetaData[];
#endif
		static void NewProp__isInteractionOngoing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isInteractionOngoing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isPerkActive_MetaData[];
#endif
		static void NewProp__isPerkActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isPerkActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__S28P01ChargeableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__S28P01ChargeableComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__auraRevealRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__auraRevealRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__auraRevealDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__auraRevealDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_US28P01_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_US28P01_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_US28P01_OnRep_IsInteractionOngoing, "OnRep_IsInteractionOngoing" }, // 674416163
		{ &Z_Construct_UFunction_US28P01_OnRep_IsPerkActive, "OnRep_IsPerkActive" }, // 342308509
		{ &Z_Construct_UFunction_US28P01_OnRep_S28P01ChargeableComponent, "OnRep_S28P01ChargeableComponent" }, // 1364203371
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_US28P01_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "S28P01.h" },
		{ "ModuleRelativePath", "Public/S28P01.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_US28P01_Statics::NewProp__playerOwner_MetaData[] = {
		{ "ModuleRelativePath", "Public/S28P01.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_US28P01_Statics::NewProp__playerOwner = { "_playerOwner", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(US28P01, _playerOwner), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_US28P01_Statics::NewProp__playerOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_US28P01_Statics::NewProp__playerOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_US28P01_Statics::NewProp__isInteractionOngoing_MetaData[] = {
		{ "ModuleRelativePath", "Public/S28P01.h" },
	};
#endif
	void Z_Construct_UClass_US28P01_Statics::NewProp__isInteractionOngoing_SetBit(void* Obj)
	{
		((US28P01*)Obj)->_isInteractionOngoing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_US28P01_Statics::NewProp__isInteractionOngoing = { "_isInteractionOngoing", "OnRep_IsInteractionOngoing", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(US28P01), &Z_Construct_UClass_US28P01_Statics::NewProp__isInteractionOngoing_SetBit, METADATA_PARAMS(Z_Construct_UClass_US28P01_Statics::NewProp__isInteractionOngoing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_US28P01_Statics::NewProp__isInteractionOngoing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_US28P01_Statics::NewProp__isPerkActive_MetaData[] = {
		{ "ModuleRelativePath", "Public/S28P01.h" },
	};
#endif
	void Z_Construct_UClass_US28P01_Statics::NewProp__isPerkActive_SetBit(void* Obj)
	{
		((US28P01*)Obj)->_isPerkActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_US28P01_Statics::NewProp__isPerkActive = { "_isPerkActive", "OnRep_IsPerkActive", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(US28P01), &Z_Construct_UClass_US28P01_Statics::NewProp__isPerkActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_US28P01_Statics::NewProp__isPerkActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_US28P01_Statics::NewProp__isPerkActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_US28P01_Statics::NewProp__S28P01ChargeableComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/S28P01.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_US28P01_Statics::NewProp__S28P01ChargeableComponent = { "_S28P01ChargeableComponent", "OnRep_S28P01ChargeableComponent", (EPropertyFlags)0x0040000100082028, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(US28P01, _S28P01ChargeableComponent), Z_Construct_UClass_UChargeableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_US28P01_Statics::NewProp__S28P01ChargeableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_US28P01_Statics::NewProp__S28P01ChargeableComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_US28P01_Statics::NewProp__auraRevealRange_MetaData[] = {
		{ "Category", "S28P01" },
		{ "ModuleRelativePath", "Public/S28P01.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_US28P01_Statics::NewProp__auraRevealRange = { "_auraRevealRange", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_auraRevealRange, US28P01), STRUCT_OFFSET(US28P01, _auraRevealRange), METADATA_PARAMS(Z_Construct_UClass_US28P01_Statics::NewProp__auraRevealRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_US28P01_Statics::NewProp__auraRevealRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_US28P01_Statics::NewProp__auraRevealDuration_MetaData[] = {
		{ "Category", "S28P01" },
		{ "ModuleRelativePath", "Public/S28P01.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_US28P01_Statics::NewProp__auraRevealDuration = { "_auraRevealDuration", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_auraRevealDuration, US28P01), STRUCT_OFFSET(US28P01, _auraRevealDuration), METADATA_PARAMS(Z_Construct_UClass_US28P01_Statics::NewProp__auraRevealDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_US28P01_Statics::NewProp__auraRevealDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_US28P01_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_US28P01_Statics::NewProp__playerOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_US28P01_Statics::NewProp__isInteractionOngoing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_US28P01_Statics::NewProp__isPerkActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_US28P01_Statics::NewProp__S28P01ChargeableComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_US28P01_Statics::NewProp__auraRevealRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_US28P01_Statics::NewProp__auraRevealDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_US28P01_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<US28P01>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_US28P01_Statics::ClassParams = {
		&US28P01::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_US28P01_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_US28P01_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_US28P01_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_US28P01_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_US28P01()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_US28P01_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(US28P01, 3508680303);
	template<> THEK25_API UClass* StaticClass<US28P01>()
	{
		return US28P01::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_US28P01(Z_Construct_UClass_US28P01, &US28P01::StaticClass, TEXT("/Script/TheK25"), TEXT("US28P01"), false, nullptr, nullptr, nullptr);

	void US28P01::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__S28P01ChargeableComponent(TEXT("_S28P01ChargeableComponent"));
		static const FName Name__isPerkActive(TEXT("_isPerkActive"));
		static const FName Name__isInteractionOngoing(TEXT("_isInteractionOngoing"));

		const bool bIsValid = true
			&& Name__S28P01ChargeableComponent == ClassReps[(int32)ENetFields_Private::_S28P01ChargeableComponent].Property->GetFName()
			&& Name__isPerkActive == ClassReps[(int32)ENetFields_Private::_isPerkActive].Property->GetFName()
			&& Name__isInteractionOngoing == ClassReps[(int32)ENetFields_Private::_isInteractionOngoing].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in US28P01"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(US28P01);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
