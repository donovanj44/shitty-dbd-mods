// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Archives/Public/PurpleGlyphComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePurpleGlyphComponent() {}
// Cross Module References
	ARCHIVES_API UClass* Z_Construct_UClass_UPurpleGlyphComponent_NoRegister();
	ARCHIVES_API UClass* Z_Construct_UClass_UPurpleGlyphComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Archives();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ARCHIVES_API UClass* Z_Construct_UClass_AGlyph_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBloodTrailSettings_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIMoveRequest();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTileSpawnPoint_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPurpleGlyphComponent::execAuthority_AbortMove)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_AbortMove();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPurpleGlyphComponent::execAuthority_AbortMoveWithDeceleration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_AbortMoveWithDeceleration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPurpleGlyphComponent::execAuthority_GetNextLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->Authority_GetNextLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPurpleGlyphComponent::execAuthority_MoveTo)
	{
		P_GET_STRUCT(FVector,Z_Param_location);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_MoveTo(Z_Param_location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPurpleGlyphComponent::execAuthority_StartMoveWithAcceleration)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_goalLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_StartMoveWithAcceleration(Z_Param_Out_goalLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPurpleGlyphComponent::execGetOwningGlyph)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AGlyph**)Z_Param__Result=P_THIS->GetOwningGlyph();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPurpleGlyphComponent::execGetTrackedPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ADBDPlayer**)Z_Param__Result=P_THIS->GetTrackedPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPurpleGlyphComponent::execOnLevelReadyToPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLevelReadyToPlay();
		P_NATIVE_END;
	}
	static FName NAME_UPurpleGlyphComponent_ResumeGlyphMovement = FName(TEXT("ResumeGlyphMovement"));
	void UPurpleGlyphComponent::ResumeGlyphMovement(bool useAcceleration)
	{
		PurpleGlyphComponent_eventResumeGlyphMovement_Parms Parms;
		Parms.useAcceleration=useAcceleration ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UPurpleGlyphComponent_ResumeGlyphMovement),&Parms);
	}
	static FName NAME_UPurpleGlyphComponent_StartGlyphMovement = FName(TEXT("StartGlyphMovement"));
	void UPurpleGlyphComponent::StartGlyphMovement()
	{
		ProcessEvent(FindFunctionChecked(NAME_UPurpleGlyphComponent_StartGlyphMovement),NULL);
	}
	static FName NAME_UPurpleGlyphComponent_StopGlyphMovement = FName(TEXT("StopGlyphMovement"));
	void UPurpleGlyphComponent::StopGlyphMovement(bool useDeceleration)
	{
		PurpleGlyphComponent_eventStopGlyphMovement_Parms Parms;
		Parms.useDeceleration=useDeceleration ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UPurpleGlyphComponent_StopGlyphMovement),&Parms);
	}
	void UPurpleGlyphComponent::StaticRegisterNativesUPurpleGlyphComponent()
	{
		UClass* Class = UPurpleGlyphComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_AbortMove", &UPurpleGlyphComponent::execAuthority_AbortMove },
			{ "Authority_AbortMoveWithDeceleration", &UPurpleGlyphComponent::execAuthority_AbortMoveWithDeceleration },
			{ "Authority_GetNextLocation", &UPurpleGlyphComponent::execAuthority_GetNextLocation },
			{ "Authority_MoveTo", &UPurpleGlyphComponent::execAuthority_MoveTo },
			{ "Authority_StartMoveWithAcceleration", &UPurpleGlyphComponent::execAuthority_StartMoveWithAcceleration },
			{ "GetOwningGlyph", &UPurpleGlyphComponent::execGetOwningGlyph },
			{ "GetTrackedPlayer", &UPurpleGlyphComponent::execGetTrackedPlayer },
			{ "OnLevelReadyToPlay", &UPurpleGlyphComponent::execOnLevelReadyToPlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPurpleGlyphComponent_Authority_AbortMove_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPurpleGlyphComponent_Authority_AbortMove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PurpleGlyphComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPurpleGlyphComponent_Authority_AbortMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPurpleGlyphComponent, nullptr, "Authority_AbortMove", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPurpleGlyphComponent_Authority_AbortMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPurpleGlyphComponent_Authority_AbortMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPurpleGlyphComponent_Authority_AbortMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPurpleGlyphComponent_Authority_AbortMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPurpleGlyphComponent_Authority_AbortMoveWithDeceleration_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPurpleGlyphComponent_Authority_AbortMoveWithDeceleration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PurpleGlyphComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPurpleGlyphComponent_Authority_AbortMoveWithDeceleration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPurpleGlyphComponent, nullptr, "Authority_AbortMoveWithDeceleration", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPurpleGlyphComponent_Authority_AbortMoveWithDeceleration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPurpleGlyphComponent_Authority_AbortMoveWithDeceleration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPurpleGlyphComponent_Authority_AbortMoveWithDeceleration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPurpleGlyphComponent_Authority_AbortMoveWithDeceleration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPurpleGlyphComponent_Authority_GetNextLocation_Statics
	{
		struct PurpleGlyphComponent_eventAuthority_GetNextLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPurpleGlyphComponent_Authority_GetNextLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PurpleGlyphComponent_eventAuthority_GetNextLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPurpleGlyphComponent_Authority_GetNextLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPurpleGlyphComponent_Authority_GetNextLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPurpleGlyphComponent_Authority_GetNextLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PurpleGlyphComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPurpleGlyphComponent_Authority_GetNextLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPurpleGlyphComponent, nullptr, "Authority_GetNextLocation", nullptr, nullptr, sizeof(PurpleGlyphComponent_eventAuthority_GetNextLocation_Parms), Z_Construct_UFunction_UPurpleGlyphComponent_Authority_GetNextLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPurpleGlyphComponent_Authority_GetNextLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPurpleGlyphComponent_Authority_GetNextLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPurpleGlyphComponent_Authority_GetNextLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPurpleGlyphComponent_Authority_GetNextLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPurpleGlyphComponent_Authority_GetNextLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPurpleGlyphComponent_Authority_MoveTo_Statics
	{
		struct PurpleGlyphComponent_eventAuthority_MoveTo_Parms
		{
			FVector location;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPurpleGlyphComponent_Authority_MoveTo_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PurpleGlyphComponent_eventAuthority_MoveTo_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPurpleGlyphComponent_Authority_MoveTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPurpleGlyphComponent_Authority_MoveTo_Statics::NewProp_location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPurpleGlyphComponent_Authority_MoveTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PurpleGlyphComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPurpleGlyphComponent_Authority_MoveTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPurpleGlyphComponent, nullptr, "Authority_MoveTo", nullptr, nullptr, sizeof(PurpleGlyphComponent_eventAuthority_MoveTo_Parms), Z_Construct_UFunction_UPurpleGlyphComponent_Authority_MoveTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPurpleGlyphComponent_Authority_MoveTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPurpleGlyphComponent_Authority_MoveTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPurpleGlyphComponent_Authority_MoveTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPurpleGlyphComponent_Authority_MoveTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPurpleGlyphComponent_Authority_MoveTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPurpleGlyphComponent_Authority_StartMoveWithAcceleration_Statics
	{
		struct PurpleGlyphComponent_eventAuthority_StartMoveWithAcceleration_Parms
		{
			FVector goalLocation;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_goalLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_goalLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPurpleGlyphComponent_Authority_StartMoveWithAcceleration_Statics::NewProp_goalLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPurpleGlyphComponent_Authority_StartMoveWithAcceleration_Statics::NewProp_goalLocation = { "goalLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PurpleGlyphComponent_eventAuthority_StartMoveWithAcceleration_Parms, goalLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UPurpleGlyphComponent_Authority_StartMoveWithAcceleration_Statics::NewProp_goalLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPurpleGlyphComponent_Authority_StartMoveWithAcceleration_Statics::NewProp_goalLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPurpleGlyphComponent_Authority_StartMoveWithAcceleration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPurpleGlyphComponent_Authority_StartMoveWithAcceleration_Statics::NewProp_goalLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPurpleGlyphComponent_Authority_StartMoveWithAcceleration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PurpleGlyphComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPurpleGlyphComponent_Authority_StartMoveWithAcceleration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPurpleGlyphComponent, nullptr, "Authority_StartMoveWithAcceleration", nullptr, nullptr, sizeof(PurpleGlyphComponent_eventAuthority_StartMoveWithAcceleration_Parms), Z_Construct_UFunction_UPurpleGlyphComponent_Authority_StartMoveWithAcceleration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPurpleGlyphComponent_Authority_StartMoveWithAcceleration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPurpleGlyphComponent_Authority_StartMoveWithAcceleration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPurpleGlyphComponent_Authority_StartMoveWithAcceleration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPurpleGlyphComponent_Authority_StartMoveWithAcceleration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPurpleGlyphComponent_Authority_StartMoveWithAcceleration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPurpleGlyphComponent_GetOwningGlyph_Statics
	{
		struct PurpleGlyphComponent_eventGetOwningGlyph_Parms
		{
			AGlyph* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPurpleGlyphComponent_GetOwningGlyph_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PurpleGlyphComponent_eventGetOwningGlyph_Parms, ReturnValue), Z_Construct_UClass_AGlyph_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPurpleGlyphComponent_GetOwningGlyph_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPurpleGlyphComponent_GetOwningGlyph_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPurpleGlyphComponent_GetOwningGlyph_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PurpleGlyphComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPurpleGlyphComponent_GetOwningGlyph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPurpleGlyphComponent, nullptr, "GetOwningGlyph", nullptr, nullptr, sizeof(PurpleGlyphComponent_eventGetOwningGlyph_Parms), Z_Construct_UFunction_UPurpleGlyphComponent_GetOwningGlyph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPurpleGlyphComponent_GetOwningGlyph_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPurpleGlyphComponent_GetOwningGlyph_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPurpleGlyphComponent_GetOwningGlyph_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPurpleGlyphComponent_GetOwningGlyph()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPurpleGlyphComponent_GetOwningGlyph_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPurpleGlyphComponent_GetTrackedPlayer_Statics
	{
		struct PurpleGlyphComponent_eventGetTrackedPlayer_Parms
		{
			ADBDPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPurpleGlyphComponent_GetTrackedPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PurpleGlyphComponent_eventGetTrackedPlayer_Parms, ReturnValue), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPurpleGlyphComponent_GetTrackedPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPurpleGlyphComponent_GetTrackedPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPurpleGlyphComponent_GetTrackedPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PurpleGlyphComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPurpleGlyphComponent_GetTrackedPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPurpleGlyphComponent, nullptr, "GetTrackedPlayer", nullptr, nullptr, sizeof(PurpleGlyphComponent_eventGetTrackedPlayer_Parms), Z_Construct_UFunction_UPurpleGlyphComponent_GetTrackedPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPurpleGlyphComponent_GetTrackedPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPurpleGlyphComponent_GetTrackedPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPurpleGlyphComponent_GetTrackedPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPurpleGlyphComponent_GetTrackedPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPurpleGlyphComponent_GetTrackedPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPurpleGlyphComponent_OnLevelReadyToPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPurpleGlyphComponent_OnLevelReadyToPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PurpleGlyphComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPurpleGlyphComponent_OnLevelReadyToPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPurpleGlyphComponent, nullptr, "OnLevelReadyToPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPurpleGlyphComponent_OnLevelReadyToPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPurpleGlyphComponent_OnLevelReadyToPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPurpleGlyphComponent_OnLevelReadyToPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPurpleGlyphComponent_OnLevelReadyToPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPurpleGlyphComponent_ResumeGlyphMovement_Statics
	{
		static void NewProp_useAcceleration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_useAcceleration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPurpleGlyphComponent_ResumeGlyphMovement_Statics::NewProp_useAcceleration_SetBit(void* Obj)
	{
		((PurpleGlyphComponent_eventResumeGlyphMovement_Parms*)Obj)->useAcceleration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPurpleGlyphComponent_ResumeGlyphMovement_Statics::NewProp_useAcceleration = { "useAcceleration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PurpleGlyphComponent_eventResumeGlyphMovement_Parms), &Z_Construct_UFunction_UPurpleGlyphComponent_ResumeGlyphMovement_Statics::NewProp_useAcceleration_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPurpleGlyphComponent_ResumeGlyphMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPurpleGlyphComponent_ResumeGlyphMovement_Statics::NewProp_useAcceleration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPurpleGlyphComponent_ResumeGlyphMovement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PurpleGlyphComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPurpleGlyphComponent_ResumeGlyphMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPurpleGlyphComponent, nullptr, "ResumeGlyphMovement", nullptr, nullptr, sizeof(PurpleGlyphComponent_eventResumeGlyphMovement_Parms), Z_Construct_UFunction_UPurpleGlyphComponent_ResumeGlyphMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPurpleGlyphComponent_ResumeGlyphMovement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPurpleGlyphComponent_ResumeGlyphMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPurpleGlyphComponent_ResumeGlyphMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPurpleGlyphComponent_ResumeGlyphMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPurpleGlyphComponent_ResumeGlyphMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPurpleGlyphComponent_StartGlyphMovement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPurpleGlyphComponent_StartGlyphMovement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PurpleGlyphComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPurpleGlyphComponent_StartGlyphMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPurpleGlyphComponent, nullptr, "StartGlyphMovement", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPurpleGlyphComponent_StartGlyphMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPurpleGlyphComponent_StartGlyphMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPurpleGlyphComponent_StartGlyphMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPurpleGlyphComponent_StartGlyphMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPurpleGlyphComponent_StopGlyphMovement_Statics
	{
		static void NewProp_useDeceleration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_useDeceleration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPurpleGlyphComponent_StopGlyphMovement_Statics::NewProp_useDeceleration_SetBit(void* Obj)
	{
		((PurpleGlyphComponent_eventStopGlyphMovement_Parms*)Obj)->useDeceleration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPurpleGlyphComponent_StopGlyphMovement_Statics::NewProp_useDeceleration = { "useDeceleration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PurpleGlyphComponent_eventStopGlyphMovement_Parms), &Z_Construct_UFunction_UPurpleGlyphComponent_StopGlyphMovement_Statics::NewProp_useDeceleration_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPurpleGlyphComponent_StopGlyphMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPurpleGlyphComponent_StopGlyphMovement_Statics::NewProp_useDeceleration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPurpleGlyphComponent_StopGlyphMovement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PurpleGlyphComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPurpleGlyphComponent_StopGlyphMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPurpleGlyphComponent, nullptr, "StopGlyphMovement", nullptr, nullptr, sizeof(PurpleGlyphComponent_eventStopGlyphMovement_Parms), Z_Construct_UFunction_UPurpleGlyphComponent_StopGlyphMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPurpleGlyphComponent_StopGlyphMovement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPurpleGlyphComponent_StopGlyphMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPurpleGlyphComponent_StopGlyphMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPurpleGlyphComponent_StopGlyphMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPurpleGlyphComponent_StopGlyphMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPurpleGlyphComponent_NoRegister()
	{
		return UPurpleGlyphComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPurpleGlyphComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__bloodTrailSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__bloodTrailSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_outlineColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outlineColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__distanceToDecelerate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__distanceToDecelerate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__distanceToAccelerate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__distanceToAccelerate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__movementAcceptanceRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__movementAcceptanceRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__nextLocationDistanceMaximum_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__nextLocationDistanceMaximum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__nextLocationDistanceMinimum_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__nextLocationDistanceMinimum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__auraRevealDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__auraRevealDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__navFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__navFilter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveRequest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveRequest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__survivorSpawns_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__survivorSpawns;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__survivorSpawns_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPurpleGlyphComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Archives,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPurpleGlyphComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPurpleGlyphComponent_Authority_AbortMove, "Authority_AbortMove" }, // 1668559294
		{ &Z_Construct_UFunction_UPurpleGlyphComponent_Authority_AbortMoveWithDeceleration, "Authority_AbortMoveWithDeceleration" }, // 339754779
		{ &Z_Construct_UFunction_UPurpleGlyphComponent_Authority_GetNextLocation, "Authority_GetNextLocation" }, // 578093212
		{ &Z_Construct_UFunction_UPurpleGlyphComponent_Authority_MoveTo, "Authority_MoveTo" }, // 4034029099
		{ &Z_Construct_UFunction_UPurpleGlyphComponent_Authority_StartMoveWithAcceleration, "Authority_StartMoveWithAcceleration" }, // 203695137
		{ &Z_Construct_UFunction_UPurpleGlyphComponent_GetOwningGlyph, "GetOwningGlyph" }, // 2762968245
		{ &Z_Construct_UFunction_UPurpleGlyphComponent_GetTrackedPlayer, "GetTrackedPlayer" }, // 453843633
		{ &Z_Construct_UFunction_UPurpleGlyphComponent_OnLevelReadyToPlay, "OnLevelReadyToPlay" }, // 145575678
		{ &Z_Construct_UFunction_UPurpleGlyphComponent_ResumeGlyphMovement, "ResumeGlyphMovement" }, // 2377718904
		{ &Z_Construct_UFunction_UPurpleGlyphComponent_StartGlyphMovement, "StartGlyphMovement" }, // 491932075
		{ &Z_Construct_UFunction_UPurpleGlyphComponent_StopGlyphMovement, "StopGlyphMovement" }, // 2580412661
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPurpleGlyphComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PurpleGlyphComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PurpleGlyphComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp__bloodTrailSettings_MetaData[] = {
		{ "Category", "PurpleGlyphComponent" },
		{ "ModuleRelativePath", "Public/PurpleGlyphComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp__bloodTrailSettings = { "_bloodTrailSettings", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPurpleGlyphComponent, _bloodTrailSettings), Z_Construct_UClass_UBloodTrailSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp__bloodTrailSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp__bloodTrailSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp_outlineColor_MetaData[] = {
		{ "Category", "PurpleGlyphComponent" },
		{ "ModuleRelativePath", "Public/PurpleGlyphComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp_outlineColor = { "outlineColor", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPurpleGlyphComponent, outlineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp_outlineColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp_outlineColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp__distanceToDecelerate_MetaData[] = {
		{ "Category", "PurpleGlyphComponent" },
		{ "ModuleRelativePath", "Public/PurpleGlyphComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp__distanceToDecelerate = { "_distanceToDecelerate", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPurpleGlyphComponent, _distanceToDecelerate), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp__distanceToDecelerate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp__distanceToDecelerate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp__distanceToAccelerate_MetaData[] = {
		{ "Category", "PurpleGlyphComponent" },
		{ "ModuleRelativePath", "Public/PurpleGlyphComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp__distanceToAccelerate = { "_distanceToAccelerate", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPurpleGlyphComponent, _distanceToAccelerate), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp__distanceToAccelerate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp__distanceToAccelerate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp__movementAcceptanceRadius_MetaData[] = {
		{ "Category", "PurpleGlyphComponent" },
		{ "ModuleRelativePath", "Public/PurpleGlyphComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp__movementAcceptanceRadius = { "_movementAcceptanceRadius", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPurpleGlyphComponent, _movementAcceptanceRadius), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp__movementAcceptanceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp__movementAcceptanceRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp__nextLocationDistanceMaximum_MetaData[] = {
		{ "Category", "PurpleGlyphComponent" },
		{ "ModuleRelativePath", "Public/PurpleGlyphComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp__nextLocationDistanceMaximum = { "_nextLocationDistanceMaximum", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPurpleGlyphComponent, _nextLocationDistanceMaximum), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp__nextLocationDistanceMaximum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp__nextLocationDistanceMaximum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp__nextLocationDistanceMinimum_MetaData[] = {
		{ "Category", "PurpleGlyphComponent" },
		{ "ModuleRelativePath", "Public/PurpleGlyphComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp__nextLocationDistanceMinimum = { "_nextLocationDistanceMinimum", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPurpleGlyphComponent, _nextLocationDistanceMinimum), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp__nextLocationDistanceMinimum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp__nextLocationDistanceMinimum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp__auraRevealDuration_MetaData[] = {
		{ "Category", "PurpleGlyphComponent" },
		{ "ModuleRelativePath", "Public/PurpleGlyphComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp__auraRevealDuration = { "_auraRevealDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPurpleGlyphComponent, _auraRevealDuration), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp__auraRevealDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp__auraRevealDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp__navFilter_MetaData[] = {
		{ "Category", "PurpleGlyphComponent" },
		{ "ModuleRelativePath", "Public/PurpleGlyphComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp__navFilter = { "_navFilter", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPurpleGlyphComponent, _navFilter), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp__navFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp__navFilter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp_MoveRequest_MetaData[] = {
		{ "ModuleRelativePath", "Public/PurpleGlyphComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp_MoveRequest = { "MoveRequest", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPurpleGlyphComponent, MoveRequest), Z_Construct_UScriptStruct_FAIMoveRequest, METADATA_PARAMS(Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp_MoveRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp_MoveRequest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp__survivorSpawns_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PurpleGlyphComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp__survivorSpawns = { "_survivorSpawns", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPurpleGlyphComponent, _survivorSpawns), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp__survivorSpawns_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp__survivorSpawns_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp__survivorSpawns_Inner = { "_survivorSpawns", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTileSpawnPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPurpleGlyphComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp__bloodTrailSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp_outlineColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp__distanceToDecelerate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp__distanceToAccelerate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp__movementAcceptanceRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp__nextLocationDistanceMaximum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp__nextLocationDistanceMinimum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp__auraRevealDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp__navFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp_MoveRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp__survivorSpawns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPurpleGlyphComponent_Statics::NewProp__survivorSpawns_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPurpleGlyphComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPurpleGlyphComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPurpleGlyphComponent_Statics::ClassParams = {
		&UPurpleGlyphComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPurpleGlyphComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPurpleGlyphComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPurpleGlyphComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPurpleGlyphComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPurpleGlyphComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPurpleGlyphComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPurpleGlyphComponent, 1274451678);
	template<> ARCHIVES_API UClass* StaticClass<UPurpleGlyphComponent>()
	{
		return UPurpleGlyphComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPurpleGlyphComponent(Z_Construct_UClass_UPurpleGlyphComponent, &UPurpleGlyphComponent::StaticClass, TEXT("/Script/Archives"), TEXT("UPurpleGlyphComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPurpleGlyphComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
