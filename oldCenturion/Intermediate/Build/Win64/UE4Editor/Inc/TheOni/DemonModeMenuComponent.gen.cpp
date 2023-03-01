// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheOni/Public/DemonModeMenuComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDemonModeMenuComponent() {}
// Cross Module References
	THEONI_API UClass* Z_Construct_UClass_UDemonModeMenuComponent_NoRegister();
	THEONI_API UClass* Z_Construct_UClass_UDemonModeMenuComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheOni();
// End Cross Module References
	DEFINE_FUNCTION(UDemonModeMenuComponent::execSetInMenuDemonMode)
	{
		P_GET_UBOOL(Z_Param_inMenuDemonMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInMenuDemonMode(Z_Param_inMenuDemonMode);
		P_NATIVE_END;
	}
	void UDemonModeMenuComponent::StaticRegisterNativesUDemonModeMenuComponent()
	{
		UClass* Class = UDemonModeMenuComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetInMenuDemonMode", &UDemonModeMenuComponent::execSetInMenuDemonMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDemonModeMenuComponent_SetInMenuDemonMode_Statics
	{
		struct DemonModeMenuComponent_eventSetInMenuDemonMode_Parms
		{
			bool inMenuDemonMode;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inMenuDemonMode_MetaData[];
#endif
		static void NewProp_inMenuDemonMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inMenuDemonMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDemonModeMenuComponent_SetInMenuDemonMode_Statics::NewProp_inMenuDemonMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UDemonModeMenuComponent_SetInMenuDemonMode_Statics::NewProp_inMenuDemonMode_SetBit(void* Obj)
	{
		((DemonModeMenuComponent_eventSetInMenuDemonMode_Parms*)Obj)->inMenuDemonMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDemonModeMenuComponent_SetInMenuDemonMode_Statics::NewProp_inMenuDemonMode = { "inMenuDemonMode", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DemonModeMenuComponent_eventSetInMenuDemonMode_Parms), &Z_Construct_UFunction_UDemonModeMenuComponent_SetInMenuDemonMode_Statics::NewProp_inMenuDemonMode_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UDemonModeMenuComponent_SetInMenuDemonMode_Statics::NewProp_inMenuDemonMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDemonModeMenuComponent_SetInMenuDemonMode_Statics::NewProp_inMenuDemonMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDemonModeMenuComponent_SetInMenuDemonMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDemonModeMenuComponent_SetInMenuDemonMode_Statics::NewProp_inMenuDemonMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDemonModeMenuComponent_SetInMenuDemonMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DemonModeMenuComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDemonModeMenuComponent_SetInMenuDemonMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDemonModeMenuComponent, nullptr, "SetInMenuDemonMode", nullptr, nullptr, sizeof(DemonModeMenuComponent_eventSetInMenuDemonMode_Parms), Z_Construct_UFunction_UDemonModeMenuComponent_SetInMenuDemonMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDemonModeMenuComponent_SetInMenuDemonMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDemonModeMenuComponent_SetInMenuDemonMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDemonModeMenuComponent_SetInMenuDemonMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDemonModeMenuComponent_SetInMenuDemonMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDemonModeMenuComponent_SetInMenuDemonMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDemonModeMenuComponent_NoRegister()
	{
		return UDemonModeMenuComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDemonModeMenuComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDemonModeMenuComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheOni,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDemonModeMenuComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDemonModeMenuComponent_SetInMenuDemonMode, "SetInMenuDemonMode" }, // 183546134
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemonModeMenuComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DemonModeMenuComponent.h" },
		{ "ModuleRelativePath", "Public/DemonModeMenuComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDemonModeMenuComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDemonModeMenuComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDemonModeMenuComponent_Statics::ClassParams = {
		&UDemonModeMenuComponent::StaticClass,
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
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDemonModeMenuComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDemonModeMenuComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDemonModeMenuComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDemonModeMenuComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDemonModeMenuComponent, 1183992304);
	template<> THEONI_API UClass* StaticClass<UDemonModeMenuComponent>()
	{
		return UDemonModeMenuComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDemonModeMenuComponent(Z_Construct_UClass_UDemonModeMenuComponent, &UDemonModeMenuComponent::StaticClass, TEXT("/Script/TheOni"), TEXT("UDemonModeMenuComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDemonModeMenuComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
