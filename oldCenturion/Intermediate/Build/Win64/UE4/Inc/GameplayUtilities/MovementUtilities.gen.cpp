// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayUtilities/Public/MovementUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovementUtilities() {}
// Cross Module References
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UMovementUtilities_NoRegister();
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UMovementUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_GameplayUtilities();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMovementUtilities::execLocal_MoveActorTo)
	{
		P_GET_OBJECT(AActor,Z_Param_actor);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_location);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_rotation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovementUtilities::Local_MoveActorTo(Z_Param_actor,Z_Param_Out_location,Z_Param_Out_rotation,Z_Param_duration);
		P_NATIVE_END;
	}
	void UMovementUtilities::StaticRegisterNativesUMovementUtilities()
	{
		UClass* Class = UMovementUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Local_MoveActorTo", &UMovementUtilities::execLocal_MoveActorTo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovementUtilities_Local_MoveActorTo_Statics
	{
		struct MovementUtilities_eventLocal_MoveActorTo_Parms
		{
			AActor* actor;
			FVector location;
			FRotator rotation;
			float duration;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovementUtilities_Local_MoveActorTo_Statics::NewProp_duration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovementUtilities_Local_MoveActorTo_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovementUtilities_eventLocal_MoveActorTo_Parms, duration), METADATA_PARAMS(Z_Construct_UFunction_UMovementUtilities_Local_MoveActorTo_Statics::NewProp_duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtilities_Local_MoveActorTo_Statics::NewProp_duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovementUtilities_Local_MoveActorTo_Statics::NewProp_rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtilities_Local_MoveActorTo_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovementUtilities_eventLocal_MoveActorTo_Parms, rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UMovementUtilities_Local_MoveActorTo_Statics::NewProp_rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtilities_Local_MoveActorTo_Statics::NewProp_rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovementUtilities_Local_MoveActorTo_Statics::NewProp_location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtilities_Local_MoveActorTo_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovementUtilities_eventLocal_MoveActorTo_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMovementUtilities_Local_MoveActorTo_Statics::NewProp_location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtilities_Local_MoveActorTo_Statics::NewProp_location_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovementUtilities_Local_MoveActorTo_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovementUtilities_eventLocal_MoveActorTo_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementUtilities_Local_MoveActorTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtilities_Local_MoveActorTo_Statics::NewProp_duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtilities_Local_MoveActorTo_Statics::NewProp_rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtilities_Local_MoveActorTo_Statics::NewProp_location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtilities_Local_MoveActorTo_Statics::NewProp_actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovementUtilities_Local_MoveActorTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovementUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementUtilities_Local_MoveActorTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovementUtilities, nullptr, "Local_MoveActorTo", nullptr, nullptr, sizeof(MovementUtilities_eventLocal_MoveActorTo_Parms), Z_Construct_UFunction_UMovementUtilities_Local_MoveActorTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtilities_Local_MoveActorTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovementUtilities_Local_MoveActorTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtilities_Local_MoveActorTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovementUtilities_Local_MoveActorTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovementUtilities_Local_MoveActorTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMovementUtilities_NoRegister()
	{
		return UMovementUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UMovementUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovementUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovementUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovementUtilities_Local_MoveActorTo, "Local_MoveActorTo" }, // 1210019032
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovementUtilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MovementUtilities.h" },
		{ "ModuleRelativePath", "Public/MovementUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovementUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovementUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovementUtilities_Statics::ClassParams = {
		&UMovementUtilities::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovementUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovementUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovementUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovementUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovementUtilities, 2233267003);
	template<> GAMEPLAYUTILITIES_API UClass* StaticClass<UMovementUtilities>()
	{
		return UMovementUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovementUtilities(Z_Construct_UClass_UMovementUtilities, &UMovementUtilities::StaticClass, TEXT("/Script/GameplayUtilities"), TEXT("UMovementUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovementUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
