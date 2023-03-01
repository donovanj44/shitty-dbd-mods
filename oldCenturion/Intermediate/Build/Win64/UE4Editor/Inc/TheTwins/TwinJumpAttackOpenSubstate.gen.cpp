// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/TwinJumpAttackOpenSubstate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTwinJumpAttackOpenSubstate() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_UTwinJumpAttackOpenSubstate_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UTwinJumpAttackOpenSubstate();
	DBDATTACK_API UClass* Z_Construct_UClass_UPounceAttackOpenSubstate();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTwinJumpAttackOpenSubstate::execLocal_OnTwinCapsuleHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_hitComponent);
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp);
		P_GET_STRUCT(FVector,Z_Param_normalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Local_OnTwinCapsuleHit(Z_Param_hitComponent,Z_Param_otherActor,Z_Param_otherComp,Z_Param_normalImpulse,Z_Param_Out_hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTwinJumpAttackOpenSubstate::execLocal_OnTwinOverlapEnter)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_hitComponent);
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_otherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Local_OnTwinOverlapEnter(Z_Param_hitComponent,Z_Param_otherActor,Z_Param_otherComp,Z_Param_otherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_hit);
		P_NATIVE_END;
	}
	void UTwinJumpAttackOpenSubstate::StaticRegisterNativesUTwinJumpAttackOpenSubstate()
	{
		UClass* Class = UTwinJumpAttackOpenSubstate::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Local_OnTwinCapsuleHit", &UTwinJumpAttackOpenSubstate::execLocal_OnTwinCapsuleHit },
			{ "Local_OnTwinOverlapEnter", &UTwinJumpAttackOpenSubstate::execLocal_OnTwinOverlapEnter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinCapsuleHit_Statics
	{
		struct TwinJumpAttackOpenSubstate_eventLocal_OnTwinCapsuleHit_Parms
		{
			UPrimitiveComponent* hitComponent;
			AActor* otherActor;
			UPrimitiveComponent* otherComp;
			FVector normalImpulse;
			FHitResult hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_hit;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_normalImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_otherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_hitComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinCapsuleHit_Statics::NewProp_hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinCapsuleHit_Statics::NewProp_hit = { "hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TwinJumpAttackOpenSubstate_eventLocal_OnTwinCapsuleHit_Parms, hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinCapsuleHit_Statics::NewProp_hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinCapsuleHit_Statics::NewProp_hit_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinCapsuleHit_Statics::NewProp_normalImpulse = { "normalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TwinJumpAttackOpenSubstate_eventLocal_OnTwinCapsuleHit_Parms, normalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinCapsuleHit_Statics::NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinCapsuleHit_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TwinJumpAttackOpenSubstate_eventLocal_OnTwinCapsuleHit_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinCapsuleHit_Statics::NewProp_otherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinCapsuleHit_Statics::NewProp_otherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinCapsuleHit_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TwinJumpAttackOpenSubstate_eventLocal_OnTwinCapsuleHit_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinCapsuleHit_Statics::NewProp_hitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinCapsuleHit_Statics::NewProp_hitComponent = { "hitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TwinJumpAttackOpenSubstate_eventLocal_OnTwinCapsuleHit_Parms, hitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinCapsuleHit_Statics::NewProp_hitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinCapsuleHit_Statics::NewProp_hitComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinCapsuleHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinCapsuleHit_Statics::NewProp_hit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinCapsuleHit_Statics::NewProp_normalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinCapsuleHit_Statics::NewProp_otherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinCapsuleHit_Statics::NewProp_otherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinCapsuleHit_Statics::NewProp_hitComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinCapsuleHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwinJumpAttackOpenSubstate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinCapsuleHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwinJumpAttackOpenSubstate, nullptr, "Local_OnTwinCapsuleHit", nullptr, nullptr, sizeof(TwinJumpAttackOpenSubstate_eventLocal_OnTwinCapsuleHit_Parms), Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinCapsuleHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinCapsuleHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinCapsuleHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinCapsuleHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinCapsuleHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinCapsuleHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinOverlapEnter_Statics
	{
		struct TwinJumpAttackOpenSubstate_eventLocal_OnTwinOverlapEnter_Parms
		{
			UPrimitiveComponent* hitComponent;
			AActor* otherActor;
			UPrimitiveComponent* otherComp;
			int32 otherBodyIndex;
			bool bFromSweep;
			FHitResult hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_hit;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_otherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_otherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_hitComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinOverlapEnter_Statics::NewProp_hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinOverlapEnter_Statics::NewProp_hit = { "hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TwinJumpAttackOpenSubstate_eventLocal_OnTwinOverlapEnter_Parms, hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinOverlapEnter_Statics::NewProp_hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinOverlapEnter_Statics::NewProp_hit_MetaData)) };
	void Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinOverlapEnter_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((TwinJumpAttackOpenSubstate_eventLocal_OnTwinOverlapEnter_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinOverlapEnter_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TwinJumpAttackOpenSubstate_eventLocal_OnTwinOverlapEnter_Parms), &Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinOverlapEnter_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinOverlapEnter_Statics::NewProp_otherBodyIndex = { "otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TwinJumpAttackOpenSubstate_eventLocal_OnTwinOverlapEnter_Parms, otherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinOverlapEnter_Statics::NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinOverlapEnter_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TwinJumpAttackOpenSubstate_eventLocal_OnTwinOverlapEnter_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinOverlapEnter_Statics::NewProp_otherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinOverlapEnter_Statics::NewProp_otherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinOverlapEnter_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TwinJumpAttackOpenSubstate_eventLocal_OnTwinOverlapEnter_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinOverlapEnter_Statics::NewProp_hitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinOverlapEnter_Statics::NewProp_hitComponent = { "hitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TwinJumpAttackOpenSubstate_eventLocal_OnTwinOverlapEnter_Parms, hitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinOverlapEnter_Statics::NewProp_hitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinOverlapEnter_Statics::NewProp_hitComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinOverlapEnter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinOverlapEnter_Statics::NewProp_hit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinOverlapEnter_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinOverlapEnter_Statics::NewProp_otherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinOverlapEnter_Statics::NewProp_otherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinOverlapEnter_Statics::NewProp_otherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinOverlapEnter_Statics::NewProp_hitComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinOverlapEnter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwinJumpAttackOpenSubstate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinOverlapEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwinJumpAttackOpenSubstate, nullptr, "Local_OnTwinOverlapEnter", nullptr, nullptr, sizeof(TwinJumpAttackOpenSubstate_eventLocal_OnTwinOverlapEnter_Parms), Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinOverlapEnter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinOverlapEnter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinOverlapEnter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinOverlapEnter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinOverlapEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinOverlapEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTwinJumpAttackOpenSubstate_NoRegister()
	{
		return UTwinJumpAttackOpenSubstate::StaticClass();
	}
	struct Z_Construct_UClass_UTwinJumpAttackOpenSubstate_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTwinJumpAttackOpenSubstate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPounceAttackOpenSubstate,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTwinJumpAttackOpenSubstate_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinCapsuleHit, "Local_OnTwinCapsuleHit" }, // 2771184170
		{ &Z_Construct_UFunction_UTwinJumpAttackOpenSubstate_Local_OnTwinOverlapEnter, "Local_OnTwinOverlapEnter" }, // 3314669515
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinJumpAttackOpenSubstate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TwinJumpAttackOpenSubstate.h" },
		{ "ModuleRelativePath", "Public/TwinJumpAttackOpenSubstate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTwinJumpAttackOpenSubstate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTwinJumpAttackOpenSubstate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTwinJumpAttackOpenSubstate_Statics::ClassParams = {
		&UTwinJumpAttackOpenSubstate::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTwinJumpAttackOpenSubstate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinJumpAttackOpenSubstate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTwinJumpAttackOpenSubstate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTwinJumpAttackOpenSubstate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTwinJumpAttackOpenSubstate, 2787006197);
	template<> THETWINS_API UClass* StaticClass<UTwinJumpAttackOpenSubstate>()
	{
		return UTwinJumpAttackOpenSubstate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTwinJumpAttackOpenSubstate(Z_Construct_UClass_UTwinJumpAttackOpenSubstate, &UTwinJumpAttackOpenSubstate::StaticClass, TEXT("/Script/TheTwins"), TEXT("UTwinJumpAttackOpenSubstate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTwinJumpAttackOpenSubstate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
