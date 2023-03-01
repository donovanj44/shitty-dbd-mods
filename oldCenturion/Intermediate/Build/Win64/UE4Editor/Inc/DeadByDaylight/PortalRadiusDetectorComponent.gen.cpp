// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PortalRadiusDetectorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePortalRadiusDetectorComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_PortalRadiusDetectorComponentCallback__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPortalRadiusDetectorComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPortalRadiusDetectorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADemogorgonPortal_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DeadByDaylight_PortalRadiusDetectorComponentCallback__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_PortalRadiusDetectorComponentCallback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PortalRadiusDetectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_PortalRadiusDetectorComponentCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "PortalRadiusDetectorComponentCallback__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_PortalRadiusDetectorComponentCallback__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_PortalRadiusDetectorComponentCallback__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_PortalRadiusDetectorComponentCallback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_PortalRadiusDetectorComponentCallback__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UPortalRadiusDetectorComponent::execAuthority_CallOnPortalEffectsApplied)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_CallOnPortalEffectsApplied(FPortalRadiusDetectorComponentCallback(Z_Param_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPortalRadiusDetectorComponent::execAuthority_OnLevelReadyToPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnLevelReadyToPlay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPortalRadiusDetectorComponent::execOnRep_PlayersInsideRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_PlayersInsideRadius();
		P_NATIVE_END;
	}
	void UPortalRadiusDetectorComponent::StaticRegisterNativesUPortalRadiusDetectorComponent()
	{
		UClass* Class = UPortalRadiusDetectorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_CallOnPortalEffectsApplied", &UPortalRadiusDetectorComponent::execAuthority_CallOnPortalEffectsApplied },
			{ "Authority_OnLevelReadyToPlay", &UPortalRadiusDetectorComponent::execAuthority_OnLevelReadyToPlay },
			{ "OnRep_PlayersInsideRadius", &UPortalRadiusDetectorComponent::execOnRep_PlayersInsideRadius },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPortalRadiusDetectorComponent_Authority_CallOnPortalEffectsApplied_Statics
	{
		struct PortalRadiusDetectorComponent_eventAuthority_CallOnPortalEffectsApplied_Parms
		{
			FScriptDelegate callback;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPortalRadiusDetectorComponent_Authority_CallOnPortalEffectsApplied_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalRadiusDetectorComponent_eventAuthority_CallOnPortalEffectsApplied_Parms, callback), Z_Construct_UDelegateFunction_DeadByDaylight_PortalRadiusDetectorComponentCallback__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPortalRadiusDetectorComponent_Authority_CallOnPortalEffectsApplied_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPortalRadiusDetectorComponent_Authority_CallOnPortalEffectsApplied_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalRadiusDetectorComponent_Authority_CallOnPortalEffectsApplied_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PortalRadiusDetectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPortalRadiusDetectorComponent_Authority_CallOnPortalEffectsApplied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPortalRadiusDetectorComponent, nullptr, "Authority_CallOnPortalEffectsApplied", nullptr, nullptr, sizeof(PortalRadiusDetectorComponent_eventAuthority_CallOnPortalEffectsApplied_Parms), Z_Construct_UFunction_UPortalRadiusDetectorComponent_Authority_CallOnPortalEffectsApplied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalRadiusDetectorComponent_Authority_CallOnPortalEffectsApplied_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPortalRadiusDetectorComponent_Authority_CallOnPortalEffectsApplied_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalRadiusDetectorComponent_Authority_CallOnPortalEffectsApplied_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPortalRadiusDetectorComponent_Authority_CallOnPortalEffectsApplied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPortalRadiusDetectorComponent_Authority_CallOnPortalEffectsApplied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPortalRadiusDetectorComponent_Authority_OnLevelReadyToPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalRadiusDetectorComponent_Authority_OnLevelReadyToPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PortalRadiusDetectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPortalRadiusDetectorComponent_Authority_OnLevelReadyToPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPortalRadiusDetectorComponent, nullptr, "Authority_OnLevelReadyToPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPortalRadiusDetectorComponent_Authority_OnLevelReadyToPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalRadiusDetectorComponent_Authority_OnLevelReadyToPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPortalRadiusDetectorComponent_Authority_OnLevelReadyToPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPortalRadiusDetectorComponent_Authority_OnLevelReadyToPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPortalRadiusDetectorComponent_OnRep_PlayersInsideRadius_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPortalRadiusDetectorComponent_OnRep_PlayersInsideRadius_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PortalRadiusDetectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPortalRadiusDetectorComponent_OnRep_PlayersInsideRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPortalRadiusDetectorComponent, nullptr, "OnRep_PlayersInsideRadius", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPortalRadiusDetectorComponent_OnRep_PlayersInsideRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPortalRadiusDetectorComponent_OnRep_PlayersInsideRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPortalRadiusDetectorComponent_OnRep_PlayersInsideRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPortalRadiusDetectorComponent_OnRep_PlayersInsideRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPortalRadiusDetectorComponent_NoRegister()
	{
		return UPortalRadiusDetectorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPortalRadiusDetectorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__playersInsideRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__playersInsideRadius;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__playersInsideRadius_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Portals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Portals;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Portals_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPortalRadiusDetectorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPortalRadiusDetectorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPortalRadiusDetectorComponent_Authority_CallOnPortalEffectsApplied, "Authority_CallOnPortalEffectsApplied" }, // 2581952851
		{ &Z_Construct_UFunction_UPortalRadiusDetectorComponent_Authority_OnLevelReadyToPlay, "Authority_OnLevelReadyToPlay" }, // 3998715867
		{ &Z_Construct_UFunction_UPortalRadiusDetectorComponent_OnRep_PlayersInsideRadius, "OnRep_PlayersInsideRadius" }, // 3339094576
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPortalRadiusDetectorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PortalRadiusDetectorComponent.h" },
		{ "ModuleRelativePath", "Public/PortalRadiusDetectorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPortalRadiusDetectorComponent_Statics::NewProp__playersInsideRadius_MetaData[] = {
		{ "ModuleRelativePath", "Public/PortalRadiusDetectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPortalRadiusDetectorComponent_Statics::NewProp__playersInsideRadius = { "_playersInsideRadius", "OnRep_PlayersInsideRadius", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPortalRadiusDetectorComponent, _playersInsideRadius), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPortalRadiusDetectorComponent_Statics::NewProp__playersInsideRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPortalRadiusDetectorComponent_Statics::NewProp__playersInsideRadius_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPortalRadiusDetectorComponent_Statics::NewProp__playersInsideRadius_Inner = { "_playersInsideRadius", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPortalRadiusDetectorComponent_Statics::NewProp_Portals_MetaData[] = {
		{ "ModuleRelativePath", "Public/PortalRadiusDetectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPortalRadiusDetectorComponent_Statics::NewProp_Portals = { "Portals", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPortalRadiusDetectorComponent, Portals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPortalRadiusDetectorComponent_Statics::NewProp_Portals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPortalRadiusDetectorComponent_Statics::NewProp_Portals_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPortalRadiusDetectorComponent_Statics::NewProp_Portals_Inner = { "Portals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADemogorgonPortal_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPortalRadiusDetectorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPortalRadiusDetectorComponent_Statics::NewProp__playersInsideRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPortalRadiusDetectorComponent_Statics::NewProp__playersInsideRadius_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPortalRadiusDetectorComponent_Statics::NewProp_Portals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPortalRadiusDetectorComponent_Statics::NewProp_Portals_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPortalRadiusDetectorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPortalRadiusDetectorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPortalRadiusDetectorComponent_Statics::ClassParams = {
		&UPortalRadiusDetectorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPortalRadiusDetectorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPortalRadiusDetectorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPortalRadiusDetectorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPortalRadiusDetectorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPortalRadiusDetectorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPortalRadiusDetectorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPortalRadiusDetectorComponent, 458472346);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UPortalRadiusDetectorComponent>()
	{
		return UPortalRadiusDetectorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPortalRadiusDetectorComponent(Z_Construct_UClass_UPortalRadiusDetectorComponent, &UPortalRadiusDetectorComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UPortalRadiusDetectorComponent"), false, nullptr, nullptr, nullptr);

	void UPortalRadiusDetectorComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__playersInsideRadius(TEXT("_playersInsideRadius"));

		const bool bIsValid = true
			&& Name__playersInsideRadius == ClassReps[(int32)ENetFields_Private::_playersInsideRadius].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UPortalRadiusDetectorComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPortalRadiusDetectorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
