// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/HeadOn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeadOn() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UHeadOn_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UHeadOn();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStunnableComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ALocker_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UHeadOn::execAuthority_ActivatePerk)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_ActivatePerk();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadOn::execCanApplyHeadOnInteraction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanApplyHeadOnInteraction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadOn::execMulticast_StunPlayer)
	{
		P_GET_OBJECT(UStunnableComponent,Z_Param_stunnableComponent);
		P_GET_OBJECT(ADBDPlayer,Z_Param_stunner);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_StunPlayer_Implementation(Z_Param_stunnableComponent,Z_Param_stunner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadOn::execOnHeadOnAnimationComplete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHeadOnAnimationComplete();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadOn::execOnPawnOverlapEnter)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_hitComponent);
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_otherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_sweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPawnOverlapEnter(Z_Param_hitComponent,Z_Param_otherActor,Z_Param_otherComp,Z_Param_otherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_sweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadOn::execOnPawnOverlapExit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_hitComponent);
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_otherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPawnOverlapExit(Z_Param_hitComponent,Z_Param_otherActor,Z_Param_otherComp,Z_Param_otherBodyIndex);
		P_NATIVE_END;
	}
	static FName NAME_UHeadOn_Multicast_StunPlayer = FName(TEXT("Multicast_StunPlayer"));
	void UHeadOn::Multicast_StunPlayer(UStunnableComponent* stunnableComponent, ADBDPlayer* stunner)
	{
		HeadOn_eventMulticast_StunPlayer_Parms Parms;
		Parms.stunnableComponent=stunnableComponent;
		Parms.stunner=stunner;
		ProcessEvent(FindFunctionChecked(NAME_UHeadOn_Multicast_StunPlayer),&Parms);
	}
	void UHeadOn::StaticRegisterNativesUHeadOn()
	{
		UClass* Class = UHeadOn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_ActivatePerk", &UHeadOn::execAuthority_ActivatePerk },
			{ "CanApplyHeadOnInteraction", &UHeadOn::execCanApplyHeadOnInteraction },
			{ "Multicast_StunPlayer", &UHeadOn::execMulticast_StunPlayer },
			{ "OnHeadOnAnimationComplete", &UHeadOn::execOnHeadOnAnimationComplete },
			{ "OnPawnOverlapEnter", &UHeadOn::execOnPawnOverlapEnter },
			{ "OnPawnOverlapExit", &UHeadOn::execOnPawnOverlapExit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHeadOn_Authority_ActivatePerk_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadOn_Authority_ActivatePerk_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HeadOn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadOn_Authority_ActivatePerk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadOn, nullptr, "Authority_ActivatePerk", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadOn_Authority_ActivatePerk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadOn_Authority_ActivatePerk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadOn_Authority_ActivatePerk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeadOn_Authority_ActivatePerk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadOn_CanApplyHeadOnInteraction_Statics
	{
		struct HeadOn_eventCanApplyHeadOnInteraction_Parms
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
	void Z_Construct_UFunction_UHeadOn_CanApplyHeadOnInteraction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HeadOn_eventCanApplyHeadOnInteraction_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeadOn_CanApplyHeadOnInteraction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HeadOn_eventCanApplyHeadOnInteraction_Parms), &Z_Construct_UFunction_UHeadOn_CanApplyHeadOnInteraction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadOn_CanApplyHeadOnInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadOn_CanApplyHeadOnInteraction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadOn_CanApplyHeadOnInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HeadOn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadOn_CanApplyHeadOnInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadOn, nullptr, "CanApplyHeadOnInteraction", nullptr, nullptr, sizeof(HeadOn_eventCanApplyHeadOnInteraction_Parms), Z_Construct_UFunction_UHeadOn_CanApplyHeadOnInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadOn_CanApplyHeadOnInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadOn_CanApplyHeadOnInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadOn_CanApplyHeadOnInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadOn_CanApplyHeadOnInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeadOn_CanApplyHeadOnInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadOn_Multicast_StunPlayer_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_stunner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stunnableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_stunnableComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHeadOn_Multicast_StunPlayer_Statics::NewProp_stunner = { "stunner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadOn_eventMulticast_StunPlayer_Parms, stunner), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadOn_Multicast_StunPlayer_Statics::NewProp_stunnableComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHeadOn_Multicast_StunPlayer_Statics::NewProp_stunnableComponent = { "stunnableComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadOn_eventMulticast_StunPlayer_Parms, stunnableComponent), Z_Construct_UClass_UStunnableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHeadOn_Multicast_StunPlayer_Statics::NewProp_stunnableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadOn_Multicast_StunPlayer_Statics::NewProp_stunnableComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadOn_Multicast_StunPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadOn_Multicast_StunPlayer_Statics::NewProp_stunner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadOn_Multicast_StunPlayer_Statics::NewProp_stunnableComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadOn_Multicast_StunPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HeadOn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadOn_Multicast_StunPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadOn, nullptr, "Multicast_StunPlayer", nullptr, nullptr, sizeof(HeadOn_eventMulticast_StunPlayer_Parms), Z_Construct_UFunction_UHeadOn_Multicast_StunPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadOn_Multicast_StunPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadOn_Multicast_StunPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadOn_Multicast_StunPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadOn_Multicast_StunPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeadOn_Multicast_StunPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadOn_OnHeadOnAnimationComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadOn_OnHeadOnAnimationComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HeadOn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadOn_OnHeadOnAnimationComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadOn, nullptr, "OnHeadOnAnimationComplete", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadOn_OnHeadOnAnimationComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadOn_OnHeadOnAnimationComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadOn_OnHeadOnAnimationComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeadOn_OnHeadOnAnimationComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadOn_OnPawnOverlapEnter_Statics
	{
		struct HeadOn_eventOnPawnOverlapEnter_Parms
		{
			UPrimitiveComponent* hitComponent;
			AActor* otherActor;
			UPrimitiveComponent* otherComp;
			int32 otherBodyIndex;
			bool bFromSweep;
			FHitResult sweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_sweepResult;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadOn_OnPawnOverlapEnter_Statics::NewProp_sweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadOn_OnPawnOverlapEnter_Statics::NewProp_sweepResult = { "sweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadOn_eventOnPawnOverlapEnter_Parms, sweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UHeadOn_OnPawnOverlapEnter_Statics::NewProp_sweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadOn_OnPawnOverlapEnter_Statics::NewProp_sweepResult_MetaData)) };
	void Z_Construct_UFunction_UHeadOn_OnPawnOverlapEnter_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((HeadOn_eventOnPawnOverlapEnter_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeadOn_OnPawnOverlapEnter_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HeadOn_eventOnPawnOverlapEnter_Parms), &Z_Construct_UFunction_UHeadOn_OnPawnOverlapEnter_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHeadOn_OnPawnOverlapEnter_Statics::NewProp_otherBodyIndex = { "otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadOn_eventOnPawnOverlapEnter_Parms, otherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadOn_OnPawnOverlapEnter_Statics::NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHeadOn_OnPawnOverlapEnter_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadOn_eventOnPawnOverlapEnter_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHeadOn_OnPawnOverlapEnter_Statics::NewProp_otherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadOn_OnPawnOverlapEnter_Statics::NewProp_otherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHeadOn_OnPawnOverlapEnter_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadOn_eventOnPawnOverlapEnter_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadOn_OnPawnOverlapEnter_Statics::NewProp_hitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHeadOn_OnPawnOverlapEnter_Statics::NewProp_hitComponent = { "hitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadOn_eventOnPawnOverlapEnter_Parms, hitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHeadOn_OnPawnOverlapEnter_Statics::NewProp_hitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadOn_OnPawnOverlapEnter_Statics::NewProp_hitComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadOn_OnPawnOverlapEnter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadOn_OnPawnOverlapEnter_Statics::NewProp_sweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadOn_OnPawnOverlapEnter_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadOn_OnPawnOverlapEnter_Statics::NewProp_otherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadOn_OnPawnOverlapEnter_Statics::NewProp_otherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadOn_OnPawnOverlapEnter_Statics::NewProp_otherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadOn_OnPawnOverlapEnter_Statics::NewProp_hitComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadOn_OnPawnOverlapEnter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HeadOn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadOn_OnPawnOverlapEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadOn, nullptr, "OnPawnOverlapEnter", nullptr, nullptr, sizeof(HeadOn_eventOnPawnOverlapEnter_Parms), Z_Construct_UFunction_UHeadOn_OnPawnOverlapEnter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadOn_OnPawnOverlapEnter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadOn_OnPawnOverlapEnter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadOn_OnPawnOverlapEnter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadOn_OnPawnOverlapEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeadOn_OnPawnOverlapEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadOn_OnPawnOverlapExit_Statics
	{
		struct HeadOn_eventOnPawnOverlapExit_Parms
		{
			UPrimitiveComponent* hitComponent;
			AActor* otherActor;
			UPrimitiveComponent* otherComp;
			int32 otherBodyIndex;
		};
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHeadOn_OnPawnOverlapExit_Statics::NewProp_otherBodyIndex = { "otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadOn_eventOnPawnOverlapExit_Parms, otherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadOn_OnPawnOverlapExit_Statics::NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHeadOn_OnPawnOverlapExit_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadOn_eventOnPawnOverlapExit_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHeadOn_OnPawnOverlapExit_Statics::NewProp_otherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadOn_OnPawnOverlapExit_Statics::NewProp_otherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHeadOn_OnPawnOverlapExit_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadOn_eventOnPawnOverlapExit_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadOn_OnPawnOverlapExit_Statics::NewProp_hitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHeadOn_OnPawnOverlapExit_Statics::NewProp_hitComponent = { "hitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeadOn_eventOnPawnOverlapExit_Parms, hitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHeadOn_OnPawnOverlapExit_Statics::NewProp_hitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadOn_OnPawnOverlapExit_Statics::NewProp_hitComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadOn_OnPawnOverlapExit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadOn_OnPawnOverlapExit_Statics::NewProp_otherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadOn_OnPawnOverlapExit_Statics::NewProp_otherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadOn_OnPawnOverlapExit_Statics::NewProp_otherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadOn_OnPawnOverlapExit_Statics::NewProp_hitComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadOn_OnPawnOverlapExit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HeadOn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadOn_OnPawnOverlapExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadOn, nullptr, "OnPawnOverlapExit", nullptr, nullptr, sizeof(HeadOn_eventOnPawnOverlapExit_Parms), Z_Construct_UFunction_UHeadOn_OnPawnOverlapExit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadOn_OnPawnOverlapExit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadOn_OnPawnOverlapExit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadOn_OnPawnOverlapExit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadOn_OnPawnOverlapExit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeadOn_OnPawnOverlapExit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHeadOn_NoRegister()
	{
		return UHeadOn::StaticClass();
	}
	struct Z_Construct_UClass_UHeadOn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__locker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__locker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hideDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__hideDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StunKillersEnteringStunZone_MetaData[];
#endif
		static void NewProp_StunKillersEnteringStunZone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_StunKillersEnteringStunZone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExhaustOnlyOnSuccessfulStun_MetaData[];
#endif
		static void NewProp_ExhaustOnlyOnSuccessfulStun_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ExhaustOnlyOnSuccessfulStun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsPerformingHeadOn_MetaData[];
#endif
		static void NewProp_IsPerformingHeadOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPerformingHeadOn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHeadOn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHeadOn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHeadOn_Authority_ActivatePerk, "Authority_ActivatePerk" }, // 1203740258
		{ &Z_Construct_UFunction_UHeadOn_CanApplyHeadOnInteraction, "CanApplyHeadOnInteraction" }, // 989373011
		{ &Z_Construct_UFunction_UHeadOn_Multicast_StunPlayer, "Multicast_StunPlayer" }, // 172837251
		{ &Z_Construct_UFunction_UHeadOn_OnHeadOnAnimationComplete, "OnHeadOnAnimationComplete" }, // 2874003957
		{ &Z_Construct_UFunction_UHeadOn_OnPawnOverlapEnter, "OnPawnOverlapEnter" }, // 3599352957
		{ &Z_Construct_UFunction_UHeadOn_OnPawnOverlapExit, "OnPawnOverlapExit" }, // 812788828
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeadOn_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HeadOn.h" },
		{ "ModuleRelativePath", "Public/HeadOn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeadOn_Statics::NewProp__locker_MetaData[] = {
		{ "ModuleRelativePath", "Public/HeadOn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHeadOn_Statics::NewProp__locker = { "_locker", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeadOn, _locker), Z_Construct_UClass_ALocker_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHeadOn_Statics::NewProp__locker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeadOn_Statics::NewProp__locker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeadOn_Statics::NewProp__hideDuration_MetaData[] = {
		{ "Category", "HeadOn" },
		{ "ModuleRelativePath", "Public/HeadOn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHeadOn_Statics::NewProp__hideDuration = { "_hideDuration", nullptr, (EPropertyFlags)0x0020080000010041, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_hideDuration, UHeadOn), STRUCT_OFFSET(UHeadOn, _hideDuration), METADATA_PARAMS(Z_Construct_UClass_UHeadOn_Statics::NewProp__hideDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeadOn_Statics::NewProp__hideDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeadOn_Statics::NewProp_StunKillersEnteringStunZone_MetaData[] = {
		{ "Category", "HeadOn" },
		{ "ModuleRelativePath", "Public/HeadOn.h" },
	};
#endif
	void Z_Construct_UClass_UHeadOn_Statics::NewProp_StunKillersEnteringStunZone_SetBit(void* Obj)
	{
		((UHeadOn*)Obj)->StunKillersEnteringStunZone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHeadOn_Statics::NewProp_StunKillersEnteringStunZone = { "StunKillersEnteringStunZone", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHeadOn), &Z_Construct_UClass_UHeadOn_Statics::NewProp_StunKillersEnteringStunZone_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHeadOn_Statics::NewProp_StunKillersEnteringStunZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeadOn_Statics::NewProp_StunKillersEnteringStunZone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeadOn_Statics::NewProp_ExhaustOnlyOnSuccessfulStun_MetaData[] = {
		{ "Category", "HeadOn" },
		{ "ModuleRelativePath", "Public/HeadOn.h" },
	};
#endif
	void Z_Construct_UClass_UHeadOn_Statics::NewProp_ExhaustOnlyOnSuccessfulStun_SetBit(void* Obj)
	{
		((UHeadOn*)Obj)->ExhaustOnlyOnSuccessfulStun = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHeadOn_Statics::NewProp_ExhaustOnlyOnSuccessfulStun = { "ExhaustOnlyOnSuccessfulStun", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHeadOn), &Z_Construct_UClass_UHeadOn_Statics::NewProp_ExhaustOnlyOnSuccessfulStun_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHeadOn_Statics::NewProp_ExhaustOnlyOnSuccessfulStun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeadOn_Statics::NewProp_ExhaustOnlyOnSuccessfulStun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeadOn_Statics::NewProp_IsPerformingHeadOn_MetaData[] = {
		{ "Category", "HeadOn" },
		{ "ModuleRelativePath", "Public/HeadOn.h" },
	};
#endif
	void Z_Construct_UClass_UHeadOn_Statics::NewProp_IsPerformingHeadOn_SetBit(void* Obj)
	{
		((UHeadOn*)Obj)->IsPerformingHeadOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHeadOn_Statics::NewProp_IsPerformingHeadOn = { "IsPerformingHeadOn", nullptr, (EPropertyFlags)0x0010000000002004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHeadOn), &Z_Construct_UClass_UHeadOn_Statics::NewProp_IsPerformingHeadOn_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHeadOn_Statics::NewProp_IsPerformingHeadOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeadOn_Statics::NewProp_IsPerformingHeadOn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHeadOn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeadOn_Statics::NewProp__locker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeadOn_Statics::NewProp__hideDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeadOn_Statics::NewProp_StunKillersEnteringStunZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeadOn_Statics::NewProp_ExhaustOnlyOnSuccessfulStun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeadOn_Statics::NewProp_IsPerformingHeadOn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHeadOn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeadOn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHeadOn_Statics::ClassParams = {
		&UHeadOn::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHeadOn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHeadOn_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHeadOn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHeadOn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHeadOn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHeadOn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHeadOn, 1836417174);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UHeadOn>()
	{
		return UHeadOn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHeadOn(Z_Construct_UClass_UHeadOn, &UHeadOn::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UHeadOn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHeadOn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
