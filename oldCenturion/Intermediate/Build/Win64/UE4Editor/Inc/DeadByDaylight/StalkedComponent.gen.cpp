// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/StalkedComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStalkedComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_StalkedComponentOnBeingStalkedChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStalkedComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStalkedComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DeadByDaylight_StalkedComponentOnBeingStalkedChanged__DelegateSignature_Statics
	{
		struct _Script_DeadByDaylight_eventStalkedComponentOnBeingStalkedChanged_Parms
		{
			bool isBeingStalked;
		};
		static void NewProp_isBeingStalked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isBeingStalked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_DeadByDaylight_StalkedComponentOnBeingStalkedChanged__DelegateSignature_Statics::NewProp_isBeingStalked_SetBit(void* Obj)
	{
		((_Script_DeadByDaylight_eventStalkedComponentOnBeingStalkedChanged_Parms*)Obj)->isBeingStalked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_StalkedComponentOnBeingStalkedChanged__DelegateSignature_Statics::NewProp_isBeingStalked = { "isBeingStalked", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_DeadByDaylight_eventStalkedComponentOnBeingStalkedChanged_Parms), &Z_Construct_UDelegateFunction_DeadByDaylight_StalkedComponentOnBeingStalkedChanged__DelegateSignature_Statics::NewProp_isBeingStalked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DeadByDaylight_StalkedComponentOnBeingStalkedChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_StalkedComponentOnBeingStalkedChanged__DelegateSignature_Statics::NewProp_isBeingStalked,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_StalkedComponentOnBeingStalkedChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StalkedComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_StalkedComponentOnBeingStalkedChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "StalkedComponentOnBeingStalkedChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_DeadByDaylight_eventStalkedComponentOnBeingStalkedChanged_Parms), Z_Construct_UDelegateFunction_DeadByDaylight_StalkedComponentOnBeingStalkedChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_StalkedComponentOnBeingStalkedChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_StalkedComponentOnBeingStalkedChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_StalkedComponentOnBeingStalkedChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_StalkedComponentOnBeingStalkedChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_StalkedComponentOnBeingStalkedChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UStalkedComponent::execHasStalkPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasStalkPoints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStalkedComponent::execOnRep_IsBeingStalked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsBeingStalked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStalkedComponent::execOnRep_MaxStalkPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MaxStalkPoints();
		P_NATIVE_END;
	}
	void UStalkedComponent::StaticRegisterNativesUStalkedComponent()
	{
		UClass* Class = UStalkedComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HasStalkPoints", &UStalkedComponent::execHasStalkPoints },
			{ "OnRep_IsBeingStalked", &UStalkedComponent::execOnRep_IsBeingStalked },
			{ "OnRep_MaxStalkPoints", &UStalkedComponent::execOnRep_MaxStalkPoints },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStalkedComponent_HasStalkPoints_Statics
	{
		struct StalkedComponent_eventHasStalkPoints_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UStalkedComponent_HasStalkPoints_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StalkedComponent_eventHasStalkPoints_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStalkedComponent_HasStalkPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StalkedComponent_eventHasStalkPoints_Parms), &Z_Construct_UFunction_UStalkedComponent_HasStalkPoints_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStalkedComponent_HasStalkPoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStalkedComponent_HasStalkPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStalkedComponent_HasStalkPoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StalkedComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStalkedComponent_HasStalkPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStalkedComponent, nullptr, "HasStalkPoints", nullptr, nullptr, sizeof(StalkedComponent_eventHasStalkPoints_Parms), Z_Construct_UFunction_UStalkedComponent_HasStalkPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStalkedComponent_HasStalkPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStalkedComponent_HasStalkPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStalkedComponent_HasStalkPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStalkedComponent_HasStalkPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStalkedComponent_HasStalkPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStalkedComponent_OnRep_IsBeingStalked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStalkedComponent_OnRep_IsBeingStalked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StalkedComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStalkedComponent_OnRep_IsBeingStalked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStalkedComponent, nullptr, "OnRep_IsBeingStalked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStalkedComponent_OnRep_IsBeingStalked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStalkedComponent_OnRep_IsBeingStalked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStalkedComponent_OnRep_IsBeingStalked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStalkedComponent_OnRep_IsBeingStalked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStalkedComponent_OnRep_MaxStalkPoints_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStalkedComponent_OnRep_MaxStalkPoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StalkedComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStalkedComponent_OnRep_MaxStalkPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStalkedComponent, nullptr, "OnRep_MaxStalkPoints", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStalkedComponent_OnRep_MaxStalkPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStalkedComponent_OnRep_MaxStalkPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStalkedComponent_OnRep_MaxStalkPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStalkedComponent_OnRep_MaxStalkPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStalkedComponent_NoRegister()
	{
		return UStalkedComponent::StaticClass();
	}
	struct Z_Construct_UClass_UStalkedComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stalkPointsChargeable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__stalkPointsChargeable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isBeingStalked_MetaData[];
#endif
		static void NewProp__isBeingStalked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isBeingStalked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stalkableWhileSightingStalker_MetaData[];
#endif
		static void NewProp__stalkableWhileSightingStalker_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__stalkableWhileSightingStalker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxStalkPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__maxStalkPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnBeingStalkedChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBeingStalkedChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStalkedComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStalkedComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStalkedComponent_HasStalkPoints, "HasStalkPoints" }, // 2030730308
		{ &Z_Construct_UFunction_UStalkedComponent_OnRep_IsBeingStalked, "OnRep_IsBeingStalked" }, // 1629391099
		{ &Z_Construct_UFunction_UStalkedComponent_OnRep_MaxStalkPoints, "OnRep_MaxStalkPoints" }, // 4047810821
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStalkedComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "StalkedComponent.h" },
		{ "ModuleRelativePath", "Public/StalkedComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStalkedComponent_Statics::NewProp__stalkPointsChargeable_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StalkedComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStalkedComponent_Statics::NewProp__stalkPointsChargeable = { "_stalkPointsChargeable", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStalkedComponent, _stalkPointsChargeable), Z_Construct_UClass_UChargeableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStalkedComponent_Statics::NewProp__stalkPointsChargeable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStalkedComponent_Statics::NewProp__stalkPointsChargeable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStalkedComponent_Statics::NewProp__isBeingStalked_MetaData[] = {
		{ "ModuleRelativePath", "Public/StalkedComponent.h" },
	};
