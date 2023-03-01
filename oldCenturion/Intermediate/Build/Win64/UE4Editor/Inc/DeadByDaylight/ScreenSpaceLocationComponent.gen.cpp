// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ScreenSpaceLocationComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScreenSpaceLocationComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UScreenSpaceLocationComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UScreenSpaceLocationComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	DEFINE_FUNCTION(UScreenSpaceLocationComponent::execGetCurrentResolution)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetCurrentResolution();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScreenSpaceLocationComponent::execHasValidPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasValidPosition();
		P_NATIVE_END;
	}
	void UScreenSpaceLocationComponent::StaticRegisterNativesUScreenSpaceLocationComponent()
	{
		UClass* Class = UScreenSpaceLocationComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentResolution", &UScreenSpaceLocationComponent::execGetCurrentResolution },
			{ "HasValidPosition", &UScreenSpaceLocationComponent::execHasValidPosition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UScreenSpaceLocationComponent_GetCurrentResolution_Statics
	{
		struct ScreenSpaceLocationComponent_eventGetCurrentResolution_Parms
		{
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScreenSpaceLocationComponent_GetCurrentResolution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScreenSpaceLocationComponent_eventGetCurrentResolution_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScreenSpaceLocationComponent_GetCurrentResolution_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenSpaceLocationComponent_GetCurrentResolution_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreenSpaceLocationComponent_GetCurrentResolution_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScreenSpaceLocationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenSpaceLocationComponent_GetCurrentResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreenSpaceLocationComponent, nullptr, "GetCurrentResolution", nullptr, nullptr, sizeof(ScreenSpaceLocationComponent_eventGetCurrentResolution_Parms), Z_Construct_UFunction_UScreenSpaceLocationComponent_GetCurrentResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenSpaceLocationComponent_GetCurrentResolution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScreenSpaceLocationComponent_GetCurrentResolution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenSpaceLocationComponent_GetCurrentResolution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScreenSpaceLocationComponent_GetCurrentResolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScreenSpaceLocationComponent_GetCurrentResolution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScreenSpaceLocationComponent_HasValidPosition_Statics
	{
		struct ScreenSpaceLocationComponent_eventHasValidPosition_Parms
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
	void Z_Construct_UFunction_UScreenSpaceLocationComponent_HasValidPosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ScreenSpaceLocationComponent_eventHasValidPosition_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScreenSpaceLocationComponent_HasValidPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ScreenSpaceLocationComponent_eventHasValidPosition_Parms), &Z_Construct_UFunction_UScreenSpaceLocationComponent_HasValidPosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScreenSpaceLocationComponent_HasValidPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenSpaceLocationComponent_HasValidPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreenSpaceLocationComponent_HasValidPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScreenSpaceLocationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenSpaceLocationComponent_HasValidPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreenSpaceLocationComponent, nullptr, "HasValidPosition", nullptr, nullptr, sizeof(ScreenSpaceLocationComponent_eventHasValidPosition_Parms), Z_Construct_UFunction_UScreenSpaceLocationComponent_HasValidPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenSpaceLocationComponent_HasValidPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScreenSpaceLocationComponent_HasValidPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenSpaceLocationComponent_HasValidPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScreenSpaceLocationComponent_HasValidPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScreenSpaceLocationComponent_HasValidPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UScreenSpaceLocationComponent_NoRegister()
	{
		return UScreenSpaceLocationComponent::StaticClass();
	}
	struct Z_Construct_UClass_UScreenSpaceLocationComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__previousTransforms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__previousTransforms;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__previousTransforms_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currentResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__currentResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FrameDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenSpaceY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenSpaceY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenSpaceX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenSpaceX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScreenSpaceLocationComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UScreenSpaceLocationComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UScreenSpaceLocationComponent_GetCurrentResolution, "GetCurrentResolution" }, // 3464789333
		{ &Z_Construct_UFunction_UScreenSpaceLocationComponent_HasValidPosition, "HasValidPosition" }, // 3345465683
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreenSpaceLocationComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ScreenSpaceLocationComponent.h" },
		{ "ModuleRelativePath", "Public/ScreenSpaceLocationComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreenSpaceLocationComponent_Statics::NewProp__previousTransforms_MetaData[] = {
		{ "ModuleRelativePath", "Public/ScreenSpaceLocationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UScreenSpaceLocationComponent_Statics::NewProp__previousTransforms = { "_previousTransforms", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScreenSpaceLocationComponent, _previousTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UScreenSpaceLocationComponent_Statics::NewProp__previousTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScreenSpaceLocationComponent_Statics::NewProp__previousTransforms_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UScreenSpaceLocationComponent_Statics::NewProp__previousTransforms_Inner = { "_previousTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreenSpaceLocationComponent_Statics::NewProp__currentResolution_MetaData[] = {
		{ "ModuleRelativePath", "Public/ScreenSpaceLocationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UScreenSpaceLocationComponent_Statics::NewProp__currentResolution = { "_currentResolution", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScreenSpaceLocationComponent, _currentResolution), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UScreenSpaceLocationComponent_Statics::NewProp__currentResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScreenSpaceLocationComponent_Statics::NewProp__currentResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreenSpaceLocationComponent_Statics::NewProp_FrameDelay_MetaData[] = {
		{ "Category", "ScreenSpaceLocationComponent" },
		{ "ModuleRelativePath", "Public/ScreenSpaceLocationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UScreenSpaceLocationComponent_Statics::NewProp_FrameDelay = { "FrameDelay", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScreenSpaceLocationComponent, FrameDelay), METADATA_PARAMS(Z_Construct_UClass_UScreenSpaceLocationComponent_Statics::NewProp_FrameDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScreenSpaceLocationComponent_Statics::NewProp_FrameDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreenSpaceLocationComponent_Statics::NewProp_ScreenSpaceY_MetaData[] = {
		{ "Category", "ScreenSpaceLocationComponent" },
		{ "ModuleRelativePath", "Public/ScreenSpaceLocationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UScreenSpaceLocationComponent_Statics::NewProp_ScreenSpaceY = { "ScreenSpaceY", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScreenSpaceLocationComponent, ScreenSpaceY), METADATA_PARAMS(Z_Construct_UClass_UScreenSpaceLocationComponent_Statics::NewProp_ScreenSpaceY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScreenSpaceLocationComponent_Statics::NewProp_ScreenSpaceY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreenSpaceLocationComponent_Statics::NewProp_ScreenSpaceX_MetaData[] = {
		{ "Category", "ScreenSpaceLocationComponent" },
		{ "ModuleRelativePath", "Public/ScreenSpaceLocationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UScreenSpaceLocationComponent_Statics::NewProp_ScreenSpaceX = { "ScreenSpaceX", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScreenSpaceLocationComponent, ScreenSpaceX), METADATA_PARAMS(Z_Construct_UClass_UScreenSpaceLocationComponent_Statics::NewProp_ScreenSpaceX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScreenSpaceLocationComponent_Statics::NewProp_ScreenSpaceX_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScreenSpaceLocationComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenSpaceLocationComponent_Statics::NewProp__previousTransforms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenSpaceLocationComponent_Statics::NewProp__previousTransforms_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenSpaceLocationComponent_Statics::NewProp__currentResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenSpaceLocationComponent_Statics::NewProp_FrameDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenSpaceLocationComponent_Statics::NewProp_ScreenSpaceY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenSpaceLocationComponent_Statics::NewProp_ScreenSpaceX,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScreenSpaceLocationComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScreenSpaceLocationComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UScreenSpaceLocationComponent_Statics::ClassParams = {
		&UScreenSpaceLocationComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UScreenSpaceLocationComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UScreenSpaceLocationComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UScreenSpaceLocationComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScreenSpaceLocationComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScreenSpaceLocationComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UScreenSpaceLocationComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UScreenSpaceLocationComponent, 1935169002);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UScreenSpaceLocationComponent>()
	{
		return UScreenSpaceLocationComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UScreenSpaceLocationComponent(Z_Construct_UClass_UScreenSpaceLocationComponent, &UScreenSpaceLocationComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UScreenSpaceLocationComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScreenSpaceLocationComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
