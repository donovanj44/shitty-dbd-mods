// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AtlantaOfflineLobbyCamera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaOfflineLobbyCamera() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AAtlantaOfflineLobbyCamera_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AAtlantaOfflineLobbyCamera();
	ENGINE_API UClass* Z_Construct_UClass_ACameraActor();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	static FName NAME_AAtlantaOfflineLobbyCamera_SetCameraPosition = FName(TEXT("SetCameraPosition"));
	void AAtlantaOfflineLobbyCamera::SetCameraPosition(FVector positionVector)
	{
		AtlantaOfflineLobbyCamera_eventSetCameraPosition_Parms Parms;
		Parms.positionVector=positionVector;
		ProcessEvent(FindFunctionChecked(NAME_AAtlantaOfflineLobbyCamera_SetCameraPosition),&Parms);
	}
	static FName NAME_AAtlantaOfflineLobbyCamera_SetCameraRotation = FName(TEXT("SetCameraRotation"));
	void AAtlantaOfflineLobbyCamera::SetCameraRotation(FRotator rotationVector)
	{
		AtlantaOfflineLobbyCamera_eventSetCameraRotation_Parms Parms;
		Parms.rotationVector=rotationVector;
		ProcessEvent(FindFunctionChecked(NAME_AAtlantaOfflineLobbyCamera_SetCameraRotation),&Parms);
	}
	void AAtlantaOfflineLobbyCamera::StaticRegisterNativesAAtlantaOfflineLobbyCamera()
	{
	}
	struct Z_Construct_UFunction_AAtlantaOfflineLobbyCamera_SetCameraPosition_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_positionVector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAtlantaOfflineLobbyCamera_SetCameraPosition_Statics::NewProp_positionVector = { "positionVector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaOfflineLobbyCamera_eventSetCameraPosition_Parms, positionVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtlantaOfflineLobbyCamera_SetCameraPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtlantaOfflineLobbyCamera_SetCameraPosition_Statics::NewProp_positionVector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtlantaOfflineLobbyCamera_SetCameraPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaOfflineLobbyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtlantaOfflineLobbyCamera_SetCameraPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtlantaOfflineLobbyCamera, nullptr, "SetCameraPosition", nullptr, nullptr, sizeof(AtlantaOfflineLobbyCamera_eventSetCameraPosition_Parms), Z_Construct_UFunction_AAtlantaOfflineLobbyCamera_SetCameraPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtlantaOfflineLobbyCamera_SetCameraPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtlantaOfflineLobbyCamera_SetCameraPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtlantaOfflineLobbyCamera_SetCameraPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtlantaOfflineLobbyCamera_SetCameraPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtlantaOfflineLobbyCamera_SetCameraPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtlantaOfflineLobbyCamera_SetCameraRotation_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rotationVector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAtlantaOfflineLobbyCamera_SetCameraRotation_Statics::NewProp_rotationVector = { "rotationVector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaOfflineLobbyCamera_eventSetCameraRotation_Parms, rotationVector), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtlantaOfflineLobbyCamera_SetCameraRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtlantaOfflineLobbyCamera_SetCameraRotation_Statics::NewProp_rotationVector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtlantaOfflineLobbyCamera_SetCameraRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaOfflineLobbyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtlantaOfflineLobbyCamera_SetCameraRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtlantaOfflineLobbyCamera, nullptr, "SetCameraRotation", nullptr, nullptr, sizeof(AtlantaOfflineLobbyCamera_eventSetCameraRotation_Parms), Z_Construct_UFunction_AAtlantaOfflineLobbyCamera_SetCameraRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtlantaOfflineLobbyCamera_SetCameraRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtlantaOfflineLobbyCamera_SetCameraRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtlantaOfflineLobbyCamera_SetCameraRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtlantaOfflineLobbyCamera_SetCameraRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtlantaOfflineLobbyCamera_SetCameraRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAtlantaOfflineLobbyCamera_NoRegister()
	{
		return AAtlantaOfflineLobbyCamera::StaticClass();
	}
	struct Z_Construct_UClass_AAtlantaOfflineLobbyCamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__kDefaultAspectRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__kDefaultAspectRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZCameraPositionOffsetMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZCameraPositionOffsetMultiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAtlantaOfflineLobbyCamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACameraActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAtlantaOfflineLobbyCamera_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAtlantaOfflineLobbyCamera_SetCameraPosition, "SetCameraPosition" }, // 4279064327
		{ &Z_Construct_UFunction_AAtlantaOfflineLobbyCamera_SetCameraRotation, "SetCameraRotation" }, // 996624064
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtlantaOfflineLobbyCamera_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Rendering" },
		{ "IncludePath", "AtlantaOfflineLobbyCamera.h" },
		{ "ModuleRelativePath", "Public/AtlantaOfflineLobbyCamera.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtlantaOfflineLobbyCamera_Statics::NewProp__kDefaultAspectRatio_MetaData[] = {
		{ "Category", "AtlantaOfflineLobbyCamera" },
		{ "ModuleRelativePath", "Public/AtlantaOfflineLobbyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAtlantaOfflineLobbyCamera_Statics::NewProp__kDefaultAspectRatio = { "_kDefaultAspectRatio", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAtlantaOfflineLobbyCamera, _kDefaultAspectRatio), METADATA_PARAMS(Z_Construct_UClass_AAtlantaOfflineLobbyCamera_Statics::NewProp__kDefaultAspectRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtlantaOfflineLobbyCamera_Statics::NewProp__kDefaultAspectRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtlantaOfflineLobbyCamera_Statics::NewProp_ZCameraPositionOffsetMultiplier_MetaData[] = {
		{ "Category", "AtlantaOfflineLobbyCamera" },
		{ "ModuleRelativePath", "Public/AtlantaOfflineLobbyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAtlantaOfflineLobbyCamera_Statics::NewProp_ZCameraPositionOffsetMultiplier = { "ZCameraPositionOffsetMultiplier", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAtlantaOfflineLobbyCamera, ZCameraPositionOffsetMultiplier), METADATA_PARAMS(Z_Construct_UClass_AAtlantaOfflineLobbyCamera_Statics::NewProp_ZCameraPositionOffsetMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtlantaOfflineLobbyCamera_Statics::NewProp_ZCameraPositionOffsetMultiplier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAtlantaOfflineLobbyCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtlantaOfflineLobbyCamera_Statics::NewProp__kDefaultAspectRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtlantaOfflineLobbyCamera_Statics::NewProp_ZCameraPositionOffsetMultiplier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAtlantaOfflineLobbyCamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAtlantaOfflineLobbyCamera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAtlantaOfflineLobbyCamera_Statics::ClassParams = {
		&AAtlantaOfflineLobbyCamera::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAtlantaOfflineLobbyCamera_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAtlantaOfflineLobbyCamera_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAtlantaOfflineLobbyCamera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAtlantaOfflineLobbyCamera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAtlantaOfflineLobbyCamera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAtlantaOfflineLobbyCamera_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAtlantaOfflineLobbyCamera, 1591007394);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<AAtlantaOfflineLobbyCamera>()
	{
		return AAtlantaOfflineLobbyCamera::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAtlantaOfflineLobbyCamera(Z_Construct_UClass_AAtlantaOfflineLobbyCamera, &AAtlantaOfflineLobbyCamera::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("AAtlantaOfflineLobbyCamera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAtlantaOfflineLobbyCamera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
