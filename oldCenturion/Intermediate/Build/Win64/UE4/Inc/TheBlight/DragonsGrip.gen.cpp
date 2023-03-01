// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheBlight/Public/DragonsGrip.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDragonsGrip() {}
// Cross Module References
	THEBLIGHT_API UClass* Z_Construct_UClass_UDragonsGrip_NoRegister();
	THEBLIGHT_API UClass* Z_Construct_UClass_UDragonsGrip();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_TheBlight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AGenerator_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDragonsGrip::execMulticast_OnRevealSurvivor)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_survivor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnRevealSurvivor_Implementation(Z_Param_survivor);
		P_NATIVE_END;
	}
	static FName NAME_UDragonsGrip_Multicast_OnRevealSurvivor = FName(TEXT("Multicast_OnRevealSurvivor"));
	void UDragonsGrip::Multicast_OnRevealSurvivor(ADBDPlayer* survivor)
	{
		DragonsGrip_eventMulticast_OnRevealSurvivor_Parms Parms;
		Parms.survivor=survivor;
		ProcessEvent(FindFunctionChecked(NAME_UDragonsGrip_Multicast_OnRevealSurvivor),&Parms);
	}
	static FName NAME_UDragonsGrip_OnRevealSurvivor = FName(TEXT("OnRevealSurvivor"));
	void UDragonsGrip::OnRevealSurvivor(ADBDPlayer* instigator)
	{
		DragonsGrip_eventOnRevealSurvivor_Parms Parms;
		Parms.instigator=instigator;
		ProcessEvent(FindFunctionChecked(NAME_UDragonsGrip_OnRevealSurvivor),&Parms);
	}
	void UDragonsGrip::StaticRegisterNativesUDragonsGrip()
	{
		UClass* Class = UDragonsGrip::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_OnRevealSurvivor", &UDragonsGrip::execMulticast_OnRevealSurvivor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDragonsGrip_Multicast_OnRevealSurvivor_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDragonsGrip_Multicast_OnRevealSurvivor_Statics::NewProp_survivor = { "survivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DragonsGrip_eventMulticast_OnRevealSurvivor_Parms, survivor), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDragonsGrip_Multicast_OnRevealSurvivor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDragonsGrip_Multicast_OnRevealSurvivor_Statics::NewProp_survivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDragonsGrip_Multicast_OnRevealSurvivor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DragonsGrip.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDragonsGrip_Multicast_OnRevealSurvivor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDragonsGrip, nullptr, "Multicast_OnRevealSurvivor", nullptr, nullptr, sizeof(DragonsGrip_eventMulticast_OnRevealSurvivor_Parms), Z_Construct_UFunction_UDragonsGrip_Multicast_OnRevealSurvivor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDragonsGrip_Multicast_OnRevealSurvivor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDragonsGrip_Multicast_OnRevealSurvivor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDragonsGrip_Multicast_OnRevealSurvivor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDragonsGrip_Multicast_OnRevealSurvivor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDragonsGrip_Multicast_OnRevealSurvivor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDragonsGrip_OnRevealSurvivor_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_instigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDragonsGrip_OnRevealSurvivor_Statics::NewProp_instigator = { "instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DragonsGrip_eventOnRevealSurvivor_Parms, instigator), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDragonsGrip_OnRevealSurvivor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDragonsGrip_OnRevealSurvivor_Statics::NewProp_instigator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDragonsGrip_OnRevealSurvivor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DragonsGrip.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDragonsGrip_OnRevealSurvivor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDragonsGrip, nullptr, "OnRevealSurvivor", nullptr, nullptr, sizeof(DragonsGrip_eventOnRevealSurvivor_Parms), Z_Construct_UFunction_UDragonsGrip_OnRevealSurvivor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDragonsGrip_OnRevealSurvivor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDragonsGrip_OnRevealSurvivor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDragonsGrip_OnRevealSurvivor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDragonsGrip_OnRevealSurvivor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDragonsGrip_OnRevealSurvivor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDragonsGrip_NoRegister()
	{
		return UDragonsGrip::StaticClass();
	}
	struct Z_Construct_UClass_UDragonsGrip_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__loudNoiseRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__loudNoiseRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__onlyExposeFirstSurvivor_MetaData[];
#endif
		static void NewProp__onlyExposeFirstSurvivor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__onlyExposeFirstSurvivor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__exposedEffectDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__exposedEffectDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cooldownDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__cooldownDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__activationDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__activationDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__kickedGenerator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__kickedGenerator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDragonsGrip_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheBlight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDragonsGrip_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDragonsGrip_Multicast_OnRevealSurvivor, "Multicast_OnRevealSurvivor" }, // 3820303948
		{ &Z_Construct_UFunction_UDragonsGrip_OnRevealSurvivor, "OnRevealSurvivor" }, // 1367623665
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragonsGrip_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DragonsGrip.h" },
		{ "ModuleRelativePath", "Public/DragonsGrip.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragonsGrip_Statics::NewProp__loudNoiseRange_MetaData[] = {
		{ "Category", "DragonsGrip" },
		{ "ModuleRelativePath", "Public/DragonsGrip.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDragonsGrip_Statics::NewProp__loudNoiseRange = { "_loudNoiseRange", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDragonsGrip, _loudNoiseRange), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UDragonsGrip_Statics::NewProp__loudNoiseRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDragonsGrip_Statics::NewProp__loudNoiseRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragonsGrip_Statics::NewProp__onlyExposeFirstSurvivor_MetaData[] = {
		{ "Category", "DragonsGrip" },
		{ "ModuleRelativePath", "Public/DragonsGrip.h" },
	};
#endif
	void Z_Construct_UClass_UDragonsGrip_Statics::NewProp__onlyExposeFirstSurvivor_SetBit(void* Obj)
	{
		((UDragonsGrip*)Obj)->_onlyExposeFirstSurvivor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDragonsGrip_Statics::NewProp__onlyExposeFirstSurvivor = { "_onlyExposeFirstSurvivor", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDragonsGrip), &Z_Construct_UClass_UDragonsGrip_Statics::NewProp__onlyExposeFirstSurvivor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDragonsGrip_Statics::NewProp__onlyExposeFirstSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDragonsGrip_Statics::NewProp__onlyExposeFirstSurvivor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragonsGrip_Statics::NewProp__exposedEffectDuration_MetaData[] = {
		{ "Category", "DragonsGrip" },
		{ "ModuleRelativePath", "Public/DragonsGrip.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDragonsGrip_Statics::NewProp__exposedEffectDuration = { "_exposedEffectDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_exposedEffectDuration, UDragonsGrip), STRUCT_OFFSET(UDragonsGrip, _exposedEffectDuration), METADATA_PARAMS(Z_Construct_UClass_UDragonsGrip_Statics::NewProp__exposedEffectDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDragonsGrip_Statics::NewProp__exposedEffectDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragonsGrip_Statics::NewProp__cooldownDuration_MetaData[] = {
		{ "Category", "DragonsGrip" },
		{ "ModuleRelativePath", "Public/DragonsGrip.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDragonsGrip_Statics::NewProp__cooldownDuration = { "_cooldownDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_cooldownDuration, UDragonsGrip), STRUCT_OFFSET(UDragonsGrip, _cooldownDuration), METADATA_PARAMS(Z_Construct_UClass_UDragonsGrip_Statics::NewProp__cooldownDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDragonsGrip_Statics::NewProp__cooldownDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragonsGrip_Statics::NewProp__activationDuration_MetaData[] = {
		{ "Category", "DragonsGrip" },
		{ "ModuleRelativePath", "Public/DragonsGrip.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDragonsGrip_Statics::NewProp__activationDuration = { "_activationDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_activationDuration, UDragonsGrip), STRUCT_OFFSET(UDragonsGrip, _activationDuration), METADATA_PARAMS(Z_Construct_UClass_UDragonsGrip_Statics::NewProp__activationDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDragonsGrip_Statics::NewProp__activationDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragonsGrip_Statics::NewProp__kickedGenerator_MetaData[] = {
		{ "ModuleRelativePath", "Public/DragonsGrip.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDragonsGrip_Statics::NewProp__kickedGenerator = { "_kickedGenerator", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDragonsGrip, _kickedGenerator), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDragonsGrip_Statics::NewProp__kickedGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDragonsGrip_Statics::NewProp__kickedGenerator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDragonsGrip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDragonsGrip_Statics::NewProp__loudNoiseRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDragonsGrip_Statics::NewProp__onlyExposeFirstSurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDragonsGrip_Statics::NewProp__exposedEffectDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDragonsGrip_Statics::NewProp__cooldownDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDragonsGrip_Statics::NewProp__activationDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDragonsGrip_Statics::NewProp__kickedGenerator,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDragonsGrip_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDragonsGrip>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDragonsGrip_Statics::ClassParams = {
		&UDragonsGrip::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDragonsGrip_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDragonsGrip_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDragonsGrip_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDragonsGrip_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDragonsGrip()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDragonsGrip_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDragonsGrip, 4074413957);
	template<> THEBLIGHT_API UClass* StaticClass<UDragonsGrip>()
	{
		return UDragonsGrip::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDragonsGrip(Z_Construct_UClass_UDragonsGrip, &UDragonsGrip::StaticClass, TEXT("/Script/TheBlight"), TEXT("UDragonsGrip"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDragonsGrip);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
