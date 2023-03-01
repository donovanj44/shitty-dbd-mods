// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/NavLinkProxy_Base.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavLinkProxy_Base() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_ANavLinkProxy_Base_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_ANavLinkProxy_Base();
	AIMODULE_API UClass* Z_Construct_UClass_ANavLinkProxy();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DBDBOTS_API UScriptStruct* Z_Construct_UScriptStruct_FMoveLinkPlayerInfo();
// End Cross Module References
	DEFINE_FUNCTION(ANavLinkProxy_Base::execAutoAdjustSmartLinkPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AutoAdjustSmartLinkPoints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANavLinkProxy_Base::execOnSmartLinkReachedCallback)
	{
		P_GET_OBJECT(AActor,Z_Param_MovingActor);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_DestinationPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSmartLinkReachedCallback(Z_Param_MovingActor,Z_Param_Out_DestinationPoint);
		P_NATIVE_END;
	}
	void ANavLinkProxy_Base::StaticRegisterNativesANavLinkProxy_Base()
	{
		UClass* Class = ANavLinkProxy_Base::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AutoAdjustSmartLinkPoints", &ANavLinkProxy_Base::execAutoAdjustSmartLinkPoints },
			{ "OnSmartLinkReachedCallback", &ANavLinkProxy_Base::execOnSmartLinkReachedCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANavLinkProxy_Base_AutoAdjustSmartLinkPoints_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANavLinkProxy_Base_AutoAdjustSmartLinkPoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NavLinkProxy_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANavLinkProxy_Base_AutoAdjustSmartLinkPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANavLinkProxy_Base, nullptr, "AutoAdjustSmartLinkPoints", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANavLinkProxy_Base_AutoAdjustSmartLinkPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavLinkProxy_Base_AutoAdjustSmartLinkPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANavLinkProxy_Base_AutoAdjustSmartLinkPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANavLinkProxy_Base_AutoAdjustSmartLinkPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANavLinkProxy_Base_OnSmartLinkReachedCallback_Statics
	{
		struct NavLinkProxy_Base_eventOnSmartLinkReachedCallback_Parms
		{
			AActor* MovingActor;
			FVector DestinationPoint;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestinationPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DestinationPoint;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovingActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANavLinkProxy_Base_OnSmartLinkReachedCallback_Statics::NewProp_DestinationPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANavLinkProxy_Base_OnSmartLinkReachedCallback_Statics::NewProp_DestinationPoint = { "DestinationPoint", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NavLinkProxy_Base_eventOnSmartLinkReachedCallback_Parms, DestinationPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ANavLinkProxy_Base_OnSmartLinkReachedCallback_Statics::NewProp_DestinationPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavLinkProxy_Base_OnSmartLinkReachedCallback_Statics::NewProp_DestinationPoint_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANavLinkProxy_Base_OnSmartLinkReachedCallback_Statics::NewProp_MovingActor = { "MovingActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NavLinkProxy_Base_eventOnSmartLinkReachedCallback_Parms, MovingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANavLinkProxy_Base_OnSmartLinkReachedCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavLinkProxy_Base_OnSmartLinkReachedCallback_Statics::NewProp_DestinationPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavLinkProxy_Base_OnSmartLinkReachedCallback_Statics::NewProp_MovingActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANavLinkProxy_Base_OnSmartLinkReachedCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NavLinkProxy_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANavLinkProxy_Base_OnSmartLinkReachedCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANavLinkProxy_Base, nullptr, "OnSmartLinkReachedCallback", nullptr, nullptr, sizeof(NavLinkProxy_Base_eventOnSmartLinkReachedCallback_Parms), Z_Construct_UFunction_ANavLinkProxy_Base_OnSmartLinkReachedCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavLinkProxy_Base_OnSmartLinkReachedCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANavLinkProxy_Base_OnSmartLinkReachedCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavLinkProxy_Base_OnSmartLinkReachedCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANavLinkProxy_Base_OnSmartLinkReachedCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANavLinkProxy_Base_OnSmartLinkReachedCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ANavLinkProxy_Base_NoRegister()
	{
		return ANavLinkProxy_Base::StaticClass();
	}
	struct Z_Construct_UClass_ANavLinkProxy_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__linkUsedByPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__linkUsedByPlayers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__linkUsedByPlayers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__players_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__players;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__players_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__players_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NbMaxLinkUsers_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NbMaxLinkUsers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveOnEndPointTimeLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveOnEndPointTimeLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaitLinkOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WaitLinkOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANavLinkProxy_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANavLinkProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANavLinkProxy_Base_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANavLinkProxy_Base_AutoAdjustSmartLinkPoints, "AutoAdjustSmartLinkPoints" }, // 3873307659
		{ &Z_Construct_UFunction_ANavLinkProxy_Base_OnSmartLinkReachedCallback, "OnSmartLinkReachedCallback" }, // 3296999671
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavLinkProxy_Base_Statics::Class_MetaDataParams[] = {
		{ "AutoCollapseCategories", "SmartLink Actor" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "NavLinkProxy_Base.h" },
		{ "ModuleRelativePath", "Public/NavLinkProxy_Base.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavLinkProxy_Base_Statics::NewProp__linkUsedByPlayers_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavLinkProxy_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANavLinkProxy_Base_Statics::NewProp__linkUsedByPlayers = { "_linkUsedByPlayers", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavLinkProxy_Base, _linkUsedByPlayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ANavLinkProxy_Base_Statics::NewProp__linkUsedByPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavLinkProxy_Base_Statics::NewProp__linkUsedByPlayers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANavLinkProxy_Base_Statics::NewProp__linkUsedByPlayers_Inner = { "_linkUsedByPlayers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavLinkProxy_Base_Statics::NewProp__players_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavLinkProxy_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ANavLinkProxy_Base_Statics::NewProp__players = { "_players", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavLinkProxy_Base, _players), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ANavLinkProxy_Base_Statics::NewProp__players_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavLinkProxy_Base_Statics::NewProp__players_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANavLinkProxy_Base_Statics::NewProp__players_Key_KeyProp = { "_players_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANavLinkProxy_Base_Statics::NewProp__players_ValueProp = { "_players", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FMoveLinkPlayerInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavLinkProxy_Base_Statics::NewProp_NbMaxLinkUsers_MetaData[] = {
		{ "Category", "NavLinkProxy_Base" },
		{ "ModuleRelativePath", "Public/NavLinkProxy_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANavLinkProxy_Base_Statics::NewProp_NbMaxLinkUsers = { "NbMaxLinkUsers", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavLinkProxy_Base, NbMaxLinkUsers), METADATA_PARAMS(Z_Construct_UClass_ANavLinkProxy_Base_Statics::NewProp_NbMaxLinkUsers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavLinkProxy_Base_Statics::NewProp_NbMaxLinkUsers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavLinkProxy_Base_Statics::NewProp_MoveOnEndPointTimeLimit_MetaData[] = {
		{ "Category", "NavLinkProxy_Base" },
		{ "ModuleRelativePath", "Public/NavLinkProxy_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANavLinkProxy_Base_Statics::NewProp_MoveOnEndPointTimeLimit = { "MoveOnEndPointTimeLimit", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavLinkProxy_Base, MoveOnEndPointTimeLimit), METADATA_PARAMS(Z_Construct_UClass_ANavLinkProxy_Base_Statics::NewProp_MoveOnEndPointTimeLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavLinkProxy_Base_Statics::NewProp_MoveOnEndPointTimeLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavLinkProxy_Base_Statics::NewProp_WaitLinkOffset_MetaData[] = {
		{ "Category", "NavLinkProxy_Base" },
		{ "ModuleRelativePath", "Public/NavLinkProxy_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANavLinkProxy_Base_Statics::NewProp_WaitLinkOffset = { "WaitLinkOffset", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavLinkProxy_Base, WaitLinkOffset), METADATA_PARAMS(Z_Construct_UClass_ANavLinkProxy_Base_Statics::NewProp_WaitLinkOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavLinkProxy_Base_Statics::NewProp_WaitLinkOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANavLinkProxy_Base_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinkProxy_Base_Statics::NewProp__linkUsedByPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinkProxy_Base_Statics::NewProp__linkUsedByPlayers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinkProxy_Base_Statics::NewProp__players,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinkProxy_Base_Statics::NewProp__players_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinkProxy_Base_Statics::NewProp__players_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinkProxy_Base_Statics::NewProp_NbMaxLinkUsers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinkProxy_Base_Statics::NewProp_MoveOnEndPointTimeLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinkProxy_Base_Statics::NewProp_WaitLinkOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANavLinkProxy_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavLinkProxy_Base>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANavLinkProxy_Base_Statics::ClassParams = {
		&ANavLinkProxy_Base::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANavLinkProxy_Base_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANavLinkProxy_Base_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ANavLinkProxy_Base_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANavLinkProxy_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANavLinkProxy_Base()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANavLinkProxy_Base_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANavLinkProxy_Base, 3381285220);
	template<> DBDBOTS_API UClass* StaticClass<ANavLinkProxy_Base>()
	{
		return ANavLinkProxy_Base::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANavLinkProxy_Base(Z_Construct_UClass_ANavLinkProxy_Base, &ANavLinkProxy_Base::StaticClass, TEXT("/Script/DBDBots"), TEXT("ANavLinkProxy_Base"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANavLinkProxy_Base);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
