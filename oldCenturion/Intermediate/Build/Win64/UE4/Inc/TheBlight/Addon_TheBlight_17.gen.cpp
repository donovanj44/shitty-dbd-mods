// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheBlight/Public/Addon_TheBlight_17.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAddon_TheBlight_17() {}
// Cross Module References
	THEBLIGHT_API UClass* Z_Construct_UClass_UAddon_TheBlight_17_NoRegister();
	THEBLIGHT_API UClass* Z_Construct_UClass_UAddon_TheBlight_17();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UOnEventBaseAddon();
	UPackage* Z_Construct_UPackage__Script_TheBlight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAddon_TheBlight_17::execMulticast_SpawnParticleOnSurvivors)
	{
		P_GET_TARRAY(ACamperPlayer*,Z_Param_survivors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SpawnParticleOnSurvivors_Implementation(Z_Param_survivors);
		P_NATIVE_END;
	}
	static FName NAME_UAddon_TheBlight_17_Multicast_SpawnParticleOnSurvivors = FName(TEXT("Multicast_SpawnParticleOnSurvivors"));
	void UAddon_TheBlight_17::Multicast_SpawnParticleOnSurvivors(TArray<ACamperPlayer*> const& survivors)
	{
		Addon_TheBlight_17_eventMulticast_SpawnParticleOnSurvivors_Parms Parms;
		Parms.survivors=survivors;
		ProcessEvent(FindFunctionChecked(NAME_UAddon_TheBlight_17_Multicast_SpawnParticleOnSurvivors),&Parms);
	}
	static FName NAME_UAddon_TheBlight_17_SpawnParticleOnSurvivor = FName(TEXT("SpawnParticleOnSurvivor"));
	void UAddon_TheBlight_17::SpawnParticleOnSurvivor(const ACamperPlayer* camperPlayer)
	{
		Addon_TheBlight_17_eventSpawnParticleOnSurvivor_Parms Parms;
		Parms.camperPlayer=camperPlayer;
		ProcessEvent(FindFunctionChecked(NAME_UAddon_TheBlight_17_SpawnParticleOnSurvivor),&Parms);
	}
	void UAddon_TheBlight_17::StaticRegisterNativesUAddon_TheBlight_17()
	{
		UClass* Class = UAddon_TheBlight_17::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_SpawnParticleOnSurvivors", &UAddon_TheBlight_17::execMulticast_SpawnParticleOnSurvivors },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAddon_TheBlight_17_Multicast_SpawnParticleOnSurvivors_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_survivors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_survivors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivors_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAddon_TheBlight_17_Multicast_SpawnParticleOnSurvivors_Statics::NewProp_survivors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAddon_TheBlight_17_Multicast_SpawnParticleOnSurvivors_Statics::NewProp_survivors = { "survivors", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Addon_TheBlight_17_eventMulticast_SpawnParticleOnSurvivors_Parms, survivors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAddon_TheBlight_17_Multicast_SpawnParticleOnSurvivors_Statics::NewProp_survivors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAddon_TheBlight_17_Multicast_SpawnParticleOnSurvivors_Statics::NewProp_survivors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAddon_TheBlight_17_Multicast_SpawnParticleOnSurvivors_Statics::NewProp_survivors_Inner = { "survivors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAddon_TheBlight_17_Multicast_SpawnParticleOnSurvivors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAddon_TheBlight_17_Multicast_SpawnParticleOnSurvivors_Statics::NewProp_survivors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAddon_TheBlight_17_Multicast_SpawnParticleOnSurvivors_Statics::NewProp_survivors_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAddon_TheBlight_17_Multicast_SpawnParticleOnSurvivors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Addon_TheBlight_17.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAddon_TheBlight_17_Multicast_SpawnParticleOnSurvivors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAddon_TheBlight_17, nullptr, "Multicast_SpawnParticleOnSurvivors", nullptr, nullptr, sizeof(Addon_TheBlight_17_eventMulticast_SpawnParticleOnSurvivors_Parms), Z_Construct_UFunction_UAddon_TheBlight_17_Multicast_SpawnParticleOnSurvivors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAddon_TheBlight_17_Multicast_SpawnParticleOnSurvivors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAddon_TheBlight_17_Multicast_SpawnParticleOnSurvivors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAddon_TheBlight_17_Multicast_SpawnParticleOnSurvivors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAddon_TheBlight_17_Multicast_SpawnParticleOnSurvivors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAddon_TheBlight_17_Multicast_SpawnParticleOnSurvivors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAddon_TheBlight_17_SpawnParticleOnSurvivor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camperPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camperPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAddon_TheBlight_17_SpawnParticleOnSurvivor_Statics::NewProp_camperPlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAddon_TheBlight_17_SpawnParticleOnSurvivor_Statics::NewProp_camperPlayer = { "camperPlayer", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Addon_TheBlight_17_eventSpawnParticleOnSurvivor_Parms, camperPlayer), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAddon_TheBlight_17_SpawnParticleOnSurvivor_Statics::NewProp_camperPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAddon_TheBlight_17_SpawnParticleOnSurvivor_Statics::NewProp_camperPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAddon_TheBlight_17_SpawnParticleOnSurvivor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAddon_TheBlight_17_SpawnParticleOnSurvivor_Statics::NewProp_camperPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAddon_TheBlight_17_SpawnParticleOnSurvivor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Addon_TheBlight_17.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAddon_TheBlight_17_SpawnParticleOnSurvivor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAddon_TheBlight_17, nullptr, "SpawnParticleOnSurvivor", nullptr, nullptr, sizeof(Addon_TheBlight_17_eventSpawnParticleOnSurvivor_Parms), Z_Construct_UFunction_UAddon_TheBlight_17_SpawnParticleOnSurvivor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAddon_TheBlight_17_SpawnParticleOnSurvivor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAddon_TheBlight_17_SpawnParticleOnSurvivor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAddon_TheBlight_17_SpawnParticleOnSurvivor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAddon_TheBlight_17_SpawnParticleOnSurvivor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAddon_TheBlight_17_SpawnParticleOnSurvivor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAddon_TheBlight_17_NoRegister()
	{
		return UAddon_TheBlight_17::StaticClass();
	}
	struct Z_Construct_UClass_UAddon_TheBlight_17_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hinderedSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__hinderedSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__survivorInRangeDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__survivorInRangeDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAddon_TheBlight_17_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnEventBaseAddon,
		(UObject* (*)())Z_Construct_UPackage__Script_TheBlight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAddon_TheBlight_17_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAddon_TheBlight_17_Multicast_SpawnParticleOnSurvivors, "Multicast_SpawnParticleOnSurvivors" }, // 1941413393
		{ &Z_Construct_UFunction_UAddon_TheBlight_17_SpawnParticleOnSurvivor, "SpawnParticleOnSurvivor" }, // 2842702317
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddon_TheBlight_17_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Addon_TheBlight_17.h" },
		{ "ModuleRelativePath", "Public/Addon_TheBlight_17.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddon_TheBlight_17_Statics::NewProp__hinderedSeconds_MetaData[] = {
		{ "Category", "Addon_TheBlight_17" },
		{ "ModuleRelativePath", "Public/Addon_TheBlight_17.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAddon_TheBlight_17_Statics::NewProp__hinderedSeconds = { "_hinderedSeconds", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAddon_TheBlight_17, _hinderedSeconds), METADATA_PARAMS(Z_Construct_UClass_UAddon_TheBlight_17_Statics::NewProp__hinderedSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAddon_TheBlight_17_Statics::NewProp__hinderedSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddon_TheBlight_17_Statics::NewProp__survivorInRangeDistance_MetaData[] = {
		{ "Category", "Addon_TheBlight_17" },
		{ "ModuleRelativePath", "Public/Addon_TheBlight_17.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAddon_TheBlight_17_Statics::NewProp__survivorInRangeDistance = { "_survivorInRangeDistance", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAddon_TheBlight_17, _survivorInRangeDistance), METADATA_PARAMS(Z_Construct_UClass_UAddon_TheBlight_17_Statics::NewProp__survivorInRangeDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAddon_TheBlight_17_Statics::NewProp__survivorInRangeDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAddon_TheBlight_17_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAddon_TheBlight_17_Statics::NewProp__hinderedSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAddon_TheBlight_17_Statics::NewProp__survivorInRangeDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAddon_TheBlight_17_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAddon_TheBlight_17>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAddon_TheBlight_17_Statics::ClassParams = {
		&UAddon_TheBlight_17::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAddon_TheBlight_17_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAddon_TheBlight_17_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAddon_TheBlight_17_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAddon_TheBlight_17_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAddon_TheBlight_17()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAddon_TheBlight_17_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAddon_TheBlight_17, 4036442625);
	template<> THEBLIGHT_API UClass* StaticClass<UAddon_TheBlight_17>()
	{
		return UAddon_TheBlight_17::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAddon_TheBlight_17(Z_Construct_UClass_UAddon_TheBlight_17, &UAddon_TheBlight_17::StaticClass, TEXT("/Script/TheBlight"), TEXT("UAddon_TheBlight_17"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAddon_TheBlight_17);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
