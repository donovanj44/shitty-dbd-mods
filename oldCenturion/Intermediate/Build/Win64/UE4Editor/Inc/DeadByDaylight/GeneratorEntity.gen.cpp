// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/GeneratorEntity.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeneratorEntity() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AGeneratorEntity_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AGeneratorEntity();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UMontagePlayer_NoRegister();
	ANIMATIONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationMontageDescriptor();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AGenerator_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AGeneratorEntity::execGetMontagePlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMontagePlayer**)Z_Param__Result=P_THIS->GetMontagePlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeneratorEntity::execPlayMontage)
	{
		P_GET_STRUCT(FAnimationMontageDescriptor,Z_Param_animMontageID);
		P_GET_PROPERTY(FFloatProperty,Z_Param_playRate);
		P_GET_UBOOL(Z_Param_isFollower);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayMontage(Z_Param_animMontageID,Z_Param_playRate,Z_Param_isFollower);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeneratorEntity::execSetAssociatedGenerator)
	{
		P_GET_OBJECT(AGenerator,Z_Param_generator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAssociatedGenerator(Z_Param_generator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeneratorEntity::execSetSkeletalMeshActive)
	{
		P_GET_UBOOL(Z_Param_active);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSkeletalMeshActive(Z_Param_active);
		P_NATIVE_END;
	}
	void AGeneratorEntity::StaticRegisterNativesAGeneratorEntity()
	{
		UClass* Class = AGeneratorEntity::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMontagePlayer", &AGeneratorEntity::execGetMontagePlayer },
			{ "PlayMontage", &AGeneratorEntity::execPlayMontage },
			{ "SetAssociatedGenerator", &AGeneratorEntity::execSetAssociatedGenerator },
			{ "SetSkeletalMeshActive", &AGeneratorEntity::execSetSkeletalMeshActive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGeneratorEntity_GetMontagePlayer_Statics
	{
		struct GeneratorEntity_eventGetMontagePlayer_Parms
		{
			UMontagePlayer* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeneratorEntity_GetMontagePlayer_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGeneratorEntity_GetMontagePlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeneratorEntity_eventGetMontagePlayer_Parms, ReturnValue), Z_Construct_UClass_UMontagePlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGeneratorEntity_GetMontagePlayer_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorEntity_GetMontagePlayer_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeneratorEntity_GetMontagePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeneratorEntity_GetMontagePlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeneratorEntity_GetMontagePlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorEntity.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeneratorEntity_GetMontagePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeneratorEntity, nullptr, "GetMontagePlayer", nullptr, nullptr, sizeof(GeneratorEntity_eventGetMontagePlayer_Parms), Z_Construct_UFunction_AGeneratorEntity_GetMontagePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorEntity_GetMontagePlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGeneratorEntity_GetMontagePlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorEntity_GetMontagePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGeneratorEntity_GetMontagePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGeneratorEntity_GetMontagePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeneratorEntity_PlayMontage_Statics
	{
		struct GeneratorEntity_eventPlayMontage_Parms
		{
			FAnimationMontageDescriptor animMontageID;
			float playRate;
			bool isFollower;
		};
		static void NewProp_isFollower_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isFollower;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_playRate;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_animMontageID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGeneratorEntity_PlayMontage_Statics::NewProp_isFollower_SetBit(void* Obj)
	{
		((GeneratorEntity_eventPlayMontage_Parms*)Obj)->isFollower = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGeneratorEntity_PlayMontage_Statics::NewProp_isFollower = { "isFollower", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GeneratorEntity_eventPlayMontage_Parms), &Z_Construct_UFunction_AGeneratorEntity_PlayMontage_Statics::NewProp_isFollower_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGeneratorEntity_PlayMontage_Statics::NewProp_playRate = { "playRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeneratorEntity_eventPlayMontage_Parms, playRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeneratorEntity_PlayMontage_Statics::NewProp_animMontageID = { "animMontageID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeneratorEntity_eventPlayMontage_Parms, animMontageID), Z_Construct_UScriptStruct_FAnimationMontageDescriptor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeneratorEntity_PlayMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeneratorEntity_PlayMontage_Statics::NewProp_isFollower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeneratorEntity_PlayMontage_Statics::NewProp_playRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeneratorEntity_PlayMontage_Statics::NewProp_animMontageID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeneratorEntity_PlayMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorEntity.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeneratorEntity_PlayMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeneratorEntity, nullptr, "PlayMontage", nullptr, nullptr, sizeof(GeneratorEntity_eventPlayMontage_Parms), Z_Construct_UFunction_AGeneratorEntity_PlayMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorEntity_PlayMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGeneratorEntity_PlayMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorEntity_PlayMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGeneratorEntity_PlayMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGeneratorEntity_PlayMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeneratorEntity_SetAssociatedGenerator_Statics
	{
		struct GeneratorEntity_eventSetAssociatedGenerator_Parms
		{
			AGenerator* generator;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_generator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGeneratorEntity_SetAssociatedGenerator_Statics::NewProp_generator = { "generator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeneratorEntity_eventSetAssociatedGenerator_Parms, generator), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeneratorEntity_SetAssociatedGenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeneratorEntity_SetAssociatedGenerator_Statics::NewProp_generator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeneratorEntity_SetAssociatedGenerator_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorEntity.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeneratorEntity_SetAssociatedGenerator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeneratorEntity, nullptr, "SetAssociatedGenerator", nullptr, nullptr, sizeof(GeneratorEntity_eventSetAssociatedGenerator_Parms), Z_Construct_UFunction_AGeneratorEntity_SetAssociatedGenerator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorEntity_SetAssociatedGenerator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGeneratorEntity_SetAssociatedGenerator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorEntity_SetAssociatedGenerator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGeneratorEntity_SetAssociatedGenerator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGeneratorEntity_SetAssociatedGenerator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeneratorEntity_SetSkeletalMeshActive_Statics
	{
		struct GeneratorEntity_eventSetSkeletalMeshActive_Parms
		{
			bool active;
		};
		static void NewProp_active_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_active;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGeneratorEntity_SetSkeletalMeshActive_Statics::NewProp_active_SetBit(void* Obj)
	{
		((GeneratorEntity_eventSetSkeletalMeshActive_Parms*)Obj)->active = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGeneratorEntity_SetSkeletalMeshActive_Statics::NewProp_active = { "active", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GeneratorEntity_eventSetSkeletalMeshActive_Parms), &Z_Construct_UFunction_AGeneratorEntity_SetSkeletalMeshActive_Statics::NewProp_active_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeneratorEntity_SetSkeletalMeshActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeneratorEntity_SetSkeletalMeshActive_Statics::NewProp_active,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeneratorEntity_SetSkeletalMeshActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorEntity.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeneratorEntity_SetSkeletalMeshActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeneratorEntity, nullptr, "SetSkeletalMeshActive", nullptr, nullptr, sizeof(GeneratorEntity_eventSetSkeletalMeshActive_Parms), Z_Construct_UFunction_AGeneratorEntity_SetSkeletalMeshActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorEntity_SetSkeletalMeshActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGeneratorEntity_SetSkeletalMeshActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratorEntity_SetSkeletalMeshActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGeneratorEntity_SetSkeletalMeshActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGeneratorEntity_SetSkeletalMeshActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGeneratorEntity_NoRegister()
	{
		return AGeneratorEntity::StaticClass();
	}
	struct Z_Construct_UClass_AGeneratorEntity_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__montagePlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__montagePlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__associatedGenerator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__associatedGenerator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeneratorEntity_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGeneratorEntity_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGeneratorEntity_GetMontagePlayer, "GetMontagePlayer" }, // 3221073651
		{ &Z_Construct_UFunction_AGeneratorEntity_PlayMontage, "PlayMontage" }, // 4116346356
		{ &Z_Construct_UFunction_AGeneratorEntity_SetAssociatedGenerator, "SetAssociatedGenerator" }, // 1538170953
		{ &Z_Construct_UFunction_AGeneratorEntity_SetSkeletalMeshActive, "SetSkeletalMeshActive" }, // 3871107688
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeneratorEntity_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeneratorEntity.h" },
		{ "ModuleRelativePath", "Public/GeneratorEntity.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeneratorEntity_Statics::NewProp__montagePlayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GeneratorEntity" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GeneratorEntity.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGeneratorEntity_Statics::NewProp__montagePlayer = { "_montagePlayer", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeneratorEntity, _montagePlayer), Z_Construct_UClass_UMontagePlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGeneratorEntity_Statics::NewProp__montagePlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeneratorEntity_Statics::NewProp__montagePlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeneratorEntity_Statics::NewProp__associatedGenerator_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeneratorEntity.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGeneratorEntity_Statics::NewProp__associatedGenerator = { "_associatedGenerator", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeneratorEntity, _associatedGenerator), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGeneratorEntity_Statics::NewProp__associatedGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeneratorEntity_Statics::NewProp__associatedGenerator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGeneratorEntity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeneratorEntity_Statics::NewProp__montagePlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeneratorEntity_Statics::NewProp__associatedGenerator,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeneratorEntity_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeneratorEntity>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGeneratorEntity_Statics::ClassParams = {
		&AGeneratorEntity::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGeneratorEntity_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGeneratorEntity_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGeneratorEntity_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGeneratorEntity_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGeneratorEntity()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGeneratorEntity_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGeneratorEntity, 1198045463);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<AGeneratorEntity>()
	{
		return AGeneratorEntity::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGeneratorEntity(Z_Construct_UClass_AGeneratorEntity, &AGeneratorEntity::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("AGeneratorEntity"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeneratorEntity);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
