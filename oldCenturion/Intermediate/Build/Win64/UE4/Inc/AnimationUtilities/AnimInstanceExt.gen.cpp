// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationUtilities/Public/AnimInstanceExt.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimInstanceExt() {}
// Cross Module References
	ANIMATIONUTILITIES_API UClass* Z_Construct_UClass_UAnimInstanceExt_NoRegister();
	ANIMATIONUTILITIES_API UClass* Z_Construct_UClass_UAnimInstanceExt();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AnimationUtilities();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAnimInstanceExt::execGetOwningActor)
	{
		P_GET_OBJECT(UAnimInstance,Z_Param_animInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=UAnimInstanceExt::GetOwningActor(Z_Param_animInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstanceExt::execGetOwningCharacter)
	{
		P_GET_OBJECT(UAnimInstance,Z_Param_animInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACharacter**)Z_Param__Result=UAnimInstanceExt::GetOwningCharacter(Z_Param_animInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstanceExt::execGetOwningCharacterSkeletalMeshComponent)
	{
		P_GET_OBJECT(UAnimInstance,Z_Param_animInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=UAnimInstanceExt::GetOwningCharacterSkeletalMeshComponent(Z_Param_animInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstanceExt::execGetRootSkeletalMeshComponent)
	{
		P_GET_OBJECT(UAnimInstance,Z_Param_animInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=UAnimInstanceExt::GetRootSkeletalMeshComponent(Z_Param_animInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimInstanceExt::execGetSubAnimInstance)
	{
		P_GET_OBJECT(UAnimInstance,Z_Param_root);
		P_GET_OBJECT(UClass,Z_Param_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimInstance**)Z_Param__Result=UAnimInstanceExt::GetSubAnimInstance(Z_Param_root,Z_Param_type);
		P_NATIVE_END;
	}
	void UAnimInstanceExt::StaticRegisterNativesUAnimInstanceExt()
	{
		UClass* Class = UAnimInstanceExt::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOwningActor", &UAnimInstanceExt::execGetOwningActor },
			{ "GetOwningCharacter", &UAnimInstanceExt::execGetOwningCharacter },
			{ "GetOwningCharacterSkeletalMeshComponent", &UAnimInstanceExt::execGetOwningCharacterSkeletalMeshComponent },
			{ "GetRootSkeletalMeshComponent", &UAnimInstanceExt::execGetRootSkeletalMeshComponent },
			{ "GetSubAnimInstance", &UAnimInstanceExt::execGetSubAnimInstance },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimInstanceExt_GetOwningActor_Statics
	{
		struct AnimInstanceExt_eventGetOwningActor_Parms
		{
			const UAnimInstance* animInstance;
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_animInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_animInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstanceExt_GetOwningActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstanceExt_eventGetOwningActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstanceExt_GetOwningActor_Statics::NewProp_animInstance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstanceExt_GetOwningActor_Statics::NewProp_animInstance = { "animInstance", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstanceExt_eventGetOwningActor_Parms, animInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstanceExt_GetOwningActor_Statics::NewProp_animInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstanceExt_GetOwningActor_Statics::NewProp_animInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstanceExt_GetOwningActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstanceExt_GetOwningActor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstanceExt_GetOwningActor_Statics::NewProp_animInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstanceExt_GetOwningActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimInstanceExt.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstanceExt_GetOwningActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstanceExt, nullptr, "GetOwningActor", nullptr, nullptr, sizeof(AnimInstanceExt_eventGetOwningActor_Parms), Z_Construct_UFunction_UAnimInstanceExt_GetOwningActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstanceExt_GetOwningActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstanceExt_GetOwningActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstanceExt_GetOwningActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstanceExt_GetOwningActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstanceExt_GetOwningActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstanceExt_GetOwningCharacter_Statics
	{
		struct AnimInstanceExt_eventGetOwningCharacter_Parms
		{
			const UAnimInstance* animInstance;
			ACharacter* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_animInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_animInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstanceExt_GetOwningCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstanceExt_eventGetOwningCharacter_Parms, ReturnValue), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstanceExt_GetOwningCharacter_Statics::NewProp_animInstance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstanceExt_GetOwningCharacter_Statics::NewProp_animInstance = { "animInstance", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstanceExt_eventGetOwningCharacter_Parms, animInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstanceExt_GetOwningCharacter_Statics::NewProp_animInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstanceExt_GetOwningCharacter_Statics::NewProp_animInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstanceExt_GetOwningCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstanceExt_GetOwningCharacter_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstanceExt_GetOwningCharacter_Statics::NewProp_animInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstanceExt_GetOwningCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimInstanceExt.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstanceExt_GetOwningCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstanceExt, nullptr, "GetOwningCharacter", nullptr, nullptr, sizeof(AnimInstanceExt_eventGetOwningCharacter_Parms), Z_Construct_UFunction_UAnimInstanceExt_GetOwningCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstanceExt_GetOwningCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstanceExt_GetOwningCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstanceExt_GetOwningCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstanceExt_GetOwningCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstanceExt_GetOwningCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstanceExt_GetOwningCharacterSkeletalMeshComponent_Statics
	{
		struct AnimInstanceExt_eventGetOwningCharacterSkeletalMeshComponent_Parms
		{
			const UAnimInstance* animInstance;
			USkeletalMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_animInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_animInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstanceExt_GetOwningCharacterSkeletalMeshComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstanceExt_GetOwningCharacterSkeletalMeshComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstanceExt_eventGetOwningCharacterSkeletalMeshComponent_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstanceExt_GetOwningCharacterSkeletalMeshComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstanceExt_GetOwningCharacterSkeletalMeshComponent_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstanceExt_GetOwningCharacterSkeletalMeshComponent_Statics::NewProp_animInstance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstanceExt_GetOwningCharacterSkeletalMeshComponent_Statics::NewProp_animInstance = { "animInstance", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstanceExt_eventGetOwningCharacterSkeletalMeshComponent_Parms, animInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstanceExt_GetOwningCharacterSkeletalMeshComponent_Statics::NewProp_animInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstanceExt_GetOwningCharacterSkeletalMeshComponent_Statics::NewProp_animInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstanceExt_GetOwningCharacterSkeletalMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstanceExt_GetOwningCharacterSkeletalMeshComponent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstanceExt_GetOwningCharacterSkeletalMeshComponent_Statics::NewProp_animInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstanceExt_GetOwningCharacterSkeletalMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimInstanceExt.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstanceExt_GetOwningCharacterSkeletalMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstanceExt, nullptr, "GetOwningCharacterSkeletalMeshComponent", nullptr, nullptr, sizeof(AnimInstanceExt_eventGetOwningCharacterSkeletalMeshComponent_Parms), Z_Construct_UFunction_UAnimInstanceExt_GetOwningCharacterSkeletalMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstanceExt_GetOwningCharacterSkeletalMeshComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstanceExt_GetOwningCharacterSkeletalMeshComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstanceExt_GetOwningCharacterSkeletalMeshComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstanceExt_GetOwningCharacterSkeletalMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstanceExt_GetOwningCharacterSkeletalMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstanceExt_GetRootSkeletalMeshComponent_Statics
	{
		struct AnimInstanceExt_eventGetRootSkeletalMeshComponent_Parms
		{
			const UAnimInstance* animInstance;
			USkeletalMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_animInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_animInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstanceExt_GetRootSkeletalMeshComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstanceExt_GetRootSkeletalMeshComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstanceExt_eventGetRootSkeletalMeshComponent_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstanceExt_GetRootSkeletalMeshComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstanceExt_GetRootSkeletalMeshComponent_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstanceExt_GetRootSkeletalMeshComponent_Statics::NewProp_animInstance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstanceExt_GetRootSkeletalMeshComponent_Statics::NewProp_animInstance = { "animInstance", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstanceExt_eventGetRootSkeletalMeshComponent_Parms, animInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstanceExt_GetRootSkeletalMeshComponent_Statics::NewProp_animInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstanceExt_GetRootSkeletalMeshComponent_Statics::NewProp_animInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstanceExt_GetRootSkeletalMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstanceExt_GetRootSkeletalMeshComponent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstanceExt_GetRootSkeletalMeshComponent_Statics::NewProp_animInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstanceExt_GetRootSkeletalMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimInstanceExt.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstanceExt_GetRootSkeletalMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstanceExt, nullptr, "GetRootSkeletalMeshComponent", nullptr, nullptr, sizeof(AnimInstanceExt_eventGetRootSkeletalMeshComponent_Parms), Z_Construct_UFunction_UAnimInstanceExt_GetRootSkeletalMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstanceExt_GetRootSkeletalMeshComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstanceExt_GetRootSkeletalMeshComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstanceExt_GetRootSkeletalMeshComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstanceExt_GetRootSkeletalMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstanceExt_GetRootSkeletalMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstanceExt_GetSubAnimInstance_Statics
	{
		struct AnimInstanceExt_eventGetSubAnimInstance_Parms
		{
			const UAnimInstance* root;
			UClass* type;
			UAnimInstance* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_root;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstanceExt_GetSubAnimInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstanceExt_eventGetSubAnimInstance_Parms, ReturnValue), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAnimInstanceExt_GetSubAnimInstance_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstanceExt_eventGetSubAnimInstance_Parms, type), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstanceExt_GetSubAnimInstance_Statics::NewProp_root_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimInstanceExt_GetSubAnimInstance_Statics::NewProp_root = { "root", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstanceExt_eventGetSubAnimInstance_Parms, root), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstanceExt_GetSubAnimInstance_Statics::NewProp_root_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstanceExt_GetSubAnimInstance_Statics::NewProp_root_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstanceExt_GetSubAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstanceExt_GetSubAnimInstance_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstanceExt_GetSubAnimInstance_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstanceExt_GetSubAnimInstance_Statics::NewProp_root,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstanceExt_GetSubAnimInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimInstanceExt.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstanceExt_GetSubAnimInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstanceExt, nullptr, "GetSubAnimInstance", nullptr, nullptr, sizeof(AnimInstanceExt_eventGetSubAnimInstance_Parms), Z_Construct_UFunction_UAnimInstanceExt_GetSubAnimInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstanceExt_GetSubAnimInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstanceExt_GetSubAnimInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstanceExt_GetSubAnimInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstanceExt_GetSubAnimInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimInstanceExt_GetSubAnimInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAnimInstanceExt_NoRegister()
	{
		return UAnimInstanceExt::StaticClass();
	}
	struct Z_Construct_UClass_UAnimInstanceExt_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimInstanceExt_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimInstanceExt_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimInstanceExt_GetOwningActor, "GetOwningActor" }, // 2079136117
		{ &Z_Construct_UFunction_UAnimInstanceExt_GetOwningCharacter, "GetOwningCharacter" }, // 615709378
		{ &Z_Construct_UFunction_UAnimInstanceExt_GetOwningCharacterSkeletalMeshComponent, "GetOwningCharacterSkeletalMeshComponent" }, // 1050218077
		{ &Z_Construct_UFunction_UAnimInstanceExt_GetRootSkeletalMeshComponent, "GetRootSkeletalMeshComponent" }, // 1330507418
		{ &Z_Construct_UFunction_UAnimInstanceExt_GetSubAnimInstance, "GetSubAnimInstance" }, // 2239300579
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstanceExt_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AnimInstanceExt.h" },
		{ "ModuleRelativePath", "Public/AnimInstanceExt.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimInstanceExt_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimInstanceExt>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimInstanceExt_Statics::ClassParams = {
		&UAnimInstanceExt::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAnimInstanceExt_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstanceExt_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimInstanceExt()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimInstanceExt_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimInstanceExt, 2160201197);
	template<> ANIMATIONUTILITIES_API UClass* StaticClass<UAnimInstanceExt>()
	{
		return UAnimInstanceExt::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimInstanceExt(Z_Construct_UClass_UAnimInstanceExt, &UAnimInstanceExt::StaticClass, TEXT("/Script/AnimationUtilities"), TEXT("UAnimInstanceExt"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimInstanceExt);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
