// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/K25SurvivorChainHuntEffectsComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK25SurvivorChainHuntEffectsComponent() {}
// Cross Module References
	THEK25_API UClass* Z_Construct_UClass_UK25SurvivorChainHuntEffectsComponent_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_UK25SurvivorChainHuntEffectsComponent();
	THEK25_API UClass* Z_Construct_UClass_UK25ChainHuntEffectsComponent();
	UPackage* Z_Construct_UPackage__Script_TheK25();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USurvivorStatusInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UK25SurvivorChainHuntEffectsComponent::execGetOwningSurvivor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACamperPlayer**)Z_Param__Result=P_THIS->GetOwningSurvivor();
		P_NATIVE_END;
	}
	void UK25SurvivorChainHuntEffectsComponent::StaticRegisterNativesUK25SurvivorChainHuntEffectsComponent()
	{
		UClass* Class = UK25SurvivorChainHuntEffectsComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOwningSurvivor", &UK25SurvivorChainHuntEffectsComponent::execGetOwningSurvivor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UK25SurvivorChainHuntEffectsComponent_GetOwningSurvivor_Statics
	{
		struct K25SurvivorChainHuntEffectsComponent_eventGetOwningSurvivor_Parms
		{
			ACamperPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK25SurvivorChainHuntEffectsComponent_GetOwningSurvivor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25SurvivorChainHuntEffectsComponent_eventGetOwningSurvivor_Parms, ReturnValue), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25SurvivorChainHuntEffectsComponent_GetOwningSurvivor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25SurvivorChainHuntEffectsComponent_GetOwningSurvivor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25SurvivorChainHuntEffectsComponent_GetOwningSurvivor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25SurvivorChainHuntEffectsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25SurvivorChainHuntEffectsComponent_GetOwningSurvivor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25SurvivorChainHuntEffectsComponent, nullptr, "GetOwningSurvivor", nullptr, nullptr, sizeof(K25SurvivorChainHuntEffectsComponent_eventGetOwningSurvivor_Parms), Z_Construct_UFunction_UK25SurvivorChainHuntEffectsComponent_GetOwningSurvivor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25SurvivorChainHuntEffectsComponent_GetOwningSurvivor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25SurvivorChainHuntEffectsComponent_GetOwningSurvivor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25SurvivorChainHuntEffectsComponent_GetOwningSurvivor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25SurvivorChainHuntEffectsComponent_GetOwningSurvivor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25SurvivorChainHuntEffectsComponent_GetOwningSurvivor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UK25SurvivorChainHuntEffectsComponent_NoRegister()
	{
		return UK25SurvivorChainHuntEffectsComponent::StaticClass();
	}
	struct Z_Construct_UClass_UK25SurvivorChainHuntEffectsComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK25SurvivorChainHuntEffectsComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK25ChainHuntEffectsComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UK25SurvivorChainHuntEffectsComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UK25SurvivorChainHuntEffectsComponent_GetOwningSurvivor, "GetOwningSurvivor" }, // 1930770186
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25SurvivorChainHuntEffectsComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K25SurvivorChainHuntEffectsComponent.h" },
		{ "ModuleRelativePath", "Public/K25SurvivorChainHuntEffectsComponent.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UK25SurvivorChainHuntEffectsComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USurvivorStatusInterface_NoRegister, (int32)VTABLE_OFFSET(UK25SurvivorChainHuntEffectsComponent, ISurvivorStatusInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK25SurvivorChainHuntEffectsComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK25SurvivorChainHuntEffectsComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK25SurvivorChainHuntEffectsComponent_Statics::ClassParams = {
		&UK25SurvivorChainHuntEffectsComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UK25SurvivorChainHuntEffectsComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK25SurvivorChainHuntEffectsComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK25SurvivorChainHuntEffectsComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK25SurvivorChainHuntEffectsComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK25SurvivorChainHuntEffectsComponent, 1667512378);
	template<> THEK25_API UClass* StaticClass<UK25SurvivorChainHuntEffectsComponent>()
	{
		return UK25SurvivorChainHuntEffectsComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK25SurvivorChainHuntEffectsComponent(Z_Construct_UClass_UK25SurvivorChainHuntEffectsComponent, &UK25SurvivorChainHuntEffectsComponent::StaticClass, TEXT("/Script/TheK25"), TEXT("UK25SurvivorChainHuntEffectsComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK25SurvivorChainHuntEffectsComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
