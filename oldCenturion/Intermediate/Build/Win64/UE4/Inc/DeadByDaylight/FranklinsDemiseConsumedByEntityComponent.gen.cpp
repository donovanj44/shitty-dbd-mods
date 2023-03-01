// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/FranklinsDemiseConsumedByEntityComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFranklinsDemiseConsumedByEntityComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UFranklinsDemiseConsumedByEntityComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UFranklinsDemiseConsumedByEntityComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargerComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffect_NoRegister();
	NETWORKUTILITIES_API UClass* Z_Construct_UClass_UTimerObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UFranklinsDemiseConsumedByEntityComponent::execAuthority_StartConsume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_duration);
		P_GET_OBJECT(ADBDPlayer,Z_Param_previousOwner);
		P_GET_OBJECT(ADBDPlayer,Z_Param_slasher);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_StartConsume(Z_Param_duration,Z_Param_previousOwner,Z_Param_slasher);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFranklinsDemiseConsumedByEntityComponent::execOnRep_ConsumeTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ConsumeTimer();
		P_NATIVE_END;
	}
	static FName NAME_UFranklinsDemiseConsumedByEntityComponent_OnConsumedByEntity = FName(TEXT("OnConsumedByEntity"));
	void UFranklinsDemiseConsumedByEntityComponent::OnConsumedByEntity()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFranklinsDemiseConsumedByEntityComponent_OnConsumedByEntity),NULL);
	}
	void UFranklinsDemiseConsumedByEntityComponent::StaticRegisterNativesUFranklinsDemiseConsumedByEntityComponent()
	{
		UClass* Class = UFranklinsDemiseConsumedByEntityComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_StartConsume", &UFranklinsDemiseConsumedByEntityComponent::execAuthority_StartConsume },
			{ "OnRep_ConsumeTimer", &UFranklinsDemiseConsumedByEntityComponent::execOnRep_ConsumeTimer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFranklinsDemiseConsumedByEntityComponent_Authority_StartConsume_Statics
	{
		struct FranklinsDemiseConsumedByEntityComponent_eventAuthority_StartConsume_Parms
		{
			float duration;
			ADBDPlayer* previousOwner;
			ADBDPlayer* slasher;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_slasher;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_previousOwner;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_duration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFranklinsDemiseConsumedByEntityComponent_Authority_StartConsume_Statics::NewProp_slasher = { "slasher", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FranklinsDemiseConsumedByEntityComponent_eventAuthority_StartConsume_Parms, slasher), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFranklinsDemiseConsumedByEntityComponent_Authority_StartConsume_Statics::NewProp_previousOwner = { "previousOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FranklinsDemiseConsumedByEntityComponent_eventAuthority_StartConsume_Parms, previousOwner), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFranklinsDemiseConsumedByEntityComponent_Authority_StartConsume_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FranklinsDemiseConsumedByEntityComponent_eventAuthority_StartConsume_Parms, duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFranklinsDemiseConsumedByEntityComponent_Authority_StartConsume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFranklinsDemiseConsumedByEntityComponent_Authority_StartConsume_Statics::NewProp_slasher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFranklinsDemiseConsumedByEntityComponent_Authority_StartConsume_Statics::NewProp_previousOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFranklinsDemiseConsumedByEntityComponent_Authority_StartConsume_Statics::NewProp_duration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFranklinsDemiseConsumedByEntityComponent_Authority_StartConsume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FranklinsDemiseConsumedByEntityComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFranklinsDemiseConsumedByEntityComponent_Authority_StartConsume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFranklinsDemiseConsumedByEntityComponent, nullptr, "Authority_StartConsume", nullptr, nullptr, sizeof(FranklinsDemiseConsumedByEntityComponent_eventAuthority_StartConsume_Parms), Z_Construct_UFunction_UFranklinsDemiseConsumedByEntityComponent_Authority_StartConsume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFranklinsDemiseConsumedByEntityComponent_Authority_StartConsume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFranklinsDemiseConsumedByEntityComponent_Authority_StartConsume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFranklinsDemiseConsumedByEntityComponent_Authority_StartConsume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFranklinsDemiseConsumedByEntityComponent_Authority_StartConsume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFranklinsDemiseConsumedByEntityComponent_Authority_StartConsume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFranklinsDemiseConsumedByEntityComponent_OnConsumedByEntity_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFranklinsDemiseConsumedByEntityComponent_OnConsumedByEntity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FranklinsDemiseConsumedByEntityComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFranklinsDemiseConsumedByEntityComponent_OnConsumedByEntity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFranklinsDemiseConsumedByEntityComponent, nullptr, "OnConsumedByEntity", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFranklinsDemiseConsumedByEntityComponent_OnConsumedByEntity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFranklinsDemiseConsumedByEntityComponent_OnConsumedByEntity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFranklinsDemiseConsumedByEntityComponent_OnConsumedByEntity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFranklinsDemiseConsumedByEntityComponent_OnConsumedByEntity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFranklinsDemiseConsumedByEntityComponent_OnRep_ConsumeTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFranklinsDemiseConsumedByEntityComponent_OnRep_ConsumeTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FranklinsDemiseConsumedByEntityComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFranklinsDemiseConsumedByEntityComponent_OnRep_ConsumeTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFranklinsDemiseConsumedByEntityComponent, nullptr, "OnRep_ConsumeTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFranklinsDemiseConsumedByEntityComponent_OnRep_ConsumeTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFranklinsDemiseConsumedByEntityComponent_OnRep_ConsumeTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFranklinsDemiseConsumedByEntityComponent_OnRep_ConsumeTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFranklinsDemiseConsumedByEntityComponent_OnRep_ConsumeTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFranklinsDemiseConsumedByEntityComponent_NoRegister()
	{
		return UFranklinsDemiseConsumedByEntityComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFranklinsDemiseConsumedByEntityComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__itemChargerComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__itemChargerComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__originatingPerkOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__originatingPerkOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__previousOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__previousOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__camperStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__camperStatus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__consumeTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__consumeTimer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFranklinsDemiseConsumedByEntityComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFranklinsDemiseConsumedByEntityComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFranklinsDemiseConsumedByEntityComponent_Authority_StartConsume, "Authority_StartConsume" }, // 750197904
		{ &Z_Construct_UFunction_UFranklinsDemiseConsumedByEntityComponent_OnConsumedByEntity, "OnConsumedByEntity" }, // 3764566661
		{ &Z_Construct_UFunction_UFranklinsDemiseConsumedByEntityComponent_OnRep_ConsumeTimer, "OnRep_ConsumeTimer" }, // 2706000820
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFranklinsDemiseConsumedByEntityComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FranklinsDemiseConsumedByEntityComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FranklinsDemiseConsumedByEntityComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFranklinsDemiseConsumedByEntityComponent_Statics::NewProp__itemChargerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FranklinsDemiseConsumedByEntityComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFranklinsDemiseConsumedByEntityComponent_Statics::NewProp__itemChargerComponent = { "_itemChargerComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFranklinsDemiseConsumedByEntityComponent, _itemChargerComponent), Z_Construct_UClass_UChargerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFranklinsDemiseConsumedByEntityComponent_Statics::NewProp__itemChargerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFranklinsDemiseConsumedByEntityComponent_Statics::NewProp__itemChargerComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFranklinsDemiseConsumedByEntityComponent_Statics::NewProp__originatingPerkOwner_MetaData[] = {
		{ "ModuleRelativePath", "Public/FranklinsDemiseConsumedByEntityComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFranklinsDemiseConsumedByEntityComponent_Statics::NewProp__originatingPerkOwner = { "_originatingPerkOwner", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFranklinsDemiseConsumedByEntityComponent, _originatingPerkOwner), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFranklinsDemiseConsumedByEntityComponent_Statics::NewProp__originatingPerkOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFranklinsDemiseConsumedByEntityComponent_Statics::NewProp__originatingPerkOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFranklinsDemiseConsumedByEntityComponent_Statics::NewProp__previousOwner_MetaData[] = {
		{ "ModuleRelativePath", "Public/FranklinsDemiseConsumedByEntityComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFranklinsDemiseConsumedByEntityComponent_Statics::NewProp__previousOwner = { "_previousOwner", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFranklinsDemiseConsumedByEntityComponent, _previousOwner), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFranklinsDemiseConsumedByEntityComponent_Statics::NewProp__previousOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFranklinsDemiseConsumedByEntityComponent_Statics::NewProp__previousOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFranklinsDemiseConsumedByEntityComponent_Statics::NewProp__camperStatus_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FranklinsDemiseConsumedByEntityComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFranklinsDemiseConsumedByEntityComponent_Statics::NewProp__camperStatus = { "_camperStatus", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFranklinsDemiseConsumedByEntityComponent, _camperStatus), Z_Construct_UClass_UStatusEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFranklinsDemiseConsumedByEntityComponent_Statics::NewProp__camperStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFranklinsDemiseConsumedByEntityComponent_Statics::NewProp__camperStatus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFranklinsDemiseConsumedByEntityComponent_Statics::NewProp__consumeTimer_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FranklinsDemiseConsumedByEntityComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFranklinsDemiseConsumedByEntityComponent_Statics::NewProp__consumeTimer = { "_consumeTimer", "OnRep_ConsumeTimer", (EPropertyFlags)0x0040000100080028, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFranklinsDemiseConsumedByEntityComponent, _consumeTimer), Z_Construct_UClass_UTimerObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFranklinsDemiseConsumedByEntityComponent_Statics::NewProp__consumeTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFranklinsDemiseConsumedByEntityComponent_Statics::NewProp__consumeTimer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFranklinsDemiseConsumedByEntityComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFranklinsDemiseConsumedByEntityComponent_Statics::NewProp__itemChargerComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFranklinsDemiseConsumedByEntityComponent_Statics::NewProp__originatingPerkOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFranklinsDemiseConsumedByEntityComponent_Statics::NewProp__previousOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFranklinsDemiseConsumedByEntityComponent_Statics::NewProp__camperStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFranklinsDemiseConsumedByEntityComponent_Statics::NewProp__consumeTimer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFranklinsDemiseConsumedByEntityComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFranklinsDemiseConsumedByEntityComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFranklinsDemiseConsumedByEntityComponent_Statics::ClassParams = {
		&UFranklinsDemiseConsumedByEntityComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFranklinsDemiseConsumedByEntityComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFranklinsDemiseConsumedByEntityComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFranklinsDemiseConsumedByEntityComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFranklinsDemiseConsumedByEntityComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFranklinsDemiseConsumedByEntityComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFranklinsDemiseConsumedByEntityComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFranklinsDemiseConsumedByEntityComponent, 4270922336);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UFranklinsDemiseConsumedByEntityComponent>()
	{
		return UFranklinsDemiseConsumedByEntityComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFranklinsDemiseConsumedByEntityComponent(Z_Construct_UClass_UFranklinsDemiseConsumedByEntityComponent, &UFranklinsDemiseConsumedByEntityComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UFranklinsDemiseConsumedByEntityComponent"), false, nullptr, nullptr, nullptr);

	void UFranklinsDemiseConsumedByEntityComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__consumeTimer(TEXT("_consumeTimer"));

		const bool bIsValid = true
			&& Name__consumeTimer == ClassReps[(int32)ENetFields_Private::_consumeTimer].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UFranklinsDemiseConsumedByEntityComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFranklinsDemiseConsumedByEntityComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
