// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/K25SurvivorChainAttachmentAnchor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK25SurvivorChainAttachmentAnchor() {}
// Cross Module References
	THEK25_API UClass* Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TheK25();
	THEK25_API UClass* Z_Construct_UClass_AK25Chain_NoRegister();
	THEK25_API UScriptStruct* Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	DEFINE_FUNCTION(AK25SurvivorChainAttachmentAnchor::execGetChainAttachmentData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FK25SurvivorChainAttachmentData*)Z_Param__Result=P_THIS->GetChainAttachmentData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK25SurvivorChainAttachmentAnchor::execGetChainAttachmentLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetChainAttachmentLocation_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK25SurvivorChainAttachmentAnchor::execGetChainPullDirectionAngle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetChainPullDirectionAngle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK25SurvivorChainAttachmentAnchor::execGetChainsPullDirection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetChainsPullDirection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK25SurvivorChainAttachmentAnchor::execGetChainsPullLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetChainsPullLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK25SurvivorChainAttachmentAnchor::execGetNumberOfChainsAttached)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumberOfChainsAttached();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AK25SurvivorChainAttachmentAnchor::execOnRep_AttachmentData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_AttachmentData();
		P_NATIVE_END;
	}
	static FName NAME_AK25SurvivorChainAttachmentAnchor_Cosmetic_OnChainAttached = FName(TEXT("Cosmetic_OnChainAttached"));
	void AK25SurvivorChainAttachmentAnchor::Cosmetic_OnChainAttached(AK25Chain* chainToAttach)
	{
		K25SurvivorChainAttachmentAnchor_eventCosmetic_OnChainAttached_Parms Parms;
		Parms.chainToAttach=chainToAttach;
		ProcessEvent(FindFunctionChecked(NAME_AK25SurvivorChainAttachmentAnchor_Cosmetic_OnChainAttached),&Parms);
	}
	static FName NAME_AK25SurvivorChainAttachmentAnchor_Cosmetic_OnChainDetached = FName(TEXT("Cosmetic_OnChainDetached"));
	void AK25SurvivorChainAttachmentAnchor::Cosmetic_OnChainDetached(AK25Chain* chainToDetach)
	{
		K25SurvivorChainAttachmentAnchor_eventCosmetic_OnChainDetached_Parms Parms;
		Parms.chainToDetach=chainToDetach;
		ProcessEvent(FindFunctionChecked(NAME_AK25SurvivorChainAttachmentAnchor_Cosmetic_OnChainDetached),&Parms);
	}
	static FName NAME_AK25SurvivorChainAttachmentAnchor_GetChainAttachmentLocation = FName(TEXT("GetChainAttachmentLocation"));
	FVector AK25SurvivorChainAttachmentAnchor::GetChainAttachmentLocation() const
	{
		K25SurvivorChainAttachmentAnchor_eventGetChainAttachmentLocation_Parms Parms;
		const_cast<AK25SurvivorChainAttachmentAnchor*>(this)->ProcessEvent(FindFunctionChecked(NAME_AK25SurvivorChainAttachmentAnchor_GetChainAttachmentLocation),&Parms);
		return Parms.ReturnValue;
	}
	void AK25SurvivorChainAttachmentAnchor::StaticRegisterNativesAK25SurvivorChainAttachmentAnchor()
	{
		UClass* Class = AK25SurvivorChainAttachmentAnchor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetChainAttachmentData", &AK25SurvivorChainAttachmentAnchor::execGetChainAttachmentData },
			{ "GetChainAttachmentLocation", &AK25SurvivorChainAttachmentAnchor::execGetChainAttachmentLocation },
			{ "GetChainPullDirectionAngle", &AK25SurvivorChainAttachmentAnchor::execGetChainPullDirectionAngle },
			{ "GetChainsPullDirection", &AK25SurvivorChainAttachmentAnchor::execGetChainsPullDirection },
			{ "GetChainsPullLocation", &AK25SurvivorChainAttachmentAnchor::execGetChainsPullLocation },
			{ "GetNumberOfChainsAttached", &AK25SurvivorChainAttachmentAnchor::execGetNumberOfChainsAttached },
			{ "OnRep_AttachmentData", &AK25SurvivorChainAttachmentAnchor::execOnRep_AttachmentData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_Cosmetic_OnChainAttached_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_chainToAttach;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_Cosmetic_OnChainAttached_Statics::NewProp_chainToAttach = { "chainToAttach", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25SurvivorChainAttachmentAnchor_eventCosmetic_OnChainAttached_Parms, chainToAttach), Z_Construct_UClass_AK25Chain_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_Cosmetic_OnChainAttached_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_Cosmetic_OnChainAttached_Statics::NewProp_chainToAttach,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_Cosmetic_OnChainAttached_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25SurvivorChainAttachmentAnchor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_Cosmetic_OnChainAttached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor, nullptr, "Cosmetic_OnChainAttached", nullptr, nullptr, sizeof(K25SurvivorChainAttachmentAnchor_eventCosmetic_OnChainAttached_Parms), Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_Cosmetic_OnChainAttached_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_Cosmetic_OnChainAttached_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_Cosmetic_OnChainAttached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_Cosmetic_OnChainAttached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_Cosmetic_OnChainAttached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_Cosmetic_OnChainAttached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_Cosmetic_OnChainDetached_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_chainToDetach;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_Cosmetic_OnChainDetached_Statics::NewProp_chainToDetach = { "chainToDetach", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25SurvivorChainAttachmentAnchor_eventCosmetic_OnChainDetached_Parms, chainToDetach), Z_Construct_UClass_AK25Chain_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_Cosmetic_OnChainDetached_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_Cosmetic_OnChainDetached_Statics::NewProp_chainToDetach,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_Cosmetic_OnChainDetached_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25SurvivorChainAttachmentAnchor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_Cosmetic_OnChainDetached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor, nullptr, "Cosmetic_OnChainDetached", nullptr, nullptr, sizeof(K25SurvivorChainAttachmentAnchor_eventCosmetic_OnChainDetached_Parms), Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_Cosmetic_OnChainDetached_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_Cosmetic_OnChainDetached_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_Cosmetic_OnChainDetached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_Cosmetic_OnChainDetached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_Cosmetic_OnChainDetached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_Cosmetic_OnChainDetached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainAttachmentData_Statics
	{
		struct K25SurvivorChainAttachmentAnchor_eventGetChainAttachmentData_Parms
		{
			FK25SurvivorChainAttachmentData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainAttachmentData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25SurvivorChainAttachmentAnchor_eventGetChainAttachmentData_Parms, ReturnValue), Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainAttachmentData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainAttachmentData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainAttachmentData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25SurvivorChainAttachmentAnchor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainAttachmentData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor, nullptr, "GetChainAttachmentData", nullptr, nullptr, sizeof(K25SurvivorChainAttachmentAnchor_eventGetChainAttachmentData_Parms), Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainAttachmentData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainAttachmentData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainAttachmentData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainAttachmentData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainAttachmentData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainAttachmentData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainAttachmentLocation_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainAttachmentLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25SurvivorChainAttachmentAnchor_eventGetChainAttachmentLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainAttachmentLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainAttachmentLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainAttachmentLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25SurvivorChainAttachmentAnchor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainAttachmentLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor, nullptr, "GetChainAttachmentLocation", nullptr, nullptr, sizeof(K25SurvivorChainAttachmentAnchor_eventGetChainAttachmentLocation_Parms), Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainAttachmentLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainAttachmentLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainAttachmentLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainAttachmentLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainAttachmentLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainAttachmentLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainPullDirectionAngle_Statics
	{
		struct K25SurvivorChainAttachmentAnchor_eventGetChainPullDirectionAngle_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainPullDirectionAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25SurvivorChainAttachmentAnchor_eventGetChainPullDirectionAngle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainPullDirectionAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainPullDirectionAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainPullDirectionAngle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25SurvivorChainAttachmentAnchor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainPullDirectionAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor, nullptr, "GetChainPullDirectionAngle", nullptr, nullptr, sizeof(K25SurvivorChainAttachmentAnchor_eventGetChainPullDirectionAngle_Parms), Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainPullDirectionAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainPullDirectionAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainPullDirectionAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainPullDirectionAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainPullDirectionAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainPullDirectionAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainsPullDirection_Statics
	{
		struct K25SurvivorChainAttachmentAnchor_eventGetChainsPullDirection_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainsPullDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25SurvivorChainAttachmentAnchor_eventGetChainsPullDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainsPullDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainsPullDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainsPullDirection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25SurvivorChainAttachmentAnchor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainsPullDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor, nullptr, "GetChainsPullDirection", nullptr, nullptr, sizeof(K25SurvivorChainAttachmentAnchor_eventGetChainsPullDirection_Parms), Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainsPullDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainsPullDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainsPullDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainsPullDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainsPullDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainsPullDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainsPullLocation_Statics
	{
		struct K25SurvivorChainAttachmentAnchor_eventGetChainsPullLocation_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainsPullLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25SurvivorChainAttachmentAnchor_eventGetChainsPullLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainsPullLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainsPullLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainsPullLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25SurvivorChainAttachmentAnchor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainsPullLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor, nullptr, "GetChainsPullLocation", nullptr, nullptr, sizeof(K25SurvivorChainAttachmentAnchor_eventGetChainsPullLocation_Parms), Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainsPullLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainsPullLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainsPullLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainsPullLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainsPullLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainsPullLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetNumberOfChainsAttached_Statics
	{
		struct K25SurvivorChainAttachmentAnchor_eventGetNumberOfChainsAttached_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetNumberOfChainsAttached_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25SurvivorChainAttachmentAnchor_eventGetNumberOfChainsAttached_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetNumberOfChainsAttached_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetNumberOfChainsAttached_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetNumberOfChainsAttached_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25SurvivorChainAttachmentAnchor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetNumberOfChainsAttached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor, nullptr, "GetNumberOfChainsAttached", nullptr, nullptr, sizeof(K25SurvivorChainAttachmentAnchor_eventGetNumberOfChainsAttached_Parms), Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetNumberOfChainsAttached_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetNumberOfChainsAttached_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetNumberOfChainsAttached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetNumberOfChainsAttached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetNumberOfChainsAttached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetNumberOfChainsAttached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_OnRep_AttachmentData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_OnRep_AttachmentData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25SurvivorChainAttachmentAnchor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_OnRep_AttachmentData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor, nullptr, "OnRep_AttachmentData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_OnRep_AttachmentData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_OnRep_AttachmentData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_OnRep_AttachmentData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_OnRep_AttachmentData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_NoRegister()
	{
		return AK25SurvivorChainAttachmentAnchor::StaticClass();
	}
	struct Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cachedPullDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__cachedPullDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__attachedChain_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__attachedChain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__owningSurvivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__owningSurvivor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__attachmentData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__attachmentData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__timeBetweenTrace_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__timeBetweenTrace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chainMaxBreakingLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__chainMaxBreakingLength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_Cosmetic_OnChainAttached, "Cosmetic_OnChainAttached" }, // 3782038584
		{ &Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_Cosmetic_OnChainDetached, "Cosmetic_OnChainDetached" }, // 3689427967
		{ &Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainAttachmentData, "GetChainAttachmentData" }, // 226442885
		{ &Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainAttachmentLocation, "GetChainAttachmentLocation" }, // 2845743536
		{ &Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainPullDirectionAngle, "GetChainPullDirectionAngle" }, // 1361061310
		{ &Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainsPullDirection, "GetChainsPullDirection" }, // 235004481
		{ &Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetChainsPullLocation, "GetChainsPullLocation" }, // 2399896091
		{ &Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_GetNumberOfChainsAttached, "GetNumberOfChainsAttached" }, // 3203392215
		{ &Z_Construct_UFunction_AK25SurvivorChainAttachmentAnchor_OnRep_AttachmentData, "OnRep_AttachmentData" }, // 634990035
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K25SurvivorChainAttachmentAnchor.h" },
		{ "ModuleRelativePath", "Public/K25SurvivorChainAttachmentAnchor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_Statics::NewProp__cachedPullDirection_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25SurvivorChainAttachmentAnchor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_Statics::NewProp__cachedPullDirection = { "_cachedPullDirection", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25SurvivorChainAttachmentAnchor, _cachedPullDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_Statics::NewProp__cachedPullDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_Statics::NewProp__cachedPullDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_Statics::NewProp__attachedChain_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25SurvivorChainAttachmentAnchor.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_Statics::NewProp__attachedChain = { "_attachedChain", nullptr, (EPropertyFlags)0x0044000000002000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25SurvivorChainAttachmentAnchor, _attachedChain), Z_Construct_UClass_AK25Chain_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_Statics::NewProp__attachedChain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_Statics::NewProp__attachedChain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_Statics::NewProp__owningSurvivor_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25SurvivorChainAttachmentAnchor.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_Statics::NewProp__owningSurvivor = { "_owningSurvivor", nullptr, (EPropertyFlags)0x0044000000002000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25SurvivorChainAttachmentAnchor, _owningSurvivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_Statics::NewProp__owningSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_Statics::NewProp__owningSurvivor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_Statics::NewProp__attachmentData_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25SurvivorChainAttachmentAnchor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_Statics::NewProp__attachmentData = { "_attachmentData", "OnRep_AttachmentData", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25SurvivorChainAttachmentAnchor, _attachmentData), Z_Construct_UScriptStruct_FK25SurvivorChainAttachmentData, METADATA_PARAMS(Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_Statics::NewProp__attachmentData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_Statics::NewProp__attachmentData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_Statics::NewProp__timeBetweenTrace_MetaData[] = {
		{ "Category", "K25SurvivorChainAttachmentAnchor" },
		{ "ModuleRelativePath", "Public/K25SurvivorChainAttachmentAnchor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_Statics::NewProp__timeBetweenTrace = { "_timeBetweenTrace", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25SurvivorChainAttachmentAnchor, _timeBetweenTrace), METADATA_PARAMS(Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_Statics::NewProp__timeBetweenTrace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_Statics::NewProp__timeBetweenTrace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_Statics::NewProp__chainMaxBreakingLength_MetaData[] = {
		{ "Category", "K25SurvivorChainAttachmentAnchor" },
		{ "ModuleRelativePath", "Public/K25SurvivorChainAttachmentAnchor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_Statics::NewProp__chainMaxBreakingLength = { "_chainMaxBreakingLength", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK25SurvivorChainAttachmentAnchor, _chainMaxBreakingLength), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_Statics::NewProp__chainMaxBreakingLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_Statics::NewProp__chainMaxBreakingLength_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_Statics::NewProp__cachedPullDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_Statics::NewProp__attachedChain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_Statics::NewProp__owningSurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_Statics::NewProp__attachmentData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_Statics::NewProp__timeBetweenTrace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_Statics::NewProp__chainMaxBreakingLength,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AK25SurvivorChainAttachmentAnchor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_Statics::ClassParams = {
		&AK25SurvivorChainAttachmentAnchor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AK25SurvivorChainAttachmentAnchor, 2299905713);
	template<> THEK25_API UClass* StaticClass<AK25SurvivorChainAttachmentAnchor>()
	{
		return AK25SurvivorChainAttachmentAnchor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AK25SurvivorChainAttachmentAnchor(Z_Construct_UClass_AK25SurvivorChainAttachmentAnchor, &AK25SurvivorChainAttachmentAnchor::StaticClass, TEXT("/Script/TheK25"), TEXT("AK25SurvivorChainAttachmentAnchor"), false, nullptr, nullptr, nullptr);

	void AK25SurvivorChainAttachmentAnchor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__attachmentData(TEXT("_attachmentData"));

		const bool bIsValid = true
			&& Name__attachmentData == ClassReps[(int32)ENetFields_Private::_attachmentData].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AK25SurvivorChainAttachmentAnchor"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AK25SurvivorChainAttachmentAnchor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
