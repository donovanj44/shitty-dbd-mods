// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DetectionZoneUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDetectionZoneUtilities() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDetectionZoneUtilities_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDetectionZoneUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EDetectionZone();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDetectionZoneUtilities::execDetectObstruction)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_GET_ENUM(EDetectionZone,Z_Param_detectionZoneID);
		P_GET_OBJECT_REF(UPhysicalMaterial,Z_Param_Out_physicalMaterialOut);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_positionOut);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_normalOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDetectionZoneUtilities::DetectObstruction(Z_Param_player,EDetectionZone(Z_Param_detectionZoneID),Z_Param_Out_physicalMaterialOut,Z_Param_Out_positionOut,Z_Param_Out_normalOut);
		P_NATIVE_END;
	}
	void UDetectionZoneUtilities::StaticRegisterNativesUDetectionZoneUtilities()
	{
		UClass* Class = UDetectionZoneUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DetectObstruction", &UDetectionZoneUtilities::execDetectObstruction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDetectionZoneUtilities_DetectObstruction_Statics
	{
		struct DetectionZoneUtilities_eventDetectObstruction_Parms
		{
			const ADBDPlayer* player;
			EDetectionZone detectionZoneID;
			UPhysicalMaterial* physicalMaterialOut;
			FVector positionOut;
			FVector normalOut;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_normalOut;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_positionOut;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_physicalMaterialOut;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_detectionZoneID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_detectionZoneID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDetectionZoneUtilities_DetectObstruction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DetectionZoneUtilities_eventDetectObstruction_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDetectionZoneUtilities_DetectObstruction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DetectionZoneUtilities_eventDetectObstruction_Parms), &Z_Construct_UFunction_UDetectionZoneUtilities_DetectObstruction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDetectionZoneUtilities_DetectObstruction_Statics::NewProp_normalOut = { "normalOut", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetectionZoneUtilities_eventDetectObstruction_Parms, normalOut), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDetectionZoneUtilities_DetectObstruction_Statics::NewProp_positionOut = { "positionOut", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetectionZoneUtilities_eventDetectObstruction_Parms, positionOut), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDetectionZoneUtilities_DetectObstruction_Statics::NewProp_physicalMaterialOut = { "physicalMaterialOut", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetectionZoneUtilities_eventDetectObstruction_Parms, physicalMaterialOut), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDetectionZoneUtilities_DetectObstruction_Statics::NewProp_detectionZoneID = { "detectionZoneID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetectionZoneUtilities_eventDetectObstruction_Parms, detectionZoneID), Z_Construct_UEnum_DBDSharedTypes_EDetectionZone, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDetectionZoneUtilities_DetectObstruction_Statics::NewProp_detectionZoneID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDetectionZoneUtilities_DetectObstruction_Statics::NewProp_player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDetectionZoneUtilities_DetectObstruction_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetectionZoneUtilities_eventDetectObstruction_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDetectionZoneUtilities_DetectObstruction_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetectionZoneUtilities_DetectObstruction_Statics::NewProp_player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDetectionZoneUtilities_DetectObstruction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetectionZoneUtilities_DetectObstruction_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetectionZoneUtilities_DetectObstruction_Statics::NewProp_normalOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetectionZoneUtilities_DetectObstruction_Statics::NewProp_positionOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetectionZoneUtilities_DetectObstruction_Statics::NewProp_physicalMaterialOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetectionZoneUtilities_DetectObstruction_Statics::NewProp_detectionZoneID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetectionZoneUtilities_DetectObstruction_Statics::NewProp_detectionZoneID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDetectionZoneUtilities_DetectObstruction_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDetectionZoneUtilities_DetectObstruction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DetectionZoneUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDetectionZoneUtilities_DetectObstruction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDetectionZoneUtilities, nullptr, "DetectObstruction", nullptr, nullptr, sizeof(DetectionZoneUtilities_eventDetectObstruction_Parms), Z_Construct_UFunction_UDetectionZoneUtilities_DetectObstruction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetectionZoneUtilities_DetectObstruction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDetectionZoneUtilities_DetectObstruction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDetectionZoneUtilities_DetectObstruction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDetectionZoneUtilities_DetectObstruction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDetectionZoneUtilities_DetectObstruction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDetectionZoneUtilities_NoRegister()
	{
		return UDetectionZoneUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UDetectionZoneUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDetectionZoneUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDetectionZoneUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDetectionZoneUtilities_DetectObstruction, "DetectObstruction" }, // 4279909723
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDetectionZoneUtilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DetectionZoneUtilities.h" },
		{ "ModuleRelativePath", "Public/DetectionZoneUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDetectionZoneUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDetectionZoneUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDetectionZoneUtilities_Statics::ClassParams = {
		&UDetectionZoneUtilities::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDetectionZoneUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDetectionZoneUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDetectionZoneUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDetectionZoneUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDetectionZoneUtilities, 2010806389);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDetectionZoneUtilities>()
	{
		return UDetectionZoneUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDetectionZoneUtilities(Z_Construct_UClass_UDetectionZoneUtilities, &UDetectionZoneUtilities::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDetectionZoneUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDetectionZoneUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
