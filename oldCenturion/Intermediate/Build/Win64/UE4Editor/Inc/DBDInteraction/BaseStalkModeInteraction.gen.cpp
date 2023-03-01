// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDInteraction/Public/BaseStalkModeInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseStalkModeInteraction() {}
// Cross Module References
	DBDINTERACTION_API UClass* Z_Construct_UClass_UBaseStalkModeInteraction_NoRegister();
	DBDINTERACTION_API UClass* Z_Construct_UClass_UBaseStalkModeInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_DBDInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStalkerComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBaseStalkModeInteraction::execCanStalk)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanStalk();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseStalkModeInteraction::execGetStalkerComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStalkerComponent**)Z_Param__Result=P_THIS->GetStalkerComponent();
		P_NATIVE_END;
	}
	void UBaseStalkModeInteraction::StaticRegisterNativesUBaseStalkModeInteraction()
	{
		UClass* Class = UBaseStalkModeInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanStalk", &UBaseStalkModeInteraction::execCanStalk },
			{ "GetStalkerComponent", &UBaseStalkModeInteraction::execGetStalkerComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseStalkModeInteraction_CanStalk_Statics
	{
		struct BaseStalkModeInteraction_eventCanStalk_Parms
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
	void Z_Construct_UFunction_UBaseStalkModeInteraction_CanStalk_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseStalkModeInteraction_eventCanStalk_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseStalkModeInteraction_CanStalk_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseStalkModeInteraction_eventCanStalk_Parms), &Z_Construct_UFunction_UBaseStalkModeInteraction_CanStalk_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseStalkModeInteraction_CanStalk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseStalkModeInteraction_CanStalk_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseStalkModeInteraction_CanStalk_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseStalkModeInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseStalkModeInteraction_CanStalk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseStalkModeInteraction, nullptr, "CanStalk", nullptr, nullptr, sizeof(BaseStalkModeInteraction_eventCanStalk_Parms), Z_Construct_UFunction_UBaseStalkModeInteraction_CanStalk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseStalkModeInteraction_CanStalk_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseStalkModeInteraction_CanStalk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseStalkModeInteraction_CanStalk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseStalkModeInteraction_CanStalk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseStalkModeInteraction_CanStalk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseStalkModeInteraction_GetStalkerComponent_Statics
	{
		struct BaseStalkModeInteraction_eventGetStalkerComponent_Parms
		{
			UStalkerComponent* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseStalkModeInteraction_GetStalkerComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseStalkModeInteraction_GetStalkerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseStalkModeInteraction_eventGetStalkerComponent_Parms, ReturnValue), Z_Construct_UClass_UStalkerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseStalkModeInteraction_GetStalkerComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseStalkModeInteraction_GetStalkerComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseStalkModeInteraction_GetStalkerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseStalkModeInteraction_GetStalkerComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseStalkModeInteraction_GetStalkerComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseStalkModeInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseStalkModeInteraction_GetStalkerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseStalkModeInteraction, nullptr, "GetStalkerComponent", nullptr, nullptr, sizeof(BaseStalkModeInteraction_eventGetStalkerComponent_Parms), Z_Construct_UFunction_UBaseStalkModeInteraction_GetStalkerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseStalkModeInteraction_GetStalkerComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseStalkModeInteraction_GetStalkerComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseStalkModeInteraction_GetStalkerComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseStalkModeInteraction_GetStalkerComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseStalkModeInteraction_GetStalkerComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBaseStalkModeInteraction_NoRegister()
	{
		return UBaseStalkModeInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UBaseStalkModeInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseStalkModeInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDInteraction,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseStalkModeInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseStalkModeInteraction_CanStalk, "CanStalk" }, // 3770547177
		{ &Z_Construct_UFunction_UBaseStalkModeInteraction_GetStalkerComponent, "GetStalkerComponent" }, // 2194839098
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseStalkModeInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "BaseStalkModeInteraction.h" },
		{ "ModuleRelativePath", "Public/BaseStalkModeInteraction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseStalkModeInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseStalkModeInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseStalkModeInteraction_Statics::ClassParams = {
		&UBaseStalkModeInteraction::StaticClass,
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
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseStalkModeInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseStalkModeInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseStalkModeInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseStalkModeInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseStalkModeInteraction, 768361964);
	template<> DBDINTERACTION_API UClass* StaticClass<UBaseStalkModeInteraction>()
	{
		return UBaseStalkModeInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseStalkModeInteraction(Z_Construct_UClass_UBaseStalkModeInteraction, &UBaseStalkModeInteraction::StaticClass, TEXT("/Script/DBDInteraction"), TEXT("UBaseStalkModeInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseStalkModeInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
