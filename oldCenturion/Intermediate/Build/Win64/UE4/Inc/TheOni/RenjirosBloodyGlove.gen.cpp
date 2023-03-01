// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheOni/Public/RenjirosBloodyGlove.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRenjirosBloodyGlove() {}
// Cross Module References
	THEONI_API UClass* Z_Construct_UClass_URenjirosBloodyGlove_NoRegister();
	THEONI_API UClass* Z_Construct_UClass_URenjirosBloodyGlove();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UItemAddon();
	UPackage* Z_Construct_UPackage__Script_TheOni();
	THEONI_API UClass* Z_Construct_UClass_ABloodOrb_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	THEONI_API UClass* Z_Construct_UClass_UBloodOrbOverlapRevealToKiller_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(URenjirosBloodyGlove::execAuthority_OnBloodOrbOverlapBegin)
	{
		P_GET_OBJECT(AActor,Z_Param_overlappingActor);
		P_GET_OBJECT(ABloodOrb,Z_Param_bloodOrb);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnBloodOrbOverlapBegin(Z_Param_overlappingActor,Z_Param_bloodOrb);
		P_NATIVE_END;
	}
	void URenjirosBloodyGlove::StaticRegisterNativesURenjirosBloodyGlove()
	{
		UClass* Class = URenjirosBloodyGlove::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnBloodOrbOverlapBegin", &URenjirosBloodyGlove::execAuthority_OnBloodOrbOverlapBegin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URenjirosBloodyGlove_Authority_OnBloodOrbOverlapBegin_Statics
	{
		struct RenjirosBloodyGlove_eventAuthority_OnBloodOrbOverlapBegin_Parms
		{
			const AActor* overlappingActor;
			const ABloodOrb* bloodOrb;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bloodOrb_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bloodOrb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_overlappingActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_overlappingActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenjirosBloodyGlove_Authority_OnBloodOrbOverlapBegin_Statics::NewProp_bloodOrb_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenjirosBloodyGlove_Authority_OnBloodOrbOverlapBegin_Statics::NewProp_bloodOrb = { "bloodOrb", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RenjirosBloodyGlove_eventAuthority_OnBloodOrbOverlapBegin_Parms, bloodOrb), Z_Construct_UClass_ABloodOrb_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URenjirosBloodyGlove_Authority_OnBloodOrbOverlapBegin_Statics::NewProp_bloodOrb_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URenjirosBloodyGlove_Authority_OnBloodOrbOverlapBegin_Statics::NewProp_bloodOrb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenjirosBloodyGlove_Authority_OnBloodOrbOverlapBegin_Statics::NewProp_overlappingActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenjirosBloodyGlove_Authority_OnBloodOrbOverlapBegin_Statics::NewProp_overlappingActor = { "overlappingActor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RenjirosBloodyGlove_eventAuthority_OnBloodOrbOverlapBegin_Parms, overlappingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URenjirosBloodyGlove_Authority_OnBloodOrbOverlapBegin_Statics::NewProp_overlappingActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URenjirosBloodyGlove_Authority_OnBloodOrbOverlapBegin_Statics::NewProp_overlappingActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenjirosBloodyGlove_Authority_OnBloodOrbOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenjirosBloodyGlove_Authority_OnBloodOrbOverlapBegin_Statics::NewProp_bloodOrb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenjirosBloodyGlove_Authority_OnBloodOrbOverlapBegin_Statics::NewProp_overlappingActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenjirosBloodyGlove_Authority_OnBloodOrbOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RenjirosBloodyGlove.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URenjirosBloodyGlove_Authority_OnBloodOrbOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenjirosBloodyGlove, nullptr, "Authority_OnBloodOrbOverlapBegin", nullptr, nullptr, sizeof(RenjirosBloodyGlove_eventAuthority_OnBloodOrbOverlapBegin_Parms), Z_Construct_UFunction_URenjirosBloodyGlove_Authority_OnBloodOrbOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenjirosBloodyGlove_Authority_OnBloodOrbOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenjirosBloodyGlove_Authority_OnBloodOrbOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenjirosBloodyGlove_Authority_OnBloodOrbOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenjirosBloodyGlove_Authority_OnBloodOrbOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URenjirosBloodyGlove_Authority_OnBloodOrbOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URenjirosBloodyGlove_NoRegister()
	{
		return URenjirosBloodyGlove::StaticClass();
	}
	struct Z_Construct_UClass_URenjirosBloodyGlove_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__revealEffectPerCamper_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__revealEffectPerCamper;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__revealEffectPerCamper_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__revealEffectPerCamper_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__revealTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__revealTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URenjirosBloodyGlove_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UItemAddon,
		(UObject* (*)())Z_Construct_UPackage__Script_TheOni,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URenjirosBloodyGlove_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URenjirosBloodyGlove_Authority_OnBloodOrbOverlapBegin, "Authority_OnBloodOrbOverlapBegin" }, // 3805883701
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenjirosBloodyGlove_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RenjirosBloodyGlove.h" },
		{ "ModuleRelativePath", "Public/RenjirosBloodyGlove.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenjirosBloodyGlove_Statics::NewProp__revealEffectPerCamper_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RenjirosBloodyGlove.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_URenjirosBloodyGlove_Statics::NewProp__revealEffectPerCamper = { "_revealEffectPerCamper", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URenjirosBloodyGlove, _revealEffectPerCamper), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URenjirosBloodyGlove_Statics::NewProp__revealEffectPerCamper_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenjirosBloodyGlove_Statics::NewProp__revealEffectPerCamper_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URenjirosBloodyGlove_Statics::NewProp__revealEffectPerCamper_Key_KeyProp = { "_revealEffectPerCamper_Key", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URenjirosBloodyGlove_Statics::NewProp__revealEffectPerCamper_ValueProp = { "_revealEffectPerCamper", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UBloodOrbOverlapRevealToKiller_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenjirosBloodyGlove_Statics::NewProp__revealTime_MetaData[] = {
		{ "Category", "RenjirosBloodyGlove" },
		{ "ModuleRelativePath", "Public/RenjirosBloodyGlove.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URenjirosBloodyGlove_Statics::NewProp__revealTime = { "_revealTime", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URenjirosBloodyGlove, _revealTime), METADATA_PARAMS(Z_Construct_UClass_URenjirosBloodyGlove_Statics::NewProp__revealTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenjirosBloodyGlove_Statics::NewProp__revealTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URenjirosBloodyGlove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenjirosBloodyGlove_Statics::NewProp__revealEffectPerCamper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenjirosBloodyGlove_Statics::NewProp__revealEffectPerCamper_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenjirosBloodyGlove_Statics::NewProp__revealEffectPerCamper_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenjirosBloodyGlove_Statics::NewProp__revealTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URenjirosBloodyGlove_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URenjirosBloodyGlove>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URenjirosBloodyGlove_Statics::ClassParams = {
		&URenjirosBloodyGlove::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URenjirosBloodyGlove_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URenjirosBloodyGlove_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URenjirosBloodyGlove_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URenjirosBloodyGlove_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URenjirosBloodyGlove()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URenjirosBloodyGlove_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URenjirosBloodyGlove, 939933725);
	template<> THEONI_API UClass* StaticClass<URenjirosBloodyGlove>()
	{
		return URenjirosBloodyGlove::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URenjirosBloodyGlove(Z_Construct_UClass_URenjirosBloodyGlove, &URenjirosBloodyGlove::StaticClass, TEXT("/Script/TheOni"), TEXT("URenjirosBloodyGlove"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URenjirosBloodyGlove);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
