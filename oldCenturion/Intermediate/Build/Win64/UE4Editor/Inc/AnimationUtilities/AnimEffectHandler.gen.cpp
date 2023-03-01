// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationUtilities/Public/AnimEffectHandler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimEffectHandler() {}
// Cross Module References
	ANIMATIONUTILITIES_API UClass* Z_Construct_UClass_UAnimEffectHandler_NoRegister();
	ANIMATIONUTILITIES_API UClass* Z_Construct_UClass_UAnimEffectHandler();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AnimationUtilities();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAnimEffectHandler::execHandleAnimNotify)
	{
		P_GET_OBJECT(ACharacter,Z_Param_player);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_notifyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HandleAnimNotify_Implementation(Z_Param_player,Z_Param_Out_notifyName);
		P_NATIVE_END;
	}
	static FName NAME_UAnimEffectHandler_HandleAnimNotify = FName(TEXT("HandleAnimNotify"));
	bool UAnimEffectHandler::HandleAnimNotify(ACharacter* player, FName const& notifyName) const
	{
		AnimEffectHandler_eventHandleAnimNotify_Parms Parms;
		Parms.player=player;
		Parms.notifyName=notifyName;
		const_cast<UAnimEffectHandler*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAnimEffectHandler_HandleAnimNotify),&Parms);
		return !!Parms.ReturnValue;
	}
	void UAnimEffectHandler::StaticRegisterNativesUAnimEffectHandler()
	{
		UClass* Class = UAnimEffectHandler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleAnimNotify", &UAnimEffectHandler::execHandleAnimNotify },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimEffectHandler_HandleAnimNotify_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_notifyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_notifyName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAnimEffectHandler_HandleAnimNotify_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimEffectHandler_eventHandleAnimNotify_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimEffectHandler_HandleAnimNotify_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimEffectHandler_eventHandleAnimNotify_Parms), &Z_Construct_UFunction_UAnimEffectHandler_HandleAnimNotify_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimEffectHandler_HandleAnimNotify_Statics::NewProp_notifyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimEffectHandler_HandleAnimNotify_Statics::NewProp_notifyName = { "notifyName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimEffectHandler_eventHandleAnimNotify_Parms, notifyName), METADATA_PARAMS(Z_Construct_UFunction_UAnimEffectHandler_HandleAnimNotify_Statics::NewProp_notifyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimEffectHandler_HandleAnimNotify_Statics::NewProp_notifyName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimEffectHandler_HandleAnimNotify_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimEffectHandler_eventHandleAnimNotify_Parms, player), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimEffectHandler_HandleAnimNotify_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimEffectHandler_HandleAnimNotify_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimEffectHandler_HandleAnimNotify_Statics::NewProp_notifyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimEffectHandler_HandleAnimNotify_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimEffectHandler_HandleAnimNotify_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimEffectHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimEffectHandler_HandleAnimNotify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimEffectHandler, nullptr, "HandleAnimNotify", nullptr, nullptr, sizeof(AnimEffectHandler_eventHandleAnimNotify_Parms), Z_Construct_UFunction_UAnimEffectHandler_HandleAnimNotify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimEffectHandler_HandleAnimNotify_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimEffectHandler_HandleAnimNotify_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimEffectHandler_HandleAnimNotify_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimEffectHandler_HandleAnimNotify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimEffectHandler_HandleAnimNotify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAnimEffectHandler_NoRegister()
	{
		return UAnimEffectHandler::StaticClass();
	}
	struct Z_Construct_UClass_UAnimEffectHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimEffectHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimEffectHandler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimEffectHandler_HandleAnimNotify, "HandleAnimNotify" }, // 1063539030
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimEffectHandler_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AnimEffectHandler.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AnimEffectHandler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimEffectHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimEffectHandler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimEffectHandler_Statics::ClassParams = {
		&UAnimEffectHandler::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimEffectHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimEffectHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimEffectHandler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimEffectHandler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimEffectHandler, 4245822688);
	template<> ANIMATIONUTILITIES_API UClass* StaticClass<UAnimEffectHandler>()
	{
		return UAnimEffectHandler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimEffectHandler(Z_Construct_UClass_UAnimEffectHandler, &UAnimEffectHandler::StaticClass, TEXT("/Script/AnimationUtilities"), TEXT("UAnimEffectHandler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimEffectHandler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
