// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK23/Public/TricksterSuperModeComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTricksterSuperModeComponent() {}
// Cross Module References
	THEK23_API UClass* Z_Construct_UClass_UTricksterSuperModeComponent_NoRegister();
	THEK23_API UClass* Z_Construct_UClass_UTricksterSuperModeComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheK23();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	STATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTunableStat();
// End Cross Module References
	DEFINE_FUNCTION(UTricksterSuperModeComponent::execOnRepIsInCooldown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRepIsInCooldown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTricksterSuperModeComponent::execOnRepIsInSuperMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRepIsInSuperMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTricksterSuperModeComponent::execOnRepIsSuperModeReady)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRepIsSuperModeReady();
		P_NATIVE_END;
	}
	void UTricksterSuperModeComponent::StaticRegisterNativesUTricksterSuperModeComponent()
	{
		UClass* Class = UTricksterSuperModeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRepIsInCooldown", &UTricksterSuperModeComponent::execOnRepIsInCooldown },
			{ "OnRepIsInSuperMode", &UTricksterSuperModeComponent::execOnRepIsInSuperMode },
			{ "OnRepIsSuperModeReady", &UTricksterSuperModeComponent::execOnRepIsSuperModeReady },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTricksterSuperModeComponent_OnRepIsInCooldown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTricksterSuperModeComponent_OnRepIsInCooldown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TricksterSuperModeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTricksterSuperModeComponent_OnRepIsInCooldown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTricksterSuperModeComponent, nullptr, "OnRepIsInCooldown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTricksterSuperModeComponent_OnRepIsInCooldown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTricksterSuperModeComponent_OnRepIsInCooldown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTricksterSuperModeComponent_OnRepIsInCooldown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTricksterSuperModeComponent_OnRepIsInCooldown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTricksterSuperModeComponent_OnRepIsInSuperMode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTricksterSuperModeComponent_OnRepIsInSuperMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TricksterSuperModeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTricksterSuperModeComponent_OnRepIsInSuperMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTricksterSuperModeComponent, nullptr, "OnRepIsInSuperMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTricksterSuperModeComponent_OnRepIsInSuperMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTricksterSuperModeComponent_OnRepIsInSuperMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTricksterSuperModeComponent_OnRepIsInSuperMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTricksterSuperModeComponent_OnRepIsInSuperMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTricksterSuperModeComponent_OnRepIsSuperModeReady_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTricksterSuperModeComponent_OnRepIsSuperModeReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TricksterSuperModeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTricksterSuperModeComponent_OnRepIsSuperModeReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTricksterSuperModeComponent, nullptr, "OnRepIsSuperModeReady", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTricksterSuperModeComponent_OnRepIsSuperModeReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTricksterSuperModeComponent_OnRepIsSuperModeReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTricksterSuperModeComponent_OnRepIsSuperModeReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTricksterSuperModeComponent_OnRepIsSuperModeReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTricksterSuperModeComponent_NoRegister()
	{
		return UTricksterSuperModeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTricksterSuperModeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__shouldDisableFlurryDuringCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__shouldDisableFlurryDuringCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__superModeCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__superModeCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__superModeActiveDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__superModeActiveDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__superModeReadyDepletionPerSecond_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__superModeReadyDepletionPerSecond;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__superModeMaxCharge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__superModeMaxCharge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chargesToAddOnKnifeHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__chargesToAddOnKnifeHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isInCooldown_MetaData[];
#endif
		static void NewProp__isInCooldown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isInCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isSuperModeReady_MetaData[];
#endif
		static void NewProp__isSuperModeReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isSuperModeReady;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isInSuperMode_MetaData[];
#endif
		static void NewProp__isInSuperMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isInSuperMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTricksterSuperModeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK23,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTricksterSuperModeComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTricksterSuperModeComponent_OnRepIsInCooldown, "OnRepIsInCooldown" }, // 3900434120
		{ &Z_Construct_UFunction_UTricksterSuperModeComponent_OnRepIsInSuperMode, "OnRepIsInSuperMode" }, // 3425128293
		{ &Z_Construct_UFunction_UTricksterSuperModeComponent_OnRepIsSuperModeReady, "OnRepIsSuperModeReady" }, // 3931671612
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTricksterSuperModeComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TricksterSuperModeComponent.h" },
		{ "ModuleRelativePath", "Public/TricksterSuperModeComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTricksterSuperModeComponent_Statics::NewProp__shouldDisableFlurryDuringCooldown_MetaData[] = {
		{ "Category", "TricksterSuperModeComponent" },
		{ "ModuleRelativePath", "Public/TricksterSuperModeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTricksterSuperModeComponent_Statics::NewProp__shouldDisableFlurryDuringCooldown = { "_shouldDisableFlurryDuringCooldown", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTricksterSuperModeComponent, _shouldDisableFlurryDuringCooldown), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UTricksterSuperModeComponent_Statics::NewProp__shouldDisableFlurryDuringCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTricksterSuperModeComponent_Statics::NewProp__shouldDisableFlurryDuringCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTricksterSuperModeComponent_Statics::NewProp__superModeCooldown_MetaData[] = {
		{ "Category", "TricksterSuperModeComponent" },
		{ "ModuleRelativePath", "Public/TricksterSuperModeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTricksterSuperModeComponent_Statics::NewProp__superModeCooldown = { "_superModeCooldown", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTricksterSuperModeComponent, _superModeCooldown), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UTricksterSuperModeComponent_Statics::NewProp__superModeCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTricksterSuperModeComponent_Statics::NewProp__superModeCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTricksterSuperModeComponent_Statics::NewProp__superModeActiveDuration_MetaData[] = {
		{ "Category", "TricksterSuperModeComponent" },
		{ "ModuleRelativePath", "Public/TricksterSuperModeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTricksterSuperModeComponent_Statics::NewProp__superModeActiveDuration = { "_superModeActiveDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTricksterSuperModeComponent, _superModeActiveDuration), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_UTricksterSuperModeComponent_Statics::NewProp__superModeActiveDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTricksterSuperModeComponent_Statics::NewProp__superModeActiveDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTricksterSuperModeComponent_Statics::NewProp__superModeReadyDepletionPerSecond_MetaData[] = {
		{ "Category", "TricksterSuperModeComponent" },
		{ "ModuleRelativePath", "Public/TricksterSuperModeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTricksterSuperModeComponent_Statics::NewProp__superModeReadyDepletionPerSecond = { "_superModeReadyDepletionPerSecond", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTricksterSuperModeComponent, _superModeReadyDepletionPerSecond), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UTricksterSuperModeComponent_Statics::NewProp__superModeReadyDepletionPerSecond_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTricksterSuperModeComponent_Statics::NewProp__superModeReadyDepletionPerSecond_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTricksterSuperModeComponent_Statics::NewProp__superModeMaxCharge_MetaData[] = {
		{ "Category", "TricksterSuperModeComponent" },
		{ "ModuleRelativePath", "Public/TricksterSuperModeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTricksterSuperModeComponent_Statics::NewProp__superModeMaxCharge = { "_superModeMaxCharge", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTricksterSuperModeComponent, _superModeMaxCharge), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UTricksterSuperModeComponent_Statics::NewProp__superModeMaxCharge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTricksterSuperModeComponent_Statics::NewProp__superModeMaxCharge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTricksterSuperModeComponent_Statics::NewProp__chargesToAddOnKnifeHit_MetaData[] = {
		{ "Category", "TricksterSuperModeComponent" },
		{ "ModuleRelativePath", "Public/TricksterSuperModeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTricksterSuperModeComponent_Statics::NewProp__chargesToAddOnKnifeHit = { "_chargesToAddOnKnifeHit", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTricksterSuperModeComponent, _chargesToAddOnKnifeHit), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UTricksterSuperModeComponent_Statics::NewProp__chargesToAddOnKnifeHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTricksterSuperModeComponent_Statics::NewProp__chargesToAddOnKnifeHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTricksterSuperModeComponent_Statics::NewProp__isInCooldown_MetaData[] = {
		{ "ModuleRelativePath", "Public/TricksterSuperModeComponent.h" },
	};
#endif
	void Z_Construct_UClass_UTricksterSuperModeComponent_Statics::NewProp__isInCooldown_SetBit(void* Obj)
	{
		((UTricksterSuperModeComponent*)Obj)->_isInCooldown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTricksterSuperModeComponent_Statics::NewProp__isInCooldown = { "_isInCooldown", "OnRepIsInCooldown", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTricksterSuperModeComponent), &Z_Construct_UClass_UTricksterSuperModeComponent_Statics::NewProp__isInCooldown_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTricksterSuperModeComponent_Statics::NewProp__isInCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTricksterSuperModeComponent_Statics::NewProp__isInCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTricksterSuperModeComponent_Statics::NewProp__isSuperModeReady_MetaData[] = {
		{ "ModuleRelativePath", "Public/TricksterSuperModeComponent.h" },
	};
#endif
	void Z_Construct_UClass_UTricksterSuperModeComponent_Statics::NewProp__isSuperModeReady_SetBit(void* Obj)
	{
		((UTricksterSuperModeComponent*)Obj)->_isSuperModeReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTricksterSuperModeComponent_Statics::NewProp__isSuperModeReady = { "_isSuperModeReady", "OnRepIsSuperModeReady", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTricksterSuperModeComponent), &Z_Construct_UClass_UTricksterSuperModeComponent_Statics::NewProp__isSuperModeReady_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTricksterSuperModeComponent_Statics::NewProp__isSuperModeReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTricksterSuperModeComponent_Statics::NewProp__isSuperModeReady_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTricksterSuperModeComponent_Statics::NewProp__isInSuperMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/TricksterSuperModeComponent.h" },
	};
#endif
	void Z_Construct_UClass_UTricksterSuperModeComponent_Statics::NewProp__isInSuperMode_SetBit(void* Obj)
	{
		((UTricksterSuperModeComponent*)Obj)->_isInSuperMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTricksterSuperModeComponent_Statics::NewProp__isInSuperMode = { "_isInSuperMode", "OnRepIsInSuperMode", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTricksterSuperModeComponent), &Z_Construct_UClass_UTricksterSuperModeComponent_Statics::NewProp__isInSuperMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTricksterSuperModeComponent_Statics::NewProp__isInSuperMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTricksterSuperModeComponent_Statics::NewProp__isInSuperMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTricksterSuperModeComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTricksterSuperModeComponent_Statics::NewProp__shouldDisableFlurryDuringCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTricksterSuperModeComponent_Statics::NewProp__superModeCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTricksterSuperModeComponent_Statics::NewProp__superModeActiveDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTricksterSuperModeComponent_Statics::NewProp__superModeReadyDepletionPerSecond,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTricksterSuperModeComponent_Statics::NewProp__superModeMaxCharge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTricksterSuperModeComponent_Statics::NewProp__chargesToAddOnKnifeHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTricksterSuperModeComponent_Statics::NewProp__isInCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTricksterSuperModeComponent_Statics::NewProp__isSuperModeReady,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTricksterSuperModeComponent_Statics::NewProp__isInSuperMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTricksterSuperModeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTricksterSuperModeComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTricksterSuperModeComponent_Statics::ClassParams = {
		&UTricksterSuperModeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTricksterSuperModeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTricksterSuperModeComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTricksterSuperModeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTricksterSuperModeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTricksterSuperModeComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTricksterSuperModeComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTricksterSuperModeComponent, 2139100670);
	template<> THEK23_API UClass* StaticClass<UTricksterSuperModeComponent>()
	{
		return UTricksterSuperModeComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTricksterSuperModeComponent(Z_Construct_UClass_UTricksterSuperModeComponent, &UTricksterSuperModeComponent::StaticClass, TEXT("/Script/TheK23"), TEXT("UTricksterSuperModeComponent"), false, nullptr, nullptr, nullptr);

	void UTricksterSuperModeComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__isInSuperMode(TEXT("_isInSuperMode"));
		static const FName Name__isSuperModeReady(TEXT("_isSuperModeReady"));
		static const FName Name__isInCooldown(TEXT("_isInCooldown"));

		const bool bIsValid = true
			&& Name__isInSuperMode == ClassReps[(int32)ENetFields_Private::_isInSuperMode].Property->GetFName()
			&& Name__isSuperModeReady == ClassReps[(int32)ENetFields_Private::_isSuperModeReady].Property->GetFName()
			&& Name__isInCooldown == ClassReps[(int32)ENetFields_Private::_isInCooldown].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UTricksterSuperModeComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTricksterSuperModeComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
