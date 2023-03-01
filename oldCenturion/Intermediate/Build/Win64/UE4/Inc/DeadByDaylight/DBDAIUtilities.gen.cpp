// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDAIUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDAIUtilities() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDAIUtilities_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDAIUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationPath_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDBDAIUtilities::execDrawDebugAINavigation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDBDAIUtilities::DrawDebugAINavigation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDAIUtilities::execDrawDebugAINavigationFilter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDBDAIUtilities::DrawDebugAINavigationFilter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDAIUtilities::execDrawDebugAIPerception)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDBDAIUtilities::DrawDebugAIPerception();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDAIUtilities::execFindPathWithAgentRadiusToActorSynchronously)
	{
		P_GET_OBJECT(UObject,Z_Param_worldContextObject);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_pathStart);
		P_GET_OBJECT(AActor,Z_Param_goalActor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_agentRadius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_tetherDistance);
		P_GET_OBJECT(AActor,Z_Param_pathfindingContext);
		P_GET_OBJECT(UClass,Z_Param_filterClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNavigationPath**)Z_Param__Result=UDBDAIUtilities::FindPathWithAgentRadiusToActorSynchronously(Z_Param_worldContextObject,Z_Param_Out_pathStart,Z_Param_goalActor,Z_Param_agentRadius,Z_Param_tetherDistance,Z_Param_pathfindingContext,Z_Param_filterClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDAIUtilities::execSetCanEverAffectNavigation)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_component);
		P_GET_UBOOL(Z_Param_affectNavigation);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDBDAIUtilities::SetCanEverAffectNavigation(Z_Param_component,Z_Param_affectNavigation);
		P_NATIVE_END;
	}
	void UDBDAIUtilities::StaticRegisterNativesUDBDAIUtilities()
	{
		UClass* Class = UDBDAIUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DrawDebugAINavigation", &UDBDAIUtilities::execDrawDebugAINavigation },
			{ "DrawDebugAINavigationFilter", &UDBDAIUtilities::execDrawDebugAINavigationFilter },
			{ "DrawDebugAIPerception", &UDBDAIUtilities::execDrawDebugAIPerception },
			{ "FindPathWithAgentRadiusToActorSynchronously", &UDBDAIUtilities::execFindPathWithAgentRadiusToActorSynchronously },
			{ "SetCanEverAffectNavigation", &UDBDAIUtilities::execSetCanEverAffectNavigation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBDAIUtilities_DrawDebugAINavigation_Statics
	{
		struct DBDAIUtilities_eventDrawDebugAINavigation_Parms
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
	void Z_Construct_UFunction_UDBDAIUtilities_DrawDebugAINavigation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDAIUtilities_eventDrawDebugAINavigation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDAIUtilities_DrawDebugAINavigation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDAIUtilities_eventDrawDebugAINavigation_Parms), &Z_Construct_UFunction_UDBDAIUtilities_DrawDebugAINavigation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDAIUtilities_DrawDebugAINavigation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAIUtilities_DrawDebugAINavigation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAIUtilities_DrawDebugAINavigation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDAIUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDAIUtilities_DrawDebugAINavigation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDAIUtilities, nullptr, "DrawDebugAINavigation", nullptr, nullptr, sizeof(DBDAIUtilities_eventDrawDebugAINavigation_Parms), Z_Construct_UFunction_UDBDAIUtilities_DrawDebugAINavigation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAIUtilities_DrawDebugAINavigation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDAIUtilities_DrawDebugAINavigation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAIUtilities_DrawDebugAINavigation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDAIUtilities_DrawDebugAINavigation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDAIUtilities_DrawDebugAINavigation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDAIUtilities_DrawDebugAINavigationFilter_Statics
	{
		struct DBDAIUtilities_eventDrawDebugAINavigationFilter_Parms
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
	void Z_Construct_UFunction_UDBDAIUtilities_DrawDebugAINavigationFilter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDAIUtilities_eventDrawDebugAINavigationFilter_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDAIUtilities_DrawDebugAINavigationFilter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDAIUtilities_eventDrawDebugAINavigationFilter_Parms), &Z_Construct_UFunction_UDBDAIUtilities_DrawDebugAINavigationFilter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDAIUtilities_DrawDebugAINavigationFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAIUtilities_DrawDebugAINavigationFilter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAIUtilities_DrawDebugAINavigationFilter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDAIUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDAIUtilities_DrawDebugAINavigationFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDAIUtilities, nullptr, "DrawDebugAINavigationFilter", nullptr, nullptr, sizeof(DBDAIUtilities_eventDrawDebugAINavigationFilter_Parms), Z_Construct_UFunction_UDBDAIUtilities_DrawDebugAINavigationFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAIUtilities_DrawDebugAINavigationFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDAIUtilities_DrawDebugAINavigationFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAIUtilities_DrawDebugAINavigationFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDAIUtilities_DrawDebugAINavigationFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDAIUtilities_DrawDebugAINavigationFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDAIUtilities_DrawDebugAIPerception_Statics
	{
		struct DBDAIUtilities_eventDrawDebugAIPerception_Parms
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
	void Z_Construct_UFunction_UDBDAIUtilities_DrawDebugAIPerception_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDAIUtilities_eventDrawDebugAIPerception_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDAIUtilities_DrawDebugAIPerception_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDAIUtilities_eventDrawDebugAIPerception_Parms), &Z_Construct_UFunction_UDBDAIUtilities_DrawDebugAIPerception_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDAIUtilities_DrawDebugAIPerception_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAIUtilities_DrawDebugAIPerception_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAIUtilities_DrawDebugAIPerception_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDAIUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDAIUtilities_DrawDebugAIPerception_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDAIUtilities, nullptr, "DrawDebugAIPerception", nullptr, nullptr, sizeof(DBDAIUtilities_eventDrawDebugAIPerception_Parms), Z_Construct_UFunction_UDBDAIUtilities_DrawDebugAIPerception_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAIUtilities_DrawDebugAIPerception_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDAIUtilities_DrawDebugAIPerception_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAIUtilities_DrawDebugAIPerception_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDAIUtilities_DrawDebugAIPerception()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDAIUtilities_DrawDebugAIPerception_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDAIUtilities_FindPathWithAgentRadiusToActorSynchronously_Statics
	{
		struct DBDAIUtilities_eventFindPathWithAgentRadiusToActorSynchronously_Parms
		{
			UObject* worldContextObject;
			FVector pathStart;
			AActor* goalActor;
			float agentRadius;
			float tetherDistance;
			AActor* pathfindingContext;
			TSubclassOf<UNavigationQueryFilter>  filterClass;
			UNavigationPath* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_filterClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pathfindingContext;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_tetherDistance;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_agentRadius;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_goalActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pathStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_pathStart;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDAIUtilities_FindPathWithAgentRadiusToActorSynchronously_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAIUtilities_eventFindPathWithAgentRadiusToActorSynchronously_Parms, ReturnValue), Z_Construct_UClass_UNavigationPath_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDBDAIUtilities_FindPathWithAgentRadiusToActorSynchronously_Statics::NewProp_filterClass = { "filterClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAIUtilities_eventFindPathWithAgentRadiusToActorSynchronously_Parms, filterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDAIUtilities_FindPathWithAgentRadiusToActorSynchronously_Statics::NewProp_pathfindingContext = { "pathfindingContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAIUtilities_eventFindPathWithAgentRadiusToActorSynchronously_Parms, pathfindingContext), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDAIUtilities_FindPathWithAgentRadiusToActorSynchronously_Statics::NewProp_tetherDistance = { "tetherDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAIUtilities_eventFindPathWithAgentRadiusToActorSynchronously_Parms, tetherDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDAIUtilities_FindPathWithAgentRadiusToActorSynchronously_Statics::NewProp_agentRadius = { "agentRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAIUtilities_eventFindPathWithAgentRadiusToActorSynchronously_Parms, agentRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDAIUtilities_FindPathWithAgentRadiusToActorSynchronously_Statics::NewProp_goalActor = { "goalActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAIUtilities_eventFindPathWithAgentRadiusToActorSynchronously_Parms, goalActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAIUtilities_FindPathWithAgentRadiusToActorSynchronously_Statics::NewProp_pathStart_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDAIUtilities_FindPathWithAgentRadiusToActorSynchronously_Statics::NewProp_pathStart = { "pathStart", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAIUtilities_eventFindPathWithAgentRadiusToActorSynchronously_Parms, pathStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UDBDAIUtilities_FindPathWithAgentRadiusToActorSynchronously_Statics::NewProp_pathStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAIUtilities_FindPathWithAgentRadiusToActorSynchronously_Statics::NewProp_pathStart_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDAIUtilities_FindPathWithAgentRadiusToActorSynchronously_Statics::NewProp_worldContextObject = { "worldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAIUtilities_eventFindPathWithAgentRadiusToActorSynchronously_Parms, worldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDAIUtilities_FindPathWithAgentRadiusToActorSynchronously_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAIUtilities_FindPathWithAgentRadiusToActorSynchronously_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAIUtilities_FindPathWithAgentRadiusToActorSynchronously_Statics::NewProp_filterClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAIUtilities_FindPathWithAgentRadiusToActorSynchronously_Statics::NewProp_pathfindingContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAIUtilities_FindPathWithAgentRadiusToActorSynchronously_Statics::NewProp_tetherDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAIUtilities_FindPathWithAgentRadiusToActorSynchronously_Statics::NewProp_agentRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAIUtilities_FindPathWithAgentRadiusToActorSynchronously_Statics::NewProp_goalActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAIUtilities_FindPathWithAgentRadiusToActorSynchronously_Statics::NewProp_pathStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAIUtilities_FindPathWithAgentRadiusToActorSynchronously_Statics::NewProp_worldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAIUtilities_FindPathWithAgentRadiusToActorSynchronously_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDAIUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDAIUtilities_FindPathWithAgentRadiusToActorSynchronously_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDAIUtilities, nullptr, "FindPathWithAgentRadiusToActorSynchronously", nullptr, nullptr, sizeof(DBDAIUtilities_eventFindPathWithAgentRadiusToActorSynchronously_Parms), Z_Construct_UFunction_UDBDAIUtilities_FindPathWithAgentRadiusToActorSynchronously_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAIUtilities_FindPathWithAgentRadiusToActorSynchronously_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDAIUtilities_FindPathWithAgentRadiusToActorSynchronously_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAIUtilities_FindPathWithAgentRadiusToActorSynchronously_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDAIUtilities_FindPathWithAgentRadiusToActorSynchronously()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDAIUtilities_FindPathWithAgentRadiusToActorSynchronously_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDAIUtilities_SetCanEverAffectNavigation_Statics
	{
		struct DBDAIUtilities_eventSetCanEverAffectNavigation_Parms
		{
			UActorComponent* component;
			bool affectNavigation;
		};
		static void NewProp_affectNavigation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_affectNavigation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDAIUtilities_SetCanEverAffectNavigation_Statics::NewProp_affectNavigation_SetBit(void* Obj)
	{
		((DBDAIUtilities_eventSetCanEverAffectNavigation_Parms*)Obj)->affectNavigation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDAIUtilities_SetCanEverAffectNavigation_Statics::NewProp_affectNavigation = { "affectNavigation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDAIUtilities_eventSetCanEverAffectNavigation_Parms), &Z_Construct_UFunction_UDBDAIUtilities_SetCanEverAffectNavigation_Statics::NewProp_affectNavigation_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAIUtilities_SetCanEverAffectNavigation_Statics::NewProp_component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDAIUtilities_SetCanEverAffectNavigation_Statics::NewProp_component = { "component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAIUtilities_eventSetCanEverAffectNavigation_Parms, component), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDAIUtilities_SetCanEverAffectNavigation_Statics::NewProp_component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAIUtilities_SetCanEverAffectNavigation_Statics::NewProp_component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDAIUtilities_SetCanEverAffectNavigation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAIUtilities_SetCanEverAffectNavigation_Statics::NewProp_affectNavigation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAIUtilities_SetCanEverAffectNavigation_Statics::NewProp_component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAIUtilities_SetCanEverAffectNavigation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDAIUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDAIUtilities_SetCanEverAffectNavigation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDAIUtilities, nullptr, "SetCanEverAffectNavigation", nullptr, nullptr, sizeof(DBDAIUtilities_eventSetCanEverAffectNavigation_Parms), Z_Construct_UFunction_UDBDAIUtilities_SetCanEverAffectNavigation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAIUtilities_SetCanEverAffectNavigation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDAIUtilities_SetCanEverAffectNavigation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAIUtilities_SetCanEverAffectNavigation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDAIUtilities_SetCanEverAffectNavigation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDAIUtilities_SetCanEverAffectNavigation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDAIUtilities_NoRegister()
	{
		return UDBDAIUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UDBDAIUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDAIUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDAIUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDAIUtilities_DrawDebugAINavigation, "DrawDebugAINavigation" }, // 2177054897
		{ &Z_Construct_UFunction_UDBDAIUtilities_DrawDebugAINavigationFilter, "DrawDebugAINavigationFilter" }, // 4062448031
		{ &Z_Construct_UFunction_UDBDAIUtilities_DrawDebugAIPerception, "DrawDebugAIPerception" }, // 3513179426
		{ &Z_Construct_UFunction_UDBDAIUtilities_FindPathWithAgentRadiusToActorSynchronously, "FindPathWithAgentRadiusToActorSynchronously" }, // 3412151622
		{ &Z_Construct_UFunction_UDBDAIUtilities_SetCanEverAffectNavigation, "SetCanEverAffectNavigation" }, // 3212255964
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAIUtilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DBDAIUtilities.h" },
		{ "ModuleRelativePath", "Public/DBDAIUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDAIUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDAIUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDAIUtilities_Statics::ClassParams = {
		&UDBDAIUtilities::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDAIUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAIUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDAIUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDAIUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDAIUtilities, 1639274757);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDAIUtilities>()
	{
		return UDBDAIUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDAIUtilities(Z_Construct_UClass_UDBDAIUtilities, &UDBDAIUtilities::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDAIUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDAIUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
