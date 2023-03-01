// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDGameplay/Public/AuraOverriderComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraOverriderComponent() {}
// Cross Module References
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UAuraOverriderComponent_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UAuraOverriderComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DBDGameplay();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAuraOverriderComponent::execForceShowAura)
	{
		P_GET_OBJECT(AActor,Z_Param_actor);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_color);
		P_GET_UBOOL(Z_Param_isAlwaysVisible);
		P_GET_PROPERTY(FFloatProperty,Z_Param_minimumOutlineDistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForceShowAura(Z_Param_actor,Z_Param_Out_color,Z_Param_isAlwaysVisible,Z_Param_minimumOutlineDistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuraOverriderComponent::execResetAura)
	{
		P_GET_OBJECT(AActor,Z_Param_actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetAura(Z_Param_actor);
		P_NATIVE_END;
	}
	void UAuraOverriderComponent::StaticRegisterNativesUAuraOverriderComponent()
	{
		UClass* Class = UAuraOverriderComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ForceShowAura", &UAuraOverriderComponent::execForceShowAura },
			{ "ResetAura", &UAuraOverriderComponent::execResetAura },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAuraOverriderComponent_ForceShowAura_Statics
	{
		struct AuraOverriderComponent_eventForceShowAura_Parms
		{
			const AActor* actor;
			FLinearColor color;
			bool isAlwaysVisible;
			float minimumOutlineDistance;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_minimumOutlineDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_minimumOutlineDistance;
		static void NewProp_isAlwaysVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isAlwaysVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraOverriderComponent_ForceShowAura_Statics::NewProp_minimumOutlineDistance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAuraOverriderComponent_ForceShowAura_Statics::NewProp_minimumOutlineDistance = { "minimumOutlineDistance", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AuraOverriderComponent_eventForceShowAura_Parms, minimumOutlineDistance), METADATA_PARAMS(Z_Construct_UFunction_UAuraOverriderComponent_ForceShowAura_Statics::NewProp_minimumOutlineDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraOverriderComponent_ForceShowAura_Statics::NewProp_minimumOutlineDistance_MetaData)) };
	void Z_Construct_UFunction_UAuraOverriderComponent_ForceShowAura_Statics::NewProp_isAlwaysVisible_SetBit(void* Obj)
	{
		((AuraOverriderComponent_eventForceShowAura_Parms*)Obj)->isAlwaysVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAuraOverriderComponent_ForceShowAura_Statics::NewProp_isAlwaysVisible = { "isAlwaysVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AuraOverriderComponent_eventForceShowAura_Parms), &Z_Construct_UFunction_UAuraOverriderComponent_ForceShowAura_Statics::NewProp_isAlwaysVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraOverriderComponent_ForceShowAura_Statics::NewProp_color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraOverriderComponent_ForceShowAura_Statics::NewProp_color = { "color", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AuraOverriderComponent_eventForceShowAura_Parms, color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UAuraOverriderComponent_ForceShowAura_Statics::NewProp_color_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraOverriderComponent_ForceShowAura_Statics::NewProp_color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraOverriderComponent_ForceShowAura_Statics::NewProp_actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAuraOverriderComponent_ForceShowAura_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AuraOverriderComponent_eventForceShowAura_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAuraOverriderComponent_ForceShowAura_Statics::NewProp_actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraOverriderComponent_ForceShowAura_Statics::NewProp_actor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraOverriderComponent_ForceShowAura_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraOverriderComponent_ForceShowAura_Statics::NewProp_minimumOutlineDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraOverriderComponent_ForceShowAura_Statics::NewProp_isAlwaysVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraOverriderComponent_ForceShowAura_Statics::NewProp_color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraOverriderComponent_ForceShowAura_Statics::NewProp_actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraOverriderComponent_ForceShowAura_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AuraOverriderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraOverriderComponent_ForceShowAura_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraOverriderComponent, nullptr, "ForceShowAura", nullptr, nullptr, sizeof(AuraOverriderComponent_eventForceShowAura_Parms), Z_Construct_UFunction_UAuraOverriderComponent_ForceShowAura_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraOverriderComponent_ForceShowAura_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAuraOverriderComponent_ForceShowAura_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraOverriderComponent_ForceShowAura_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAuraOverriderComponent_ForceShowAura()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAuraOverriderComponent_ForceShowAura_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuraOverriderComponent_ResetAura_Statics
	{
		struct AuraOverriderComponent_eventResetAura_Parms
		{
			const AActor* actor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraOverriderComponent_ResetAura_Statics::NewProp_actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAuraOverriderComponent_ResetAura_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AuraOverriderComponent_eventResetAura_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAuraOverriderComponent_ResetAura_Statics::NewProp_actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraOverriderComponent_ResetAura_Statics::NewProp_actor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraOverriderComponent_ResetAura_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraOverriderComponent_ResetAura_Statics::NewProp_actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraOverriderComponent_ResetAura_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AuraOverriderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraOverriderComponent_ResetAura_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraOverriderComponent, nullptr, "ResetAura", nullptr, nullptr, sizeof(AuraOverriderComponent_eventResetAura_Parms), Z_Construct_UFunction_UAuraOverriderComponent_ResetAura_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraOverriderComponent_ResetAura_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAuraOverriderComponent_ResetAura_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraOverriderComponent_ResetAura_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAuraOverriderComponent_ResetAura()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAuraOverriderComponent_ResetAura_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAuraOverriderComponent_NoRegister()
	{
		return UAuraOverriderComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAuraOverriderComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAuraOverriderComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDGameplay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAuraOverriderComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAuraOverriderComponent_ForceShowAura, "ForceShowAura" }, // 3296388892
		{ &Z_Construct_UFunction_UAuraOverriderComponent_ResetAura, "ResetAura" }, // 3725260983
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraOverriderComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AuraOverriderComponent.h" },
		{ "ModuleRelativePath", "Public/AuraOverriderComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAuraOverriderComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAuraOverriderComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAuraOverriderComponent_Statics::ClassParams = {
		&UAuraOverriderComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAuraOverriderComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAuraOverriderComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAuraOverriderComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAuraOverriderComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAuraOverriderComponent, 4239007245);
	template<> DBDGAMEPLAY_API UClass* StaticClass<UAuraOverriderComponent>()
	{
		return UAuraOverriderComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAuraOverriderComponent(Z_Construct_UClass_UAuraOverriderComponent, &UAuraOverriderComponent::StaticClass, TEXT("/Script/DBDGameplay"), TEXT("UAuraOverriderComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAuraOverriderComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
