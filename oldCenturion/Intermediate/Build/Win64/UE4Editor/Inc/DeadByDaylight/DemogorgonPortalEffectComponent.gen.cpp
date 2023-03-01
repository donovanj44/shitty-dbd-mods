// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DemogorgonPortalEffectComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDemogorgonPortalEffectComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDemogorgonPortalEffectComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDemogorgonPortalEffectComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGameplayModifierContainer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffect_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDemogorgonPortalEffectComponent::execAuthority_Initialize)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_statusEffect);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_lingerDuration);
		P_GET_OBJECT(ADBDPlayer,Z_Param_originatingPlayer);
		P_GET_OBJECT(UGameplayModifierContainer,Z_Param_originatingEffect);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_Initialize(Z_Param_statusEffect,Z_Param_Out_lingerDuration,Z_Param_originatingPlayer,Z_Param_originatingEffect);
		P_NATIVE_END;
	}
	void UDemogorgonPortalEffectComponent::StaticRegisterNativesUDemogorgonPortalEffectComponent()
	{
		UClass* Class = UDemogorgonPortalEffectComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_Initialize", &UDemogorgonPortalEffectComponent::execAuthority_Initialize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDemogorgonPortalEffectComponent_Authority_Initialize_Statics
	{
		struct DemogorgonPortalEffectComponent_eventAuthority_Initialize_Parms
		{
			FName statusEffect;
			float lingerDuration;
			ADBDPlayer* originatingPlayer;
			UGameplayModifierContainer* originatingEffect;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_originatingEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_originatingEffect;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_originatingPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lingerDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_lingerDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_statusEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_statusEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDemogorgonPortalEffectComponent_Authority_Initialize_Statics::NewProp_originatingEffect_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDemogorgonPortalEffectComponent_Authority_Initialize_Statics::NewProp_originatingEffect = { "originatingEffect", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DemogorgonPortalEffectComponent_eventAuthority_Initialize_Parms, originatingEffect), Z_Construct_UClass_UGameplayModifierContainer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDemogorgonPortalEffectComponent_Authority_Initialize_Statics::NewProp_originatingEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDemogorgonPortalEffectComponent_Authority_Initialize_Statics::NewProp_originatingEffect_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDemogorgonPortalEffectComponent_Authority_Initialize_Statics::NewProp_originatingPlayer = { "originatingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DemogorgonPortalEffectComponent_eventAuthority_Initialize_Parms, originatingPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDemogorgonPortalEffectComponent_Authority_Initialize_Statics::NewProp_lingerDuration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDemogorgonPortalEffectComponent_Authority_Initialize_Statics::NewProp_lingerDuration = { "lingerDuration", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DemogorgonPortalEffectComponent_eventAuthority_Initialize_Parms, lingerDuration), METADATA_PARAMS(Z_Construct_UFunction_UDemogorgonPortalEffectComponent_Authority_Initialize_Statics::NewProp_lingerDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDemogorgonPortalEffectComponent_Authority_Initialize_Statics::NewProp_lingerDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDemogorgonPortalEffectComponent_Authority_Initialize_Statics::NewProp_statusEffect_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDemogorgonPortalEffectComponent_Authority_Initialize_Statics::NewProp_statusEffect = { "statusEffect", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DemogorgonPortalEffectComponent_eventAuthority_Initialize_Parms, statusEffect), METADATA_PARAMS(Z_Construct_UFunction_UDemogorgonPortalEffectComponent_Authority_Initialize_Statics::NewProp_statusEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDemogorgonPortalEffectComponent_Authority_Initialize_Statics::NewProp_statusEffect_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDemogorgonPortalEffectComponent_Authority_Initialize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDemogorgonPortalEffectComponent_Authority_Initialize_Statics::NewProp_originatingEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDemogorgonPortalEffectComponent_Authority_Initialize_Statics::NewProp_originatingPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDemogorgonPortalEffectComponent_Authority_Initialize_Statics::NewProp_lingerDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDemogorgonPortalEffectComponent_Authority_Initialize_Statics::NewProp_statusEffect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDemogorgonPortalEffectComponent_Authority_Initialize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DemogorgonPortalEffectComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDemogorgonPortalEffectComponent_Authority_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDemogorgonPortalEffectComponent, nullptr, "Authority_Initialize", nullptr, nullptr, sizeof(DemogorgonPortalEffectComponent_eventAuthority_Initialize_Parms), Z_Construct_UFunction_UDemogorgonPortalEffectComponent_Authority_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDemogorgonPortalEffectComponent_Authority_Initialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDemogorgonPortalEffectComponent_Authority_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDemogorgonPortalEffectComponent_Authority_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDemogorgonPortalEffectComponent_Authority_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDemogorgonPortalEffectComponent_Authority_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDemogorgonPortalEffectComponent_NoRegister()
	{
		return UDemogorgonPortalEffectComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDemogorgonPortalEffectComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__originatingEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__originatingEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__originatingPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__originatingPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__effect_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__effect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__effectLingerDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__effectLingerDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__statusEffectName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__statusEffectName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDemogorgonPortalEffectComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDemogorgonPortalEffectComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDemogorgonPortalEffectComponent_Authority_Initialize, "Authority_Initialize" }, // 941025524
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemogorgonPortalEffectComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DemogorgonPortalEffectComponent.h" },
		{ "ModuleRelativePath", "Public/DemogorgonPortalEffectComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemogorgonPortalEffectComponent_Statics::NewProp__originatingEffect_MetaData[] = {
		{ "ModuleRelativePath", "Public/DemogorgonPortalEffectComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UDemogorgonPortalEffectComponent_Statics::NewProp__originatingEffect = { "_originatingEffect", nullptr, (EPropertyFlags)0x0044000000082008, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDemogorgonPortalEffectComponent, _originatingEffect), Z_Construct_UClass_UGameplayModifierContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDemogorgonPortalEffectComponent_Statics::NewProp__originatingEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDemogorgonPortalEffectComponent_Statics::NewProp__originatingEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemogorgonPortalEffectComponent_Statics::NewProp__originatingPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/DemogorgonPortalEffectComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UDemogorgonPortalEffectComponent_Statics::NewProp__originatingPlayer = { "_originatingPlayer", nullptr, (EPropertyFlags)0x0044000000002000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDemogorgonPortalEffectComponent, _originatingPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDemogorgonPortalEffectComponent_Statics::NewProp__originatingPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDemogorgonPortalEffectComponent_Statics::NewProp__originatingPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemogorgonPortalEffectComponent_Statics::NewProp__effect_MetaData[] = {
		{ "ModuleRelativePath", "Public/DemogorgonPortalEffectComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UDemogorgonPortalEffectComponent_Statics::NewProp__effect = { "_effect", nullptr, (EPropertyFlags)0x0044000000082008, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDemogorgonPortalEffectComponent, _effect), Z_Construct_UClass_UStatusEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDemogorgonPortalEffectComponent_Statics::NewProp__effect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDemogorgonPortalEffectComponent_Statics::NewProp__effect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemogorgonPortalEffectComponent_Statics::NewProp__effectLingerDuration_MetaData[] = {
		{ "Category", "DemogorgonPortalEffectComponent" },
		{ "ModuleRelativePath", "Public/DemogorgonPortalEffectComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDemogorgonPortalEffectComponent_Statics::NewProp__effectLingerDuration = { "_effectLingerDuration", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDemogorgonPortalEffectComponent, _effectLingerDuration), METADATA_PARAMS(Z_Construct_UClass_UDemogorgonPortalEffectComponent_Statics::NewProp__effectLingerDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDemogorgonPortalEffectComponent_Statics::NewProp__effectLingerDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemogorgonPortalEffectComponent_Statics::NewProp__statusEffectName_MetaData[] = {
		{ "Category", "DemogorgonPortalEffectComponent" },
		{ "ModuleRelativePath", "Public/DemogorgonPortalEffectComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDemogorgonPortalEffectComponent_Statics::NewProp__statusEffectName = { "_statusEffectName", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDemogorgonPortalEffectComponent, _statusEffectName), METADATA_PARAMS(Z_Construct_UClass_UDemogorgonPortalEffectComponent_Statics::NewProp__statusEffectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDemogorgonPortalEffectComponent_Statics::NewProp__statusEffectName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDemogorgonPortalEffectComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemogorgonPortalEffectComponent_Statics::NewProp__originatingEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemogorgonPortalEffectComponent_Statics::NewProp__originatingPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemogorgonPortalEffectComponent_Statics::NewProp__effect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemogorgonPortalEffectComponent_Statics::NewProp__effectLingerDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemogorgonPortalEffectComponent_Statics::NewProp__statusEffectName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDemogorgonPortalEffectComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDemogorgonPortalEffectComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDemogorgonPortalEffectComponent_Statics::ClassParams = {
		&UDemogorgonPortalEffectComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDemogorgonPortalEffectComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDemogorgonPortalEffectComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDemogorgonPortalEffectComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDemogorgonPortalEffectComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDemogorgonPortalEffectComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDemogorgonPortalEffectComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDemogorgonPortalEffectComponent, 1321995272);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDemogorgonPortalEffectComponent>()
	{
		return UDemogorgonPortalEffectComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDemogorgonPortalEffectComponent(Z_Construct_UClass_UDemogorgonPortalEffectComponent, &UDemogorgonPortalEffectComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDemogorgonPortalEffectComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDemogorgonPortalEffectComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
