// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayUtilities/Public/CameraUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraUtilities() {}
// Cross Module References
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UCameraUtilities_NoRegister();
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UCameraUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_GameplayUtilities();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCameraUtilities::execIsLookingTowards)
	{
		P_GET_OBJECT(AController,Z_Param_controller);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_precisionAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCameraUtilities::IsLookingTowards(Z_Param_controller,Z_Param_Out_position,Z_Param_precisionAngle);
		P_NATIVE_END;
	}
	void UCameraUtilities::StaticRegisterNativesUCameraUtilities()
	{
		UClass* Class = UCameraUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsLookingTowards", &UCameraUtilities::execIsLookingTowards },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCameraUtilities_IsLookingTowards_Statics
	{
		struct CameraUtilities_eventIsLookingTowards_Parms
		{
			const AController* controller;
			FVector position;
			float precisionAngle;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_precisionAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_controller_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCameraUtilities_IsLookingTowards_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CameraUtilities_eventIsLookingTowards_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCameraUtilities_IsLookingTowards_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CameraUtilities_eventIsLookingTowards_Parms), &Z_Construct_UFunction_UCameraUtilities_IsLookingTowards_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraUtilities_IsLookingTowards_Statics::NewProp_precisionAngle = { "precisionAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraUtilities_eventIsLookingTowards_Parms, precisionAngle), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraUtilities_IsLookingTowards_Statics::NewProp_position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraUtilities_IsLookingTowards_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraUtilities_eventIsLookingTowards_Parms, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UCameraUtilities_IsLookingTowards_Statics::NewProp_position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraUtilities_IsLookingTowards_Statics::NewProp_position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraUtilities_IsLookingTowards_Statics::NewProp_controller_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraUtilities_IsLookingTowards_Statics::NewProp_controller = { "controller", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraUtilities_eventIsLookingTowards_Parms, controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCameraUtilities_IsLookingTowards_Statics::NewProp_controller_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraUtilities_IsLookingTowards_Statics::NewProp_controller_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraUtilities_IsLookingTowards_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraUtilities_IsLookingTowards_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraUtilities_IsLookingTowards_Statics::NewProp_precisionAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraUtilities_IsLookingTowards_Statics::NewProp_position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraUtilities_IsLookingTowards_Statics::NewProp_controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraUtilities_IsLookingTowards_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CameraUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraUtilities_IsLookingTowards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraUtilities, nullptr, "IsLookingTowards", nullptr, nullptr, sizeof(CameraUtilities_eventIsLookingTowards_Parms), Z_Construct_UFunction_UCameraUtilities_IsLookingTowards_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraUtilities_IsLookingTowards_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraUtilities_IsLookingTowards_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraUtilities_IsLookingTowards_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraUtilities_IsLookingTowards()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraUtilities_IsLookingTowards_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCameraUtilities_NoRegister()
	{
		return UCameraUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UCameraUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCameraUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCameraUtilities_IsLookingTowards, "IsLookingTowards" }, // 3820884929
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraUtilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CameraUtilities.h" },
		{ "ModuleRelativePath", "Public/CameraUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCameraUtilities_Statics::ClassParams = {
		&UCameraUtilities::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCameraUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCameraUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCameraUtilities, 23569792);
	template<> GAMEPLAYUTILITIES_API UClass* StaticClass<UCameraUtilities>()
	{
		return UCameraUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCameraUtilities(Z_Construct_UClass_UCameraUtilities, &UCameraUtilities::StaticClass, TEXT("/Script/GameplayUtilities"), TEXT("UCameraUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
