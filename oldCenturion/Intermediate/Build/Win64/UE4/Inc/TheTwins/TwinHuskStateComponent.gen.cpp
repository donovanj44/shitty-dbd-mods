// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/TwinHuskStateComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTwinHuskStateComponent() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_UTwinHuskStateComponent_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UTwinHuskStateComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
// End Cross Module References
	DEFINE_FUNCTION(UTwinHuskStateComponent::execIsDeadFromSurvivorBack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDeadFromSurvivorBack();
		P_NATIVE_END;
	}
	void UTwinHuskStateComponent::StaticRegisterNativesUTwinHuskStateComponent()
	{
		UClass* Class = UTwinHuskStateComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsDeadFromSurvivorBack", &UTwinHuskStateComponent::execIsDeadFromSurvivorBack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTwinHuskStateComponent_IsDeadFromSurvivorBack_Statics
	{
		struct TwinHuskStateComponent_eventIsDeadFromSurvivorBack_Parms
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
	void Z_Construct_UFunction_UTwinHuskStateComponent_IsDeadFromSurvivorBack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TwinHuskStateComponent_eventIsDeadFromSurvivorBack_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTwinHuskStateComponent_IsDeadFromSurvivorBack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TwinHuskStateComponent_eventIsDeadFromSurvivorBack_Parms), &Z_Construct_UFunction_UTwinHuskStateComponent_IsDeadFromSurvivorBack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwinHuskStateComponent_IsDeadFromSurvivorBack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinHuskStateComponent_IsDeadFromSurvivorBack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinHuskStateComponent_IsDeadFromSurvivorBack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwinHuskStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinHuskStateComponent_IsDeadFromSurvivorBack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwinHuskStateComponent, nullptr, "IsDeadFromSurvivorBack", nullptr, nullptr, sizeof(TwinHuskStateComponent_eventIsDeadFromSurvivorBack_Parms), Z_Construct_UFunction_UTwinHuskStateComponent_IsDeadFromSurvivorBack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinHuskStateComponent_IsDeadFromSurvivorBack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwinHuskStateComponent_IsDeadFromSurvivorBack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinHuskStateComponent_IsDeadFromSurvivorBack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwinHuskStateComponent_IsDeadFromSurvivorBack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTwinHuskStateComponent_IsDeadFromSurvivorBack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTwinHuskStateComponent_NoRegister()
	{
		return UTwinHuskStateComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTwinHuskStateComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTwinHuskStateComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTwinHuskStateComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTwinHuskStateComponent_IsDeadFromSurvivorBack, "IsDeadFromSurvivorBack" }, // 2733576897
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinHuskStateComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TwinHuskStateComponent.h" },
		{ "ModuleRelativePath", "Public/TwinHuskStateComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTwinHuskStateComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTwinHuskStateComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTwinHuskStateComponent_Statics::ClassParams = {
		&UTwinHuskStateComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTwinHuskStateComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinHuskStateComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTwinHuskStateComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTwinHuskStateComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTwinHuskStateComponent, 2696014812);
	template<> THETWINS_API UClass* StaticClass<UTwinHuskStateComponent>()
	{
		return UTwinHuskStateComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTwinHuskStateComponent(Z_Construct_UClass_UTwinHuskStateComponent, &UTwinHuskStateComponent::StaticClass, TEXT("/Script/TheTwins"), TEXT("UTwinHuskStateComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTwinHuskStateComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