#endif
	void Z_Construct_UClass_UStalkedComponent_Statics::NewProp__isBeingStalked_SetBit(void* Obj)
	{
		((UStalkedComponent*)Obj)->_isBeingStalked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStalkedComponent_Statics::NewProp__isBeingStalked = { "_isBeingStalked", "OnRep_IsBeingStalked", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UStalkedComponent), &Z_Construct_UClass_UStalkedComponent_Statics::NewProp__isBeingStalked_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStalkedComponent_Statics::NewProp__isBeingStalked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStalkedComponent_Statics::NewProp__isBeingStalked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStalkedComponent_Statics::NewProp__stalkableWhileSightingStalker_MetaData[] = {
		{ "Category", "StalkedComponent" },
		{ "ModuleRelativePath", "Public/StalkedComponent.h" },
	};
#endif
	void Z_Construct_UClass_UStalkedComponent_Statics::NewProp__stalkableWhileSightingStalker_SetBit(void* Obj)
	{
		((UStalkedComponent*)Obj)->_stalkableWhileSightingStalker = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStalkedComponent_Statics::NewProp__stalkableWhileSightingStalker = { "_stalkableWhileSightingStalker", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UStalkedComponent), &Z_Construct_UClass_UStalkedComponent_Statics::NewProp__stalkableWhileSightingStalker_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStalkedComponent_Statics::NewProp__stalkableWhileSightingStalker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStalkedComponent_Statics::NewProp__stalkableWhileSightingStalker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStalkedComponent_Statics::NewProp__maxStalkPoints_MetaData[] = {
		{ "Category", "StalkedComponent" },
		{ "ModuleRelativePath", "Public/StalkedComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStalkedComponent_Statics::NewProp__maxStalkPoints = { "_maxStalkPoints", "OnRep_MaxStalkPoints", (EPropertyFlags)0x0040000100020021, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStalkedComponent, _maxStalkPoints), METADATA_PARAMS(Z_Construct_UClass_UStalkedComponent_Statics::NewProp__maxStalkPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStalkedComponent_Statics::NewProp__maxStalkPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStalkedComponent_Statics::NewProp_OnBeingStalkedChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/StalkedComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStalkedComponent_Statics::NewProp_OnBeingStalkedChanged = { "OnBeingStalkedChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStalkedComponent, OnBeingStalkedChanged), Z_Construct_UDelegateFunction_DeadByDaylight_StalkedComponentOnBeingStalkedChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UStalkedComponent_Statics::NewProp_OnBeingStalkedChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStalkedComponent_Statics::NewProp_OnBeingStalkedChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStalkedComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStalkedComponent_Statics::NewProp__stalkPointsChargeable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStalkedComponent_Statics::NewProp__isBeingStalked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStalkedComponent_Statics::NewProp__stalkableWhileSightingStalker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStalkedComponent_Statics::NewProp__maxStalkPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStalkedComponent_Statics::NewProp_OnBeingStalkedChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStalkedComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStalkedComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStalkedComponent_Statics::ClassParams = {
		&UStalkedComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStalkedComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStalkedComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStalkedComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStalkedComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStalkedComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStalkedComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStalkedComponent, 983708240);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UStalkedComponent>()
	{
		return UStalkedComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStalkedComponent(Z_Construct_UClass_UStalkedComponent, &UStalkedComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UStalkedComponent"), false, nullptr, nullptr, nullptr);

	void UStalkedComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__maxStalkPoints(TEXT("_maxStalkPoints"));
		static const FName Name__isBeingStalked(TEXT("_isBeingStalked"));

		const bool bIsValid = true
			&& Name__maxStalkPoints == ClassReps[(int32)ENetFields_Private::_maxStalkPoints].Property->GetFName()
			&& Name__isBeingStalked == ClassReps[(int32)ENetFields_Private::_isBeingStalked].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UStalkedComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStalkedComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
