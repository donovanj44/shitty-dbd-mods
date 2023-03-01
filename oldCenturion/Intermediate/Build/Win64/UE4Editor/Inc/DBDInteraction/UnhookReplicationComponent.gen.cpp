// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDInteraction/Public/UnhookReplicationComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnhookReplicationComponent() {}
// Cross Module References
	DBDINTERACTION_API UClass* Z_Construct_UClass_UUnhookReplicationComponent_NoRegister();
	DBDINTERACTION_API UClass* Z_Construct_UClass_UUnhookReplicationComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DBDInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	DBDINTERACTION_API UClass* Z_Construct_UClass_UUnhook_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUnhookReplicationComponent::execMulticast_SetPlayerBeingUnhooked)
	{
		P_GET_OBJECT(UUnhook,Z_Param_unhookInteraction);
		P_GET_OBJECT(ACamperPlayer,Z_Param_playerBeingUnhooked);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetPlayerBeingUnhooked_Implementation(Z_Param_unhookInteraction,Z_Param_playerBeingUnhooked);
		P_NATIVE_END;
	}
	static FName NAME_UUnhookReplicationComponent_Multicast_SetPlayerBeingUnhooked = FName(TEXT("Multicast_SetPlayerBeingUnhooked"));
	void UUnhookReplicationComponent::Multicast_SetPlayerBeingUnhooked(UUnhook* unhookInteraction, ACamperPlayer* playerBeingUnhooked)
	{
		UnhookReplicationComponent_eventMulticast_SetPlayerBeingUnhooked_Parms Parms;
		Parms.unhookInteraction=unhookInteraction;
		Parms.playerBeingUnhooked=playerBeingUnhooked;
		ProcessEvent(FindFunctionChecked(NAME_UUnhookReplicationComponent_Multicast_SetPlayerBeingUnhooked),&Parms);
	}
	void UUnhookReplicationComponent::StaticRegisterNativesUUnhookReplicationComponent()
	{
		UClass* Class = UUnhookReplicationComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_SetPlayerBeingUnhooked", &UUnhookReplicationComponent::execMulticast_SetPlayerBeingUnhooked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUnhookReplicationComponent_Multicast_SetPlayerBeingUnhooked_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerBeingUnhooked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_unhookInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_unhookInteraction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnhookReplicationComponent_Multicast_SetPlayerBeingUnhooked_Statics::NewProp_playerBeingUnhooked = { "playerBeingUnhooked", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnhookReplicationComponent_eventMulticast_SetPlayerBeingUnhooked_Parms, playerBeingUnhooked), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnhookReplicationComponent_Multicast_SetPlayerBeingUnhooked_Statics::NewProp_unhookInteraction_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnhookReplicationComponent_Multicast_SetPlayerBeingUnhooked_Statics::NewProp_unhookInteraction = { "unhookInteraction", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnhookReplicationComponent_eventMulticast_SetPlayerBeingUnhooked_Parms, unhookInteraction), Z_Construct_UClass_UUnhook_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUnhookReplicationComponent_Multicast_SetPlayerBeingUnhooked_Statics::NewProp_unhookInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnhookReplicationComponent_Multicast_SetPlayerBeingUnhooked_Statics::NewProp_unhookInteraction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnhookReplicationComponent_Multicast_SetPlayerBeingUnhooked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnhookReplicationComponent_Multicast_SetPlayerBeingUnhooked_Statics::NewProp_playerBeingUnhooked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnhookReplicationComponent_Multicast_SetPlayerBeingUnhooked_Statics::NewProp_unhookInteraction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnhookReplicationComponent_Multicast_SetPlayerBeingUnhooked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnhookReplicationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnhookReplicationComponent_Multicast_SetPlayerBeingUnhooked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnhookReplicationComponent, nullptr, "Multicast_SetPlayerBeingUnhooked", nullptr, nullptr, sizeof(UnhookReplicationComponent_eventMulticast_SetPlayerBeingUnhooked_Parms), Z_Construct_UFunction_UUnhookReplicationComponent_Multicast_SetPlayerBeingUnhooked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnhookReplicationComponent_Multicast_SetPlayerBeingUnhooked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnhookReplicationComponent_Multicast_SetPlayerBeingUnhooked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnhookReplicationComponent_Multicast_SetPlayerBeingUnhooked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnhookReplicationComponent_Multicast_SetPlayerBeingUnhooked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnhookReplicationComponent_Multicast_SetPlayerBeingUnhooked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUnhookReplicationComponent_NoRegister()
	{
		return UUnhookReplicationComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUnhookReplicationComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUnhookReplicationComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDInteraction,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUnhookReplicationComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUnhookReplicationComponent_Multicast_SetPlayerBeingUnhooked, "Multicast_SetPlayerBeingUnhooked" }, // 3450284401
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnhookReplicationComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UnhookReplicationComponent.h" },
		{ "ModuleRelativePath", "Public/UnhookReplicationComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUnhookReplicationComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnhookReplicationComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUnhookReplicationComponent_Statics::ClassParams = {
		&UUnhookReplicationComponent::StaticClass,
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
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUnhookReplicationComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUnhookReplicationComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUnhookReplicationComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUnhookReplicationComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUnhookReplicationComponent, 3733152118);
	template<> DBDINTERACTION_API UClass* StaticClass<UUnhookReplicationComponent>()
	{
		return UUnhookReplicationComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUnhookReplicationComponent(Z_Construct_UClass_UUnhookReplicationComponent, &UUnhookReplicationComponent::StaticClass, TEXT("/Script/DBDInteraction"), TEXT("UUnhookReplicationComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUnhookReplicationComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
