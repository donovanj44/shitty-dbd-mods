// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/WakerObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWakerObject() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AWakerObject_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AWakerObject();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AInteractable();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCamperDreamworldComponent_NoRegister();
	INTERACTION_API UClass* Z_Construct_UClass_UAIInteractableTargetInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AWakerObject::execBindToCamperDreamStateChanged)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindToCamperDreamStateChanged(Z_Param_player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWakerObject::execCanWakeUpCamper)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_camper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanWakeUpCamper(Z_Param_camper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWakerObject::execGetChargeComplete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetChargeComplete();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWakerObject::execGetInteractionPercentComplete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInteractionPercentComplete_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWakerObject::execGetInteractorPrimitiveComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPrimitiveComponent**)Z_Param__Result=P_THIS->GetInteractorPrimitiveComponent_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWakerObject::execGetIsInteracting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsInteracting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWakerObject::execHasLinkedCamper)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasLinkedCamper();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWakerObject::execIsLinkedToCamper)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_camper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLinkedToCamper(Z_Param_camper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWakerObject::execLinkCampersOnLevelReadyToPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LinkCampersOnLevelReadyToPlay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWakerObject::execOnAnyCamperDreamStateChanged)
	{
		P_GET_UBOOL(Z_Param_isInDreamworld);
		P_GET_UBOOL(Z_Param_locallyObservedChanged);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAnyCamperDreamStateChanged(Z_Param_isInDreamworld,Z_Param_locallyObservedChanged);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWakerObject::execOnLinkedCamperDreamStateChanged)
	{
		P_GET_UBOOL(Z_Param_isInDreamworld);
		P_GET_UBOOL(Z_Param_locallyObservedChanged);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLinkedCamperDreamStateChanged(Z_Param_isInDreamworld,Z_Param_locallyObservedChanged);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWakerObject::execOnRep_LinkedCamperChanged)
	{
		P_GET_OBJECT(UCamperDreamworldComponent,Z_Param_previous);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_LinkedCamperChanged(Z_Param_previous);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWakerObject::execSetChargeComplete)
	{
		P_GET_UBOOL(Z_Param_complete);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetChargeComplete(Z_Param_complete);
		P_NATIVE_END;
	}
	static FName NAME_AWakerObject_GetInteractionPercentComplete = FName(TEXT("GetInteractionPercentComplete"));
	float AWakerObject::GetInteractionPercentComplete() const
	{
		WakerObject_eventGetInteractionPercentComplete_Parms Parms;
		const_cast<AWakerObject*>(this)->ProcessEvent(FindFunctionChecked(NAME_AWakerObject_GetInteractionPercentComplete),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AWakerObject_GetInteractorPrimitiveComponent = FName(TEXT("GetInteractorPrimitiveComponent"));
	UPrimitiveComponent* AWakerObject::GetInteractorPrimitiveComponent() const
	{
		WakerObject_eventGetInteractorPrimitiveComponent_Parms Parms;
		const_cast<AWakerObject*>(this)->ProcessEvent(FindFunctionChecked(NAME_AWakerObject_GetInteractorPrimitiveComponent),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AWakerObject_OnNewLinkedCamper = FName(TEXT("OnNewLinkedCamper"));
	void AWakerObject::OnNewLinkedCamper(UCamperDreamworldComponent* dreamworldComponent)
	{
		WakerObject_eventOnNewLinkedCamper_Parms Parms;
		Parms.dreamworldComponent=dreamworldComponent;
		ProcessEvent(FindFunctionChecked(NAME_AWakerObject_OnNewLinkedCamper),&Parms);
	}
	static FName NAME_AWakerObject_UpdateVisibilityAndOutline = FName(TEXT("UpdateVisibilityAndOutline"));
	void AWakerObject::UpdateVisibilityAndOutline()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWakerObject_UpdateVisibilityAndOutline),NULL);
	}
	void AWakerObject::StaticRegisterNativesAWakerObject()
	{
		UClass* Class = AWakerObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BindToCamperDreamStateChanged", &AWakerObject::execBindToCamperDreamStateChanged },
			{ "CanWakeUpCamper", &AWakerObject::execCanWakeUpCamper },
			{ "GetChargeComplete", &AWakerObject::execGetChargeComplete },
			{ "GetInteractionPercentComplete", &AWakerObject::execGetInteractionPercentComplete },
			{ "GetInteractorPrimitiveComponent", &AWakerObject::execGetInteractorPrimitiveComponent },
			{ "GetIsInteracting", &AWakerObject::execGetIsInteracting },
			{ "HasLinkedCamper", &AWakerObject::execHasLinkedCamper },
			{ "IsLinkedToCamper", &AWakerObject::execIsLinkedToCamper },
			{ "LinkCampersOnLevelReadyToPlay", &AWakerObject::execLinkCampersOnLevelReadyToPlay },
			{ "OnAnyCamperDreamStateChanged", &AWakerObject::execOnAnyCamperDreamStateChanged },
			{ "OnLinkedCamperDreamStateChanged", &AWakerObject::execOnLinkedCamperDreamStateChanged },
			{ "OnRep_LinkedCamperChanged", &AWakerObject::execOnRep_LinkedCamperChanged },
			{ "SetChargeComplete", &AWakerObject::execSetChargeComplete },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWakerObject_BindToCamperDreamStateChanged_Statics
	{
		struct WakerObject_eventBindToCamperDreamStateChanged_Parms
		{
			ADBDPlayer* player;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWakerObject_BindToCamperDreamStateChanged_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WakerObject_eventBindToCamperDreamStateChanged_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWakerObject_BindToCamperDreamStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWakerObject_BindToCamperDreamStateChanged_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWakerObject_BindToCamperDreamStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WakerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWakerObject_BindToCamperDreamStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWakerObject, nullptr, "BindToCamperDreamStateChanged", nullptr, nullptr, sizeof(WakerObject_eventBindToCamperDreamStateChanged_Parms), Z_Construct_UFunction_AWakerObject_BindToCamperDreamStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWakerObject_BindToCamperDreamStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWakerObject_BindToCamperDreamStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWakerObject_BindToCamperDreamStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWakerObject_BindToCamperDreamStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWakerObject_BindToCamperDreamStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWakerObject_CanWakeUpCamper_Statics
	{
		struct WakerObject_eventCanWakeUpCamper_Parms
		{
			const ADBDPlayer* camper;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camper_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camper;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AWakerObject_CanWakeUpCamper_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WakerObject_eventCanWakeUpCamper_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWakerObject_CanWakeUpCamper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WakerObject_eventCanWakeUpCamper_Parms), &Z_Construct_UFunction_AWakerObject_CanWakeUpCamper_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWakerObject_CanWakeUpCamper_Statics::NewProp_camper_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWakerObject_CanWakeUpCamper_Statics::NewProp_camper = { "camper", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WakerObject_eventCanWakeUpCamper_Parms, camper), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWakerObject_CanWakeUpCamper_Statics::NewProp_camper_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWakerObject_CanWakeUpCamper_Statics::NewProp_camper_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWakerObject_CanWakeUpCamper_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWakerObject_CanWakeUpCamper_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWakerObject_CanWakeUpCamper_Statics::NewProp_camper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWakerObject_CanWakeUpCamper_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WakerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWakerObject_CanWakeUpCamper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWakerObject, nullptr, "CanWakeUpCamper", nullptr, nullptr, sizeof(WakerObject_eventCanWakeUpCamper_Parms), Z_Construct_UFunction_AWakerObject_CanWakeUpCamper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWakerObject_CanWakeUpCamper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWakerObject_CanWakeUpCamper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWakerObject_CanWakeUpCamper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWakerObject_CanWakeUpCamper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWakerObject_CanWakeUpCamper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWakerObject_GetChargeComplete_Statics
	{
		struct WakerObject_eventGetChargeComplete_Parms
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
	void Z_Construct_UFunction_AWakerObject_GetChargeComplete_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WakerObject_eventGetChargeComplete_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWakerObject_GetChargeComplete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WakerObject_eventGetChargeComplete_Parms), &Z_Construct_UFunction_AWakerObject_GetChargeComplete_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWakerObject_GetChargeComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWakerObject_GetChargeComplete_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWakerObject_GetChargeComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WakerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWakerObject_GetChargeComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWakerObject, nullptr, "GetChargeComplete", nullptr, nullptr, sizeof(WakerObject_eventGetChargeComplete_Parms), Z_Construct_UFunction_AWakerObject_GetChargeComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWakerObject_GetChargeComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWakerObject_GetChargeComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWakerObject_GetChargeComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWakerObject_GetChargeComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWakerObject_GetChargeComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWakerObject_GetInteractionPercentComplete_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWakerObject_GetInteractionPercentComplete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WakerObject_eventGetInteractionPercentComplete_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWakerObject_GetInteractionPercentComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWakerObject_GetInteractionPercentComplete_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWakerObject_GetInteractionPercentComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WakerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWakerObject_GetInteractionPercentComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWakerObject, nullptr, "GetInteractionPercentComplete", nullptr, nullptr, sizeof(WakerObject_eventGetInteractionPercentComplete_Parms), Z_Construct_UFunction_AWakerObject_GetInteractionPercentComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWakerObject_GetInteractionPercentComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWakerObject_GetInteractionPercentComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWakerObject_GetInteractionPercentComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWakerObject_GetInteractionPercentComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWakerObject_GetInteractionPercentComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWakerObject_GetInteractorPrimitiveComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWakerObject_GetInteractorPrimitiveComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWakerObject_GetInteractorPrimitiveComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WakerObject_eventGetInteractorPrimitiveComponent_Parms, ReturnValue), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWakerObject_GetInteractorPrimitiveComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWakerObject_GetInteractorPrimitiveComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWakerObject_GetInteractorPrimitiveComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWakerObject_GetInteractorPrimitiveComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWakerObject_GetInteractorPrimitiveComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WakerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWakerObject_GetInteractorPrimitiveComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWakerObject, nullptr, "GetInteractorPrimitiveComponent", nullptr, nullptr, sizeof(WakerObject_eventGetInteractorPrimitiveComponent_Parms), Z_Construct_UFunction_AWakerObject_GetInteractorPrimitiveComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWakerObject_GetInteractorPrimitiveComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWakerObject_GetInteractorPrimitiveComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWakerObject_GetInteractorPrimitiveComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWakerObject_GetInteractorPrimitiveComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWakerObject_GetInteractorPrimitiveComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWakerObject_GetIsInteracting_Statics
	{
		struct WakerObject_eventGetIsInteracting_Parms
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
	void Z_Construct_UFunction_AWakerObject_GetIsInteracting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WakerObject_eventGetIsInteracting_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWakerObject_GetIsInteracting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WakerObject_eventGetIsInteracting_Parms), &Z_Construct_UFunction_AWakerObject_GetIsInteracting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWakerObject_GetIsInteracting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWakerObject_GetIsInteracting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWakerObject_GetIsInteracting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WakerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWakerObject_GetIsInteracting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWakerObject, nullptr, "GetIsInteracting", nullptr, nullptr, sizeof(WakerObject_eventGetIsInteracting_Parms), Z_Construct_UFunction_AWakerObject_GetIsInteracting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWakerObject_GetIsInteracting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWakerObject_GetIsInteracting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWakerObject_GetIsInteracting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWakerObject_GetIsInteracting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWakerObject_GetIsInteracting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWakerObject_HasLinkedCamper_Statics
	{
		struct WakerObject_eventHasLinkedCamper_Parms
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
	void Z_Construct_UFunction_AWakerObject_HasLinkedCamper_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WakerObject_eventHasLinkedCamper_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWakerObject_HasLinkedCamper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WakerObject_eventHasLinkedCamper_Parms), &Z_Construct_UFunction_AWakerObject_HasLinkedCamper_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWakerObject_HasLinkedCamper_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWakerObject_HasLinkedCamper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWakerObject_HasLinkedCamper_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WakerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWakerObject_HasLinkedCamper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWakerObject, nullptr, "HasLinkedCamper", nullptr, nullptr, sizeof(WakerObject_eventHasLinkedCamper_Parms), Z_Construct_UFunction_AWakerObject_HasLinkedCamper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWakerObject_HasLinkedCamper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWakerObject_HasLinkedCamper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWakerObject_HasLinkedCamper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWakerObject_HasLinkedCamper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWakerObject_HasLinkedCamper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWakerObject_IsLinkedToCamper_Statics
	{
		struct WakerObject_eventIsLinkedToCamper_Parms
		{
			const ADBDPlayer* camper;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camper_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camper;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AWakerObject_IsLinkedToCamper_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WakerObject_eventIsLinkedToCamper_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWakerObject_IsLinkedToCamper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WakerObject_eventIsLinkedToCamper_Parms), &Z_Construct_UFunction_AWakerObject_IsLinkedToCamper_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWakerObject_IsLinkedToCamper_Statics::NewProp_camper_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWakerObject_IsLinkedToCamper_Statics::NewProp_camper = { "camper", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WakerObject_eventIsLinkedToCamper_Parms, camper), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWakerObject_IsLinkedToCamper_Statics::NewProp_camper_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWakerObject_IsLinkedToCamper_Statics::NewProp_camper_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWakerObject_IsLinkedToCamper_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWakerObject_IsLinkedToCamper_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWakerObject_IsLinkedToCamper_Statics::NewProp_camper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWakerObject_IsLinkedToCamper_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WakerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWakerObject_IsLinkedToCamper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWakerObject, nullptr, "IsLinkedToCamper", nullptr, nullptr, sizeof(WakerObject_eventIsLinkedToCamper_Parms), Z_Construct_UFunction_AWakerObject_IsLinkedToCamper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWakerObject_IsLinkedToCamper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWakerObject_IsLinkedToCamper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWakerObject_IsLinkedToCamper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWakerObject_IsLinkedToCamper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWakerObject_IsLinkedToCamper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWakerObject_LinkCampersOnLevelReadyToPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWakerObject_LinkCampersOnLevelReadyToPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WakerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWakerObject_LinkCampersOnLevelReadyToPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWakerObject, nullptr, "LinkCampersOnLevelReadyToPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWakerObject_LinkCampersOnLevelReadyToPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWakerObject_LinkCampersOnLevelReadyToPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWakerObject_LinkCampersOnLevelReadyToPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWakerObject_LinkCampersOnLevelReadyToPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWakerObject_OnAnyCamperDreamStateChanged_Statics
	{
		struct WakerObject_eventOnAnyCamperDreamStateChanged_Parms
		{
			bool isInDreamworld;
			bool locallyObservedChanged;
		};
		static void NewProp_locallyObservedChanged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_locallyObservedChanged;
		static void NewProp_isInDreamworld_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isInDreamworld;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AWakerObject_OnAnyCamperDreamStateChanged_Statics::NewProp_locallyObservedChanged_SetBit(void* Obj)
	{
		((WakerObject_eventOnAnyCamperDreamStateChanged_Parms*)Obj)->locallyObservedChanged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWakerObject_OnAnyCamperDreamStateChanged_Statics::NewProp_locallyObservedChanged = { "locallyObservedChanged", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WakerObject_eventOnAnyCamperDreamStateChanged_Parms), &Z_Construct_UFunction_AWakerObject_OnAnyCamperDreamStateChanged_Statics::NewProp_locallyObservedChanged_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AWakerObject_OnAnyCamperDreamStateChanged_Statics::NewProp_isInDreamworld_SetBit(void* Obj)
	{
		((WakerObject_eventOnAnyCamperDreamStateChanged_Parms*)Obj)->isInDreamworld = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWakerObject_OnAnyCamperDreamStateChanged_Statics::NewProp_isInDreamworld = { "isInDreamworld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WakerObject_eventOnAnyCamperDreamStateChanged_Parms), &Z_Construct_UFunction_AWakerObject_OnAnyCamperDreamStateChanged_Statics::NewProp_isInDreamworld_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWakerObject_OnAnyCamperDreamStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWakerObject_OnAnyCamperDreamStateChanged_Statics::NewProp_locallyObservedChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWakerObject_OnAnyCamperDreamStateChanged_Statics::NewProp_isInDreamworld,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWakerObject_OnAnyCamperDreamStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WakerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWakerObject_OnAnyCamperDreamStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWakerObject, nullptr, "OnAnyCamperDreamStateChanged", nullptr, nullptr, sizeof(WakerObject_eventOnAnyCamperDreamStateChanged_Parms), Z_Construct_UFunction_AWakerObject_OnAnyCamperDreamStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWakerObject_OnAnyCamperDreamStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWakerObject_OnAnyCamperDreamStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWakerObject_OnAnyCamperDreamStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWakerObject_OnAnyCamperDreamStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWakerObject_OnAnyCamperDreamStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWakerObject_OnLinkedCamperDreamStateChanged_Statics
	{
		struct WakerObject_eventOnLinkedCamperDreamStateChanged_Parms
		{
			bool isInDreamworld;
			bool locallyObservedChanged;
		};
		static void NewProp_locallyObservedChanged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_locallyObservedChanged;
		static void NewProp_isInDreamworld_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isInDreamworld;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AWakerObject_OnLinkedCamperDreamStateChanged_Statics::NewProp_locallyObservedChanged_SetBit(void* Obj)
	{
		((WakerObject_eventOnLinkedCamperDreamStateChanged_Parms*)Obj)->locallyObservedChanged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWakerObject_OnLinkedCamperDreamStateChanged_Statics::NewProp_locallyObservedChanged = { "locallyObservedChanged", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WakerObject_eventOnLinkedCamperDreamStateChanged_Parms), &Z_Construct_UFunction_AWakerObject_OnLinkedCamperDreamStateChanged_Statics::NewProp_locallyObservedChanged_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AWakerObject_OnLinkedCamperDreamStateChanged_Statics::NewProp_isInDreamworld_SetBit(void* Obj)
	{
		((WakerObject_eventOnLinkedCamperDreamStateChanged_Parms*)Obj)->isInDreamworld = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWakerObject_OnLinkedCamperDreamStateChanged_Statics::NewProp_isInDreamworld = { "isInDreamworld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WakerObject_eventOnLinkedCamperDreamStateChanged_Parms), &Z_Construct_UFunction_AWakerObject_OnLinkedCamperDreamStateChanged_Statics::NewProp_isInDreamworld_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWakerObject_OnLinkedCamperDreamStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWakerObject_OnLinkedCamperDreamStateChanged_Statics::NewProp_locallyObservedChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWakerObject_OnLinkedCamperDreamStateChanged_Statics::NewProp_isInDreamworld,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWakerObject_OnLinkedCamperDreamStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WakerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWakerObject_OnLinkedCamperDreamStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWakerObject, nullptr, "OnLinkedCamperDreamStateChanged", nullptr, nullptr, sizeof(WakerObject_eventOnLinkedCamperDreamStateChanged_Parms), Z_Construct_UFunction_AWakerObject_OnLinkedCamperDreamStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWakerObject_OnLinkedCamperDreamStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWakerObject_OnLinkedCamperDreamStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWakerObject_OnLinkedCamperDreamStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWakerObject_OnLinkedCamperDreamStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWakerObject_OnLinkedCamperDreamStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWakerObject_OnNewLinkedCamper_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dreamworldComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_dreamworldComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWakerObject_OnNewLinkedCamper_Statics::NewProp_dreamworldComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWakerObject_OnNewLinkedCamper_Statics::NewProp_dreamworldComponent = { "dreamworldComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WakerObject_eventOnNewLinkedCamper_Parms, dreamworldComponent), Z_Construct_UClass_UCamperDreamworldComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWakerObject_OnNewLinkedCamper_Statics::NewProp_dreamworldComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWakerObject_OnNewLinkedCamper_Statics::NewProp_dreamworldComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWakerObject_OnNewLinkedCamper_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWakerObject_OnNewLinkedCamper_Statics::NewProp_dreamworldComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWakerObject_OnNewLinkedCamper_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WakerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWakerObject_OnNewLinkedCamper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWakerObject, nullptr, "OnNewLinkedCamper", nullptr, nullptr, sizeof(WakerObject_eventOnNewLinkedCamper_Parms), Z_Construct_UFunction_AWakerObject_OnNewLinkedCamper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWakerObject_OnNewLinkedCamper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWakerObject_OnNewLinkedCamper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWakerObject_OnNewLinkedCamper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWakerObject_OnNewLinkedCamper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWakerObject_OnNewLinkedCamper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWakerObject_OnRep_LinkedCamperChanged_Statics
	{
		struct WakerObject_eventOnRep_LinkedCamperChanged_Parms
		{
			UCamperDreamworldComponent* previous;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_previous_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_previous;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWakerObject_OnRep_LinkedCamperChanged_Statics::NewProp_previous_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWakerObject_OnRep_LinkedCamperChanged_Statics::NewProp_previous = { "previous", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WakerObject_eventOnRep_LinkedCamperChanged_Parms, previous), Z_Construct_UClass_UCamperDreamworldComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWakerObject_OnRep_LinkedCamperChanged_Statics::NewProp_previous_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWakerObject_OnRep_LinkedCamperChanged_Statics::NewProp_previous_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWakerObject_OnRep_LinkedCamperChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWakerObject_OnRep_LinkedCamperChanged_Statics::NewProp_previous,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWakerObject_OnRep_LinkedCamperChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WakerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWakerObject_OnRep_LinkedCamperChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWakerObject, nullptr, "OnRep_LinkedCamperChanged", nullptr, nullptr, sizeof(WakerObject_eventOnRep_LinkedCamperChanged_Parms), Z_Construct_UFunction_AWakerObject_OnRep_LinkedCamperChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWakerObject_OnRep_LinkedCamperChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWakerObject_OnRep_LinkedCamperChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWakerObject_OnRep_LinkedCamperChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWakerObject_OnRep_LinkedCamperChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWakerObject_OnRep_LinkedCamperChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWakerObject_SetChargeComplete_Statics
	{
		struct WakerObject_eventSetChargeComplete_Parms
		{
			bool complete;
		};
		static void NewProp_complete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_complete;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AWakerObject_SetChargeComplete_Statics::NewProp_complete_SetBit(void* Obj)
	{
		((WakerObject_eventSetChargeComplete_Parms*)Obj)->complete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWakerObject_SetChargeComplete_Statics::NewProp_complete = { "complete", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WakerObject_eventSetChargeComplete_Parms), &Z_Construct_UFunction_AWakerObject_SetChargeComplete_Statics::NewProp_complete_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWakerObject_SetChargeComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWakerObject_SetChargeComplete_Statics::NewProp_complete,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWakerObject_SetChargeComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WakerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWakerObject_SetChargeComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWakerObject, nullptr, "SetChargeComplete", nullptr, nullptr, sizeof(WakerObject_eventSetChargeComplete_Parms), Z_Construct_UFunction_AWakerObject_SetChargeComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWakerObject_SetChargeComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWakerObject_SetChargeComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWakerObject_SetChargeComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWakerObject_SetChargeComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWakerObject_SetChargeComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWakerObject_UpdateVisibilityAndOutline_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWakerObject_UpdateVisibilityAndOutline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WakerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWakerObject_UpdateVisibilityAndOutline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWakerObject, nullptr, "UpdateVisibilityAndOutline", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWakerObject_UpdateVisibilityAndOutline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWakerObject_UpdateVisibilityAndOutline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWakerObject_UpdateVisibilityAndOutline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWakerObject_UpdateVisibilityAndOutline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWakerObject_NoRegister()
	{
		return AWakerObject::StaticClass();
	}
	struct Z_Construct_UClass_AWakerObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chargeComplete_MetaData[];
#endif
		static void NewProp__chargeComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__chargeComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsInteracting_MetaData[];
#endif
		static void NewProp_IsInteracting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsInteracting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__linkedCamperDreamworldComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__linkedCamperDreamworldComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWakerObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractable,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWakerObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWakerObject_BindToCamperDreamStateChanged, "BindToCamperDreamStateChanged" }, // 4010593311
		{ &Z_Construct_UFunction_AWakerObject_CanWakeUpCamper, "CanWakeUpCamper" }, // 3701348333
		{ &Z_Construct_UFunction_AWakerObject_GetChargeComplete, "GetChargeComplete" }, // 681500986
		{ &Z_Construct_UFunction_AWakerObject_GetInteractionPercentComplete, "GetInteractionPercentComplete" }, // 3652817724
		{ &Z_Construct_UFunction_AWakerObject_GetInteractorPrimitiveComponent, "GetInteractorPrimitiveComponent" }, // 500946513
		{ &Z_Construct_UFunction_AWakerObject_GetIsInteracting, "GetIsInteracting" }, // 288948283
		{ &Z_Construct_UFunction_AWakerObject_HasLinkedCamper, "HasLinkedCamper" }, // 666335955
		{ &Z_Construct_UFunction_AWakerObject_IsLinkedToCamper, "IsLinkedToCamper" }, // 2186717462
		{ &Z_Construct_UFunction_AWakerObject_LinkCampersOnLevelReadyToPlay, "LinkCampersOnLevelReadyToPlay" }, // 3813347119
		{ &Z_Construct_UFunction_AWakerObject_OnAnyCamperDreamStateChanged, "OnAnyCamperDreamStateChanged" }, // 499958127
		{ &Z_Construct_UFunction_AWakerObject_OnLinkedCamperDreamStateChanged, "OnLinkedCamperDreamStateChanged" }, // 3219095700
		{ &Z_Construct_UFunction_AWakerObject_OnNewLinkedCamper, "OnNewLinkedCamper" }, // 2328162290
		{ &Z_Construct_UFunction_AWakerObject_OnRep_LinkedCamperChanged, "OnRep_LinkedCamperChanged" }, // 3421880904
		{ &Z_Construct_UFunction_AWakerObject_SetChargeComplete, "SetChargeComplete" }, // 2561063499
		{ &Z_Construct_UFunction_AWakerObject_UpdateVisibilityAndOutline, "UpdateVisibilityAndOutline" }, // 212343322
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWakerObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WakerObject.h" },
		{ "ModuleRelativePath", "Public/WakerObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWakerObject_Statics::NewProp__chargeComplete_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WakerObject" },
		{ "ModuleRelativePath", "Public/WakerObject.h" },
	};
#endif
	void Z_Construct_UClass_AWakerObject_Statics::NewProp__chargeComplete_SetBit(void* Obj)
	{
		((AWakerObject*)Obj)->_chargeComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWakerObject_Statics::NewProp__chargeComplete = { "_chargeComplete", nullptr, (EPropertyFlags)0x0040000000002004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWakerObject), &Z_Construct_UClass_AWakerObject_Statics::NewProp__chargeComplete_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWakerObject_Statics::NewProp__chargeComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWakerObject_Statics::NewProp__chargeComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWakerObject_Statics::NewProp_IsInteracting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WakerObject" },
		{ "ModuleRelativePath", "Public/WakerObject.h" },
	};
#endif
	void Z_Construct_UClass_AWakerObject_Statics::NewProp_IsInteracting_SetBit(void* Obj)
	{
		((AWakerObject*)Obj)->IsInteracting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWakerObject_Statics::NewProp_IsInteracting = { "IsInteracting", nullptr, (EPropertyFlags)0x0040000000002004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWakerObject), &Z_Construct_UClass_AWakerObject_Statics::NewProp_IsInteracting_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWakerObject_Statics::NewProp_IsInteracting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWakerObject_Statics::NewProp_IsInteracting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWakerObject_Statics::NewProp__linkedCamperDreamworldComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WakerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWakerObject_Statics::NewProp__linkedCamperDreamworldComponent = { "_linkedCamperDreamworldComponent", "OnRep_LinkedCamperChanged", (EPropertyFlags)0x0040000100082028, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWakerObject, _linkedCamperDreamworldComponent), Z_Construct_UClass_UCamperDreamworldComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWakerObject_Statics::NewProp__linkedCamperDreamworldComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWakerObject_Statics::NewProp__linkedCamperDreamworldComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWakerObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWakerObject_Statics::NewProp__chargeComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWakerObject_Statics::NewProp_IsInteracting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWakerObject_Statics::NewProp__linkedCamperDreamworldComponent,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AWakerObject_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAIInteractableTargetInterface_NoRegister, (int32)VTABLE_OFFSET(AWakerObject, IAIInteractableTargetInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWakerObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWakerObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWakerObject_Statics::ClassParams = {
		&AWakerObject::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWakerObject_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWakerObject_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWakerObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWakerObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWakerObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWakerObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWakerObject, 1176718510);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<AWakerObject>()
	{
		return AWakerObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWakerObject(Z_Construct_UClass_AWakerObject, &AWakerObject::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("AWakerObject"), false, nullptr, nullptr, nullptr);

	void AWakerObject::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__linkedCamperDreamworldComponent(TEXT("_linkedCamperDreamworldComponent"));

		const bool bIsValid = true
			&& Name__linkedCamperDreamworldComponent == ClassReps[(int32)ENetFields_Private::_linkedCamperDreamworldComponent].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AWakerObject"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWakerObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
