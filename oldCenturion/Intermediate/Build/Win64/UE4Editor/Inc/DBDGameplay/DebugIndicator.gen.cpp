// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDGameplay/Public/DebugIndicator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebugIndicator() {}
// Cross Module References
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_ADebugIndicator_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_ADebugIndicator();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DBDGameplay();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDOutlineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ADebugIndicator::execSetColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_color);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColor_Implementation(Z_Param_color);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADebugIndicator::execSetVisible)
	{
		P_GET_UBOOL(Z_Param_visible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisible(Z_Param_visible);
		P_NATIVE_END;
	}
	static FName NAME_ADebugIndicator_SetColor = FName(TEXT("SetColor"));
	void ADebugIndicator::SetColor(const FLinearColor color)
	{
		DebugIndicator_eventSetColor_Parms Parms;
		Parms.color=color;
		ProcessEvent(FindFunctionChecked(NAME_ADebugIndicator_SetColor),&Parms);
	}
	void ADebugIndicator::StaticRegisterNativesADebugIndicator()
	{
		UClass* Class = ADebugIndicator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetColor", &ADebugIndicator::execSetColor },
			{ "SetVisible", &ADebugIndicator::execSetVisible },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADebugIndicator_SetColor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_color;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADebugIndicator_SetColor_Statics::NewProp_color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADebugIndicator_SetColor_Statics::NewProp_color = { "color", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DebugIndicator_eventSetColor_Parms, color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_ADebugIndicator_SetColor_Statics::NewProp_color_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADebugIndicator_SetColor_Statics::NewProp_color_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADebugIndicator_SetColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADebugIndicator_SetColor_Statics::NewProp_color,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADebugIndicator_SetColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DebugIndicator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADebugIndicator_SetColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADebugIndicator, nullptr, "SetColor", nullptr, nullptr, sizeof(DebugIndicator_eventSetColor_Parms), Z_Construct_UFunction_ADebugIndicator_SetColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADebugIndicator_SetColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADebugIndicator_SetColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADebugIndicator_SetColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADebugIndicator_SetColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADebugIndicator_SetColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADebugIndicator_SetVisible_Statics
	{
		struct DebugIndicator_eventSetVisible_Parms
		{
			bool visible;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_visible_MetaData[];
#endif
		static void NewProp_visible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_visible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADebugIndicator_SetVisible_Statics::NewProp_visible_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ADebugIndicator_SetVisible_Statics::NewProp_visible_SetBit(void* Obj)
	{
		((DebugIndicator_eventSetVisible_Parms*)Obj)->visible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADebugIndicator_SetVisible_Statics::NewProp_visible = { "visible", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DebugIndicator_eventSetVisible_Parms), &Z_Construct_UFunction_ADebugIndicator_SetVisible_Statics::NewProp_visible_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ADebugIndicator_SetVisible_Statics::NewProp_visible_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADebugIndicator_SetVisible_Statics::NewProp_visible_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADebugIndicator_SetVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADebugIndicator_SetVisible_Statics::NewProp_visible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADebugIndicator_SetVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DebugIndicator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADebugIndicator_SetVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADebugIndicator, nullptr, "SetVisible", nullptr, nullptr, sizeof(DebugIndicator_eventSetVisible_Parms), Z_Construct_UFunction_ADebugIndicator_SetVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADebugIndicator_SetVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADebugIndicator_SetVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADebugIndicator_SetVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADebugIndicator_SetVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADebugIndicator_SetVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADebugIndicator_NoRegister()
	{
		return ADebugIndicator::StaticClass();
	}
	struct Z_Construct_UClass_ADebugIndicator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__outlineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__outlineComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__staticMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__staticMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADebugIndicator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDGameplay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADebugIndicator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADebugIndicator_SetColor, "SetColor" }, // 1684738246
		{ &Z_Construct_UFunction_ADebugIndicator_SetVisible, "SetVisible" }, // 687035136
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADebugIndicator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DebugIndicator.h" },
		{ "ModuleRelativePath", "Public/DebugIndicator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADebugIndicator_Statics::NewProp__outlineComponent_MetaData[] = {
		{ "Category", "DebugIndicator" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DebugIndicator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADebugIndicator_Statics::NewProp__outlineComponent = { "_outlineComponent", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADebugIndicator, _outlineComponent), Z_Construct_UClass_UDBDOutlineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADebugIndicator_Statics::NewProp__outlineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADebugIndicator_Statics::NewProp__outlineComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADebugIndicator_Statics::NewProp__staticMeshComponent_MetaData[] = {
		{ "Category", "DebugIndicator" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DebugIndicator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADebugIndicator_Statics::NewProp__staticMeshComponent = { "_staticMeshComponent", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADebugIndicator, _staticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADebugIndicator_Statics::NewProp__staticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADebugIndicator_Statics::NewProp__staticMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADebugIndicator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADebugIndicator_Statics::NewProp__outlineComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADebugIndicator_Statics::NewProp__staticMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADebugIndicator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADebugIndicator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADebugIndicator_Statics::ClassParams = {
		&ADebugIndicator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADebugIndicator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADebugIndicator_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADebugIndicator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADebugIndicator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADebugIndicator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADebugIndicator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADebugIndicator, 1103696753);
	template<> DBDGAMEPLAY_API UClass* StaticClass<ADebugIndicator>()
	{
		return ADebugIndicator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADebugIndicator(Z_Construct_UClass_ADebugIndicator, &ADebugIndicator::StaticClass, TEXT("/Script/DBDGameplay"), TEXT("ADebugIndicator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADebugIndicator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
