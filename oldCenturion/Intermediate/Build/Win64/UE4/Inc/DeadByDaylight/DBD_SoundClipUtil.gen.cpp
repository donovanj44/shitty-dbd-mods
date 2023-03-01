// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBD_SoundClipUtil.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBD_SoundClipUtil() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBD_SoundClipUtil_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBD_SoundClipUtil();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FMapSoundsToAvoid();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FMapMeshToAkAudioEvent();
// End Cross Module References
	DEFINE_FUNCTION(UDBD_SoundClipUtil::execGetAudioEventForMesh)
	{
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_usm);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAkAudioEvent**)Z_Param__Result=P_THIS->GetAudioEventForMesh(Z_Param_usm);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBD_SoundClipUtil::execOnCharacterEnterSoundRegion)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCharacterEnterSoundRegion(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	static FName NAME_UDBD_SoundClipUtil_OnGotMeshToTriggerSound = FName(TEXT("OnGotMeshToTriggerSound"));
	void UDBD_SoundClipUtil::OnGotMeshToTriggerSound(UStaticMeshComponent* usm)
	{
		DBD_SoundClipUtil_eventOnGotMeshToTriggerSound_Parms Parms;
		Parms.usm=usm;
		ProcessEvent(FindFunctionChecked(NAME_UDBD_SoundClipUtil_OnGotMeshToTriggerSound),&Parms);
	}
	void UDBD_SoundClipUtil::StaticRegisterNativesUDBD_SoundClipUtil()
	{
		UClass* Class = UDBD_SoundClipUtil::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAudioEventForMesh", &UDBD_SoundClipUtil::execGetAudioEventForMesh },
			{ "OnCharacterEnterSoundRegion", &UDBD_SoundClipUtil::execOnCharacterEnterSoundRegion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBD_SoundClipUtil_GetAudioEventForMesh_Statics
	{
		struct DBD_SoundClipUtil_eventGetAudioEventForMesh_Parms
		{
			UStaticMeshComponent* usm;
			UAkAudioEvent* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_usm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_usm;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBD_SoundClipUtil_GetAudioEventForMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBD_SoundClipUtil_eventGetAudioEventForMesh_Parms, ReturnValue), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBD_SoundClipUtil_GetAudioEventForMesh_Statics::NewProp_usm_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBD_SoundClipUtil_GetAudioEventForMesh_Statics::NewProp_usm = { "usm", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBD_SoundClipUtil_eventGetAudioEventForMesh_Parms, usm), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBD_SoundClipUtil_GetAudioEventForMesh_Statics::NewProp_usm_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBD_SoundClipUtil_GetAudioEventForMesh_Statics::NewProp_usm_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBD_SoundClipUtil_GetAudioEventForMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBD_SoundClipUtil_GetAudioEventForMesh_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBD_SoundClipUtil_GetAudioEventForMesh_Statics::NewProp_usm,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBD_SoundClipUtil_GetAudioEventForMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBD_SoundClipUtil.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBD_SoundClipUtil_GetAudioEventForMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBD_SoundClipUtil, nullptr, "GetAudioEventForMesh", nullptr, nullptr, sizeof(DBD_SoundClipUtil_eventGetAudioEventForMesh_Parms), Z_Construct_UFunction_UDBD_SoundClipUtil_GetAudioEventForMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBD_SoundClipUtil_GetAudioEventForMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBD_SoundClipUtil_GetAudioEventForMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBD_SoundClipUtil_GetAudioEventForMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBD_SoundClipUtil_GetAudioEventForMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBD_SoundClipUtil_GetAudioEventForMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBD_SoundClipUtil_OnCharacterEnterSoundRegion_Statics
	{
		struct DBD_SoundClipUtil_eventOnCharacterEnterSoundRegion_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBD_SoundClipUtil_OnCharacterEnterSoundRegion_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBD_SoundClipUtil_OnCharacterEnterSoundRegion_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBD_SoundClipUtil_eventOnCharacterEnterSoundRegion_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UDBD_SoundClipUtil_OnCharacterEnterSoundRegion_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBD_SoundClipUtil_OnCharacterEnterSoundRegion_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_UDBD_SoundClipUtil_OnCharacterEnterSoundRegion_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((DBD_SoundClipUtil_eventOnCharacterEnterSoundRegion_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBD_SoundClipUtil_OnCharacterEnterSoundRegion_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBD_SoundClipUtil_eventOnCharacterEnterSoundRegion_Parms), &Z_Construct_UFunction_UDBD_SoundClipUtil_OnCharacterEnterSoundRegion_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDBD_SoundClipUtil_OnCharacterEnterSoundRegion_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBD_SoundClipUtil_eventOnCharacterEnterSoundRegion_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBD_SoundClipUtil_OnCharacterEnterSoundRegion_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBD_SoundClipUtil_OnCharacterEnterSoundRegion_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBD_SoundClipUtil_eventOnCharacterEnterSoundRegion_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBD_SoundClipUtil_OnCharacterEnterSoundRegion_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBD_SoundClipUtil_OnCharacterEnterSoundRegion_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBD_SoundClipUtil_OnCharacterEnterSoundRegion_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBD_SoundClipUtil_eventOnCharacterEnterSoundRegion_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBD_SoundClipUtil_OnCharacterEnterSoundRegion_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBD_SoundClipUtil_OnCharacterEnterSoundRegion_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBD_SoundClipUtil_eventOnCharacterEnterSoundRegion_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBD_SoundClipUtil_OnCharacterEnterSoundRegion_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBD_SoundClipUtil_OnCharacterEnterSoundRegion_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBD_SoundClipUtil_OnCharacterEnterSoundRegion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBD_SoundClipUtil_OnCharacterEnterSoundRegion_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBD_SoundClipUtil_OnCharacterEnterSoundRegion_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBD_SoundClipUtil_OnCharacterEnterSoundRegion_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBD_SoundClipUtil_OnCharacterEnterSoundRegion_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBD_SoundClipUtil_OnCharacterEnterSoundRegion_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBD_SoundClipUtil_OnCharacterEnterSoundRegion_Statics::NewProp_HitComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBD_SoundClipUtil_OnCharacterEnterSoundRegion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBD_SoundClipUtil.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBD_SoundClipUtil_OnCharacterEnterSoundRegion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBD_SoundClipUtil, nullptr, "OnCharacterEnterSoundRegion", nullptr, nullptr, sizeof(DBD_SoundClipUtil_eventOnCharacterEnterSoundRegion_Parms), Z_Construct_UFunction_UDBD_SoundClipUtil_OnCharacterEnterSoundRegion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBD_SoundClipUtil_OnCharacterEnterSoundRegion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBD_SoundClipUtil_OnCharacterEnterSoundRegion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBD_SoundClipUtil_OnCharacterEnterSoundRegion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBD_SoundClipUtil_OnCharacterEnterSoundRegion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBD_SoundClipUtil_OnCharacterEnterSoundRegion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBD_SoundClipUtil_OnGotMeshToTriggerSound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_usm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_usm;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBD_SoundClipUtil_OnGotMeshToTriggerSound_Statics::NewProp_usm_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBD_SoundClipUtil_OnGotMeshToTriggerSound_Statics::NewProp_usm = { "usm", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBD_SoundClipUtil_eventOnGotMeshToTriggerSound_Parms, usm), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBD_SoundClipUtil_OnGotMeshToTriggerSound_Statics::NewProp_usm_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBD_SoundClipUtil_OnGotMeshToTriggerSound_Statics::NewProp_usm_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBD_SoundClipUtil_OnGotMeshToTriggerSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBD_SoundClipUtil_OnGotMeshToTriggerSound_Statics::NewProp_usm,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBD_SoundClipUtil_OnGotMeshToTriggerSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBD_SoundClipUtil.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBD_SoundClipUtil_OnGotMeshToTriggerSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBD_SoundClipUtil, nullptr, "OnGotMeshToTriggerSound", nullptr, nullptr, sizeof(DBD_SoundClipUtil_eventOnGotMeshToTriggerSound_Parms), Z_Construct_UFunction_UDBD_SoundClipUtil_OnGotMeshToTriggerSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBD_SoundClipUtil_OnGotMeshToTriggerSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBD_SoundClipUtil_OnGotMeshToTriggerSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBD_SoundClipUtil_OnGotMeshToTriggerSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBD_SoundClipUtil_OnGotMeshToTriggerSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBD_SoundClipUtil_OnGotMeshToTriggerSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBD_SoundClipUtil_NoRegister()
	{
		return UDBD_SoundClipUtil::StaticClass();
	}
	struct Z_Construct_UClass_UDBD_SoundClipUtil_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__nextSoundPlayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__nextSoundPlayTime;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__nextSoundPlayTime_Key_KeyProp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__nextSoundPlayTime_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__objectsWhoHavePlayedASound_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__objectsWhoHavePlayedASound;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__objectsWhoHavePlayedASound_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__audioEventMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__audioEventMap;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__audioEventMap_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__audioEventMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AudioMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AudioMap_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBD_SoundClipUtil_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBD_SoundClipUtil_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBD_SoundClipUtil_GetAudioEventForMesh, "GetAudioEventForMesh" }, // 2804594236
		{ &Z_Construct_UFunction_UDBD_SoundClipUtil_OnCharacterEnterSoundRegion, "OnCharacterEnterSoundRegion" }, // 2691676587
		{ &Z_Construct_UFunction_UDBD_SoundClipUtil_OnGotMeshToTriggerSound, "OnGotMeshToTriggerSound" }, // 206993971
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBD_SoundClipUtil_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DBD_SoundClipUtil.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DBD_SoundClipUtil.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBD_SoundClipUtil_Statics::NewProp__nextSoundPlayTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBD_SoundClipUtil.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDBD_SoundClipUtil_Statics::NewProp__nextSoundPlayTime = { "_nextSoundPlayTime", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBD_SoundClipUtil, _nextSoundPlayTime), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBD_SoundClipUtil_Statics::NewProp__nextSoundPlayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBD_SoundClipUtil_Statics::NewProp__nextSoundPlayTime_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBD_SoundClipUtil_Statics::NewProp__nextSoundPlayTime_Key_KeyProp = { "_nextSoundPlayTime_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBD_SoundClipUtil_Statics::NewProp__nextSoundPlayTime_ValueProp = { "_nextSoundPlayTime", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBD_SoundClipUtil_Statics::NewProp__objectsWhoHavePlayedASound_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBD_SoundClipUtil.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDBD_SoundClipUtil_Statics::NewProp__objectsWhoHavePlayedASound = { "_objectsWhoHavePlayedASound", nullptr, (EPropertyFlags)0x0020088000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBD_SoundClipUtil, _objectsWhoHavePlayedASound), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBD_SoundClipUtil_Statics::NewProp__objectsWhoHavePlayedASound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBD_SoundClipUtil_Statics::NewProp__objectsWhoHavePlayedASound_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBD_SoundClipUtil_Statics::NewProp__objectsWhoHavePlayedASound_Inner = { "_objectsWhoHavePlayedASound", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMapSoundsToAvoid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBD_SoundClipUtil_Statics::NewProp__audioEventMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBD_SoundClipUtil.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDBD_SoundClipUtil_Statics::NewProp__audioEventMap = { "_audioEventMap", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBD_SoundClipUtil, _audioEventMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBD_SoundClipUtil_Statics::NewProp__audioEventMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBD_SoundClipUtil_Statics::NewProp__audioEventMap_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDBD_SoundClipUtil_Statics::NewProp__audioEventMap_Key_KeyProp = { "_audioEventMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBD_SoundClipUtil_Statics::NewProp__audioEventMap_ValueProp = { "_audioEventMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FMapMeshToAkAudioEvent, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBD_SoundClipUtil_Statics::NewProp_AudioMap_MetaData[] = {
		{ "Category", "DBD_SoundClipUtil" },
		{ "ModuleRelativePath", "Public/DBD_SoundClipUtil.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDBD_SoundClipUtil_Statics::NewProp_AudioMap = { "AudioMap", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBD_SoundClipUtil, AudioMap), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBD_SoundClipUtil_Statics::NewProp_AudioMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBD_SoundClipUtil_Statics::NewProp_AudioMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBD_SoundClipUtil_Statics::NewProp_AudioMap_Inner = { "AudioMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMapMeshToAkAudioEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBD_SoundClipUtil_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBD_SoundClipUtil_Statics::NewProp__nextSoundPlayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBD_SoundClipUtil_Statics::NewProp__nextSoundPlayTime_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBD_SoundClipUtil_Statics::NewProp__nextSoundPlayTime_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBD_SoundClipUtil_Statics::NewProp__objectsWhoHavePlayedASound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBD_SoundClipUtil_Statics::NewProp__objectsWhoHavePlayedASound_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBD_SoundClipUtil_Statics::NewProp__audioEventMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBD_SoundClipUtil_Statics::NewProp__audioEventMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBD_SoundClipUtil_Statics::NewProp__audioEventMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBD_SoundClipUtil_Statics::NewProp_AudioMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBD_SoundClipUtil_Statics::NewProp_AudioMap_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBD_SoundClipUtil_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBD_SoundClipUtil>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBD_SoundClipUtil_Statics::ClassParams = {
		&UDBD_SoundClipUtil::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDBD_SoundClipUtil_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBD_SoundClipUtil_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UDBD_SoundClipUtil_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBD_SoundClipUtil_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBD_SoundClipUtil()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBD_SoundClipUtil_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBD_SoundClipUtil, 3856072057);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBD_SoundClipUtil>()
	{
		return UDBD_SoundClipUtil::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBD_SoundClipUtil(Z_Construct_UClass_UDBD_SoundClipUtil, &UDBD_SoundClipUtil::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBD_SoundClipUtil"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBD_SoundClipUtil);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
