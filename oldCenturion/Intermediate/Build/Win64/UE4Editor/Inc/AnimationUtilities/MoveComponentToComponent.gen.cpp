// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationUtilities/Public/MoveComponentToComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoveComponentToComponent() {}
// Cross Module References
	ANIMATIONUTILITIES_API UClass* Z_Construct_UClass_UMoveComponentToComponent_NoRegister();
	ANIMATIONUTILITIES_API UClass* Z_Construct_UClass_UMoveComponentToComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AnimationUtilities();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMoveComponentToComponent::execStart)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_componentToMove);
		P_GET_OBJECT(USceneComponent,Z_Param_target);
		P_GET_PROPERTY(FFloatProperty,Z_Param_duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Start(Z_Param_componentToMove,Z_Param_target,Z_Param_duration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoveComponentToComponent::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop();
		P_NATIVE_END;
	}
	void UMoveComponentToComponent::StaticRegisterNativesUMoveComponentToComponent()
	{
		UClass* Class = UMoveComponentToComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Start", &UMoveComponentToComponent::execStart },
			{ "Stop", &UMoveComponentToComponent::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMoveComponentToComponent_Start_Statics
	{
		struct MoveComponentToComponent_eventStart_Parms
		{
			USceneComponent* componentToMove;
			const USceneComponent* target;
			float duration;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_componentToMove_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_componentToMove;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoveComponentToComponent_Start_Statics::NewProp_duration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMoveComponentToComponent_Start_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoveComponentToComponent_eventStart_Parms, duration), METADATA_PARAMS(Z_Construct_UFunction_UMoveComponentToComponent_Start_Statics::NewProp_duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoveComponentToComponent_Start_Statics::NewProp_duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoveComponentToComponent_Start_Statics::NewProp_target_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoveComponentToComponent_Start_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoveComponentToComponent_eventStart_Parms, target), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMoveComponentToComponent_Start_Statics::NewProp_target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoveComponentToComponent_Start_Statics::NewProp_target_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoveComponentToComponent_Start_Statics::NewProp_componentToMove_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoveComponentToComponent_Start_Statics::NewProp_componentToMove = { "componentToMove", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoveComponentToComponent_eventStart_Parms, componentToMove), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMoveComponentToComponent_Start_Statics::NewProp_componentToMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoveComponentToComponent_Start_Statics::NewProp_componentToMove_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoveComponentToComponent_Start_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoveComponentToComponent_Start_Statics::NewProp_duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoveComponentToComponent_Start_Statics::NewProp_target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoveComponentToComponent_Start_Statics::NewProp_componentToMove,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoveComponentToComponent_Start_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MoveComponentToComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoveComponentToComponent_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoveComponentToComponent, nullptr, "Start", nullptr, nullptr, sizeof(MoveComponentToComponent_eventStart_Parms), Z_Construct_UFunction_UMoveComponentToComponent_Start_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoveComponentToComponent_Start_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoveComponentToComponent_Start_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoveComponentToComponent_Start_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoveComponentToComponent_Start()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMoveComponentToComponent_Start_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoveComponentToComponent_Stop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoveComponentToComponent_Stop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MoveComponentToComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoveComponentToComponent_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoveComponentToComponent, nullptr, "Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoveComponentToComponent_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoveComponentToComponent_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoveComponentToComponent_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMoveComponentToComponent_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMoveComponentToComponent_NoRegister()
	{
		return UMoveComponentToComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMoveComponentToComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoveComponentToComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMoveComponentToComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoveComponentToComponent_Start, "Start" }, // 677527320
		{ &Z_Construct_UFunction_UMoveComponentToComponent_Stop, "Stop" }, // 3451033456
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveComponentToComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MoveComponentToComponent.h" },
		{ "ModuleRelativePath", "Public/MoveComponentToComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoveComponentToComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoveComponentToComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMoveComponentToComponent_Statics::ClassParams = {
		&UMoveComponentToComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMoveComponentToComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoveComponentToComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoveComponentToComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMoveComponentToComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMoveComponentToComponent, 4266251275);
	template<> ANIMATIONUTILITIES_API UClass* StaticClass<UMoveComponentToComponent>()
	{
		return UMoveComponentToComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMoveComponentToComponent(Z_Construct_UClass_UMoveComponentToComponent, &UMoveComponentToComponent::StaticClass, TEXT("/Script/AnimationUtilities"), TEXT("UMoveComponentToComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoveComponentToComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
