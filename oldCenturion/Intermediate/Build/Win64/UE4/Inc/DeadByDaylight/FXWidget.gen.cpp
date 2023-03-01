// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/FXWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFXWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UFXWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UFXWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FFXWidgetPlayer();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UFXWidget::execGetNiagaraFX)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNiagaraComponent**)Z_Param__Result=P_THIS->GetNiagaraFX();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFXWidget::execPlayParticle)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_startAtTime);
		P_GET_PROPERTY(FIntProperty,Z_Param_numLoopsToPlay);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayParticle(Z_Param_startAtTime,Z_Param_numLoopsToPlay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFXWidget::execStopParticle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopParticle();
		P_NATIVE_END;
	}
	void UFXWidget::StaticRegisterNativesUFXWidget()
	{
		UClass* Class = UFXWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNiagaraFX", &UFXWidget::execGetNiagaraFX },
			{ "PlayParticle", &UFXWidget::execPlayParticle },
			{ "StopParticle", &UFXWidget::execStopParticle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFXWidget_GetNiagaraFX_Statics
	{
		struct FXWidget_eventGetNiagaraFX_Parms
		{
			UNiagaraComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFXWidget_GetNiagaraFX_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFXWidget_GetNiagaraFX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXWidget_eventGetNiagaraFX_Parms, ReturnValue), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFXWidget_GetNiagaraFX_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFXWidget_GetNiagaraFX_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFXWidget_GetNiagaraFX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFXWidget_GetNiagaraFX_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFXWidget_GetNiagaraFX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FXWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFXWidget_GetNiagaraFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFXWidget, nullptr, "GetNiagaraFX", nullptr, nullptr, sizeof(FXWidget_eventGetNiagaraFX_Parms), Z_Construct_UFunction_UFXWidget_GetNiagaraFX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFXWidget_GetNiagaraFX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFXWidget_GetNiagaraFX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFXWidget_GetNiagaraFX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFXWidget_GetNiagaraFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFXWidget_GetNiagaraFX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFXWidget_PlayParticle_Statics
	{
		struct FXWidget_eventPlayParticle_Parms
		{
			float startAtTime;
			int32 numLoopsToPlay;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_numLoopsToPlay;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_startAtTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFXWidget_PlayParticle_Statics::NewProp_numLoopsToPlay = { "numLoopsToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXWidget_eventPlayParticle_Parms, numLoopsToPlay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFXWidget_PlayParticle_Statics::NewProp_startAtTime = { "startAtTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXWidget_eventPlayParticle_Parms, startAtTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFXWidget_PlayParticle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFXWidget_PlayParticle_Statics::NewProp_numLoopsToPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFXWidget_PlayParticle_Statics::NewProp_startAtTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFXWidget_PlayParticle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FXWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFXWidget_PlayParticle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFXWidget, nullptr, "PlayParticle", nullptr, nullptr, sizeof(FXWidget_eventPlayParticle_Parms), Z_Construct_UFunction_UFXWidget_PlayParticle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFXWidget_PlayParticle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFXWidget_PlayParticle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFXWidget_PlayParticle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFXWidget_PlayParticle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFXWidget_PlayParticle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFXWidget_StopParticle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFXWidget_StopParticle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FXWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFXWidget_StopParticle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFXWidget, nullptr, "StopParticle", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFXWidget_StopParticle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFXWidget_StopParticle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFXWidget_StopParticle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFXWidget_StopParticle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFXWidget_NoRegister()
	{
		return UFXWidget::StaticClass();
	}
	struct Z_Construct_UClass_UFXWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__particlePlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__particlePlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__niagaraSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__niagaraSystem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFXWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFXWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFXWidget_GetNiagaraFX, "GetNiagaraFX" }, // 1421846780
		{ &Z_Construct_UFunction_UFXWidget_PlayParticle, "PlayParticle" }, // 295162213
		{ &Z_Construct_UFunction_UFXWidget_StopParticle, "StopParticle" }, // 678377942
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFXWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FXWidget.h" },
		{ "ModuleRelativePath", "Public/FXWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFXWidget_Statics::NewProp__particlePlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/FXWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFXWidget_Statics::NewProp__particlePlayer = { "_particlePlayer", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFXWidget, _particlePlayer), Z_Construct_UScriptStruct_FFXWidgetPlayer, METADATA_PARAMS(Z_Construct_UClass_UFXWidget_Statics::NewProp__particlePlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFXWidget_Statics::NewProp__particlePlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFXWidget_Statics::NewProp__niagaraSystem_MetaData[] = {
		{ "Category", "FXWidget" },
		{ "ModuleRelativePath", "Public/FXWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFXWidget_Statics::NewProp__niagaraSystem = { "_niagaraSystem", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFXWidget, _niagaraSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFXWidget_Statics::NewProp__niagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFXWidget_Statics::NewProp__niagaraSystem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFXWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFXWidget_Statics::NewProp__particlePlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFXWidget_Statics::NewProp__niagaraSystem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFXWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFXWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFXWidget_Statics::ClassParams = {
		&UFXWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFXWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFXWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFXWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFXWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFXWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFXWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFXWidget, 3808421830);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UFXWidget>()
	{
		return UFXWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFXWidget(Z_Construct_UClass_UFXWidget, &UFXWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UFXWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFXWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
