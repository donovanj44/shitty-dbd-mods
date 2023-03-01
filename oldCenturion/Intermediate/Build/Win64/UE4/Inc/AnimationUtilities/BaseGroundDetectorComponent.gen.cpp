// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationUtilities/Public/BaseGroundDetectorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseGroundDetectorComponent() {}
// Cross Module References
	ANIMATIONUTILITIES_API UClass* Z_Construct_UClass_UBaseGroundDetectorComponent_NoRegister();
	ANIMATIONUTILITIES_API UClass* Z_Construct_UClass_UBaseGroundDetectorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AnimationUtilities();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
// End Cross Module References
	DEFINE_FUNCTION(UBaseGroundDetectorComponent::execGetGroundPosition)
	{
		P_GET_STRUCT(FVector,Z_Param_targetPos);
		P_GET_STRUCT(FVector,Z_Param_extraOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetGroundPosition(Z_Param_targetPos,Z_Param_extraOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseGroundDetectorComponent::execInitSkinnedMeshComponent)
	{
		P_GET_OBJECT(USkinnedMeshComponent,Z_Param_mesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitSkinnedMeshComponent(Z_Param_mesh);
		P_NATIVE_END;
	}
	void UBaseGroundDetectorComponent::StaticRegisterNativesUBaseGroundDetectorComponent()
	{
		UClass* Class = UBaseGroundDetectorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGroundPosition", &UBaseGroundDetectorComponent::execGetGroundPosition },
			{ "InitSkinnedMeshComponent", &UBaseGroundDetectorComponent::execInitSkinnedMeshComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseGroundDetectorComponent_GetGroundPosition_Statics
	{
		struct BaseGroundDetectorComponent_eventGetGroundPosition_Parms
		{
			FVector targetPos;
			FVector extraOffset;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_extraOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_extraOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_targetPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_targetPos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseGroundDetectorComponent_GetGroundPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseGroundDetectorComponent_eventGetGroundPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseGroundDetectorComponent_GetGroundPosition_Statics::NewProp_extraOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseGroundDetectorComponent_GetGroundPosition_Statics::NewProp_extraOffset = { "extraOffset", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseGroundDetectorComponent_eventGetGroundPosition_Parms, extraOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UBaseGroundDetectorComponent_GetGroundPosition_Statics::NewProp_extraOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseGroundDetectorComponent_GetGroundPosition_Statics::NewProp_extraOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseGroundDetectorComponent_GetGroundPosition_Statics::NewProp_targetPos_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseGroundDetectorComponent_GetGroundPosition_Statics::NewProp_targetPos = { "targetPos", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseGroundDetectorComponent_eventGetGroundPosition_Parms, targetPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UBaseGroundDetectorComponent_GetGroundPosition_Statics::NewProp_targetPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseGroundDetectorComponent_GetGroundPosition_Statics::NewProp_targetPos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseGroundDetectorComponent_GetGroundPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseGroundDetectorComponent_GetGroundPosition_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseGroundDetectorComponent_GetGroundPosition_Statics::NewProp_extraOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseGroundDetectorComponent_GetGroundPosition_Statics::NewProp_targetPos,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseGroundDetectorComponent_GetGroundPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseGroundDetectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseGroundDetectorComponent_GetGroundPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseGroundDetectorComponent, nullptr, "GetGroundPosition", nullptr, nullptr, sizeof(BaseGroundDetectorComponent_eventGetGroundPosition_Parms), Z_Construct_UFunction_UBaseGroundDetectorComponent_GetGroundPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseGroundDetectorComponent_GetGroundPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseGroundDetectorComponent_GetGroundPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseGroundDetectorComponent_GetGroundPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseGroundDetectorComponent_GetGroundPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseGroundDetectorComponent_GetGroundPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseGroundDetectorComponent_InitSkinnedMeshComponent_Statics
	{
		struct BaseGroundDetectorComponent_eventInitSkinnedMeshComponent_Parms
		{
			USkinnedMeshComponent* mesh;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseGroundDetectorComponent_InitSkinnedMeshComponent_Statics::NewProp_mesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseGroundDetectorComponent_InitSkinnedMeshComponent_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseGroundDetectorComponent_eventInitSkinnedMeshComponent_Parms, mesh), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseGroundDetectorComponent_InitSkinnedMeshComponent_Statics::NewProp_mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseGroundDetectorComponent_InitSkinnedMeshComponent_Statics::NewProp_mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseGroundDetectorComponent_InitSkinnedMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseGroundDetectorComponent_InitSkinnedMeshComponent_Statics::NewProp_mesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseGroundDetectorComponent_InitSkinnedMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseGroundDetectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseGroundDetectorComponent_InitSkinnedMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseGroundDetectorComponent, nullptr, "InitSkinnedMeshComponent", nullptr, nullptr, sizeof(BaseGroundDetectorComponent_eventInitSkinnedMeshComponent_Parms), Z_Construct_UFunction_UBaseGroundDetectorComponent_InitSkinnedMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseGroundDetectorComponent_InitSkinnedMeshComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseGroundDetectorComponent_InitSkinnedMeshComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseGroundDetectorComponent_InitSkinnedMeshComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseGroundDetectorComponent_InitSkinnedMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseGroundDetectorComponent_InitSkinnedMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBaseGroundDetectorComponent_NoRegister()
	{
		return UBaseGroundDetectorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBaseGroundDetectorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__startSlopeTransformName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__startSlopeTransformName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__skinnedMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__skinnedMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__extraTraceDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__extraTraceDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__traceComplex_MetaData[];
#endif
		static void NewProp__traceComplex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__traceComplex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__walkableCollisionChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__walkableCollisionChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__startTransformName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__startTransformName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseGroundDetectorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseGroundDetectorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseGroundDetectorComponent_GetGroundPosition, "GetGroundPosition" }, // 68108714
		{ &Z_Construct_UFunction_UBaseGroundDetectorComponent_InitSkinnedMeshComponent, "InitSkinnedMeshComponent" }, // 3207219558
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseGroundDetectorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BaseGroundDetectorComponent.h" },
		{ "ModuleRelativePath", "Public/BaseGroundDetectorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseGroundDetectorComponent_Statics::NewProp__startSlopeTransformName_MetaData[] = {
		{ "Category", "BaseGroundDetectorComponent" },
		{ "ModuleRelativePath", "Public/BaseGroundDetectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBaseGroundDetectorComponent_Statics::NewProp__startSlopeTransformName = { "_startSlopeTransformName", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseGroundDetectorComponent, _startSlopeTransformName), METADATA_PARAMS(Z_Construct_UClass_UBaseGroundDetectorComponent_Statics::NewProp__startSlopeTransformName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseGroundDetectorComponent_Statics::NewProp__startSlopeTransformName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseGroundDetectorComponent_Statics::NewProp__skinnedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGroundDetectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseGroundDetectorComponent_Statics::NewProp__skinnedMeshComponent = { "_skinnedMeshComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseGroundDetectorComponent, _skinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseGroundDetectorComponent_Statics::NewProp__skinnedMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseGroundDetectorComponent_Statics::NewProp__skinnedMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseGroundDetectorComponent_Statics::NewProp__extraTraceDistance_MetaData[] = {
		{ "Category", "BaseGroundDetectorComponent" },
		{ "ModuleRelativePath", "Public/BaseGroundDetectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseGroundDetectorComponent_Statics::NewProp__extraTraceDistance = { "_extraTraceDistance", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseGroundDetectorComponent, _extraTraceDistance), METADATA_PARAMS(Z_Construct_UClass_UBaseGroundDetectorComponent_Statics::NewProp__extraTraceDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseGroundDetectorComponent_Statics::NewProp__extraTraceDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseGroundDetectorComponent_Statics::NewProp__traceComplex_MetaData[] = {
		{ "Category", "BaseGroundDetectorComponent" },
		{ "ModuleRelativePath", "Public/BaseGroundDetectorComponent.h" },
	};
#endif
	void Z_Construct_UClass_UBaseGroundDetectorComponent_Statics::NewProp__traceComplex_SetBit(void* Obj)
	{
		((UBaseGroundDetectorComponent*)Obj)->_traceComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseGroundDetectorComponent_Statics::NewProp__traceComplex = { "_traceComplex", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBaseGroundDetectorComponent), &Z_Construct_UClass_UBaseGroundDetectorComponent_Statics::NewProp__traceComplex_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBaseGroundDetectorComponent_Statics::NewProp__traceComplex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseGroundDetectorComponent_Statics::NewProp__traceComplex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseGroundDetectorComponent_Statics::NewProp__walkableCollisionChannel_MetaData[] = {
		{ "Category", "BaseGroundDetectorComponent" },
		{ "ModuleRelativePath", "Public/BaseGroundDetectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBaseGroundDetectorComponent_Statics::NewProp__walkableCollisionChannel = { "_walkableCollisionChannel", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseGroundDetectorComponent, _walkableCollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_UBaseGroundDetectorComponent_Statics::NewProp__walkableCollisionChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseGroundDetectorComponent_Statics::NewProp__walkableCollisionChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseGroundDetectorComponent_Statics::NewProp__startTransformName_MetaData[] = {
		{ "Category", "BaseGroundDetectorComponent" },
		{ "ModuleRelativePath", "Public/BaseGroundDetectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBaseGroundDetectorComponent_Statics::NewProp__startTransformName = { "_startTransformName", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseGroundDetectorComponent, _startTransformName), METADATA_PARAMS(Z_Construct_UClass_UBaseGroundDetectorComponent_Statics::NewProp__startTransformName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseGroundDetectorComponent_Statics::NewProp__startTransformName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseGroundDetectorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseGroundDetectorComponent_Statics::NewProp__startSlopeTransformName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseGroundDetectorComponent_Statics::NewProp__skinnedMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseGroundDetectorComponent_Statics::NewProp__extraTraceDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseGroundDetectorComponent_Statics::NewProp__traceComplex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseGroundDetectorComponent_Statics::NewProp__walkableCollisionChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseGroundDetectorComponent_Statics::NewProp__startTransformName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseGroundDetectorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseGroundDetectorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseGroundDetectorComponent_Statics::ClassParams = {
		&UBaseGroundDetectorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBaseGroundDetectorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseGroundDetectorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseGroundDetectorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseGroundDetectorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseGroundDetectorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseGroundDetectorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseGroundDetectorComponent, 2565814460);
	template<> ANIMATIONUTILITIES_API UClass* StaticClass<UBaseGroundDetectorComponent>()
	{
		return UBaseGroundDetectorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseGroundDetectorComponent(Z_Construct_UClass_UBaseGroundDetectorComponent, &UBaseGroundDetectorComponent::StaticClass, TEXT("/Script/AnimationUtilities"), TEXT("UBaseGroundDetectorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseGroundDetectorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
