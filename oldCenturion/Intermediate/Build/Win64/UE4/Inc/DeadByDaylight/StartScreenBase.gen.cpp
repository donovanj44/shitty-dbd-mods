// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/StartScreenBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStartScreenBase() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AStartScreenBase_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AStartScreenBase();
	ENGINE_API UClass* Z_Construct_UClass_ALevelScriptActor();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(AStartScreenBase::execTravelToMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TravelToMenu();
		P_NATIVE_END;
	}
	static FName NAME_AStartScreenBase_BeginDestroyTravelSequence = FName(TEXT("BeginDestroyTravelSequence"));
	void AStartScreenBase::BeginDestroyTravelSequence()
	{
		ProcessEvent(FindFunctionChecked(NAME_AStartScreenBase_BeginDestroyTravelSequence),NULL);
	}
	void AStartScreenBase::StaticRegisterNativesAStartScreenBase()
	{
		UClass* Class = AStartScreenBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TravelToMenu", &AStartScreenBase::execTravelToMenu },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AStartScreenBase_BeginDestroyTravelSequence_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStartScreenBase_BeginDestroyTravelSequence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StartScreenBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStartScreenBase_BeginDestroyTravelSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStartScreenBase, nullptr, "BeginDestroyTravelSequence", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStartScreenBase_BeginDestroyTravelSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStartScreenBase_BeginDestroyTravelSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStartScreenBase_BeginDestroyTravelSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStartScreenBase_BeginDestroyTravelSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStartScreenBase_TravelToMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStartScreenBase_TravelToMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StartScreenBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStartScreenBase_TravelToMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStartScreenBase, nullptr, "TravelToMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStartScreenBase_TravelToMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStartScreenBase_TravelToMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStartScreenBase_TravelToMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStartScreenBase_TravelToMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AStartScreenBase_NoRegister()
	{
		return AStartScreenBase::StaticClass();
	}
	struct Z_Construct_UClass_AStartScreenBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStartScreenBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALevelScriptActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AStartScreenBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AStartScreenBase_BeginDestroyTravelSequence, "BeginDestroyTravelSequence" }, // 1522274322
		{ &Z_Construct_UFunction_AStartScreenBase_TravelToMenu, "TravelToMenu" }, // 3262012493
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStartScreenBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "StartScreenBase.h" },
		{ "ModuleRelativePath", "Public/StartScreenBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStartScreenBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStartScreenBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStartScreenBase_Statics::ClassParams = {
		&AStartScreenBase::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStartScreenBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStartScreenBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStartScreenBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStartScreenBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStartScreenBase, 1887564300);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<AStartScreenBase>()
	{
		return AStartScreenBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStartScreenBase(Z_Construct_UClass_AStartScreenBase, &AStartScreenBase::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("AStartScreenBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStartScreenBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
