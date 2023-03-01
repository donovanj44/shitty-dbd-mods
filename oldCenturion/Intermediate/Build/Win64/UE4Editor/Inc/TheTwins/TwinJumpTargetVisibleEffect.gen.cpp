// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/TwinJumpTargetVisibleEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTwinJumpTargetVisibleEffect() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_UTwinJumpTargetVisibleEffect_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UTwinJumpTargetVisibleEffect();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffect();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USelectiveVisibilityComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(UTwinJumpTargetVisibleEffect::execOnHideTargetPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHideTargetPosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTwinJumpTargetVisibleEffect::execOnJumpTargetTick)
	{
		P_GET_STRUCT(FVector,Z_Param_location);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnJumpTargetTick(Z_Param_location);
		P_NATIVE_END;
	}
	void UTwinJumpTargetVisibleEffect::StaticRegisterNativesUTwinJumpTargetVisibleEffect()
	{
		UClass* Class = UTwinJumpTargetVisibleEffect::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHideTargetPosition", &UTwinJumpTargetVisibleEffect::execOnHideTargetPosition },
			{ "OnJumpTargetTick", &UTwinJumpTargetVisibleEffect::execOnJumpTargetTick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTwinJumpTargetVisibleEffect_OnHideTargetPosition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinJumpTargetVisibleEffect_OnHideTargetPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwinJumpTargetVisibleEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinJumpTargetVisibleEffect_OnHideTargetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwinJumpTargetVisibleEffect, nullptr, "OnHideTargetPosition", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwinJumpTargetVisibleEffect_OnHideTargetPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinJumpTargetVisibleEffect_OnHideTargetPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwinJumpTargetVisibleEffect_OnHideTargetPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTwinJumpTargetVisibleEffect_OnHideTargetPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwinJumpTargetVisibleEffect_OnJumpTargetTick_Statics
	{
		struct TwinJumpTargetVisibleEffect_eventOnJumpTargetTick_Parms
		{
			FVector location;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTwinJumpTargetVisibleEffect_OnJumpTargetTick_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TwinJumpTargetVisibleEffect_eventOnJumpTargetTick_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwinJumpTargetVisibleEffect_OnJumpTargetTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinJumpTargetVisibleEffect_OnJumpTargetTick_Statics::NewProp_location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinJumpTargetVisibleEffect_OnJumpTargetTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwinJumpTargetVisibleEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinJumpTargetVisibleEffect_OnJumpTargetTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwinJumpTargetVisibleEffect, nullptr, "OnJumpTargetTick", nullptr, nullptr, sizeof(TwinJumpTargetVisibleEffect_eventOnJumpTargetTick_Parms), Z_Construct_UFunction_UTwinJumpTargetVisibleEffect_OnJumpTargetTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinJumpTargetVisibleEffect_OnJumpTargetTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwinJumpTargetVisibleEffect_OnJumpTargetTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinJumpTargetVisibleEffect_OnJumpTargetTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwinJumpTargetVisibleEffect_OnJumpTargetTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTwinJumpTargetVisibleEffect_OnJumpTargetTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTwinJumpTargetVisibleEffect_NoRegister()
	{
		return UTwinJumpTargetVisibleEffect::StaticClass();
	}
	struct Z_Construct_UClass_UTwinJumpTargetVisibleEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__jumpTargetVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__jumpTargetVisibility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__twinJumpTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__twinJumpTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__twinJumpTargetObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__twinJumpTargetObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTwinJumpTargetVisibleEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStatusEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTwinJumpTargetVisibleEffect_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTwinJumpTargetVisibleEffect_OnHideTargetPosition, "OnHideTargetPosition" }, // 1698618708
		{ &Z_Construct_UFunction_UTwinJumpTargetVisibleEffect_OnJumpTargetTick, "OnJumpTargetTick" }, // 723378221
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinJumpTargetVisibleEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TwinJumpTargetVisibleEffect.h" },
		{ "ModuleRelativePath", "Public/TwinJumpTargetVisibleEffect.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinJumpTargetVisibleEffect_Statics::NewProp__jumpTargetVisibility_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TwinJumpTargetVisibleEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTwinJumpTargetVisibleEffect_Statics::NewProp__jumpTargetVisibility = { "_jumpTargetVisibility", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTwinJumpTargetVisibleEffect, _jumpTargetVisibility), Z_Construct_UClass_USelectiveVisibilityComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTwinJumpTargetVisibleEffect_Statics::NewProp__jumpTargetVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinJumpTargetVisibleEffect_Statics::NewProp__jumpTargetVisibility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinJumpTargetVisibleEffect_Statics::NewProp__twinJumpTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwinJumpTargetVisibleEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTwinJumpTargetVisibleEffect_Statics::NewProp__twinJumpTarget = { "_twinJumpTarget", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTwinJumpTargetVisibleEffect, _twinJumpTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTwinJumpTargetVisibleEffect_Statics::NewProp__twinJumpTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinJumpTargetVisibleEffect_Statics::NewProp__twinJumpTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinJumpTargetVisibleEffect_Statics::NewProp__twinJumpTargetObject_MetaData[] = {
		{ "Category", "TwinJumpTargetVisibleEffect" },
		{ "ModuleRelativePath", "Public/TwinJumpTargetVisibleEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTwinJumpTargetVisibleEffect_Statics::NewProp__twinJumpTargetObject = { "_twinJumpTargetObject", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTwinJumpTargetVisibleEffect, _twinJumpTargetObject), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UTwinJumpTargetVisibleEffect_Statics::NewProp__twinJumpTargetObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinJumpTargetVisibleEffect_Statics::NewProp__twinJumpTargetObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTwinJumpTargetVisibleEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwinJumpTargetVisibleEffect_Statics::NewProp__jumpTargetVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwinJumpTargetVisibleEffect_Statics::NewProp__twinJumpTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwinJumpTargetVisibleEffect_Statics::NewProp__twinJumpTargetObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTwinJumpTargetVisibleEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTwinJumpTargetVisibleEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTwinJumpTargetVisibleEffect_Statics::ClassParams = {
		&UTwinJumpTargetVisibleEffect::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTwinJumpTargetVisibleEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTwinJumpTargetVisibleEffect_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTwinJumpTargetVisibleEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinJumpTargetVisibleEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTwinJumpTargetVisibleEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTwinJumpTargetVisibleEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTwinJumpTargetVisibleEffect, 3031779244);
	template<> THETWINS_API UClass* StaticClass<UTwinJumpTargetVisibleEffect>()
	{
		return UTwinJumpTargetVisibleEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTwinJumpTargetVisibleEffect(Z_Construct_UClass_UTwinJumpTargetVisibleEffect, &UTwinJumpTargetVisibleEffect::StaticClass, TEXT("/Script/TheTwins"), TEXT("UTwinJumpTargetVisibleEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTwinJumpTargetVisibleEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
